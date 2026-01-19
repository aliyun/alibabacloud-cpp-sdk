// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKERESOURCESERVERSCOPESFROMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKERESOURCESERVERSCOPESFROMGROUPREQUEST_HPP_
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
  class RevokeResourceServerScopesFromGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeResourceServerScopesFromGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeResourceServerScopesFromGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeIds, resourceServerScopeIds_);
    };
    RevokeResourceServerScopesFromGroupRequest() = default ;
    RevokeResourceServerScopesFromGroupRequest(const RevokeResourceServerScopesFromGroupRequest &) = default ;
    RevokeResourceServerScopesFromGroupRequest(RevokeResourceServerScopesFromGroupRequest &&) = default ;
    RevokeResourceServerScopesFromGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeResourceServerScopesFromGroupRequest() = default ;
    RevokeResourceServerScopesFromGroupRequest& operator=(const RevokeResourceServerScopesFromGroupRequest &) = default ;
    RevokeResourceServerScopesFromGroupRequest& operator=(RevokeResourceServerScopesFromGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->resourceServerScopeIds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RevokeResourceServerScopesFromGroupRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RevokeResourceServerScopesFromGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RevokeResourceServerScopesFromGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerScopeIds Field Functions 
    bool hasResourceServerScopeIds() const { return this->resourceServerScopeIds_ != nullptr;};
    void deleteResourceServerScopeIds() { this->resourceServerScopeIds_ = nullptr;};
    inline const vector<string> & getResourceServerScopeIds() const { DARABONBA_PTR_GET_CONST(resourceServerScopeIds_, vector<string>) };
    inline vector<string> getResourceServerScopeIds() { DARABONBA_PTR_GET(resourceServerScopeIds_, vector<string>) };
    inline RevokeResourceServerScopesFromGroupRequest& setResourceServerScopeIds(const vector<string> & resourceServerScopeIds) { DARABONBA_PTR_SET_VALUE(resourceServerScopeIds_, resourceServerScopeIds) };
    inline RevokeResourceServerScopesFromGroupRequest& setResourceServerScopeIds(vector<string> && resourceServerScopeIds) { DARABONBA_PTR_SET_RVALUE(resourceServerScopeIds_, resourceServerScopeIds) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // ResourceServer权限ID。
    // 
    // This parameter is required.
    shared_ptr<vector<string>> resourceServerScopeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
