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
      // The unique ID of the template rule.
      shared_ptr<int64_t> id_ {};
      // A comma-separated list of IDs of the associated atomic models.
      shared_ptr<string> identificationRuleIds_ {};
      // The scope of data that the template rule scans. This parameter is a string converted from a JSON array. Each element in the JSON array represents a data scanning scope and contains the following fields:
      // 
      // - **Asset**: A string that indicates the asset type. Valid values include RDS, DRDS, PolarDB, OTS, ADB, OceanBase, and ODPS.
      // 
      // - **Content**: The specific scope of the asset to scan. This is an array of objects, where each object contains the following fields:
      // 
      //   - **Range**: A string that indicates the matching range. Valid values include instance, database, table, column, project (for MaxCompute assets only), bucket (for OSS assets only), and object (for OSS assets only).
      // 
      //   - **Operator**: A string that indicates the matching condition. Valid values include equals, regex (regular expression), prefix, and suffix.
      // 
      //   - **Value**: A string that indicates the content to match.
      shared_ptr<string> identificationScope_ {};
      // The name of the template rule.
      shared_ptr<string> name_ {};
      // The risk level of the template rule. The value ranges from **1** to **11**. Valid values:
      // 
      // - **1**: No risk.
      // 
      // - **2**: S1.
      // 
      // - **3**: S2.
      // 
      // - **4**: S3.
      // 
      // - **5**: S4.
      // 
      // - **6**: S5.
      // 
      // - **7**: S6.
      // 
      // - **8**: S7.
      // 
      // - **9**: S8.
      // 
      // - **10**: S9.
      // 
      // - **11**: S10.
      // 
      // - **null**: Indicates all risk levels, including No risk, S1, S2, S3, S4, S5, S6, S7, S8, S9, and S10.
      shared_ptr<int64_t> riskLevelId_ {};
      // The status of the template rule. Valid values:
      // 
      // - **0**: disabled.
      // 
      // - **1**: enabled.
      // 
      // - **null**: Represents all statuses, including enabled and disabled.
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
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // A list of template rules.
    shared_ptr<vector<DescribeCategoryTemplateRuleListResponseBody::Items>> items_ {};
    // The number of template rules returned on each page.
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
