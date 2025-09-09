// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTMAPPING_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHOTEXPANDTASKREQUESTMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SubmitHotExpandTaskRequestMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHotExpandTaskRequestMapping& obj) { 
      DARABONBA_PTR_TO_JSON(DbShardColumn, dbShardColumn_);
      DARABONBA_PTR_TO_JSON(HotDbName, hotDbName_);
      DARABONBA_PTR_TO_JSON(HotTableName, hotTableName_);
      DARABONBA_PTR_TO_JSON(LogicTable, logicTable_);
      DARABONBA_PTR_TO_JSON(ShardDbValue, shardDbValue_);
      DARABONBA_PTR_TO_JSON(ShardTbValue, shardTbValue_);
      DARABONBA_PTR_TO_JSON(TbShardColumn, tbShardColumn_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHotExpandTaskRequestMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(DbShardColumn, dbShardColumn_);
      DARABONBA_PTR_FROM_JSON(HotDbName, hotDbName_);
      DARABONBA_PTR_FROM_JSON(HotTableName, hotTableName_);
      DARABONBA_PTR_FROM_JSON(LogicTable, logicTable_);
      DARABONBA_PTR_FROM_JSON(ShardDbValue, shardDbValue_);
      DARABONBA_PTR_FROM_JSON(ShardTbValue, shardTbValue_);
      DARABONBA_PTR_FROM_JSON(TbShardColumn, tbShardColumn_);
    };
    SubmitHotExpandTaskRequestMapping() = default ;
    SubmitHotExpandTaskRequestMapping(const SubmitHotExpandTaskRequestMapping &) = default ;
    SubmitHotExpandTaskRequestMapping(SubmitHotExpandTaskRequestMapping &&) = default ;
    SubmitHotExpandTaskRequestMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHotExpandTaskRequestMapping() = default ;
    SubmitHotExpandTaskRequestMapping& operator=(const SubmitHotExpandTaskRequestMapping &) = default ;
    SubmitHotExpandTaskRequestMapping& operator=(SubmitHotExpandTaskRequestMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbShardColumn_ != nullptr
        && this->hotDbName_ != nullptr && this->hotTableName_ != nullptr && this->logicTable_ != nullptr && this->shardDbValue_ != nullptr && this->shardTbValue_ != nullptr
        && this->tbShardColumn_ != nullptr; };
    // dbShardColumn Field Functions 
    bool hasDbShardColumn() const { return this->dbShardColumn_ != nullptr;};
    void deleteDbShardColumn() { this->dbShardColumn_ = nullptr;};
    inline string dbShardColumn() const { DARABONBA_PTR_GET_DEFAULT(dbShardColumn_, "") };
    inline SubmitHotExpandTaskRequestMapping& setDbShardColumn(string dbShardColumn) { DARABONBA_PTR_SET_VALUE(dbShardColumn_, dbShardColumn) };


    // hotDbName Field Functions 
    bool hasHotDbName() const { return this->hotDbName_ != nullptr;};
    void deleteHotDbName() { this->hotDbName_ = nullptr;};
    inline string hotDbName() const { DARABONBA_PTR_GET_DEFAULT(hotDbName_, "") };
    inline SubmitHotExpandTaskRequestMapping& setHotDbName(string hotDbName) { DARABONBA_PTR_SET_VALUE(hotDbName_, hotDbName) };


    // hotTableName Field Functions 
    bool hasHotTableName() const { return this->hotTableName_ != nullptr;};
    void deleteHotTableName() { this->hotTableName_ = nullptr;};
    inline string hotTableName() const { DARABONBA_PTR_GET_DEFAULT(hotTableName_, "") };
    inline SubmitHotExpandTaskRequestMapping& setHotTableName(string hotTableName) { DARABONBA_PTR_SET_VALUE(hotTableName_, hotTableName) };


    // logicTable Field Functions 
    bool hasLogicTable() const { return this->logicTable_ != nullptr;};
    void deleteLogicTable() { this->logicTable_ = nullptr;};
    inline string logicTable() const { DARABONBA_PTR_GET_DEFAULT(logicTable_, "") };
    inline SubmitHotExpandTaskRequestMapping& setLogicTable(string logicTable) { DARABONBA_PTR_SET_VALUE(logicTable_, logicTable) };


    // shardDbValue Field Functions 
    bool hasShardDbValue() const { return this->shardDbValue_ != nullptr;};
    void deleteShardDbValue() { this->shardDbValue_ = nullptr;};
    inline string shardDbValue() const { DARABONBA_PTR_GET_DEFAULT(shardDbValue_, "") };
    inline SubmitHotExpandTaskRequestMapping& setShardDbValue(string shardDbValue) { DARABONBA_PTR_SET_VALUE(shardDbValue_, shardDbValue) };


    // shardTbValue Field Functions 
    bool hasShardTbValue() const { return this->shardTbValue_ != nullptr;};
    void deleteShardTbValue() { this->shardTbValue_ = nullptr;};
    inline string shardTbValue() const { DARABONBA_PTR_GET_DEFAULT(shardTbValue_, "") };
    inline SubmitHotExpandTaskRequestMapping& setShardTbValue(string shardTbValue) { DARABONBA_PTR_SET_VALUE(shardTbValue_, shardTbValue) };


    // tbShardColumn Field Functions 
    bool hasTbShardColumn() const { return this->tbShardColumn_ != nullptr;};
    void deleteTbShardColumn() { this->tbShardColumn_ = nullptr;};
    inline string tbShardColumn() const { DARABONBA_PTR_GET_DEFAULT(tbShardColumn_, "") };
    inline SubmitHotExpandTaskRequestMapping& setTbShardColumn(string tbShardColumn) { DARABONBA_PTR_SET_VALUE(tbShardColumn_, tbShardColumn) };


  protected:
    // The shard key used to split the database to which the associated table belongs.
    std::shared_ptr<string> dbShardColumn_ = nullptr;
    // The name of the hot-spot database.
    std::shared_ptr<string> hotDbName_ = nullptr;
    // The name of the hot-spot table. The name must be prefixed with the name of a logical table.
    std::shared_ptr<string> hotTableName_ = nullptr;
    // The name of the logical table on which you want to perform hot-spot scale-out.
    std::shared_ptr<string> logicTable_ = nullptr;
    // The value of the shard key used to split a database.
    std::shared_ptr<string> shardDbValue_ = nullptr;
    // The value of the shard key used to split a table.
    std::shared_ptr<string> shardTbValue_ = nullptr;
    // The shard key used to split an associated table.
    std::shared_ptr<string> tbShardColumn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
