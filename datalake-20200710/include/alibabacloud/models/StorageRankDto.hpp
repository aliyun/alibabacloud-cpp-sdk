// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORAGERANKDTO_HPP_
#define ALIBABACLOUD_MODELS_STORAGERANKDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DbStorageRank.hpp>
#include <alibabacloud/models/SmallFileCntRank.hpp>
#include <alibabacloud/models/TableStorageRank.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StorageRankDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StorageRankDTO& obj) { 
      DARABONBA_PTR_TO_JSON(dbStorageRank, dbStorageRank_);
      DARABONBA_PTR_TO_JSON(smallFileCntRank, smallFileCntRank_);
      DARABONBA_PTR_TO_JSON(tableStorageRank, tableStorageRank_);
    };
    friend void from_json(const Darabonba::Json& j, StorageRankDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(dbStorageRank, dbStorageRank_);
      DARABONBA_PTR_FROM_JSON(smallFileCntRank, smallFileCntRank_);
      DARABONBA_PTR_FROM_JSON(tableStorageRank, tableStorageRank_);
    };
    StorageRankDTO() = default ;
    StorageRankDTO(const StorageRankDTO &) = default ;
    StorageRankDTO(StorageRankDTO &&) = default ;
    StorageRankDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StorageRankDTO() = default ;
    StorageRankDTO& operator=(const StorageRankDTO &) = default ;
    StorageRankDTO& operator=(StorageRankDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbStorageRank_ == nullptr
        && return this->smallFileCntRank_ == nullptr && return this->tableStorageRank_ == nullptr; };
    // dbStorageRank Field Functions 
    bool hasDbStorageRank() const { return this->dbStorageRank_ != nullptr;};
    void deleteDbStorageRank() { this->dbStorageRank_ = nullptr;};
    inline const vector<DbStorageRank> & dbStorageRank() const { DARABONBA_PTR_GET_CONST(dbStorageRank_, vector<DbStorageRank>) };
    inline vector<DbStorageRank> dbStorageRank() { DARABONBA_PTR_GET(dbStorageRank_, vector<DbStorageRank>) };
    inline StorageRankDTO& setDbStorageRank(const vector<DbStorageRank> & dbStorageRank) { DARABONBA_PTR_SET_VALUE(dbStorageRank_, dbStorageRank) };
    inline StorageRankDTO& setDbStorageRank(vector<DbStorageRank> && dbStorageRank) { DARABONBA_PTR_SET_RVALUE(dbStorageRank_, dbStorageRank) };


    // smallFileCntRank Field Functions 
    bool hasSmallFileCntRank() const { return this->smallFileCntRank_ != nullptr;};
    void deleteSmallFileCntRank() { this->smallFileCntRank_ = nullptr;};
    inline const vector<SmallFileCntRank> & smallFileCntRank() const { DARABONBA_PTR_GET_CONST(smallFileCntRank_, vector<SmallFileCntRank>) };
    inline vector<SmallFileCntRank> smallFileCntRank() { DARABONBA_PTR_GET(smallFileCntRank_, vector<SmallFileCntRank>) };
    inline StorageRankDTO& setSmallFileCntRank(const vector<SmallFileCntRank> & smallFileCntRank) { DARABONBA_PTR_SET_VALUE(smallFileCntRank_, smallFileCntRank) };
    inline StorageRankDTO& setSmallFileCntRank(vector<SmallFileCntRank> && smallFileCntRank) { DARABONBA_PTR_SET_RVALUE(smallFileCntRank_, smallFileCntRank) };


    // tableStorageRank Field Functions 
    bool hasTableStorageRank() const { return this->tableStorageRank_ != nullptr;};
    void deleteTableStorageRank() { this->tableStorageRank_ = nullptr;};
    inline const vector<TableStorageRank> & tableStorageRank() const { DARABONBA_PTR_GET_CONST(tableStorageRank_, vector<TableStorageRank>) };
    inline vector<TableStorageRank> tableStorageRank() { DARABONBA_PTR_GET(tableStorageRank_, vector<TableStorageRank>) };
    inline StorageRankDTO& setTableStorageRank(const vector<TableStorageRank> & tableStorageRank) { DARABONBA_PTR_SET_VALUE(tableStorageRank_, tableStorageRank) };
    inline StorageRankDTO& setTableStorageRank(vector<TableStorageRank> && tableStorageRank) { DARABONBA_PTR_SET_RVALUE(tableStorageRank_, tableStorageRank) };


  protected:
    std::shared_ptr<vector<DbStorageRank>> dbStorageRank_ = nullptr;
    std::shared_ptr<vector<SmallFileCntRank>> smallFileCntRank_ = nullptr;
    std::shared_ptr<vector<TableStorageRank>> tableStorageRank_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
