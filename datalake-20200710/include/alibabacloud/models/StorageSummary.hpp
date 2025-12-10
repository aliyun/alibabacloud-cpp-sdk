// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_STORAGESUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StorageSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageSummary& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseNum, databaseNum_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(TableNum, tableNum_);
    };
    friend void from_json(const Darabonba::Json& j, StorageSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseNum, databaseNum_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(TableNum, tableNum_);
    };
    StorageSummary() = default ;
    StorageSummary(const StorageSummary &) = default ;
    StorageSummary(StorageSummary &&) = default ;
    StorageSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageSummary() = default ;
    StorageSummary& operator=(const StorageSummary &) = default ;
    StorageSummary& operator=(StorageSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseNum_ == nullptr
        && return this->partitionNum_ == nullptr && return this->tableNum_ == nullptr; };
    // databaseNum Field Functions 
    bool hasDatabaseNum() const { return this->databaseNum_ != nullptr;};
    void deleteDatabaseNum() { this->databaseNum_ = nullptr;};
    inline int32_t databaseNum() const { DARABONBA_PTR_GET_DEFAULT(databaseNum_, 0) };
    inline StorageSummary& setDatabaseNum(int32_t databaseNum) { DARABONBA_PTR_SET_VALUE(databaseNum_, databaseNum) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline StorageSummary& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // tableNum Field Functions 
    bool hasTableNum() const { return this->tableNum_ != nullptr;};
    void deleteTableNum() { this->tableNum_ = nullptr;};
    inline int32_t tableNum() const { DARABONBA_PTR_GET_DEFAULT(tableNum_, 0) };
    inline StorageSummary& setTableNum(int32_t tableNum) { DARABONBA_PTR_SET_VALUE(tableNum_, tableNum) };


  protected:
    std::shared_ptr<int32_t> databaseNum_ = nullptr;
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    std::shared_ptr<int32_t> tableNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
