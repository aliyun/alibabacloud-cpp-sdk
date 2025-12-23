// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMRESOURCEDISCOVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMRESOURCEDISCOVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamResourceDiscoveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamResourceDiscoveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamResourceDiscoveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIpamResourceDiscoveryResponseBody() = default ;
    CreateIpamResourceDiscoveryResponseBody(const CreateIpamResourceDiscoveryResponseBody &) = default ;
    CreateIpamResourceDiscoveryResponseBody(CreateIpamResourceDiscoveryResponseBody &&) = default ;
    CreateIpamResourceDiscoveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamResourceDiscoveryResponseBody() = default ;
    CreateIpamResourceDiscoveryResponseBody& operator=(const CreateIpamResourceDiscoveryResponseBody &) = default ;
    CreateIpamResourceDiscoveryResponseBody& operator=(CreateIpamResourceDiscoveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamResourceDiscoveryId_ == nullptr
        && return this->requestId_ == nullptr; };
    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string ipamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline CreateIpamResourceDiscoveryResponseBody& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpamResourceDiscoveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance for resource discovery.
    std::shared_ptr<string> ipamResourceDiscoveryId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
