// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class ChangeResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ChangeResourceGroupRequest() = default ;
    ChangeResourceGroupRequest(const ChangeResourceGroupRequest &) = default ;
    ChangeResourceGroupRequest(ChangeResourceGroupRequest &&) = default ;
    ChangeResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceGroupRequest() = default ;
    ChangeResourceGroupRequest& operator=(const ChangeResourceGroupRequest &) = default ;
    ChangeResourceGroupRequest& operator=(ChangeResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->newResourceGroupId_ == nullptr && this->regionCode_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ChangeResourceGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string getNewResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline ChangeResourceGroupRequest& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ChangeResourceGroupRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ChangeResourceGroupRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ChangeResourceGroupRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The ID of the resource group to which you want to move the resource.
    // 
    // This parameter is required.
    shared_ptr<string> newResourceGroupId_ {};
    // The region ID of the instance.
    shared_ptr<string> regionCode_ {};
    // The ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The type of the resource. Set the value to backupplan.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
