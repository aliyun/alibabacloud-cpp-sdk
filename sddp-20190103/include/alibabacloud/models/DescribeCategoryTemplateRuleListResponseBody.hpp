// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATERULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATERULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeCategoryTemplateRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCategoryTemplateRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCategoryTemplateRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCategoryTemplateRuleListResponseBody() = default ;
    DescribeCategoryTemplateRuleListResponseBody(const DescribeCategoryTemplateRuleListResponseBody &) = default ;
    DescribeCategoryTemplateRuleListResponseBody(DescribeCategoryTemplateRuleListResponseBody &&) = default ;
    DescribeCategoryTemplateRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCategoryTemplateRuleListResponseBody() = default ;
    DescribeCategoryTemplateRuleListResponseBody& operator=(const DescribeCategoryTemplateRuleListResponseBody &) = default ;
    DescribeCategoryTemplateRuleListResponseBody& operator=(DescribeCategoryTemplateRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdentificationRuleIds, identificationRuleIds_);
        DARABONBA_PTR_TO_JSON(IdentificationScope, identificationScope_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdentificationRuleIds, identificationRuleIds_);
        DARABONBA_PTR_FROM_JSON(IdentificationScope, identificationScope_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->identificationRuleIds_ == nullptr && this->identificationScope_ == nullptr && this->name_ == nullptr && this->riskLevelId_ == nullptr
        && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // identificationRuleIds Field Functions 
      bool hasIdentificationRuleIds() const { return this->identificationRuleIds_ != nullptr;};
      void deleteIdentificationRuleIds() { this->identificationRuleIds_ = nullptr;};
      inline string getIdentificationRuleIds() const { DARABONBA_PTR_GET_DEFAULT(identificationRuleIds_, "") };
      inline Items& setIdentificationRuleIds(string identificationRuleIds) { DARABONBA_PTR_SET_VALUE(identificationRuleIds_, identificationRuleIds) };


      // identificationScope Field Functions 
      bool hasIdentificationScope() const { return this->identificationScope_ != nullptr;};
      void deleteIdentificationScope() { this->identificationScope_ = nullptr;};
      inline string getIdentificationScope() const { DARABONBA_PTR_GET_DEFAULT(identificationScope_, "") };
      inline Items& setIdentificationScope(string identificationScope) { DARABONBA_PTR_SET_VALUE(identificationScope_, identificationScope) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
      inline Items& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The description of the rule.
      shared_ptr<string> description_ {};
      // The unique ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The IDs of sensitive data types. Multiple IDs are separated by commas (,).
      shared_ptr<string> identificationRuleIds_ {};
      // The scan scope of the rule. The value is a JSON array of the STRING type. Each element in a JSON array indicates a scan scope that contains the following fields:
      // 
      // *   **Asset**: the data asset type. Valid values: RDS, DRDS, PolarDB, OTS, ADB, and OceanBase. The value is of the STRING type.
      // 
      // *   **Content**: the scan scope. The value is of the STRING type. Each element in a JSON array indicates a scan scope that contains the following fields:
      // 
      //     *   **Range**: the matching condition. Valid values: Instance, database, table, column, project, bucket, and object. The value project is valid only for data assets in MaxCompute. The values bucket and object are valid only for data assets in Object Storage Service (OSS). The value of this parameter is of the STRING type.
      //     *   **Operator**: the operator. Valid values: equals, regex, prefix, and suffix. The operator equals indicates a full match. The operator regex indicates a match by regular expression. The operator prefix indicates a match by prefix. The operator suffix indicates a match by suffix.
      //     *   **Value**: the matching content. The value is of the STRING type.
      shared_ptr<string> identificationScope_ {};
      // The name of the rule.
      shared_ptr<string> name_ {};
      // The sensitivity level of the data that is not compliant with the rule. Valid values: **1** to **11**.
      // 
      // *   **1**: No sensitive data is detected.
      // *   **2**: indicates the S1 sensitivity level.
      // *   **3**: indicates the S2 sensitivity level.
      // *   **4**: indicates the S3 sensitivity level.
      // *   **5**: indicates the S4 sensitivity level.
      // *   **6**: indicates the S5 sensitivity level.
      // *   **7**: indicates the S6 sensitivity level.
      // *   **8**: indicates the S7 sensitivity level.
      // *   **9**: indicates the S8 sensitivity level.
      // *   **10**: indicates the S9 sensitivity level.
      // *   **11**: indicates the S10 sensitivity level.
      // *   **null**: indicates all preceding sensitivity levels.
      shared_ptr<int64_t> riskLevelId_ {};
      // The status of the rule. Valid values:
      // 
      // *   **0**: disabled
      // *   **1**: enabled
      // *   **null**: all states
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCategoryTemplateRuleListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCategoryTemplateRuleListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCategoryTemplateRuleListResponseBody::Items>) };
    inline vector<DescribeCategoryTemplateRuleListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCategoryTemplateRuleListResponseBody::Items>) };
    inline DescribeCategoryTemplateRuleListResponseBody& setItems(const vector<DescribeCategoryTemplateRuleListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCategoryTemplateRuleListResponseBody& setItems(vector<DescribeCategoryTemplateRuleListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCategoryTemplateRuleListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCategoryTemplateRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCategoryTemplateRuleListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The list of rules.
    shared_ptr<vector<DescribeCategoryTemplateRuleListResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of rules in the template.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
