// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLUMNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLUMNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListColumnsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListColumnsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataAssetSourceId, dataAssetSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, ListColumnsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataAssetSourceId, dataAssetSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    ListColumnsRequest() = default ;
    ListColumnsRequest(const ListColumnsRequest &) = default ;
    ListColumnsRequest(ListColumnsRequest &&) = default ;
    ListColumnsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListColumnsRequest() = default ;
    ListColumnsRequest& operator=(const ListColumnsRequest &) = default ;
    ListColumnsRequest& operator=(ListColumnsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->dataAssetSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->engineType_ == nullptr && this->instanceName_ == nullptr && this->lang_ == nullptr
        && this->name_ == nullptr && this->pageSize_ == nullptr && this->productCode_ == nullptr && this->riskLevelId_ == nullptr && this->ruleId_ == nullptr
        && this->tableName_ == nullptr && this->templateId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListColumnsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataAssetSourceId Field Functions 
    bool hasDataAssetSourceId() const { return this->dataAssetSourceId_ != nullptr;};
    void deleteDataAssetSourceId() { this->dataAssetSourceId_ = nullptr;};
    inline string getDataAssetSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataAssetSourceId_, "") };
    inline ListColumnsRequest& setDataAssetSourceId(string dataAssetSourceId) { DARABONBA_PTR_SET_VALUE(dataAssetSourceId_, dataAssetSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListColumnsRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline ListColumnsRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListColumnsRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListColumnsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListColumnsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListColumnsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListColumnsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline ListColumnsRequest& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListColumnsRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListColumnsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ListColumnsRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The page number of the current query. Pages start from 1.
    shared_ptr<int32_t> currentPage_ {};
    // The cloud database instance identity. Set this parameter to the InstanceId in the instance list.
    shared_ptr<string> dataAssetSourceId_ {};
    // The name of the database. Set this parameter to the DbName returned by ListDataSources.
    shared_ptr<string> dataSourceName_ {};
    // The type of the database engine. This parameter must be consistent with the EngineType of the target instance, such as MySQL or PostgreSQL.
    shared_ptr<string> engineType_ {};
    // The compatible parameter for the instance identity. DataAssetSourceId takes precedence. If both are specified, DataAssetSourceId is used.
    shared_ptr<string> instanceName_ {};
    // The language of the response description. Valid values: zh: Chinese; en: English.
    shared_ptr<string> lang_ {};
    // The filter condition for the column name.
    shared_ptr<string> name_ {};
    // The number of entries to return on each page. Keep other filter conditions consistent when querying the next page.
    shared_ptr<int32_t> pageSize_ {};
    // The code of the cloud service. Column encryption supports RDS, POLARDB, and PolarDBX2. If ProductId is also specified, the two parameters must match.
    shared_ptr<string> productCode_ {};
    // The identifier of the sensitivity level. You can obtain this value from the return list of ListRiskLevels.
    shared_ptr<int64_t> riskLevelId_ {};
    // The identifier of the detection rule or model. Set this parameter to the ID of the corresponding detection rule in the target template.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the data table. In PostgreSQL or Oracle scenarios, retain the schema.table format obtained from the table list.
    shared_ptr<string> tableName_ {};
    // The identifier of the data classification and grading template. You can obtain this value from Items[].Id returned by ListTemplates. Keep this parameter consistent with the selected sensitivity level and detection model.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
