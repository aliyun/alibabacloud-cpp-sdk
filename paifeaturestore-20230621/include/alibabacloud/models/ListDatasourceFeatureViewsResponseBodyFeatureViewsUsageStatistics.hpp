// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYFEATUREVIEWSUSAGESTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYFEATUREVIEWSUSAGESTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
      DARABONBA_PTR_TO_JSON(ReadWriteCount, readWriteCount_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
      DARABONBA_PTR_FROM_JSON(ReadWriteCount, readWriteCount_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
    };
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics() = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics(const ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics &) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics(ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics &&) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics() = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& operator=(const ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics &) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& operator=(ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskUsage_ != nullptr
        && this->memoryUsage_ != nullptr && this->readWriteCount_ != nullptr && this->rowCount_ != nullptr; };
    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline double diskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, 0.0) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& setDiskUsage(double diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline double memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0.0) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& setMemoryUsage(double memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // readWriteCount Field Functions 
    bool hasReadWriteCount() const { return this->readWriteCount_ != nullptr;};
    void deleteReadWriteCount() { this->readWriteCount_ = nullptr;};
    inline const vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount> & readWriteCount() const { DARABONBA_PTR_GET_CONST(readWriteCount_, vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount>) };
    inline vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount> readWriteCount() { DARABONBA_PTR_GET(readWriteCount_, vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount>) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& setReadWriteCount(const vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount> & readWriteCount) { DARABONBA_PTR_SET_VALUE(readWriteCount_, readWriteCount) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& setReadWriteCount(vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount> && readWriteCount) { DARABONBA_PTR_SET_RVALUE(readWriteCount_, readWriteCount) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatistics& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


  protected:
    std::shared_ptr<double> diskUsage_ = nullptr;
    std::shared_ptr<double> memoryUsage_ = nullptr;
    std::shared_ptr<vector<Models::ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount>> readWriteCount_ = nullptr;
    std::shared_ptr<int64_t> rowCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
