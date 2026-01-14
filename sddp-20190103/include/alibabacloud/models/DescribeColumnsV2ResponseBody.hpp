// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLUMNSV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLUMNSV2RESPONSEBODY_HPP_
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
  class DescribeColumnsV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColumnsV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColumnsV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeColumnsV2ResponseBody() = default ;
    DescribeColumnsV2ResponseBody(const DescribeColumnsV2ResponseBody &) = default ;
    DescribeColumnsV2ResponseBody(DescribeColumnsV2ResponseBody &&) = default ;
    DescribeColumnsV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColumnsV2ResponseBody() = default ;
    DescribeColumnsV2ResponseBody& operator=(const DescribeColumnsV2ResponseBody &) = default ;
    DescribeColumnsV2ResponseBody& operator=(DescribeColumnsV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(MaskingStatus, maskingStatus_);
        DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
        DARABONBA_PTR_TO_JSON(OdpsRiskLevelValue, odpsRiskLevelValue_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RevisionId, revisionId_);
        DARABONBA_PTR_TO_JSON(RevisionStatus, revisionStatus_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(SensLevelName, sensLevelName_);
        DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
        DARABONBA_PTR_TO_JSON(TableId, tableId_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(MaskingStatus, maskingStatus_);
        DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
        DARABONBA_PTR_FROM_JSON(OdpsRiskLevelValue, odpsRiskLevelValue_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RevisionId, revisionId_);
        DARABONBA_PTR_FROM_JSON(RevisionStatus, revisionStatus_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(SensLevelName, sensLevelName_);
        DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
        DARABONBA_PTR_FROM_JSON(TableId, tableId_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      class ModelTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelTags& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ModelTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ModelTags() = default ;
        ModelTags(const ModelTags &) = default ;
        ModelTags(ModelTags &&) = default ;
        ModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelTags() = default ;
        ModelTags& operator=(const ModelTags &) = default ;
        ModelTags& operator=(ModelTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Data tag ID. Values:
        // - **101**: Personal sensitive information
        // - **102**: Personal information
        // - **107**: General information
        shared_ptr<int64_t> id_ {};
        // Data tag name. Values:
        // - Personal sensitive information
        // - Personal information
        // - General information
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->dataType_ == nullptr && this->engineType_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->maskingStatus_ == nullptr && this->modelTags_ == nullptr && this->name_ == nullptr && this->odpsRiskLevelName_ == nullptr && this->odpsRiskLevelValue_ == nullptr
        && this->productCode_ == nullptr && this->productId_ == nullptr && this->regionId_ == nullptr && this->revisionId_ == nullptr && this->revisionStatus_ == nullptr
        && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->sensLevelName_ == nullptr
        && this->sensitive_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Items& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Items& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Items& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // maskingStatus Field Functions 
      bool hasMaskingStatus() const { return this->maskingStatus_ != nullptr;};
      void deleteMaskingStatus() { this->maskingStatus_ = nullptr;};
      inline int32_t getMaskingStatus() const { DARABONBA_PTR_GET_DEFAULT(maskingStatus_, 0) };
      inline Items& setMaskingStatus(int32_t maskingStatus) { DARABONBA_PTR_SET_VALUE(maskingStatus_, maskingStatus) };


      // modelTags Field Functions 
      bool hasModelTags() const { return this->modelTags_ != nullptr;};
      void deleteModelTags() { this->modelTags_ = nullptr;};
      inline const vector<Items::ModelTags> & getModelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Items::ModelTags>) };
      inline vector<Items::ModelTags> getModelTags() { DARABONBA_PTR_GET(modelTags_, vector<Items::ModelTags>) };
      inline Items& setModelTags(const vector<Items::ModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
      inline Items& setModelTags(vector<Items::ModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // odpsRiskLevelName Field Functions 
      bool hasOdpsRiskLevelName() const { return this->odpsRiskLevelName_ != nullptr;};
      void deleteOdpsRiskLevelName() { this->odpsRiskLevelName_ = nullptr;};
      inline string getOdpsRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelName_, "") };
      inline Items& setOdpsRiskLevelName(string odpsRiskLevelName) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelName_, odpsRiskLevelName) };


      // odpsRiskLevelValue Field Functions 
      bool hasOdpsRiskLevelValue() const { return this->odpsRiskLevelValue_ != nullptr;};
      void deleteOdpsRiskLevelValue() { this->odpsRiskLevelValue_ = nullptr;};
      inline int32_t getOdpsRiskLevelValue() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelValue_, 0) };
      inline Items& setOdpsRiskLevelValue(int32_t odpsRiskLevelValue) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelValue_, odpsRiskLevelValue) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
      inline Items& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // revisionId Field Functions 
      bool hasRevisionId() const { return this->revisionId_ != nullptr;};
      void deleteRevisionId() { this->revisionId_ = nullptr;};
      inline int64_t getRevisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, 0L) };
      inline Items& setRevisionId(int64_t revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


      // revisionStatus Field Functions 
      bool hasRevisionStatus() const { return this->revisionStatus_ != nullptr;};
      void deleteRevisionStatus() { this->revisionStatus_ = nullptr;};
      inline int64_t getRevisionStatus() const { DARABONBA_PTR_GET_DEFAULT(revisionStatus_, 0L) };
      inline Items& setRevisionStatus(int64_t revisionStatus) { DARABONBA_PTR_SET_VALUE(revisionStatus_, revisionStatus) };


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


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline Items& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Items& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sensLevelName Field Functions 
      bool hasSensLevelName() const { return this->sensLevelName_ != nullptr;};
      void deleteSensLevelName() { this->sensLevelName_ = nullptr;};
      inline string getSensLevelName() const { DARABONBA_PTR_GET_DEFAULT(sensLevelName_, "") };
      inline Items& setSensLevelName(string sensLevelName) { DARABONBA_PTR_SET_VALUE(sensLevelName_, sensLevelName) };


      // sensitive Field Functions 
      bool hasSensitive() const { return this->sensitive_ != nullptr;};
      void deleteSensitive() { this->sensitive_ = nullptr;};
      inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
      inline Items& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


      // tableId Field Functions 
      bool hasTableId() const { return this->tableId_ != nullptr;};
      void deleteTableId() { this->tableId_ = nullptr;};
      inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
      inline Items& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The creation time of the column data in the data asset table, in milliseconds.
      shared_ptr<int64_t> creationTime_ {};
      // The data type of the column data in the data asset table.
      shared_ptr<string> dataType_ {};
      // Engine type. Values:
      // - **MySQL**
      // - **MariaDB**
      // - **Oracle**
      // - **PostgreSQL**
      // - **SQLServer**
      shared_ptr<string> engineType_ {};
      // The unique identifier ID of the column in the data asset table.
      shared_ptr<string> id_ {};
      // The ID of the asset instance to which the column data in the data asset table belongs.
      shared_ptr<int64_t> instanceId_ {};
      // The name of the asset instance to which the column data in the data asset table belongs.
      shared_ptr<string> instanceName_ {};
      // Column encryption status. Values:
      // 
      // - **-1**: Not encrypted
      // 
      // - **1**: Encryption successful
      // 
      // - **2**: Encryption failed
      shared_ptr<int32_t> maskingStatus_ {};
      // Data tag list.
      shared_ptr<vector<Items::ModelTags>> modelTags_ {};
      // The name of the column in the data asset table.
      shared_ptr<string> name_ {};
      // The risk level name of the asset. Values:
      // - **N/A**: No sensitive data detected.
      // - **S1**: Level 1 sensitive data.
      // - **S2**: Level 2 sensitive data.
      // - **S3**: Level 3 sensitive data.
      // - **S4**: Level 4 sensitive data.
      shared_ptr<string> odpsRiskLevelName_ {};
      // The risk level code of the asset. Values:
      // 
      // - **1**: N/A.
      // - **2**: S1.
      // - **3**: S2.
      // - **4**: S3.
      // - **5**: S4.
      // 
      // > A return value <= 1 represents N/A.
      shared_ptr<int32_t> odpsRiskLevelValue_ {};
      // The product name to which the column data in the data asset table belongs. Values: **MaxCompute, OSS, ADS, OTS, RDS**, etc.
      shared_ptr<string> productCode_ {};
      // The ID corresponding to the product name of the data asset. Values:
      // - **1**: MaxCompute
      // - **2**: OSS
      // - **3**: ADS
      // - **4**: OTS
      // - **5**: RDS
      // - **6**: SELF_DB
      shared_ptr<int64_t> productId_ {};
      // The region where the asset is located.
      shared_ptr<string> regionId_ {};
      // Correction record ID.
      shared_ptr<int64_t> revisionId_ {};
      // Correction status. Values:
      // - 1: Corrected.
      // - 0: Not corrected.
      shared_ptr<int64_t> revisionStatus_ {};
      // The risk level ID of the column data in the data asset table. Values:
      // - **1**: N/A.
      // - **2**: S1.
      // - **3**: S2.
      // - **4**: S3.
      // - **5**: S4.
      // 
      // > A return value <= 1 represents N/A.
      shared_ptr<int64_t> riskLevelId_ {};
      // The risk level name of the column data in the data asset table. Values:
      // - **N/A**: No sensitive data detected.
      // - **S1**: Level 1 sensitive data.
      // - **S2**: Level 2 sensitive data.
      // - **S3**: Level 3 sensitive data.
      // - **S4**: Level 4 sensitive data.
      shared_ptr<string> riskLevelName_ {};
      // The ID of the sensitive data recognition rule that the column data in the data asset table hits.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the sensitive data recognition rule that the column data in the data asset table hits.
      shared_ptr<string> ruleName_ {};
      // The sensitivity level name. Values:
      // - **N/A**: No sensitive data detected.
      // - **S1**: Level 1 sensitive data.
      // - **S2**: Level 2 sensitive data.
      // - **S3**: Level 3 sensitive data.
      // - **S4**: Level 4 sensitive data.
      shared_ptr<string> sensLevelName_ {};
      // Whether the column data in the data asset table contains sensitive data. Values:
      // 
      // - true: The column data in the data asset table contains sensitive data.
      // - false: The column data in the data asset table does not contain sensitive data.
      shared_ptr<bool> sensitive_ {};
      // The ID of the asset table to which the column data in the data asset table belongs.
      shared_ptr<int64_t> tableId_ {};
      // The name of the table to which the target column for correction belongs.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeColumnsV2ResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeColumnsV2ResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeColumnsV2ResponseBody::Items>) };
    inline vector<DescribeColumnsV2ResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeColumnsV2ResponseBody::Items>) };
    inline DescribeColumnsV2ResponseBody& setItems(const vector<DescribeColumnsV2ResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeColumnsV2ResponseBody& setItems(vector<DescribeColumnsV2ResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeColumnsV2ResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColumnsV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeColumnsV2ResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // When performing a paginated query, sets the current page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // List of recognition results for the columns in the data table.
    shared_ptr<vector<DescribeColumnsV2ResponseBody::Items>> items_ {};
    // When performing a paginated query, sets the maximum number of data asset instances displayed per page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // Total number of data entries in the result.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
