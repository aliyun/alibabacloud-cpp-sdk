// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODYDATARESULTPRIVILEGEOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODYDATARESULTPRIVILEGEOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject() = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject(const DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject &) = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject(DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject &&) = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject() = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& operator=(const DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject &) = default ;
    DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& operator=(DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->database_ != nullptr && this->description_ != nullptr && this->table_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DescribeAccountAllPrivilegesResponseBodyDataResultPrivilegeObject& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // The name of the column.
    std::shared_ptr<string> column_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The description of the permission object.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
