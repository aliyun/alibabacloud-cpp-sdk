// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYTOTALUSAGESTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYTOTALUSAGESTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(TotalDiskUsage, totalDiskUsage_);
      DARABONBA_PTR_TO_JSON(TotalMemoryUsage, totalMemoryUsage_);
      DARABONBA_PTR_TO_JSON(TotalReadWriteCount, totalReadWriteCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalDiskUsage, totalDiskUsage_);
      DARABONBA_PTR_FROM_JSON(TotalMemoryUsage, totalMemoryUsage_);
      DARABONBA_PTR_FROM_JSON(TotalReadWriteCount, totalReadWriteCount_);
    };
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics() = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics(const ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics &) = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics(ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics &&) = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics() = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& operator=(const ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics &) = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& operator=(ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalDiskUsage_ == nullptr
        && return this->totalMemoryUsage_ == nullptr && return this->totalReadWriteCount_ == nullptr; };
    // totalDiskUsage Field Functions 
    bool hasTotalDiskUsage() const { return this->totalDiskUsage_ != nullptr;};
    void deleteTotalDiskUsage() { this->totalDiskUsage_ = nullptr;};
    inline double totalDiskUsage() const { DARABONBA_PTR_GET_DEFAULT(totalDiskUsage_, 0.0) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& setTotalDiskUsage(double totalDiskUsage) { DARABONBA_PTR_SET_VALUE(totalDiskUsage_, totalDiskUsage) };


    // totalMemoryUsage Field Functions 
    bool hasTotalMemoryUsage() const { return this->totalMemoryUsage_ != nullptr;};
    void deleteTotalMemoryUsage() { this->totalMemoryUsage_ = nullptr;};
    inline double totalMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(totalMemoryUsage_, 0.0) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& setTotalMemoryUsage(double totalMemoryUsage) { DARABONBA_PTR_SET_VALUE(totalMemoryUsage_, totalMemoryUsage) };


    // totalReadWriteCount Field Functions 
    bool hasTotalReadWriteCount() const { return this->totalReadWriteCount_ != nullptr;};
    void deleteTotalReadWriteCount() { this->totalReadWriteCount_ = nullptr;};
    inline const vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount> & totalReadWriteCount() const { DARABONBA_PTR_GET_CONST(totalReadWriteCount_, vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount>) };
    inline vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount> totalReadWriteCount() { DARABONBA_PTR_GET(totalReadWriteCount_, vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount>) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& setTotalReadWriteCount(const vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount> & totalReadWriteCount) { DARABONBA_PTR_SET_VALUE(totalReadWriteCount_, totalReadWriteCount) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatistics& setTotalReadWriteCount(vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount> && totalReadWriteCount) { DARABONBA_PTR_SET_RVALUE(totalReadWriteCount_, totalReadWriteCount) };


  protected:
    std::shared_ptr<double> totalDiskUsage_ = nullptr;
    std::shared_ptr<double> totalMemoryUsage_ = nullptr;
    std::shared_ptr<vector<Models::ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount>> totalReadWriteCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
