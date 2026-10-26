// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPROJECTMANAGERSFROMPROJECTAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPROJECTMANAGERSFROMPROJECTAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachProjectManagersFromProjectAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachProjectManagersFromProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrincipalIds, principalIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachProjectManagersFromProjectAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationId, authorizationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrincipalIds, principalIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachProjectManagersFromProjectAuthorizationRequest() = default ;
    DetachProjectManagersFromProjectAuthorizationRequest(const DetachProjectManagersFromProjectAuthorizationRequest &) = default ;
    DetachProjectManagersFromProjectAuthorizationRequest(DetachProjectManagersFromProjectAuthorizationRequest &&) = default ;
    DetachProjectManagersFromProjectAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachProjectManagersFromProjectAuthorizationRequest() = default ;
    DetachProjectManagersFromProjectAuthorizationRequest& operator=(const DetachProjectManagersFromProjectAuthorizationRequest &) = default ;
    DetachProjectManagersFromProjectAuthorizationRequest& operator=(DetachProjectManagersFromProjectAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationId_ == nullptr
        && this->instanceId_ == nullptr && this->principalIds_ == nullptr && this->regionId_ == nullptr; };
    // authorizationId Field Functions 
    bool hasAuthorizationId() const { return this->authorizationId_ != nullptr;};
    void deleteAuthorizationId() { this->authorizationId_ = nullptr;};
    inline int64_t getAuthorizationId() const { DARABONBA_PTR_GET_DEFAULT(authorizationId_, 0L) };
    inline DetachProjectManagersFromProjectAuthorizationRequest& setAuthorizationId(int64_t authorizationId) { DARABONBA_PTR_SET_VALUE(authorizationId_, authorizationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachProjectManagersFromProjectAuthorizationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // principalIds Field Functions 
    bool hasPrincipalIds() const { return this->principalIds_ != nullptr;};
    void deletePrincipalIds() { this->principalIds_ = nullptr;};
    inline string getPrincipalIds() const { DARABONBA_PTR_GET_DEFAULT(principalIds_, "") };
    inline DetachProjectManagersFromProjectAuthorizationRequest& setPrincipalIds(string principalIds) { DARABONBA_PTR_SET_VALUE(principalIds_, principalIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachProjectManagersFromProjectAuthorizationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The project authorization ID.
    // > You can call the ListProjectAuthorizations operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authorizationId_ {};
    // The instance ID of the bastion host.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The array of project administrator IDs to remove.
    // > You can call the GetProjectAuthorization operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> principalIds_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
