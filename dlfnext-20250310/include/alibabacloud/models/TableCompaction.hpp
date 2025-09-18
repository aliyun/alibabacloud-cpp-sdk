// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLECOMPACTION_HPP_
#define ALIBABACLOUD_MODELS_TABLECOMPACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class TableCompaction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableCompaction& obj) { 
      DARABONBA_PTR_TO_JSON(catalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_TO_JSON(lastCompactedFileTime, lastCompactedFileTime_);
      DARABONBA_PTR_TO_JSON(latencyFileEarliestTime, latencyFileEarliestTime_);
      DARABONBA_PTR_TO_JSON(maxLevel0FileCount, maxLevel0FileCount_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
    };
    friend void from_json(const Darabonba::Json& j, TableCompaction& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(cuUsage, cuUsage_);
      DARABONBA_PTR_FROM_JSON(lastCompactedFileTime, lastCompactedFileTime_);
      DARABONBA_PTR_FROM_JSON(latencyFileEarliestTime, latencyFileEarliestTime_);
      DARABONBA_PTR_FROM_JSON(maxLevel0FileCount, maxLevel0FileCount_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
    };
    TableCompaction() = default ;
    TableCompaction(const TableCompaction &) = default ;
    TableCompaction(TableCompaction &&) = default ;
    TableCompaction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableCompaction() = default ;
    TableCompaction& operator=(const TableCompaction &) = default ;
    TableCompaction& operator=(TableCompaction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogId_ != nullptr
        && this->cuUsage_ != nullptr && this->lastCompactedFileTime_ != nullptr && this->latencyFileEarliestTime_ != nullptr && this->maxLevel0FileCount_ != nullptr && this->tableId_ != nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline TableCompaction& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // cuUsage Field Functions 
    bool hasCuUsage() const { return this->cuUsage_ != nullptr;};
    void deleteCuUsage() { this->cuUsage_ = nullptr;};
    inline double cuUsage() const { DARABONBA_PTR_GET_DEFAULT(cuUsage_, 0.0) };
    inline TableCompaction& setCuUsage(double cuUsage) { DARABONBA_PTR_SET_VALUE(cuUsage_, cuUsage) };


    // lastCompactedFileTime Field Functions 
    bool hasLastCompactedFileTime() const { return this->lastCompactedFileTime_ != nullptr;};
    void deleteLastCompactedFileTime() { this->lastCompactedFileTime_ = nullptr;};
    inline int64_t lastCompactedFileTime() const { DARABONBA_PTR_GET_DEFAULT(lastCompactedFileTime_, 0L) };
    inline TableCompaction& setLastCompactedFileTime(int64_t lastCompactedFileTime) { DARABONBA_PTR_SET_VALUE(lastCompactedFileTime_, lastCompactedFileTime) };


    // latencyFileEarliestTime Field Functions 
    bool hasLatencyFileEarliestTime() const { return this->latencyFileEarliestTime_ != nullptr;};
    void deleteLatencyFileEarliestTime() { this->latencyFileEarliestTime_ = nullptr;};
    inline int64_t latencyFileEarliestTime() const { DARABONBA_PTR_GET_DEFAULT(latencyFileEarliestTime_, 0L) };
    inline TableCompaction& setLatencyFileEarliestTime(int64_t latencyFileEarliestTime) { DARABONBA_PTR_SET_VALUE(latencyFileEarliestTime_, latencyFileEarliestTime) };


    // maxLevel0FileCount Field Functions 
    bool hasMaxLevel0FileCount() const { return this->maxLevel0FileCount_ != nullptr;};
    void deleteMaxLevel0FileCount() { this->maxLevel0FileCount_ = nullptr;};
    inline string maxLevel0FileCount() const { DARABONBA_PTR_GET_DEFAULT(maxLevel0FileCount_, "") };
    inline TableCompaction& setMaxLevel0FileCount(string maxLevel0FileCount) { DARABONBA_PTR_SET_VALUE(maxLevel0FileCount_, maxLevel0FileCount) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline TableCompaction& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<double> cuUsage_ = nullptr;
    std::shared_ptr<int64_t> lastCompactedFileTime_ = nullptr;
    std::shared_ptr<int64_t> latencyFileEarliestTime_ = nullptr;
    std::shared_ptr<string> maxLevel0FileCount_ = nullptr;
    std::shared_ptr<string> tableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
