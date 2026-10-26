// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPROJECTSFROMPROJECTAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPROJECTSFROMPROJECTAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachProjectsFromProjectAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachProjectsFromProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachProjectsFromProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachProjectsFromProjectAuthorizationRequest() = default ;
    DetachProjectsFromProjectAuthorizationRequest(const DetachProjectsFromProjectAuthorizationRequest &) = default ;
    DetachProjectsFromProjectAuthorizationRequest(DetachProjectsFromProjectAuthorizationRequest &&) = default ;
    DetachProjectsFromProjectAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachProjectsFromProjectAuthorizationRequest() = default ;
    DetachProjectsFromProjectAuthorizationRequest& operator=(const DetachProjectsFromProjectAuthorizationRequest &) = default ;
    DetachProjectsFromProjectAuthorizationRequest& operator=(DetachProjectsFromProjectAuthorizationRequest &&) = default ;
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
    inline DetachProjectsFromProjectAuthorizationRequest& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachProjectsFromProjectAuthorizationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectIds Field Functions 
    bool hasProjectIds() const { return this->projectIds_ != nullptr;};
    void deleteProjectIds() { this->projectIds_ = nullptr;};
    inline string getProjectIds() const { DARABONBA_PTR_GET_DEFAULT(projectIds_, "") };
    inline DetachProjectsFromProjectAuthorizationRequest& setProjectIds(string projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachProjectsFromProjectAuthorizationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The project authorization ID.
    // > You can call the ListProjectAuthorizations operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authorizationId_ {};
    // The ID of the bastion host instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The array of project IDs to remove from the project authorization.
    // > You can call the GetProjectAuthorization operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> projectIds_ {};
    // The region ID of the bastion host. 
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
