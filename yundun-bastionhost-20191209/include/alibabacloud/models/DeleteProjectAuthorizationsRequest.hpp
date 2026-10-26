// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROJECTAUTHORIZATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROJECTAUTHORIZATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteProjectAuthorizationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProjectAuthorizationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationIds, authorizationIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProjectAuthorizationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationIds, authorizationIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteProjectAuthorizationsRequest() = default ;
    DeleteProjectAuthorizationsRequest(const DeleteProjectAuthorizationsRequest &) = default ;
    DeleteProjectAuthorizationsRequest(DeleteProjectAuthorizationsRequest &&) = default ;
    DeleteProjectAuthorizationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProjectAuthorizationsRequest() = default ;
    DeleteProjectAuthorizationsRequest& operator=(const DeleteProjectAuthorizationsRequest &) = default ;
    DeleteProjectAuthorizationsRequest& operator=(DeleteProjectAuthorizationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationIds_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // authorizationIds Field Functions 
    bool hasAuthorizationIds() const { return this->authorizationIds_ != nullptr;};
    void deleteAuthorizationIds() { this->authorizationIds_ = nullptr;};
    inline string getAuthorizationIds() const { DARABONBA_PTR_GET_DEFAULT(authorizationIds_, "") };
    inline DeleteProjectAuthorizationsRequest& setAuthorizationIds(string authorizationIds) { DARABONBA_PTR_SET_VALUE(authorizationIds_, authorizationIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteProjectAuthorizationsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteProjectAuthorizationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the project authorizations to delete.
    // > You can call the ListProjectAuthorizations operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationIds_ {};
    // The instance ID of the bastion host.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
