// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMSRESPONSEBODY_HPP_
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
  class ListCheckItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemsResponseBody() = default ;
    ListCheckItemsResponseBody(const ListCheckItemsResponseBody &) = default ;
    ListCheckItemsResponseBody(ListCheckItemsResponseBody &&) = default ;
    ListCheckItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemsResponseBody() = default ;
    ListCheckItemsResponseBody& operator=(const ListCheckItemsResponseBody &) = default ;
    ListCheckItemsResponseBody& operator=(ListCheckItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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
      // Number of data entries displayed on the current page in a paginated query.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page when performing a paginated query.
      shared_ptr<int32_t> currentPage_ {};
      // The maximum number of records displayed per page when performing a paginated query.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of data entries found.
      shared_ptr<int32_t> totalCount_ {};
    };

    class CheckItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckItems& obj) { 
        DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckPolicies, checkPolicies_);
        DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
        DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Solution, solution_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, CheckItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckPolicies, checkPolicies_);
        DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
        DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Solution, solution_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      CheckItems() = default ;
      CheckItems(const CheckItems &) = default ;
      CheckItems(CheckItems &&) = default ;
      CheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckItems() = default ;
      CheckItems& operator=(const CheckItems &) = default ;
      CheckItems& operator=(CheckItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Solution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Solution& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Solution& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Solution() = default ;
        Solution(const Solution &) = default ;
        Solution(Solution &&) = default ;
        Solution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Solution() = default ;
        Solution& operator=(const Solution &) = default ;
        Solution& operator=(Solution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Solution& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Solution& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The type of the check item solution information. Values:
        // 
        // - **text**：Text
        shared_ptr<string> type_ {};
        // The content of the solution for the check item risk.
        shared_ptr<string> value_ {};
      };

      class Description : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Description& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Description& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Description() = default ;
        Description(const Description &) = default ;
        Description(Description &&) = default ;
        Description(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Description() = default ;
        Description& operator=(const Description &) = default ;
        Description& operator=(Description &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Description& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Description& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The type of the check description attribute. Values:
        // 
        // - **text**：Text
        shared_ptr<string> type_ {};
        // The specific content of the description.
        shared_ptr<string> value_ {};
      };

      class CheckPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(RequirementId, requirementId_);
          DARABONBA_PTR_TO_JSON(RequirementShowName, requirementShowName_);
          DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
          DARABONBA_PTR_TO_JSON(SectionShowName, sectionShowName_);
          DARABONBA_PTR_TO_JSON(StandardId, standardId_);
          DARABONBA_PTR_TO_JSON(StandardShowName, standardShowName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CheckPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(RequirementId, requirementId_);
          DARABONBA_PTR_FROM_JSON(RequirementShowName, requirementShowName_);
          DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
          DARABONBA_PTR_FROM_JSON(SectionShowName, sectionShowName_);
          DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
          DARABONBA_PTR_FROM_JSON(StandardShowName, standardShowName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        CheckPolicies() = default ;
        CheckPolicies(const CheckPolicies &) = default ;
        CheckPolicies(CheckPolicies &&) = default ;
        CheckPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckPolicies() = default ;
        CheckPolicies& operator=(const CheckPolicies &) = default ;
        CheckPolicies& operator=(CheckPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->requirementId_ == nullptr
        && this->requirementShowName_ == nullptr && this->sectionId_ == nullptr && this->sectionShowName_ == nullptr && this->standardId_ == nullptr && this->standardShowName_ == nullptr
        && this->type_ == nullptr; };
        // requirementId Field Functions 
        bool hasRequirementId() const { return this->requirementId_ != nullptr;};
        void deleteRequirementId() { this->requirementId_ = nullptr;};
        inline int64_t getRequirementId() const { DARABONBA_PTR_GET_DEFAULT(requirementId_, 0L) };
        inline CheckPolicies& setRequirementId(int64_t requirementId) { DARABONBA_PTR_SET_VALUE(requirementId_, requirementId) };


        // requirementShowName Field Functions 
        bool hasRequirementShowName() const { return this->requirementShowName_ != nullptr;};
        void deleteRequirementShowName() { this->requirementShowName_ = nullptr;};
        inline string getRequirementShowName() const { DARABONBA_PTR_GET_DEFAULT(requirementShowName_, "") };
        inline CheckPolicies& setRequirementShowName(string requirementShowName) { DARABONBA_PTR_SET_VALUE(requirementShowName_, requirementShowName) };


        // sectionId Field Functions 
        bool hasSectionId() const { return this->sectionId_ != nullptr;};
        void deleteSectionId() { this->sectionId_ = nullptr;};
        inline int64_t getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
        inline CheckPolicies& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


        // sectionShowName Field Functions 
        bool hasSectionShowName() const { return this->sectionShowName_ != nullptr;};
        void deleteSectionShowName() { this->sectionShowName_ = nullptr;};
        inline string getSectionShowName() const { DARABONBA_PTR_GET_DEFAULT(sectionShowName_, "") };
        inline CheckPolicies& setSectionShowName(string sectionShowName) { DARABONBA_PTR_SET_VALUE(sectionShowName_, sectionShowName) };


        // standardId Field Functions 
        bool hasStandardId() const { return this->standardId_ != nullptr;};
        void deleteStandardId() { this->standardId_ = nullptr;};
        inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
        inline CheckPolicies& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


        // standardShowName Field Functions 
        bool hasStandardShowName() const { return this->standardShowName_ != nullptr;};
        void deleteStandardShowName() { this->standardShowName_ = nullptr;};
        inline string getStandardShowName() const { DARABONBA_PTR_GET_DEFAULT(standardShowName_, "") };
        inline CheckPolicies& setStandardShowName(string standardShowName) { DARABONBA_PTR_SET_VALUE(standardShowName_, standardShowName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CheckPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the requirement for the check item.
        shared_ptr<int64_t> requirementId_ {};
        // The display name of the requirement for the check item.
        shared_ptr<string> requirementShowName_ {};
        // The ID of the section for the check item.
        shared_ptr<int64_t> sectionId_ {};
        // The display name of the section for the check item.
        shared_ptr<string> sectionShowName_ {};
        // 检查项的标准ID。
        shared_ptr<int64_t> standardId_ {};
        // The display name of the standard for the check item.
        shared_ptr<string> standardShowName_ {};
        // The name of the associated policy category:
        // - **AISPM**：AI Configuration Management (AI-SPM)
        // - **KISPM**：Kubernetes Configuration Management (KSPM)
        // - **IDENTITY_PERMISSION**：Identity and Permission Management (CIEM)
        // - **RISK**：Security Risk
        // - **COMPLIANCE**：Compliance Risk
        shared_ptr<string> type_ {};
      };

      class AssistInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssistInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, AssistInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        AssistInfo() = default ;
        AssistInfo(const AssistInfo &) = default ;
        AssistInfo(AssistInfo &&) = default ;
        AssistInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssistInfo() = default ;
        AssistInfo& operator=(const AssistInfo &) = default ;
        AssistInfo& operator=(AssistInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AssistInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AssistInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The type of the help information for the check item risk. Values:
        // 
        // - **text**：Text
        shared_ptr<string> type_ {};
        // The content of the help information for the check item risk.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->assistInfo_ == nullptr
        && this->checkId_ == nullptr && this->checkPolicies_ == nullptr && this->checkRule_ == nullptr && this->checkShowName_ == nullptr && this->checkType_ == nullptr
        && this->description_ == nullptr && this->instanceSubType_ == nullptr && this->instanceType_ == nullptr && this->remark_ == nullptr && this->riskLevel_ == nullptr
        && this->solution_ == nullptr && this->status_ == nullptr && this->vendor_ == nullptr; };
      // assistInfo Field Functions 
      bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
      void deleteAssistInfo() { this->assistInfo_ = nullptr;};
      inline const CheckItems::AssistInfo & getAssistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, CheckItems::AssistInfo) };
      inline CheckItems::AssistInfo getAssistInfo() { DARABONBA_PTR_GET(assistInfo_, CheckItems::AssistInfo) };
      inline CheckItems& setAssistInfo(const CheckItems::AssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
      inline CheckItems& setAssistInfo(CheckItems::AssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckItems& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkPolicies Field Functions 
      bool hasCheckPolicies() const { return this->checkPolicies_ != nullptr;};
      void deleteCheckPolicies() { this->checkPolicies_ = nullptr;};
      inline const vector<CheckItems::CheckPolicies> & getCheckPolicies() const { DARABONBA_PTR_GET_CONST(checkPolicies_, vector<CheckItems::CheckPolicies>) };
      inline vector<CheckItems::CheckPolicies> getCheckPolicies() { DARABONBA_PTR_GET(checkPolicies_, vector<CheckItems::CheckPolicies>) };
      inline CheckItems& setCheckPolicies(const vector<CheckItems::CheckPolicies> & checkPolicies) { DARABONBA_PTR_SET_VALUE(checkPolicies_, checkPolicies) };
      inline CheckItems& setCheckPolicies(vector<CheckItems::CheckPolicies> && checkPolicies) { DARABONBA_PTR_SET_RVALUE(checkPolicies_, checkPolicies) };


      // checkRule Field Functions 
      bool hasCheckRule() const { return this->checkRule_ != nullptr;};
      void deleteCheckRule() { this->checkRule_ = nullptr;};
      inline string getCheckRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
      inline CheckItems& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


      // checkShowName Field Functions 
      bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
      void deleteCheckShowName() { this->checkShowName_ = nullptr;};
      inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
      inline CheckItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline CheckItems& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline const CheckItems::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, CheckItems::Description) };
      inline CheckItems::Description getDescription() { DARABONBA_PTR_GET(description_, CheckItems::Description) };
      inline CheckItems& setDescription(const CheckItems::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
      inline CheckItems& setDescription(CheckItems::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


      // instanceSubType Field Functions 
      bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
      void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
      inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
      inline CheckItems& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline CheckItems& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline CheckItems& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline CheckItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // solution Field Functions 
      bool hasSolution() const { return this->solution_ != nullptr;};
      void deleteSolution() { this->solution_ = nullptr;};
      inline const CheckItems::Solution & getSolution() const { DARABONBA_PTR_GET_CONST(solution_, CheckItems::Solution) };
      inline CheckItems::Solution getSolution() { DARABONBA_PTR_GET(solution_, CheckItems::Solution) };
      inline CheckItems& setSolution(const CheckItems::Solution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
      inline CheckItems& setSolution(CheckItems::Solution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CheckItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline CheckItems& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The help information for the check item.
      shared_ptr<CheckItems::AssistInfo> assistInfo_ {};
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // A list of standard, regulation, and section information associated with the check result.
      shared_ptr<vector<CheckItems::CheckPolicies>> checkPolicies_ {};
      // 自定义检查项定义规则。
      shared_ptr<string> checkRule_ {};
      // The name of the check item.
      shared_ptr<string> checkShowName_ {};
      // The source type of the Security Posture check item:
      //  - **CUSTOM**: User-defined
      //  - **SYSTEM**: Predefined by the Security Posture platform
      shared_ptr<string> checkType_ {};
      // The description information of the check item.
      shared_ptr<CheckItems::Description> description_ {};
      // The sub-type of the cloud product\\"s asset.
      shared_ptr<string> instanceSubType_ {};
      // The asset type of the cloud product.
      shared_ptr<string> instanceType_ {};
      // Remark information.
      shared_ptr<string> remark_ {};
      // The risk level of the check item. Values:
      // - **HIGH**: High risk
      // - **MEDIUM**: Medium risk
      // - **LOW**: Low risk
      shared_ptr<string> riskLevel_ {};
      // The solution information for the check item.
      shared_ptr<CheckItems::Solution> solution_ {};
      // The status of the check item. Values:
      // - **EDIT**: In editing
      // - **RELEASE**: Released
      shared_ptr<string> status_ {};
      // The cloud asset vendor.
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->checkItems_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<ListCheckItemsResponseBody::CheckItems> & getCheckItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<ListCheckItemsResponseBody::CheckItems>) };
    inline vector<ListCheckItemsResponseBody::CheckItems> getCheckItems() { DARABONBA_PTR_GET(checkItems_, vector<ListCheckItemsResponseBody::CheckItems>) };
    inline ListCheckItemsResponseBody& setCheckItems(const vector<ListCheckItemsResponseBody::CheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline ListCheckItemsResponseBody& setCheckItems(vector<ListCheckItemsResponseBody::CheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemsResponseBody::PageInfo) };
    inline ListCheckItemsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemsResponseBody::PageInfo) };
    inline ListCheckItemsResponseBody& setPageInfo(const ListCheckItemsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemsResponseBody& setPageInfo(ListCheckItemsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information about the check items.
    shared_ptr<vector<ListCheckItemsResponseBody::CheckItems>> checkItems_ {};
    // Page information for paginated queries.
    shared_ptr<ListCheckItemsResponseBody::PageInfo> pageInfo_ {};
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for this request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
