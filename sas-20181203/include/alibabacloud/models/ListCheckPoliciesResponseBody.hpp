// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPOLICIESRESPONSEBODY_HPP_
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
  class ListCheckPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckPoliciesResponseBody() = default ;
    ListCheckPoliciesResponseBody(const ListCheckPoliciesResponseBody &) = default ;
    ListCheckPoliciesResponseBody(ListCheckPoliciesResponseBody &&) = default ;
    ListCheckPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckPoliciesResponseBody() = default ;
    ListCheckPoliciesResponseBody& operator=(const ListCheckPoliciesResponseBody &) = default ;
    ListCheckPoliciesResponseBody& operator=(ListCheckPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(DependentPolicyId, dependentPolicyId_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(DependentPolicyId, dependentPolicyId_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(PolicyShowName, policyShowName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkType_ == nullptr
        && this->dependentPolicyId_ == nullptr && this->policyId_ == nullptr && this->policyShowName_ == nullptr && this->policyType_ == nullptr && this->type_ == nullptr; };
      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline Policies& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // dependentPolicyId Field Functions 
      bool hasDependentPolicyId() const { return this->dependentPolicyId_ != nullptr;};
      void deleteDependentPolicyId() { this->dependentPolicyId_ = nullptr;};
      inline int64_t getDependentPolicyId() const { DARABONBA_PTR_GET_DEFAULT(dependentPolicyId_, 0L) };
      inline Policies& setDependentPolicyId(int64_t dependentPolicyId) { DARABONBA_PTR_SET_VALUE(dependentPolicyId_, dependentPolicyId) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
      inline Policies& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // policyShowName Field Functions 
      bool hasPolicyShowName() const { return this->policyShowName_ != nullptr;};
      void deletePolicyShowName() { this->policyShowName_ = nullptr;};
      inline string getPolicyShowName() const { DARABONBA_PTR_GET_DEFAULT(policyShowName_, "") };
      inline Policies& setPolicyShowName(string policyShowName) { DARABONBA_PTR_SET_VALUE(policyShowName_, policyShowName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Policies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Policies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Source type of the security check item:
      //  - **CUSTOM**: User-defined
      //  - **SYSTEM**: Predefined by the security platform
      shared_ptr<string> checkType_ {};
      // The ID of the associated higher-level policy.
      // 
      // (The specific dependency relationship, from low to high, is Section -> Requirement -> Standard)
      shared_ptr<int64_t> dependentPolicyId_ {};
      // Policy ID.
      shared_ptr<int64_t> policyId_ {};
      // Name of the custom policy.
      shared_ptr<string> policyShowName_ {};
      // Policy type of the custom check item rule:
      // - **STANDARD**: Standard policy type
      // - **REQUIREMENT**: Requirement policy type
      // - **SECTION**: Section policy type
      shared_ptr<string> policyType_ {};
      // 关联的策略大类的名称（PolicyType取值为STANDARD时为必填）：
      // - **AISPM**：AI配置管理（AI-SPM）
      // - **KISPM**：Kubernetes配置管理(KSPM)
      // - **IDENTITY_PERMISSION**：身份权限管理(CIEM)
      // - **RISK**：安全风险
      // - **COMPLIANCE**：合规风险
      shared_ptr<string> type_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline PageInfo& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 分页查询时，当前页显示的数据条数。
      shared_ptr<string> count_ {};
      // The current page number displayed in the result.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of data entries per page when performing a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of policies queried.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->policies_ == nullptr && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckPoliciesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckPoliciesResponseBody::PageInfo) };
    inline ListCheckPoliciesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckPoliciesResponseBody::PageInfo) };
    inline ListCheckPoliciesResponseBody& setPageInfo(const ListCheckPoliciesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckPoliciesResponseBody& setPageInfo(ListCheckPoliciesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<ListCheckPoliciesResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ListCheckPoliciesResponseBody::Policies>) };
    inline vector<ListCheckPoliciesResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<ListCheckPoliciesResponseBody::Policies>) };
    inline ListCheckPoliciesResponseBody& setPolicies(const vector<ListCheckPoliciesResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListCheckPoliciesResponseBody& setPolicies(vector<ListCheckPoliciesResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Paging information for the query results.
    shared_ptr<ListCheckPoliciesResponseBody::PageInfo> pageInfo_ {};
    // List of policies.
    shared_ptr<vector<ListCheckPoliciesResponseBody::Policies>> policies_ {};
    // ID of the current call request, generated by Alibaba Cloud as a unique identifier for the request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
