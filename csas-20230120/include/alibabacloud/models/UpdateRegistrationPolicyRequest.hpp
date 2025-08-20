// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREGISTRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRegistrationPolicyRequestCompanyLimitCount.hpp>
#include <alibabacloud/models/UpdateRegistrationPolicyRequestPersonalLimitCount.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateRegistrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRegistrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyLimitCount, companyLimitCount_);
      DARABONBA_PTR_TO_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PersonalLimitCount, personalLimitCount_);
      DARABONBA_PTR_TO_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRegistrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyLimitCount, companyLimitCount_);
      DARABONBA_PTR_FROM_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitCount, personalLimitCount_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    UpdateRegistrationPolicyRequest() = default ;
    UpdateRegistrationPolicyRequest(const UpdateRegistrationPolicyRequest &) = default ;
    UpdateRegistrationPolicyRequest(UpdateRegistrationPolicyRequest &&) = default ;
    UpdateRegistrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRegistrationPolicyRequest() = default ;
    UpdateRegistrationPolicyRequest& operator=(const UpdateRegistrationPolicyRequest &) = default ;
    UpdateRegistrationPolicyRequest& operator=(UpdateRegistrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->companyLimitCount_ != nullptr
        && this->companyLimitType_ != nullptr && this->description_ != nullptr && this->matchMode_ != nullptr && this->name_ != nullptr && this->personalLimitCount_ != nullptr
        && this->personalLimitType_ != nullptr && this->policyId_ != nullptr && this->priority_ != nullptr && this->status_ != nullptr && this->userGroupIds_ != nullptr
        && this->whitelist_ != nullptr; };
    // companyLimitCount Field Functions 
    bool hasCompanyLimitCount() const { return this->companyLimitCount_ != nullptr;};
    void deleteCompanyLimitCount() { this->companyLimitCount_ = nullptr;};
    inline const UpdateRegistrationPolicyRequestCompanyLimitCount & companyLimitCount() const { DARABONBA_PTR_GET_CONST(companyLimitCount_, UpdateRegistrationPolicyRequestCompanyLimitCount) };
    inline UpdateRegistrationPolicyRequestCompanyLimitCount companyLimitCount() { DARABONBA_PTR_GET(companyLimitCount_, UpdateRegistrationPolicyRequestCompanyLimitCount) };
    inline UpdateRegistrationPolicyRequest& setCompanyLimitCount(const UpdateRegistrationPolicyRequestCompanyLimitCount & companyLimitCount) { DARABONBA_PTR_SET_VALUE(companyLimitCount_, companyLimitCount) };
    inline UpdateRegistrationPolicyRequest& setCompanyLimitCount(UpdateRegistrationPolicyRequestCompanyLimitCount && companyLimitCount) { DARABONBA_PTR_SET_RVALUE(companyLimitCount_, companyLimitCount) };


    // companyLimitType Field Functions 
    bool hasCompanyLimitType() const { return this->companyLimitType_ != nullptr;};
    void deleteCompanyLimitType() { this->companyLimitType_ = nullptr;};
    inline string companyLimitType() const { DARABONBA_PTR_GET_DEFAULT(companyLimitType_, "") };
    inline UpdateRegistrationPolicyRequest& setCompanyLimitType(string companyLimitType) { DARABONBA_PTR_SET_VALUE(companyLimitType_, companyLimitType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateRegistrationPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline UpdateRegistrationPolicyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateRegistrationPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalLimitCount Field Functions 
    bool hasPersonalLimitCount() const { return this->personalLimitCount_ != nullptr;};
    void deletePersonalLimitCount() { this->personalLimitCount_ = nullptr;};
    inline const UpdateRegistrationPolicyRequestPersonalLimitCount & personalLimitCount() const { DARABONBA_PTR_GET_CONST(personalLimitCount_, UpdateRegistrationPolicyRequestPersonalLimitCount) };
    inline UpdateRegistrationPolicyRequestPersonalLimitCount personalLimitCount() { DARABONBA_PTR_GET(personalLimitCount_, UpdateRegistrationPolicyRequestPersonalLimitCount) };
    inline UpdateRegistrationPolicyRequest& setPersonalLimitCount(const UpdateRegistrationPolicyRequestPersonalLimitCount & personalLimitCount) { DARABONBA_PTR_SET_VALUE(personalLimitCount_, personalLimitCount) };
    inline UpdateRegistrationPolicyRequest& setPersonalLimitCount(UpdateRegistrationPolicyRequestPersonalLimitCount && personalLimitCount) { DARABONBA_PTR_SET_RVALUE(personalLimitCount_, personalLimitCount) };


    // personalLimitType Field Functions 
    bool hasPersonalLimitType() const { return this->personalLimitType_ != nullptr;};
    void deletePersonalLimitType() { this->personalLimitType_ = nullptr;};
    inline string personalLimitType() const { DARABONBA_PTR_GET_DEFAULT(personalLimitType_, "") };
    inline UpdateRegistrationPolicyRequest& setPersonalLimitType(string personalLimitType) { DARABONBA_PTR_SET_VALUE(personalLimitType_, personalLimitType) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateRegistrationPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline UpdateRegistrationPolicyRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateRegistrationPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline UpdateRegistrationPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline UpdateRegistrationPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline UpdateRegistrationPolicyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline UpdateRegistrationPolicyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    std::shared_ptr<UpdateRegistrationPolicyRequestCompanyLimitCount> companyLimitCount_ = nullptr;
    std::shared_ptr<string> companyLimitType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> matchMode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<UpdateRegistrationPolicyRequestPersonalLimitCount> personalLimitCount_ = nullptr;
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
