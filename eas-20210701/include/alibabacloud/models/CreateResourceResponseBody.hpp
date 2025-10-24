// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    CreateResourceResponseBody() = default ;
    CreateResourceResponseBody(const CreateResourceResponseBody &) = default ;
    CreateResourceResponseBody(CreateResourceResponseBody &&) = default ;
    CreateResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceResponseBody() = default ;
    CreateResourceResponseBody& operator=(const CreateResourceResponseBody &) = default ;
    CreateResourceResponseBody& operator=(CreateResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->instanceIds_ == nullptr && return this->ownerUid_ == nullptr && return this->requestId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateResourceResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline CreateResourceResponseBody& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline CreateResourceResponseBody& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline CreateResourceResponseBody& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateResourceResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline CreateResourceResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    // The ID of the cluster to which the resource group belongs.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The instance IDs.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The user ID (UID) of the resource group owner.
    std::shared_ptr<string> ownerUid_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The name of the resource group.
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
