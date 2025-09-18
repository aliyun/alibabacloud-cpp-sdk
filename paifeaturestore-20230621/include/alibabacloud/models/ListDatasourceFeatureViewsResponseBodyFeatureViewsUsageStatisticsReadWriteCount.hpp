// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYFEATUREVIEWSUSAGESTATISTICSREADWRITECOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEFEATUREVIEWSRESPONSEBODYFEATUREVIEWSUSAGESTATISTICSREADWRITECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
      DARABONBA_PTR_TO_JSON(WriteCount, writeCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
      DARABONBA_PTR_FROM_JSON(WriteCount, writeCount_);
    };
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount() = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount(const ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount &) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount(ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount &&) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount() = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& operator=(const ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount &) = default ;
    ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& operator=(ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->readCount_ != nullptr && this->writeCount_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // readCount Field Functions 
    bool hasReadCount() const { return this->readCount_ != nullptr;};
    void deleteReadCount() { this->readCount_ = nullptr;};
    inline int64_t readCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


    // writeCount Field Functions 
    bool hasWriteCount() const { return this->writeCount_ != nullptr;};
    void deleteWriteCount() { this->writeCount_ = nullptr;};
    inline int64_t writeCount() const { DARABONBA_PTR_GET_DEFAULT(writeCount_, 0L) };
    inline ListDatasourceFeatureViewsResponseBodyFeatureViewsUsageStatisticsReadWriteCount& setWriteCount(int64_t writeCount) { DARABONBA_PTR_SET_VALUE(writeCount_, writeCount) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<int64_t> readCount_ = nullptr;
    std::shared_ptr<int64_t> writeCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
