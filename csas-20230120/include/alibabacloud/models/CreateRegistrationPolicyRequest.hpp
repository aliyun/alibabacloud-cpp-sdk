// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRegistrationPolicyRequestCompanyLimitCount.hpp>
#include <alibabacloud/models/CreateRegistrationPolicyRequestPersonalLimitCount.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateRegistrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyLimitCount, companyLimitCount_);
      DARABONBA_PTR_TO_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PersonalLimitCount, personalLimitCount_);
      DARABONBA_PTR_TO_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyLimitCount, companyLimitCount_);
      DARABONBA_PTR_FROM_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitCount, personalLimitCount_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    CreateRegistrationPolicyRequest() = default ;
    CreateRegistrationPolicyRequest(const CreateRegistrationPolicyRequest &) = default ;
    CreateRegistrationPolicyRequest(CreateRegistrationPolicyRequest &&) = default ;
    CreateRegistrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistrationPolicyRequest() = default ;
    CreateRegistrationPolicyRequest& operator=(const CreateRegistrationPolicyRequest &) = default ;
    CreateRegistrationPolicyRequest& operator=(CreateRegistrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyLimitCount_ == nullptr
        && return this->companyLimitType_ == nullptr && return this->description_ == nullptr && return this->matchMode_ == nullptr && return this->name_ == nullptr && return this->personalLimitCount_ == nullptr
        && return this->personalLimitType_ == nullptr && return this->priority_ == nullptr && return this->status_ == nullptr && return this->userGroupIds_ == nullptr && return this->whitelist_ == nullptr; };
    // companyLimitCount Field Functions 
    bool hasCompanyLimitCount() const { return this->companyLimitCount_ != nullptr;};
    void deleteCompanyLimitCount() { this->companyLimitCount_ = nullptr;};
    inline const CreateRegistrationPolicyRequestCompanyLimitCount & companyLimitCount() const { DARABONBA_PTR_GET_CONST(companyLimitCount_, CreateRegistrationPolicyRequestCompanyLimitCount) };
    inline CreateRegistrationPolicyRequestCompanyLimitCount companyLimitCount() { DARABONBA_PTR_GET(companyLimitCount_, CreateRegistrationPolicyRequestCompanyLimitCount) };
    inline CreateRegistrationPolicyRequest& setCompanyLimitCount(const CreateRegistrationPolicyRequestCompanyLimitCount & companyLimitCount) { DARABONBA_PTR_SET_VALUE(companyLimitCount_, companyLimitCount) };
    inline CreateRegistrationPolicyRequest& setCompanyLimitCount(CreateRegistrationPolicyRequestCompanyLimitCount && companyLimitCount) { DARABONBA_PTR_SET_RVALUE(companyLimitCount_, companyLimitCount) };


    // companyLimitType Field Functions 
    bool hasCompanyLimitType() const { return this->companyLimitType_ != nullptr;};
    void deleteCompanyLimitType() { this->companyLimitType_ = nullptr;};
    inline string companyLimitType() const { DARABONBA_PTR_GET_DEFAULT(companyLimitType_, "") };
    inline CreateRegistrationPolicyRequest& setCompanyLimitType(string companyLimitType) { DARABONBA_PTR_SET_VALUE(companyLimitType_, companyLimitType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRegistrationPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateRegistrationPolicyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRegistrationPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalLimitCount Field Functions 
    bool hasPersonalLimitCount() const { return this->personalLimitCount_ != nullptr;};
    void deletePersonalLimitCount() { this->personalLimitCount_ = nullptr;};
    inline const CreateRegistrationPolicyRequestPersonalLimitCount & personalLimitCount() const { DARABONBA_PTR_GET_CONST(personalLimitCount_, CreateRegistrationPolicyRequestPersonalLimitCount) };
    inline CreateRegistrationPolicyRequestPersonalLimitCount personalLimitCount() { DARABONBA_PTR_GET(personalLimitCount_, CreateRegistrationPolicyRequestPersonalLimitCount) };
    inline CreateRegistrationPolicyRequest& setPersonalLimitCount(const CreateRegistrationPolicyRequestPersonalLimitCount & personalLimitCount) { DARABONBA_PTR_SET_VALUE(personalLimitCount_, personalLimitCount) };
    inline CreateRegistrationPolicyRequest& setPersonalLimitCount(CreateRegistrationPolicyRequestPersonalLimitCount && personalLimitCount) { DARABONBA_PTR_SET_RVALUE(personalLimitCount_, personalLimitCount) };


    // personalLimitType Field Functions 
    bool hasPersonalLimitType() const { return this->personalLimitType_ != nullptr;};
    void deletePersonalLimitType() { this->personalLimitType_ = nullptr;};
    inline string personalLimitType() const { DARABONBA_PTR_GET_DEFAULT(personalLimitType_, "") };
    inline CreateRegistrationPolicyRequest& setPersonalLimitType(string personalLimitType) { DARABONBA_PTR_SET_VALUE(personalLimitType_, personalLimitType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CreateRegistrationPolicyRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRegistrationPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateRegistrationPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateRegistrationPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & whitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> whitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline CreateRegistrationPolicyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline CreateRegistrationPolicyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    std::shared_ptr<CreateRegistrationPolicyRequestCompanyLimitCount> companyLimitCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> companyLimitType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> matchMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<CreateRegistrationPolicyRequestPersonalLimitCount> personalLimitCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> personalLimitType_ = nullptr;
    std::shared_ptr<int64_t> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
