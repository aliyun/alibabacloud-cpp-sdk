// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableAddColumnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableAddColumnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableAddColumnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    UpdateTableAddColumnRequest() = default ;
    UpdateTableAddColumnRequest(const UpdateTableAddColumnRequest &) = default ;
    UpdateTableAddColumnRequest(UpdateTableAddColumnRequest &&) = default ;
    UpdateTableAddColumnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableAddColumnRequest() = default ;
    UpdateTableAddColumnRequest& operator=(const UpdateTableAddColumnRequest &) = default ;
    UpdateTableAddColumnRequest& operator=(UpdateTableAddColumnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Column : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Column& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
        DARABONBA_PTR_TO_JSON(ColumnNameCn, columnNameCn_);
        DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
      };
      friend void from_json(const Darabonba::Json& j, Column& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
        DARABONBA_PTR_FROM_JSON(ColumnNameCn, columnNameCn_);
        DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
      };
      Column() = default ;
      Column(const Column &) = default ;
      Column(Column &&) = default ;
      Column(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Column() = default ;
      Column& operator=(const Column &) = default ;
      Column& operator=(Column &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnNameCn_ == nullptr && this->columnType_ == nullptr && this->comment_ == nullptr; };
      // columnName Field Functions 
      bool hasColumnName() const { return this->columnName_ != nullptr;};
      void deleteColumnName() { this->columnName_ = nullptr;};
      inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
      inline Column& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


      // columnNameCn Field Functions 
      bool hasColumnNameCn() const { return this->columnNameCn_ != nullptr;};
      void deleteColumnNameCn() { this->columnNameCn_ = nullptr;};
      inline string getColumnNameCn() const { DARABONBA_PTR_GET_DEFAULT(columnNameCn_, "") };
      inline Column& setColumnNameCn(string columnNameCn) { DARABONBA_PTR_SET_VALUE(columnNameCn_, columnNameCn) };


      // columnType Field Functions 
      bool hasColumnType() const { return this->columnType_ != nullptr;};
      void deleteColumnType() { this->columnType_ = nullptr;};
      inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
      inline Column& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Column& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    protected:
      // The name of the field.
      // 
      // This parameter is required.
      shared_ptr<string> columnName_ {};
      // The display name of the field.
      shared_ptr<string> columnNameCn_ {};
      // The type of the field. For more information, see MaxCompute field types.
      // 
      // This parameter is required.
      shared_ptr<string> columnType_ {};
      // The comment of the field.
      shared_ptr<string> comment_ {};
    };

    virtual bool empty() const override { return this->column_ == nullptr
        && this->tableGuid_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const vector<UpdateTableAddColumnRequest::Column> & getColumn() const { DARABONBA_PTR_GET_CONST(column_, vector<UpdateTableAddColumnRequest::Column>) };
    inline vector<UpdateTableAddColumnRequest::Column> getColumn() { DARABONBA_PTR_GET(column_, vector<UpdateTableAddColumnRequest::Column>) };
    inline UpdateTableAddColumnRequest& setColumn(const vector<UpdateTableAddColumnRequest::Column> & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline UpdateTableAddColumnRequest& setColumn(vector<UpdateTableAddColumnRequest::Column> && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline UpdateTableAddColumnRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The fields.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateTableAddColumnRequest::Column>> column_ {};
    // The globally unique identifier (GUID) of the MaxCompute table. Specify the GUID in the odps.projectName.tableName format.
    // 
    // This parameter is required.
    shared_ptr<string> tableGuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
