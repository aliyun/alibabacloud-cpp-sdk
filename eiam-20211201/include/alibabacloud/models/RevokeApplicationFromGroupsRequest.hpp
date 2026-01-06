// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEAPPLICATIONFROMGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEAPPLICATIONFROMGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RevokeApplicationFromGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeApplicationFromGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationRoleId, applicationRoleId_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeApplicationFromGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationRoleId, applicationRoleId_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RevokeApplicationFromGroupsRequest() = default ;
    RevokeApplicationFromGroupsRequest(const RevokeApplicationFromGroupsRequest &) = default ;
    RevokeApplicationFromGroupsRequest(RevokeApplicationFromGroupsRequest &&) = default ;
    RevokeApplicationFromGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeApplicationFromGroupsRequest() = default ;
    RevokeApplicationFromGroupsRequest& operator=(const RevokeApplicationFromGroupsRequest &) = default ;
    RevokeApplicationFromGroupsRequest& operator=(RevokeApplicationFromGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationRoleId_ == nullptr && this->groupIds_ == nullptr && this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RevokeApplicationFromGroupsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationRoleId Field Functions 
    bool hasApplicationRoleId() const { return this->applicationRoleId_ != nullptr;};
    void deleteApplicationRoleId() { this->applicationRoleId_ = nullptr;};
    inline string getApplicationRoleId() const { DARABONBA_PTR_GET_DEFAULT(applicationRoleId_, "") };
    inline RevokeApplicationFromGroupsRequest& setApplicationRoleId(string applicationRoleId) { DARABONBA_PTR_SET_VALUE(applicationRoleId_, applicationRoleId) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & getGroupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> getGroupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline RevokeApplicationFromGroupsRequest& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline RevokeApplicationFromGroupsRequest& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RevokeApplicationFromGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 应用角色ID。
    shared_ptr<string> applicationRoleId_ {};
    // The group IDs. You can specify up to 100 group IDs at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> groupIds_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
