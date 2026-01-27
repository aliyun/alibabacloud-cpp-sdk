// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRATIONPOLICYREQUEST_HPP_
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
    class PersonalLimitCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PersonalLimitCount& obj) { 
        DARABONBA_PTR_TO_JSON(All, all_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(PC, PC_);
      };
      friend void from_json(const Darabonba::Json& j, PersonalLimitCount& obj) { 
        DARABONBA_PTR_FROM_JSON(All, all_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(PC, PC_);
      };
      PersonalLimitCount() = default ;
      PersonalLimitCount(const PersonalLimitCount &) = default ;
      PersonalLimitCount(PersonalLimitCount &&) = default ;
      PersonalLimitCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PersonalLimitCount() = default ;
      PersonalLimitCount& operator=(const PersonalLimitCount &) = default ;
      PersonalLimitCount& operator=(PersonalLimitCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->all_ == nullptr
        && this->mobile_ == nullptr && this->PC_ == nullptr; };
      // all Field Functions 
      bool hasAll() const { return this->all_ != nullptr;};
      void deleteAll() { this->all_ = nullptr;};
      inline int32_t getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, 0) };
      inline PersonalLimitCount& setAll(int32_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline int32_t getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, 0) };
      inline PersonalLimitCount& setMobile(int32_t mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // PC Field Functions 
      bool hasPC() const { return this->PC_ != nullptr;};
      void deletePC() { this->PC_ = nullptr;};
      inline int32_t getPC() const { DARABONBA_PTR_GET_DEFAULT(PC_, 0) };
      inline PersonalLimitCount& setPC(int32_t PC) { DARABONBA_PTR_SET_VALUE(PC_, PC) };


    protected:
      shared_ptr<int32_t> all_ {};
      shared_ptr<int32_t> mobile_ {};
      shared_ptr<int32_t> PC_ {};
    };

    class CompanyLimitCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompanyLimitCount& obj) { 
        DARABONBA_PTR_TO_JSON(All, all_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(PC, PC_);
      };
      friend void from_json(const Darabonba::Json& j, CompanyLimitCount& obj) { 
        DARABONBA_PTR_FROM_JSON(All, all_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(PC, PC_);
      };
      CompanyLimitCount() = default ;
      CompanyLimitCount(const CompanyLimitCount &) = default ;
      CompanyLimitCount(CompanyLimitCount &&) = default ;
      CompanyLimitCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompanyLimitCount() = default ;
      CompanyLimitCount& operator=(const CompanyLimitCount &) = default ;
      CompanyLimitCount& operator=(CompanyLimitCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->all_ == nullptr
        && this->mobile_ == nullptr && this->PC_ == nullptr; };
      // all Field Functions 
      bool hasAll() const { return this->all_ != nullptr;};
      void deleteAll() { this->all_ = nullptr;};
      inline int32_t getAll() const { DARABONBA_PTR_GET_DEFAULT(all_, 0) };
      inline CompanyLimitCount& setAll(int32_t all) { DARABONBA_PTR_SET_VALUE(all_, all) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline int32_t getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, 0) };
      inline CompanyLimitCount& setMobile(int32_t mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // PC Field Functions 
      bool hasPC() const { return this->PC_ != nullptr;};
      void deletePC() { this->PC_ = nullptr;};
      inline int32_t getPC() const { DARABONBA_PTR_GET_DEFAULT(PC_, 0) };
      inline CompanyLimitCount& setPC(int32_t PC) { DARABONBA_PTR_SET_VALUE(PC_, PC) };


    protected:
      shared_ptr<int32_t> all_ {};
      shared_ptr<int32_t> mobile_ {};
      shared_ptr<int32_t> PC_ {};
    };

    virtual bool empty() const override { return this->companyLimitCount_ == nullptr
        && this->companyLimitType_ == nullptr && this->description_ == nullptr && this->matchMode_ == nullptr && this->name_ == nullptr && this->personalLimitCount_ == nullptr
        && this->personalLimitType_ == nullptr && this->priority_ == nullptr && this->status_ == nullptr && this->userGroupIds_ == nullptr && this->whitelist_ == nullptr; };
    // companyLimitCount Field Functions 
    bool hasCompanyLimitCount() const { return this->companyLimitCount_ != nullptr;};
    void deleteCompanyLimitCount() { this->companyLimitCount_ = nullptr;};
    inline const CreateRegistrationPolicyRequest::CompanyLimitCount & getCompanyLimitCount() const { DARABONBA_PTR_GET_CONST(companyLimitCount_, CreateRegistrationPolicyRequest::CompanyLimitCount) };
    inline CreateRegistrationPolicyRequest::CompanyLimitCount getCompanyLimitCount() { DARABONBA_PTR_GET(companyLimitCount_, CreateRegistrationPolicyRequest::CompanyLimitCount) };
    inline CreateRegistrationPolicyRequest& setCompanyLimitCount(const CreateRegistrationPolicyRequest::CompanyLimitCount & companyLimitCount) { DARABONBA_PTR_SET_VALUE(companyLimitCount_, companyLimitCount) };
    inline CreateRegistrationPolicyRequest& setCompanyLimitCount(CreateRegistrationPolicyRequest::CompanyLimitCount && companyLimitCount) { DARABONBA_PTR_SET_RVALUE(companyLimitCount_, companyLimitCount) };


    // companyLimitType Field Functions 
    bool hasCompanyLimitType() const { return this->companyLimitType_ != nullptr;};
    void deleteCompanyLimitType() { this->companyLimitType_ = nullptr;};
    inline string getCompanyLimitType() const { DARABONBA_PTR_GET_DEFAULT(companyLimitType_, "") };
    inline CreateRegistrationPolicyRequest& setCompanyLimitType(string companyLimitType) { DARABONBA_PTR_SET_VALUE(companyLimitType_, companyLimitType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRegistrationPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string getMatchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline CreateRegistrationPolicyRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRegistrationPolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // personalLimitCount Field Functions 
    bool hasPersonalLimitCount() const { return this->personalLimitCount_ != nullptr;};
    void deletePersonalLimitCount() { this->personalLimitCount_ = nullptr;};
    inline const CreateRegistrationPolicyRequest::PersonalLimitCount & getPersonalLimitCount() const { DARABONBA_PTR_GET_CONST(personalLimitCount_, CreateRegistrationPolicyRequest::PersonalLimitCount) };
    inline CreateRegistrationPolicyRequest::PersonalLimitCount getPersonalLimitCount() { DARABONBA_PTR_GET(personalLimitCount_, CreateRegistrationPolicyRequest::PersonalLimitCount) };
    inline CreateRegistrationPolicyRequest& setPersonalLimitCount(const CreateRegistrationPolicyRequest::PersonalLimitCount & personalLimitCount) { DARABONBA_PTR_SET_VALUE(personalLimitCount_, personalLimitCount) };
    inline CreateRegistrationPolicyRequest& setPersonalLimitCount(CreateRegistrationPolicyRequest::PersonalLimitCount && personalLimitCount) { DARABONBA_PTR_SET_RVALUE(personalLimitCount_, personalLimitCount) };


    // personalLimitType Field Functions 
    bool hasPersonalLimitType() const { return this->personalLimitType_ != nullptr;};
    void deletePersonalLimitType() { this->personalLimitType_ = nullptr;};
    inline string getPersonalLimitType() const { DARABONBA_PTR_GET_DEFAULT(personalLimitType_, "") };
    inline CreateRegistrationPolicyRequest& setPersonalLimitType(string personalLimitType) { DARABONBA_PTR_SET_VALUE(personalLimitType_, personalLimitType) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int64_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0L) };
    inline CreateRegistrationPolicyRequest& setPriority(int64_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRegistrationPolicyRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline CreateRegistrationPolicyRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline CreateRegistrationPolicyRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const vector<string> & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, vector<string>) };
    inline vector<string> getWhitelist() { DARABONBA_PTR_GET(whitelist_, vector<string>) };
    inline CreateRegistrationPolicyRequest& setWhitelist(const vector<string> & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline CreateRegistrationPolicyRequest& setWhitelist(vector<string> && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    shared_ptr<CreateRegistrationPolicyRequest::CompanyLimitCount> companyLimitCount_ {};
    // This parameter is required.
    shared_ptr<string> companyLimitType_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> matchMode_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<CreateRegistrationPolicyRequest::PersonalLimitCount> personalLimitCount_ {};
    // This parameter is required.
    shared_ptr<string> personalLimitType_ {};
    shared_ptr<int64_t> priority_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
    shared_ptr<vector<string>> userGroupIds_ {};
    shared_ptr<vector<string>> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
