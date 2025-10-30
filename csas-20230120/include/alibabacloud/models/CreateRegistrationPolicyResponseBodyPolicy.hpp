// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRegistrationPolicyResponseBodyPolicyLimitDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateRegistrationPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistrationPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LimitDetail, limitDetail_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistrationPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LimitDetail, limitDetail_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    CreateRegistrationPolicyResponseBodyPolicy() = default ;
    CreateRegistrationPolicyResponseBodyPolicy(const CreateRegistrationPolicyResponseBodyPolicy &) = default ;
    CreateRegistrationPolicyResponseBodyPolicy(CreateRegistrationPolicyResponseBodyPolicy &&) = default ;
    CreateRegistrationPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistrationPolicyResponseBodyPolicy() = default ;
    CreateRegistrationPolicyResponseBodyPolicy& operator=(const CreateRegistrationPolicyResponseBodyPolicy &) = default ;
    CreateRegistrationPolicyResponseBodyPolicy& operator=(CreateRegistrationPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->limitDetail_ == nullptr && return this->matchMode_ == nullptr && return this->name_ == nullptr && return this->policyId_ == nullptr
        && return this->priority_ == nullptr && return this->status_ == nullptr && return this->userGroupIds_ == nullptr && return this->whitelist_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // limitDetail Field Functions 
    bool hasLimitDetail() const { return this->limitDetail_ != nullptr;};
    void deleteLimitDetail() { this->limitDetail_ = nullptr;};
    inline const vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail> & limitDetail() const { DARABONBA_PTR_GET_CONST(limitDetail_, vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail>) };
    inline vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail> limitDetail() { DARABONBA_PTR_GET(limitDetail_, vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail>) };
    inline CreateRegistrationPolicyResponseBodyPolicy& setLimitDetail(const vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail> & limitDetail) { DARABONBA_PTR_SET_VALUE(limitDetail_, limitDetail) };
    inline CreateRegistrationPolicyResponseBodyPolicy& setLimitDetail(vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail> && limitDetail) { DARABONBA_PTR_SET_RVALUE(limitDetail_, limitDetail) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRegistrationPolicyResponseBodyPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateRegistrationPolicyResponseBodyPolicy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateRegistrationPolicyResponseBodyPolicy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline CreateRegistrationPolicyResponseBodyPolicy& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline CreateRegistrationPolicyResponseBodyPolicy& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<Models::CreateRegistrationPolicyResponseBodyPolicyLimitDetail>> limitDetail_ = nullptr;
    std::shared_ptr<string> matchMode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
