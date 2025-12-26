// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICE_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYSERVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyServiceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceResponseBodyService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyService& obj) { 
      DARABONBA_PTR_TO_JSON(attributes, attributes_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(pid, pid_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
      DARABONBA_PTR_TO_JSON(serviceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyService& obj) { 
      DARABONBA_PTR_FROM_JSON(attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(pid, pid_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(serviceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetServiceResponseBodyService() = default ;
    GetServiceResponseBodyService(const GetServiceResponseBodyService &) = default ;
    GetServiceResponseBodyService(GetServiceResponseBodyService &&) = default ;
    GetServiceResponseBodyService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyService() = default ;
    GetServiceResponseBodyService& operator=(const GetServiceResponseBodyService &) = default ;
    GetServiceResponseBodyService& operator=(GetServiceResponseBodyService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->pid_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serviceId_ == nullptr && return this->serviceName_ == nullptr && return this->serviceStatus_ == nullptr && return this->serviceType_ == nullptr
        && return this->tags_ == nullptr && return this->workspace_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline GetServiceResponseBodyService& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetServiceResponseBodyService& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetServiceResponseBodyService& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetServiceResponseBodyService& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetServiceResponseBodyService& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceResponseBodyService& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetServiceResponseBodyService& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceResponseBodyService& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceResponseBodyService& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline GetServiceResponseBodyService& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceResponseBodyService& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyServiceTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetServiceResponseBodyServiceTags>) };
    inline vector<Models::GetServiceResponseBodyServiceTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetServiceResponseBodyServiceTags>) };
    inline GetServiceResponseBodyService& setTags(const vector<Models::GetServiceResponseBodyServiceTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetServiceResponseBodyService& setTags(vector<Models::GetServiceResponseBodyServiceTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetServiceResponseBodyService& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // Extended information.
    std::shared_ptr<string> attributes_ = nullptr;
    // Creation time
    std::shared_ptr<string> createTime_ = nullptr;
    // Description, only valid when serviceType=RUM.
    std::shared_ptr<string> description_ = nullptr;
    // Display name, only valid when serviceType=RUM.
    std::shared_ptr<string> displayName_ = nullptr;
    // Legacy ARMS application ID
    std::shared_ptr<string> pid_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // Service name
    std::shared_ptr<string> serviceName_ = nullptr;
    // Service status, only valid when serviceType=RUM.
    std::shared_ptr<string> serviceStatus_ = nullptr;
    // Service type.
    std::shared_ptr<string> serviceType_ = nullptr;
    std::shared_ptr<vector<Models::GetServiceResponseBodyServiceTags>> tags_ = nullptr;
    // Workspace name
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
