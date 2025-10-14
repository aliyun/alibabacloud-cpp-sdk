// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTETABLELISTRESPONSEBODYDATATABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTETABLELISTRESPONSEBODYDATATABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDistributeTableListResponseBodyDataTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributeTableListResponseBodyDataTables& obj) { 
      DARABONBA_PTR_TO_JSON(DbKey, dbKey_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(TbKey, tbKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributeTableListResponseBodyDataTables& obj) { 
      DARABONBA_PTR_FROM_JSON(DbKey, dbKey_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(TbKey, tbKey_);
    };
    DescribeDistributeTableListResponseBodyDataTables() = default ;
    DescribeDistributeTableListResponseBodyDataTables(const DescribeDistributeTableListResponseBodyDataTables &) = default ;
    DescribeDistributeTableListResponseBodyDataTables(DescribeDistributeTableListResponseBodyDataTables &&) = default ;
    DescribeDistributeTableListResponseBodyDataTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributeTableListResponseBodyDataTables() = default ;
    DescribeDistributeTableListResponseBodyDataTables& operator=(const DescribeDistributeTableListResponseBodyDataTables &) = default ;
    DescribeDistributeTableListResponseBodyDataTables& operator=(DescribeDistributeTableListResponseBodyDataTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbKey_ == nullptr
        && return this->tableName_ == nullptr && return this->tableType_ == nullptr && return this->tbKey_ == nullptr; };
    // dbKey Field Functions 
    bool hasDbKey() const { return this->dbKey_ != nullptr;};
    void deleteDbKey() { this->dbKey_ = nullptr;};
    inline string dbKey() const { DARABONBA_PTR_GET_DEFAULT(dbKey_, "") };
    inline DescribeDistributeTableListResponseBodyDataTables& setDbKey(string dbKey) { DARABONBA_PTR_SET_VALUE(dbKey_, dbKey) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDistributeTableListResponseBodyDataTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline DescribeDistributeTableListResponseBodyDataTables& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // tbKey Field Functions 
    bool hasTbKey() const { return this->tbKey_ != nullptr;};
    void deleteTbKey() { this->tbKey_ = nullptr;};
    inline string tbKey() const { DARABONBA_PTR_GET_DEFAULT(tbKey_, "") };
    inline DescribeDistributeTableListResponseBodyDataTables& setTbKey(string tbKey) { DARABONBA_PTR_SET_VALUE(tbKey_, tbKey) };


  protected:
    std::shared_ptr<string> dbKey_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> tableType_ = nullptr;
    std::shared_ptr<string> tbKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
