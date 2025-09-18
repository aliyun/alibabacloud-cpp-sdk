// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYTOTALUSAGESTATISTICSTOTALREADWRITECOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYTOTALUSAGESTATISTICSTOTALREADWRITECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(TotalReadCount, totalReadCount_);
      DARABONBA_PTR_TO_JSON(TotalWriteCount, totalWriteCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(TotalReadCount, totalReadCount_);
      DARABONBA_PTR_FROM_JSON(TotalWriteCount, totalWriteCount_);
    };
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount() = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount(const ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount &) = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount(ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount &&) = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount() = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& operator=(const ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount &) = default ;
    ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& operator=(ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->totalReadCount_ != nullptr && this->totalWriteCount_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // totalReadCount Field Functions 
    bool hasTotalReadCount() const { return this->totalReadCount_ != nullptr;};
    void deleteTotalReadCount() { this->totalReadCount_ = nullptr;};
    inline int64_t totalReadCount() const { DARABONBA_PTR_GET_DEFAULT(totalReadCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& setTotalReadCount(int64_t totalReadCount) { DARABONBA_PTR_SET_VALUE(totalReadCount_, totalReadCount) };


    // totalWriteCount Field Functions 
    bool hasTotalWriteCount() const { return this->totalWriteCount_ != nullptr;};
    void deleteTotalWriteCount() { this->totalWriteCount_ = nullptr;};
    inline int64_t totalWriteCount() const { DARABONBA_PTR_GET_DEFAULT(totalWriteCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBodyTotalUsageStatisticsTotalReadWriteCount& setTotalWriteCount(int64_t totalWriteCount) { DARABONBA_PTR_SET_VALUE(totalWriteCount_, totalWriteCount) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<int64_t> totalReadCount_ = nullptr;
    std::shared_ptr<int64_t> totalWriteCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
