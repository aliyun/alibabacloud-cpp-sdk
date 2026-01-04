// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPUBLICIPADDRESSPOOLCIDRBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDPUBLICIPADDRESSPOOLCIDRBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AddPublicIpAddressPoolCidrBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPublicIpAddressPoolCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddPublicIpAddressPoolCidrBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddPublicIpAddressPoolCidrBlockResponseBody() = default ;
    AddPublicIpAddressPoolCidrBlockResponseBody(const AddPublicIpAddressPoolCidrBlockResponseBody &) = default ;
    AddPublicIpAddressPoolCidrBlockResponseBody(AddPublicIpAddressPoolCidrBlockResponseBody &&) = default ;
    AddPublicIpAddressPoolCidrBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPublicIpAddressPoolCidrBlockResponseBody() = default ;
    AddPublicIpAddressPoolCidrBlockResponseBody& operator=(const AddPublicIpAddressPoolCidrBlockResponseBody &) = default ;
    AddPublicIpAddressPoolCidrBlockResponseBody& operator=(AddPublicIpAddressPoolCidrBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->requestId_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline AddPublicIpAddressPoolCidrBlockResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddPublicIpAddressPoolCidrBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The CIDR block.
    shared_ptr<string> cidrBlock_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
