// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckTypes, checkTypes_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckTypes, checkTypes_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DependentPolicyId, dependentPolicyId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListCheckPoliciesRequest() = default ;
    ListCheckPoliciesRequest(const ListCheckPoliciesRequest &) = default ;
    ListCheckPoliciesRequest(ListCheckPoliciesRequest &&) = default ;
    ListCheckPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckPoliciesRequest() = default ;
    ListCheckPoliciesRequest& operator=(const ListCheckPoliciesRequest &) = default ;
    ListCheckPoliciesRequest& operator=(ListCheckPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkTypes_ == nullptr
        && this->currentPage_ == nullptr && this->dependentPolicyId_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->policyId_ == nullptr
        && this->policyShowName_ == nullptr && this->policyType_ == nullptr && this->type_ == nullptr; };
    // checkTypes Field Functions 
    bool hasCheckTypes() const { return this->checkTypes_ != nullptr;};
    void deleteCheckTypes() { this->checkTypes_ = nullptr;};
    inline const vector<string> & getCheckTypes() const { DARABONBA_PTR_GET_CONST(checkTypes_, vector<string>) };
    inline vector<string> getCheckTypes() { DARABONBA_PTR_GET(checkTypes_, vector<string>) };
    inline ListCheckPoliciesRequest& setCheckTypes(const vector<string> & checkTypes) { DARABONBA_PTR_SET_VALUE(checkTypes_, checkTypes) };
    inline ListCheckPoliciesRequest& setCheckTypes(vector<string> && checkTypes) { DARABONBA_PTR_SET_RVALUE(checkTypes_, checkTypes) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckPoliciesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dependentPolicyId Field Functions 
    bool hasDependentPolicyId() const { return this->dependentPolicyId_ != nullptr;};
    void deleteDependentPolicyId() { this->dependentPolicyId_ = nullptr;};
    inline int64_t getDependentPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dependentPolicyId_, 0L) };
    inline ListCheckPoliciesRequest& setDependentPolicyId(int64_t dependentPolicyId) { DARABONBA_PTR_SET_VALUE(dependentPolicyId_, dependentPolicyId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckPoliciesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckPoliciesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline ListCheckPoliciesRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyShowName Field Functions 
    bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
    void deletePolicyShowName() { this->policyShowName_ = nullptr;};
    inline string getPolicyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
    inline ListCheckPoliciesRequest& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListCheckPoliciesRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCheckPoliciesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The types of policies to be queried (default queries both custom and system predefined policies).
    shared_ptr<vector<string>> checkTypes_ {};
    // Specifies the page number from which to start displaying the query results. The starting value is **1**. The default value is **1**, indicating that the display starts from the **1st** page.
    shared_ptr<int32_t> currentPage_ {};
    // ID of the associated parent policy.
    // 
    // (The specific dependency relationship from low to high is: Section -> Requirement -> Standard)
    shared_ptr<int64_t> dependentPolicyId_ {};
    // Language type for request and response messages, with a default value of **zh**. Possible values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Number of check item information entries displayed per page during pagination. The default value is **50**, indicating 50 entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // ID of the newly added classification setting.
    shared_ptr<int64_t> policyId_ {};
    // Name of the newly added classification setting.
    shared_ptr<string> policyShowName_ {};
    // Policy type of the custom check item rule:
    // - **STANDARD**: New standard
    // - **REQUIREMENT**: New requirement
    // - **SECTION**: New section
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    // Name of the associated major policy category (required when PolicyType is STANDARD):
    // - **AISPM**: AI Configuration Management (AI-SPM)
    // - **IDENTITY_PERMISSION**: Identity and Permission Management (CIEM)
    // - **RISK**: Security Risk
    // - **COMPLIANCE**: Compliance Risk
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
