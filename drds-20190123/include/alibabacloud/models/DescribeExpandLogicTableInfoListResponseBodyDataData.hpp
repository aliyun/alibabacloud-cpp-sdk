// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPANDLOGICTABLEINFOLISTRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPANDLOGICTABLEINFOLISTRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeExpandLogicTableInfoListResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpandLogicTableInfoListResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(ShardDbKey, shardDbKey_);
      DARABONBA_PTR_TO_JSON(ShardTbKey, shardTbKey_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpandLogicTableInfoListResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(ShardDbKey, shardDbKey_);
      DARABONBA_PTR_FROM_JSON(ShardTbKey, shardTbKey_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    DescribeExpandLogicTableInfoListResponseBodyDataData() = default ;
    DescribeExpandLogicTableInfoListResponseBodyDataData(const DescribeExpandLogicTableInfoListResponseBodyDataData &) = default ;
    DescribeExpandLogicTableInfoListResponseBodyDataData(DescribeExpandLogicTableInfoListResponseBodyDataData &&) = default ;
    DescribeExpandLogicTableInfoListResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpandLogicTableInfoListResponseBodyDataData() = default ;
    DescribeExpandLogicTableInfoListResponseBodyDataData& operator=(const DescribeExpandLogicTableInfoListResponseBodyDataData &) = default ;
    DescribeExpandLogicTableInfoListResponseBodyDataData& operator=(DescribeExpandLogicTableInfoListResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shardDbKey_ != nullptr
        && this->shardTbKey_ != nullptr && this->tableName_ != nullptr; };
    // shardDbKey Field Functions 
    bool hasShardDbKey() const { return this->shardDbKey_ != nullptr;};
    void deleteShardDbKey() { this->shardDbKey_ = nullptr;};
    inline string shardDbKey() const { DARABONBA_PTR_GET_DEFAULT(shardDbKey_, "") };
    inline DescribeExpandLogicTableInfoListResponseBodyDataData& setShardDbKey(string shardDbKey) { DARABONBA_PTR_SET_VALUE(shardDbKey_, shardDbKey) };


    // shardTbKey Field Functions 
    bool hasShardTbKey() const { return this->shardTbKey_ != nullptr;};
    void deleteShardTbKey() { this->shardTbKey_ = nullptr;};
    inline string shardTbKey() const { DARABONBA_PTR_GET_DEFAULT(shardTbKey_, "") };
    inline DescribeExpandLogicTableInfoListResponseBodyDataData& setShardTbKey(string shardTbKey) { DARABONBA_PTR_SET_VALUE(shardTbKey_, shardTbKey) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeExpandLogicTableInfoListResponseBodyDataData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // Indicates the database sharding key.
    std::shared_ptr<string> shardDbKey_ = nullptr;
    // Indicates the table sharding key.
    std::shared_ptr<string> shardTbKey_ = nullptr;
    // Indicates the name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
