// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESROWINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODYPERMAPPLYORDERDETAILRESOURCESROWINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_TO_JSON(RowGroupId, rowGroupId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchMode, matchMode_);
      DARABONBA_PTR_FROM_JSON(RowGroupId, rowGroupId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo &&) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo() = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& operator=(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo &) = default ;
    GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& operator=(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->dbId_ != nullptr && this->logic_ != nullptr && this->matchMode_ != nullptr && this->rowGroupId_ != nullptr && this->schemaName_ != nullptr
        && this->tableName_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchMode Field Functions 
    bool hasMatchMode() const { return this->matchMode_ != nullptr;};
    void deleteMatchMode() { this->matchMode_ = nullptr;};
    inline string matchMode() const { DARABONBA_PTR_GET_DEFAULT(matchMode_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setMatchMode(string matchMode) { DARABONBA_PTR_SET_VALUE(matchMode_, matchMode) };


    // rowGroupId Field Functions 
    bool hasRowGroupId() const { return this->rowGroupId_ != nullptr;};
    void deleteRowGroupId() { this->rowGroupId_ = nullptr;};
    inline int64_t rowGroupId() const { DARABONBA_PTR_GET_DEFAULT(rowGroupId_, 0L) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setRowGroupId(int64_t rowGroupId) { DARABONBA_PTR_SET_VALUE(rowGroupId_, rowGroupId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesRowInfo& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<bool> logic_ = nullptr;
    std::shared_ptr<string> matchMode_ = nullptr;
    std::shared_ptr<int64_t> rowGroupId_ = nullptr;
    std::shared_ptr<string> schemaName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
