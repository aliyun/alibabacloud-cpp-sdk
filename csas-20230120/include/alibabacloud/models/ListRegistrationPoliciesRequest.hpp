// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRATIONPOLICIESREQUEST_HPP_
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
  class ListRegistrationPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistrationPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistrationPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyLimitType, companyLimitType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PersonalLimitType, personalLimitType_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    ListRegistrationPoliciesRequest() = default ;
    ListRegistrationPoliciesRequest(const ListRegistrationPoliciesRequest &) = default ;
    ListRegistrationPoliciesRequest(ListRegistrationPoliciesRequest &&) = default ;
    ListRegistrationPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistrationPoliciesRequest() = default ;
    ListRegistrationPoliciesRequest& operator=(const ListRegistrationPoliciesRequest &) = default ;
    ListRegistrationPoliciesRequest& operator=(ListRegistrationPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->companyLimitType_ != nullptr
        && this->currentPage_ != nullptr && this->matchMode_ != nullptr && this->name_ != nullptr && this->pageSize_ != nullptr && this->personalLimitType_ != nullptr
        && this->policyIds_ != nullptr && this->status_ != nullptr && this->userGroupId_ != nullptr; };
    // companyLimitType Field Functions 
    bool hasCompanyLimitType() const { return this->companyLimitType_ != nullptr;};
    void deleteCompanyLimitType() { this->companyLimitType_ = nullptr;};
    inline string companyLimitType() const { DARABONBA_PTR_GET_DEFAULT(companyLimitType_, "") };
    inline ListRegistrationPoliciesRequest& setCompanyLimitType(string companyLimitType) { DARABONBA_PTR_SET_VALUE(companyLimitType_, companyLimitType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListRegistrationPoliciesRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline ListRegistrationPoliciesRequest& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRegistrationPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRegistrationPoliciesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // personalLimitType Field Functions 
    bool hasPersonalLimitType() const { return this->personalLimitType_ != nullptr;};
    void deletePersonalLimitType() { this->personalLimitType_ = nullptr;};
    inline string personalLimitType() const { DARABONBA_PTR_GET_DEFAULT(personalLimitType_, "") };
    inline ListRegistrationPoliciesRequest& setPersonalLimitType(string personalLimitType) { DARABONBA_PTR_SET_VALUE(personalLimitType_, personalLimitType) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline ListRegistrationPoliciesRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListRegistrationPoliciesRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRegistrationPoliciesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListRegistrationPoliciesRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    std::shared_ptr<string> companyLimitType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    std::shared_ptr<string> matchMode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> personalLimitType_ = nullptr;
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
