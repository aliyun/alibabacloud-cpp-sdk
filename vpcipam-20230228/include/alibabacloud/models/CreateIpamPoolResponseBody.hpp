// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamPoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamPoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamPoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamPoolId, ipamPoolId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIpamPoolResponseBody() = default ;
    CreateIpamPoolResponseBody(const CreateIpamPoolResponseBody &) = default ;
    CreateIpamPoolResponseBody(CreateIpamPoolResponseBody &&) = default ;
    CreateIpamPoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamPoolResponseBody() = default ;
    CreateIpamPoolResponseBody& operator=(const CreateIpamPoolResponseBody &) = default ;
    CreateIpamPoolResponseBody& operator=(CreateIpamPoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamPoolId_ == nullptr
        && return this->requestId_ == nullptr; };
    // ipamPoolId Field Functions 
    bool hasIpamPoolId() const { return this->ipamPoolId_ != nullptr;};
    void deleteIpamPoolId() { this->ipamPoolId_ = nullptr;};
    inline string ipamPoolId() const { DARABONBA_PTR_GET_DEFAULT(ipamPoolId_, "") };
    inline CreateIpamPoolResponseBody& setIpamPoolId(string ipamPoolId) { DARABONBA_PTR_SET_VALUE(ipamPoolId_, ipamPoolId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpamPoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the IPAM pool.
    std::shared_ptr<string> ipamPoolId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
