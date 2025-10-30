// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateRegistrationPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegistrationPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyLimitCount, companyLimitCountShrink_);
      DARABONBA_PTR_TO_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PersonalLimitCount, personalLimitCountShrink_);
      DARABONBA_PTR_TO_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegistrationPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyLimitCount, companyLimitCountShrink_);
      DARABONBA_PTR_FROM_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitCount, personalLimitCountShrink_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    UpdateRegistrationPolicyShrinkRequest() = default ;
    UpdateRegistrationPolicyShrinkRequest(const UpdateRegistrationPolicyShrinkRequest &) = default ;
    UpdateRegistrationPolicyShrinkRequest(UpdateRegistrationPolicyShrinkRequest &&) = default ;
    UpdateRegistrationPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegistrationPolicyShrinkRequest() = default ;
    UpdateRegistrationPolicyShrinkRequest& operator=(const UpdateRegistrationPolicyShrinkRequest &) = default ;
    UpdateRegistrationPolicyShrinkRequest& operator=(UpdateRegistrationPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyLimitCountShrink_ == nullptr
        && return this->companyLimitType_ == nullptr && return this->description_ == nullptr && return this->matchMode_ == nullptr && return this->name_ == nullptr && return this->personalLimitCountShrink_ == nullptr
        && return this->personalLimitType_ == nullptr && return this->policyId_ == nullptr && return this->priority_ == nullptr && return this->status_ == nullptr && return this->userGroupIds_ == nullptr
        && return this->whitelist_ == nullptr; };
    // companyLimitCountShrink Field Functions 
    bool hasCompanyLimitCountShrink() const { return this->companyLimitCountShrink_ != nullptr;};
    void deleteCompanyLimitCountShrink() { this->companyLimitCountShrink_ = nullptr;};
    inline string companyLimitCountShrink() const { DARABONBA_PTR_GET_DEFAULT(companyLimitCountShrink_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setCompanyLimitCountShrink(string companyLimitCountShrink) { DARABONBA_PTR_SET_VALUE(companyLimitCountShrink_, companyLimitCountShrink) };


    // companyLimitType Field Functions 
    bool hasCompanyLimitType() const { return this->companyLimitType_ != nullptr;};
    void deleteCompanyLimitType() { this->companyLimitType_ = nullptr;};
    inline string companyLimitType() const { DARABONBA_PTR_GET_DEFAULT(companyLimitType_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setCompanyLimitType(string companyLimitType) { DARABONBA_PTR_SET_VALUE(companyLimitType_, companyLimitType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalLimitCountShrink Field Functions 
    bool hasPersonalLimitCountShrink() const { return this->personalLimitCountShrink_ != nullptr;};
    void deletePersonalLimitCountShrink() { this->personalLimitCountShrink_ = nullptr;};
    inline string personalLimitCountShrink() const { DARABONBA_PTR_GET_DEFAULT(personalLimitCountShrink_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setPersonalLimitCountShrink(string personalLimitCountShrink) { DARABONBA_PTR_SET_VALUE(personalLimitCountShrink_, personalLimitCountShrink) };


    // personalLimitType Field Functions 
    bool hasPersonalLimitType() const { return this->personalLimitType_ != nullptr;};
    void deletePersonalLimitType() { this->personalLimitType_ = nullptr;};
    inline string personalLimitType() const { DARABONBA_PTR_GET_DEFAULT(personalLimitType_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setPersonalLimitType(string personalLimitType) { DARABONBA_PTR_SET_VALUE(personalLimitType_, personalLimitType) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline UpdateRegistrationPolicyShrinkRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateRegistrationPolicyShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateRegistrationPolicyShrinkRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateRegistrationPolicyShrinkRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline UpdateRegistrationPolicyShrinkRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline UpdateRegistrationPolicyShrinkRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    std::shared_ptr<string> companyLimitCountShrink_ = nullptr;
    std::shared_ptr<string> companyLimitType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> matchMode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> personalLimitCountShrink_ = nullptr;
    std::shared_ptr<string> personalLimitType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    std::shared_ptr<int64_t> priority_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
