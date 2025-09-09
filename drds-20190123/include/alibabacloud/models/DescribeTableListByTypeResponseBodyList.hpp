// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLELISTBYTYPERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLELISTBYTYPERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeTableListByTypeResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableListByTypeResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableListByTypeResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeTableListByTypeResponseBodyList() = default ;
    DescribeTableListByTypeResponseBodyList(const DescribeTableListByTypeResponseBodyList &) = default ;
    DescribeTableListByTypeResponseBodyList(DescribeTableListByTypeResponseBodyList &&) = default ;
    DescribeTableListByTypeResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableListByTypeResponseBodyList() = default ;
    DescribeTableListByTypeResponseBodyList& operator=(const DescribeTableListByTypeResponseBodyList &) = default ;
    DescribeTableListByTypeResponseBodyList& operator=(DescribeTableListByTypeResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->property_ != nullptr
        && this->tableName_ != nullptr; };
    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline DescribeTableListByTypeResponseBodyList& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeTableListByTypeResponseBodyList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // Indicates the property of a table.
    std::shared_ptr<string> property_ = nullptr;
    // Indicates the name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
