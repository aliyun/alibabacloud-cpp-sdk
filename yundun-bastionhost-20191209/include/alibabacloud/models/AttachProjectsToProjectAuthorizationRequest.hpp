// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHPROJECTSTOPROJECTAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHPROJECTSTOPROJECTAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachProjectsToProjectAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachProjectsToProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachProjectsToProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachProjectsToProjectAuthorizationRequest() = default ;
    AttachProjectsToProjectAuthorizationRequest(const AttachProjectsToProjectAuthorizationRequest &) = default ;
    AttachProjectsToProjectAuthorizationRequest(AttachProjectsToProjectAuthorizationRequest &&) = default ;
    AttachProjectsToProjectAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachProjectsToProjectAuthorizationRequest() = default ;
    AttachProjectsToProjectAuthorizationRequest& operator=(const AttachProjectsToProjectAuthorizationRequest &) = default ;
    AttachProjectsToProjectAuthorizationRequest& operator=(AttachProjectsToProjectAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationId_ == nullptr
        && this->instanceId_ == nullptr && this->projectIds_ == nullptr && this->regionId_ == nullptr; };
    // authorizationId Field Functions 
    bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
    void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
    inline int64_t getAuthorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
    inline AttachProjectsToProjectAuthorizationRequest& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachProjectsToProjectAuthorizationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string getProjectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline AttachProjectsToProjectAuthorizationRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachProjectsToProjectAuthorizationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the project authorization.
    // > You can call the ListProjectAuthorizations operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authorizationId_ {};
    // The instance ID of Bastionhost.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IDs of the projects that can be managed.
    // > You can call the ListProjects operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> projectIds_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
