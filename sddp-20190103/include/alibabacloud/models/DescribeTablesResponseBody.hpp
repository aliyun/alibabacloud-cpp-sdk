// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODY_HPP_
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
  class DescribeTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTablesResponseBody() = default ;
    DescribeTablesResponseBody(const DescribeTablesResponseBody &) = default ;
    DescribeTablesResponseBody(DescribeTablesResponseBody &&) = default ;
    DescribeTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablesResponseBody() = default ;
    DescribeTablesResponseBody& operator=(const DescribeTablesResponseBody &) = default ;
    DescribeTablesResponseBody& operator=(DescribeTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
        DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(SensitiveRatio, sensitiveRatio_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
        DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(SensitiveRatio, sensitiveRatio_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class RuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        };
        friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        };
        RuleList() = default ;
        RuleList(const RuleList &) = default ;
        RuleList(RuleList &&) = default ;
        RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleList() = default ;
        RuleList& operator=(const RuleList &) = default ;
        RuleList& operator=(RuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr && this->riskLevelId_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline RuleList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // riskLevelId Field Functions 
        bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
        void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
        inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
        inline RuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      protected:
        // The total number of rules.
        shared_ptr<int64_t> count_ {};
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The sensitivity level of the sensitive data that hits the sensitive data detection rule. Valid values:
        // 
        // *   **1**: N/A, which indicates that no sensitive data is detected.
        // *   **2**: S1, which indicates the low sensitivity level.
        // *   **3**: S2, which indicates the medium sensitivity level.
        // *   **4**: S3, which indicates the high sensitivity level.
        // *   **5**: S4, which indicates the highest sensitivity level.
        shared_ptr<int64_t> riskLevelId_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->id_ == nullptr && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->name_ == nullptr
        && this->owner_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr
        && this->ruleList_ == nullptr && this->sensitive_ == nullptr && this->sensitiveCount_ == nullptr && this->sensitiveRatio_ == nullptr && this->tenantName_ == nullptr
        && this->totalCount_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Items& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline Items& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Items& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Items& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
      inline Items& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // riskLevelName Field Functions 
      bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
      void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
      inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
      inline Items& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


      // ruleList Field Functions 
      bool hasRuleList() const { return this->ruleList_ != nullptr;};
      void deleteRuleList() { this->ruleList_ = nullptr;};
      inline const vector<Items::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Items::RuleList>) };
      inline vector<Items::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<Items::RuleList>) };
      inline Items& setRuleList(const vector<Items::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
      inline Items& setRuleList(vector<Items::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


      // sensitive Field Functions 
      bool hasSensitive() const { return this->sensitive_ != nullptr;};
      void deleteSensitive() { this->sensitive_ = nullptr;};
      inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
      inline Items& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


      // sensitiveCount Field Functions 
      bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
      void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
      inline int32_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
      inline Items& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      // sensitiveRatio Field Functions 
      bool hasSensitiveRatio() const { return this->sensitiveRatio_ != nullptr;};
      void deleteSensitiveRatio() { this->sensitiveRatio_ = nullptr;};
      inline string getSensitiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sensitiveRatio_, "") };
      inline Items& setSensitiveRatio(string sensitiveRatio) { DARABONBA_PTR_SET_VALUE(sensitiveRatio_, sensitiveRatio) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Items& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Items& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The point in time when the table was created. Unit: milliseconds.
      shared_ptr<int64_t> creationTime_ {};
      // The ID of the table.
      shared_ptr<int64_t> id_ {};
      // The description of the data asset.
      shared_ptr<string> instanceDescription_ {};
      // The ID of the data asset to which the table belongs.
      shared_ptr<int64_t> instanceId_ {};
      // The name of the data asset to which the table belongs.
      shared_ptr<string> instanceName_ {};
      // The name of the table.
      shared_ptr<string> name_ {};
      // The Alibaba Cloud account to which the table belongs.
      shared_ptr<string> owner_ {};
      // The name of the service to which the table belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**. For more information about the types of data assets from which DSC can scan for sensitive data, see [Supported data assets](https://help.aliyun.com/document_detail/212906.html).
      shared_ptr<string> productCode_ {};
      // The ID of the service to which the table belongs.
      shared_ptr<string> productId_ {};
      // The sensitivity level of the table. Each sensitivity level ID corresponds to a sensitivity level name. Valid values:
      // 
      // *   **1**: N/A, which indicates that no sensitive data is detected.
      // *   **2**: S1, which indicates the low sensitivity level.
      // *   **3**: S2, which indicates the medium sensitivity level.
      // *   **4**: S3, which indicates the high sensitivity level.
      // *   **5**: S4, which indicates the highest sensitivity level.
      shared_ptr<int64_t> riskLevelId_ {};
      // The name of the sensitivity level for the table. Valid values:
      // 
      // *   **N/A**: indicates that no sensitive data is detected.
      // *   **S1**: indicates the low sensitivity level.
      // *   **S2**: indicates the medium sensitivity level.
      // *   **S3**: indicates the high sensitivity level.
      // *   **S4**: indicates the highest sensitivity level.
      shared_ptr<string> riskLevelName_ {};
      // The information about the sensitive data detection rules that are hit.
      shared_ptr<vector<Items::RuleList>> ruleList_ {};
      // Indicates whether the table contains sensitive fields. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> sensitive_ {};
      // The total number of sensitive fields in the table.
      shared_ptr<int32_t> sensitiveCount_ {};
      // The percentage of sensitive fields in the table.
      shared_ptr<string> sensitiveRatio_ {};
      // The name of the tenant.
      shared_ptr<string> tenantName_ {};
      // The total number of fields in the table.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeTablesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeTablesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeTablesResponseBody::Items>) };
    inline vector<DescribeTablesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeTablesResponseBody::Items>) };
    inline DescribeTablesResponseBody& setItems(const vector<DescribeTablesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTablesResponseBody& setItems(vector<DescribeTablesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTablesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // An array that consists of tables.
    shared_ptr<vector<DescribeTablesResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
