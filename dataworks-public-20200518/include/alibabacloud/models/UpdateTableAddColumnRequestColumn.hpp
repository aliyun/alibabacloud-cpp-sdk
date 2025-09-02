// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNREQUESTCOLUMN_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEADDCOLUMNREQUESTCOLUMN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableAddColumnRequestColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableAddColumnRequestColumn& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnNameCn, columnNameCn_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableAddColumnRequestColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnNameCn, columnNameCn_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
    };
    UpdateTableAddColumnRequestColumn() = default ;
    UpdateTableAddColumnRequestColumn(const UpdateTableAddColumnRequestColumn &) = default ;
    UpdateTableAddColumnRequestColumn(UpdateTableAddColumnRequestColumn &&) = default ;
    UpdateTableAddColumnRequestColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableAddColumnRequestColumn() = default ;
    UpdateTableAddColumnRequestColumn& operator=(const UpdateTableAddColumnRequestColumn &) = default ;
    UpdateTableAddColumnRequestColumn& operator=(UpdateTableAddColumnRequestColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->columnNameCn_ != nullptr && this->columnType_ != nullptr && this->comment_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline UpdateTableAddColumnRequestColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnNameCn Field Functions 
    bool hasColumnNameCn() const { return this->columnNameCn_ != nullptr;};
    void deleteColumnNameCn() { this->columnNameCn_ = nullptr;};
    inline string columnNameCn() const { DARABONBA_PTR_GET_DEFAULT(columnNameCn_, "") };
    inline UpdateTableAddColumnRequestColumn& setColumnNameCn(string columnNameCn) { DARABONBA_PTR_SET_VALUE(columnNameCn_, columnNameCn) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline UpdateTableAddColumnRequestColumn& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateTableAddColumnRequestColumn& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


  protected:
    // The name of the field.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnName_ = nullptr;
    // The display name of the field.
    std::shared_ptr<string> columnNameCn_ = nullptr;
    // The type of the field. For more information, see MaxCompute field types.
    // 
    // This parameter is required.
    std::shared_ptr<string> columnType_ = nullptr;
    // The comment of the field.
    std::shared_ptr<string> comment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
