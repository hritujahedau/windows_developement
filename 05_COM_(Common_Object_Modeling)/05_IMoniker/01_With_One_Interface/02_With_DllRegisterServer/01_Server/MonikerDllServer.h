class IOddNumber : public IUnknown
{
public:
	
	// IOddNumber specific method declarations (inherited)
	virtual HRESULT __stdcall GetNextOddNumber(int*) = 0;
};

class IOddNumberFactory :public IUnknown
{
public:
	virtual HRESULT __stdcall SetFirstOddNumber(int, IOddNumber**) = 0; 
};

// {3BA98BA8-4A91-41A5-8446-98995544103F}
const CLSID CLSID_OddNumber = { 0x3ba98ba8, 0x4a91, 0x41a5, 0x84, 0x46, 0x98, 0x99, 0x55, 0x44, 0x10, 0x3f };

// {09FE6DB5-88FD-414E-A616-5E1D4A8E5317}
//IMPLEMENT_OLECREATE(<< class >> , << external_name >> ,
//	0x9fe6db5, 0x88fd, 0x414e, 0xa6, 0x16, 0x5e, 0x1d, 0x4a, 0x8e, 0x53, 0x17);

const IID IID_IOddNumber = { 0x9fe6db5, 0x88fd, 0x414e, 0xa6, 0x16, 0x5e, 0x1d, 0x4a, 0x8e, 0x53, 0x17 };

// {F778E68A-6943-4B87-8525-2E480ADEAB5C}
//IMPLEMENT_OLECREATE(<< class >> , << external_name >> ,
//		0xf778e68a, 0x6943, 0x4b87, 0x85, 0x25, 0x2e, 0x48, 0xa, 0xde, 0xab, 0x5c);

const IID IID_IOddNumberFactory = { 0xf778e68a, 0x6943, 0x4b87, 0x85, 0x25, 0x2e, 0x48, 0xa, 0xde, 0xab, 0x5c };
