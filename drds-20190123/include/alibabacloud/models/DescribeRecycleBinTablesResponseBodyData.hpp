// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECYCLEBINTABLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECYCLEBINTABLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeRecycleBinTablesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecycleBinTablesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(OriginalTableName, originalTableName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecycleBinTablesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(OriginalTableName, originalTableName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeRecycleBinTablesResponseBodyData() = default ;
    DescribeRecycleBinTablesResponseBodyData(const DescribeRecycleBinTablesResponseBodyData &) = default ;
    DescribeRecycleBinTablesResponseBodyData(DescribeRecycleBinTablesResponseBodyData &&) = default ;
    DescribeRecycleBinTablesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecycleBinTablesResponseBodyData() = default ;
    DescribeRecycleBinTablesResponseBodyData& operator=(const DescribeRecycleBinTablesResponseBodyData &) = default ;
    DescribeRecycleBinTablesResponseBodyData& operator=(DescribeRecycleBinTablesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->originalTableName_ != nullptr && this->tableName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeRecycleBinTablesResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // originalTableName Field Functions 
    bool hasOriginalTableName() const { return this->originalTableName_ != nullptr;};
    void deleteOriginalTableName() { this->originalTableName_ = nullptr;};
    inline string originalTableName() const { DARABONBA_PTR_GET_DEFAULT(originalTableName_, "") };
    inline DescribeRecycleBinTablesResponseBodyData& setOriginalTableName(string originalTableName) { DARABONBA_PTR_SET_VALUE(originalTableName_, originalTableName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeRecycleBinTablesResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The time when the table was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The original name of the table.
    std::shared_ptr<string> originalTableName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
