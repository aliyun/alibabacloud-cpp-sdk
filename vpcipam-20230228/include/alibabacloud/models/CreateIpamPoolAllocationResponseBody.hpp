// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMPOOLALLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMPOOLALLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamPoolAllocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamPoolAllocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamPoolAllocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(IpamPoolAllocationId, ipamPoolAllocationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
    };
    CreateIpamPoolAllocationResponseBody() = default ;
    CreateIpamPoolAllocationResponseBody(const CreateIpamPoolAllocationResponseBody &) = default ;
    CreateIpamPoolAllocationResponseBody(CreateIpamPoolAllocationResponseBody &&) = default ;
    CreateIpamPoolAllocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamPoolAllocationResponseBody() = default ;
    CreateIpamPoolAllocationResponseBody& operator=(const CreateIpamPoolAllocationResponseBody &) = default ;
    CreateIpamPoolAllocationResponseBody& operator=(CreateIpamPoolAllocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->ipamPoolAllocationId_ != nullptr && this->requestId_ != nullptr && this->sourceCidr_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline CreateIpamPoolAllocationResponseBody& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // ipamPoolAllocationId Field Functions 
    bool hasIpamPoolAllocationId() const { return this->ipamPoolAllocationId_ != nullptr;};
    void deleteIpamPoolAllocationId() { this->ipamPoolAllocationId_ = nullptr;};
    inline string ipamPoolAllocationId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolAllocationId_, "") };
    inline CreateIpamPoolAllocationResponseBody& setIpamPoolAllocationId(string ipamPoolAllocationId) { DARABONBA_PTR_SET_VALUE(ipamPoolAllocationId_, ipamPoolAllocationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpamPoolAllocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string sourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline CreateIpamPoolAllocationResponseBody& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


  protected:
    // The custom reserved CIDR block.
    std::shared_ptr<string> cidr_ = nullptr;
    // The ID of the custom reserved CIDR block.
    std::shared_ptr<string> ipamPoolAllocationId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The source CIDR block.
    std::shared_ptr<string> sourceCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
