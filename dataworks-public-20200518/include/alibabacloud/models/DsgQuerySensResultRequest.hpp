// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGQUERYSENSRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGQUERYSENSRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgQuerySensResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgQuerySensResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Col, col_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SensStatus, sensStatus_);
      DARABONBA_PTR_TO_JSON(SensitiveId, sensitiveId_);
      DARABONBA_PTR_TO_JSON(SensitiveName, sensitiveName_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DsgQuerySensResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Col, col_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SensStatus, sensStatus_);
      DARABONBA_PTR_FROM_JSON(SensitiveId, sensitiveId_);
      DARABONBA_PTR_FROM_JSON(SensitiveName, sensitiveName_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    DsgQuerySensResultRequest() = default ;
    DsgQuerySensResultRequest(const DsgQuerySensResultRequest &) = default ;
    DsgQuerySensResultRequest(DsgQuerySensResultRequest &&) = default ;
    DsgQuerySensResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgQuerySensResultRequest() = default ;
    DsgQuerySensResultRequest& operator=(const DsgQuerySensResultRequest &) = default ;
    DsgQuerySensResultRequest& operator=(DsgQuerySensResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->col_ == nullptr
        && this->dbType_ == nullptr && this->level_ == nullptr && this->nodeName_ == nullptr && this->order_ == nullptr && this->orderField_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->projectName_ == nullptr && this->schemaName_ == nullptr && this->sensStatus_ == nullptr
        && this->sensitiveId_ == nullptr && this->sensitiveName_ == nullptr && this->table_ == nullptr && this->tenantId_ == nullptr && this->endDate_ == nullptr
        && this->startDate_ == nullptr; };
    // col Field Functions 
    bool hasCol() const { return this->col_ != nullptr;};
    void deleteCol() { this->col_ = nullptr;};
    inline string getCol() const { DARABONBA_PTR_GET_DEFAULT(col_, "") };
    inline DsgQuerySensResultRequest& setCol(string col) { DARABONBA_PTR_SET_VALUE(col_, col) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DsgQuerySensResultRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DsgQuerySensResultRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DsgQuerySensResultRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DsgQuerySensResultRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline DsgQuerySensResultRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DsgQuerySensResultRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DsgQuerySensResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DsgQuerySensResultRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DsgQuerySensResultRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // sensStatus Field Functions 
    bool hasSensStatus() const { return this->sensStatus_ != nullptr;};
    void deleteSensStatus() { this->sensStatus_ = nullptr;};
    inline string getSensStatus() const { DARABONBA_PTR_GET_DEFAULT(sensStatus_, "") };
    inline DsgQuerySensResultRequest& setSensStatus(string sensStatus) { DARABONBA_PTR_SET_VALUE(sensStatus_, sensStatus) };


    // sensitiveId Field Functions 
    bool hasSensitiveId() const { return this->sensitiveId_ != nullptr;};
    void deleteSensitiveId() { this->sensitiveId_ = nullptr;};
    inline string getSensitiveId() const { DARABONBA_PTR_GET_DEFAULT(sensitiveId_, "") };
    inline DsgQuerySensResultRequest& setSensitiveId(string sensitiveId) { DARABONBA_PTR_SET_VALUE(sensitiveId_, sensitiveId) };


    // sensitiveName Field Functions 
    bool hasSensitiveName() const { return this->sensitiveName_ != nullptr;};
    void deleteSensitiveName() { this->sensitiveName_ = nullptr;};
    inline string getSensitiveName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveName_, "") };
    inline DsgQuerySensResultRequest& setSensitiveName(string sensitiveName) { DARABONBA_PTR_SET_VALUE(sensitiveName_, sensitiveName) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DsgQuerySensResultRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DsgQuerySensResultRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DsgQuerySensResultRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DsgQuerySensResultRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The name of the field.
    shared_ptr<string> col_ {};
    // The type of the database. Valid values:
    // 
    // *   **ODPS.ODPS**
    // *   **HOLO.POSTGRES**
    // *   **EMR**
    shared_ptr<string> dbType_ {};
    // The sensitivity level of the field.
    shared_ptr<string> level_ {};
    // The name of a data category.
    shared_ptr<string> nodeName_ {};
    // The sorting method. Valid values:
    // 
    // *   DESC
    // *   ASC
    shared_ptr<string> order_ {};
    // The field used for sorting.
    // 
    // *   gmt_create
    // *   gmt_modified
    shared_ptr<string> orderField_ {};
    // The page number. Pages start from page 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the workspace name.
    shared_ptr<string> projectName_ {};
    // The name of the schema.
    shared_ptr<string> schemaName_ {};
    // The sensitivity status of the field.
    // 
    // *   1: indicates sensitive.
    // *   \\-1: indicates non-sensitive.
    shared_ptr<string> sensStatus_ {};
    // The sensitive field ID.
    shared_ptr<string> sensitiveId_ {};
    // The name of the sensitive field.
    shared_ptr<string> sensitiveName_ {};
    // The name of the table.
    shared_ptr<string> table_ {};
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
