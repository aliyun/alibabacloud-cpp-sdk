// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPAMPOOLCIDRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIPAMPOOLCIDRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class AddIpamPoolCidrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIpamPoolCidrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIpamPoolCidrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddIpamPoolCidrResponseBody() = default ;
    AddIpamPoolCidrResponseBody(const AddIpamPoolCidrResponseBody &) = default ;
    AddIpamPoolCidrResponseBody(AddIpamPoolCidrResponseBody &&) = default ;
    AddIpamPoolCidrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIpamPoolCidrResponseBody() = default ;
    AddIpamPoolCidrResponseBody& operator=(const AddIpamPoolCidrResponseBody &) = default ;
    AddIpamPoolCidrResponseBody& operator=(AddIpamPoolCidrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidr_ == nullptr
        && return this->requestId_ == nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline AddIpamPoolCidrResponseBody& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddIpamPoolCidrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The successfully provisioned CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
