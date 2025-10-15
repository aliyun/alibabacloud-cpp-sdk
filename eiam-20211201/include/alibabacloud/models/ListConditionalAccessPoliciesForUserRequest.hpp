// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListConditionalAccessPoliciesForUserRequest() = default ;
    ListConditionalAccessPoliciesForUserRequest(const ListConditionalAccessPoliciesForUserRequest &) = default ;
    ListConditionalAccessPoliciesForUserRequest(ListConditionalAccessPoliciesForUserRequest &&) = default ;
    ListConditionalAccessPoliciesForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForUserRequest() = default ;
    ListConditionalAccessPoliciesForUserRequest& operator=(const ListConditionalAccessPoliciesForUserRequest &) = default ;
    ListConditionalAccessPoliciesForUserRequest& operator=(ListConditionalAccessPoliciesForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->userId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListConditionalAccessPoliciesForUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListConditionalAccessPoliciesForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 条件访问策略关联的用户ID
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
