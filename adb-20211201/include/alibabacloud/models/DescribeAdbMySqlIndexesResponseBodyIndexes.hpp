// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLINDEXESRESPONSEBODYINDEXES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLINDEXESRESPONSEBODYINDEXES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlIndexesResponseBodyIndexes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlIndexesResponseBodyIndexes& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlIndexesResponseBodyIndexes& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAdbMySqlIndexesResponseBodyIndexes() = default ;
    DescribeAdbMySqlIndexesResponseBodyIndexes(const DescribeAdbMySqlIndexesResponseBodyIndexes &) = default ;
    DescribeAdbMySqlIndexesResponseBodyIndexes(DescribeAdbMySqlIndexesResponseBodyIndexes &&) = default ;
    DescribeAdbMySqlIndexesResponseBodyIndexes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlIndexesResponseBodyIndexes() = default ;
    DescribeAdbMySqlIndexesResponseBodyIndexes& operator=(const DescribeAdbMySqlIndexesResponseBodyIndexes &) = default ;
    DescribeAdbMySqlIndexesResponseBodyIndexes& operator=(DescribeAdbMySqlIndexesResponseBodyIndexes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline DescribeAdbMySqlIndexesResponseBodyIndexes& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAdbMySqlIndexesResponseBodyIndexes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAdbMySqlIndexesResponseBodyIndexes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the column.
    std::shared_ptr<string> column_ = nullptr;
    // The name of the index.
    std::shared_ptr<string> name_ = nullptr;
    // The index type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
