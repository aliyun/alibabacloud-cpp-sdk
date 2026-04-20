// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultResourceDiscoveryAssociationId, defaultResourceDiscoveryAssociationId_);
      DARABONBA_PTR_TO_JSON(DefaultResourceDiscoveryId, defaultResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(PrivateDefaultScopeId, privateDefaultScopeId_);
      DARABONBA_PTR_TO_JSON(PublicDefaultScopeId, publicDefaultScopeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDiscoveryAssociationCount, resourceDiscoveryAssociationCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultResourceDiscoveryAssociationId, defaultResourceDiscoveryAssociationId_);
      DARABONBA_PTR_FROM_JSON(DefaultResourceDiscoveryId, defaultResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(PrivateDefaultScopeId, privateDefaultScopeId_);
      DARABONBA_PTR_FROM_JSON(PublicDefaultScopeId, publicDefaultScopeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDiscoveryAssociationCount, resourceDiscoveryAssociationCount_);
    };
    CreateIpamResponseBody() = default ;
    CreateIpamResponseBody(const CreateIpamResponseBody &) = default ;
    CreateIpamResponseBody(CreateIpamResponseBody &&) = default ;
    CreateIpamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamResponseBody() = default ;
    CreateIpamResponseBody& operator=(const CreateIpamResponseBody &) = default ;
    CreateIpamResponseBody& operator=(CreateIpamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultResourceDiscoveryAssociationId_ == nullptr
        && this->defaultResourceDiscoveryId_ == nullptr && this->ipamId_ == nullptr && this->privateDefaultScopeId_ == nullptr && this->publicDefaultScopeId_ == nullptr && this->requestId_ == nullptr
        && this->resourceDiscoveryAssociationCount_ == nullptr; };
    // defaultResourceDiscoveryAssociationId Field Functions 
    bool hasDefaultResourceDiscoveryAssociationId() const { return this->defaultResourceDiscoveryAssociationId_ != nullptr;};
    void deleteDefaultResourceDiscoveryAssociationId() { this->defaultResourceDiscoveryAssociationId_ = nullptr;};
    inline string getDefaultResourceDiscoveryAssociationId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceDiscoveryAssociationId_, "") };
    inline CreateIpamResponseBody& setDefaultResourceDiscoveryAssociationId(string defaultResourceDiscoveryAssociationId) { DARABONBA_PTR_SET_VALUE(defaultResourceDiscoveryAssociationId_, defaultResourceDiscoveryAssociationId) };


    // defaultResourceDiscoveryId Field Functions 
    bool hasDefaultResourceDiscoveryId() const { return this->defaultResourceDiscoveryId_ != nullptr;};
    void deleteDefaultResourceDiscoveryId() { this->defaultResourceDiscoveryId_ = nullptr;};
    inline string getDefaultResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(defaultResourceDiscoveryId_, "") };
    inline CreateIpamResponseBody& setDefaultResourceDiscoveryId(string defaultResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(defaultResourceDiscoveryId_, defaultResourceDiscoveryId) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline CreateIpamResponseBody& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // privateDefaultScopeId Field Functions 
    bool hasPrivateDefaultScopeId() const { return this->privateDefaultScopeId_ != nullptr;};
    void deletePrivateDefaultScopeId() { this->privateDefaultScopeId_ = nullptr;};
    inline string getPrivateDefaultScopeId() const { DARABONBA_PTR_GET_DEFAULT(privateDefaultScopeId_, "") };
    inline CreateIpamResponseBody& setPrivateDefaultScopeId(string privateDefaultScopeId) { DARABONBA_PTR_SET_VALUE(privateDefaultScopeId_, privateDefaultScopeId) };


    // publicDefaultScopeId Field Functions 
    bool hasPublicDefaultScopeId() const { return this->publicDefaultScopeId_ != nullptr;};
    void deletePublicDefaultScopeId() { this->publicDefaultScopeId_ = nullptr;};
    inline string getPublicDefaultScopeId() const { DARABONBA_PTR_GET_DEFAULT(publicDefaultScopeId_, "") };
    inline CreateIpamResponseBody& setPublicDefaultScopeId(string publicDefaultScopeId) { DARABONBA_PTR_SET_VALUE(publicDefaultScopeId_, publicDefaultScopeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDiscoveryAssociationCount Field Functions 
    bool hasResourceDiscoveryAssociationCount() const { return this->resourceDiscoveryAssociationCount_ != nullptr;};
    void deleteResourceDiscoveryAssociationCount() { this->resourceDiscoveryAssociationCount_ = nullptr;};
    inline int32_t getResourceDiscoveryAssociationCount() const { DARABONBA_PTR_GET_DEFAULT(resourceDiscoveryAssociationCount_, 0) };
    inline CreateIpamResponseBody& setResourceDiscoveryAssociationCount(int32_t resourceDiscoveryAssociationCount) { DARABONBA_PTR_SET_VALUE(resourceDiscoveryAssociationCount_, resourceDiscoveryAssociationCount) };


  protected:
    // The ID of the default resource discovery association.
    shared_ptr<string> defaultResourceDiscoveryAssociationId_ {};
    // The ID of the default resource discovery instance.
    shared_ptr<string> defaultResourceDiscoveryId_ {};
    // The ID of the IPAM.
    shared_ptr<string> ipamId_ {};
    // The default private scope created by the system after the IPAM is created.
    shared_ptr<string> privateDefaultScopeId_ {};
    // The default public scope created by the system after the IPAM is created.
    shared_ptr<string> publicDefaultScopeId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of discovered resources.
    shared_ptr<int32_t> resourceDiscoveryAssociationCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
