// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHIVEDATABASESRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHIVEDATABASESRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHiveDatabasesResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHiveDatabasesResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(ColdDataRatio, coldDataRatio_);
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(EmptyFileCount, emptyFileCount_);
      DARABONBA_PTR_TO_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(EmptyFileRatio, emptyFileRatio_);
      DARABONBA_PTR_TO_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(FreezeDataRatio, freezeDataRatio_);
      DARABONBA_PTR_TO_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_TO_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(HotDataRatio, hotDataRatio_);
      DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_TO_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(LargeFileCount, largeFileCount_);
      DARABONBA_PTR_TO_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(LargeFileRatio, largeFileRatio_);
      DARABONBA_PTR_TO_JSON(MediumFileCount, mediumFileCount_);
      DARABONBA_PTR_TO_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(MediumFileRatio, mediumFileRatio_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(SmallFileCount, smallFileCount_);
      DARABONBA_PTR_TO_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(SmallFileRatio, smallFileRatio_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TinyFileCount, tinyFileCount_);
      DARABONBA_PTR_TO_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(TinyFileRatio, tinyFileRatio_);
      DARABONBA_PTR_TO_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
      DARABONBA_PTR_TO_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(WarmDataRatio, warmDataRatio_);
      DARABONBA_PTR_TO_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_TO_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHiveDatabasesResponseBodyDataMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdDataDayGrowthSize, coldDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataRatio, coldDataRatio_);
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(ColdDataSizeDayGrowthRatio, coldDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(EmptyFileCount, emptyFileCount_);
      DARABONBA_PTR_FROM_JSON(EmptyFileCountDayGrowthRatio, emptyFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(EmptyFileDayGrowthCount, emptyFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(EmptyFileRatio, emptyFileRatio_);
      DARABONBA_PTR_FROM_JSON(FreezeDataDayGrowthSize, freezeDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(FreezeDataRatio, freezeDataRatio_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSize, freezeDataSize_);
      DARABONBA_PTR_FROM_JSON(FreezeDataSizeDayGrowthRatio, freezeDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(HotDataDayGrowthSize, hotDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(HotDataRatio, hotDataRatio_);
      DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_FROM_JSON(HotDataSizeDayGrowthRatio, hotDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(LargeFileCount, largeFileCount_);
      DARABONBA_PTR_FROM_JSON(LargeFileCountDayGrowthRatio, largeFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(LargeFileDayGrowthCount, largeFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(LargeFileRatio, largeFileRatio_);
      DARABONBA_PTR_FROM_JSON(MediumFileCount, mediumFileCount_);
      DARABONBA_PTR_FROM_JSON(MediumFileCountDayGrowthRatio, mediumFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(MediumFileDayGrowthCount, mediumFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(MediumFileRatio, mediumFileRatio_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(SmallFileCount, smallFileCount_);
      DARABONBA_PTR_FROM_JSON(SmallFileCountDayGrowthRatio, smallFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(SmallFileDayGrowthCount, smallFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(SmallFileRatio, smallFileRatio_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileCount, tinyFileCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileCountDayGrowthRatio, tinyFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TinyFileDayGrowthCount, tinyFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(TinyFileRatio, tinyFileRatio_);
      DARABONBA_PTR_FROM_JSON(TotalDataDayGrowthSize, totalDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalDataSizeDayGrowthRatio, totalDataSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TotalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(TotalFileCountDayGrowthRatio, totalFileCountDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(TotalFileDayGrowthCount, totalFileDayGrowthCount_);
      DARABONBA_PTR_FROM_JSON(WarmDataDayGrowthSize, warmDataDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(WarmDataRatio, warmDataRatio_);
      DARABONBA_PTR_FROM_JSON(WarmDataSize, warmDataSize_);
      DARABONBA_PTR_FROM_JSON(WarmDataSizeDayGrowthRatio, warmDataSizeDayGrowthRatio_);
    };
    ListDoctorHiveDatabasesResponseBodyDataMetrics() = default ;
    ListDoctorHiveDatabasesResponseBodyDataMetrics(const ListDoctorHiveDatabasesResponseBodyDataMetrics &) = default ;
    ListDoctorHiveDatabasesResponseBodyDataMetrics(ListDoctorHiveDatabasesResponseBodyDataMetrics &&) = default ;
    ListDoctorHiveDatabasesResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHiveDatabasesResponseBodyDataMetrics() = default ;
    ListDoctorHiveDatabasesResponseBodyDataMetrics& operator=(const ListDoctorHiveDatabasesResponseBodyDataMetrics &) = default ;
    ListDoctorHiveDatabasesResponseBodyDataMetrics& operator=(ListDoctorHiveDatabasesResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coldDataDayGrowthSize_ != nullptr
        && this->coldDataRatio_ != nullptr && this->coldDataSize_ != nullptr && this->coldDataSizeDayGrowthRatio_ != nullptr && this->emptyFileCount_ != nullptr && this->emptyFileCountDayGrowthRatio_ != nullptr
        && this->emptyFileDayGrowthCount_ != nullptr && this->emptyFileRatio_ != nullptr && this->freezeDataDayGrowthSize_ != nullptr && this->freezeDataRatio_ != nullptr && this->freezeDataSize_ != nullptr
        && this->freezeDataSizeDayGrowthRatio_ != nullptr && this->hotDataDayGrowthSize_ != nullptr && this->hotDataRatio_ != nullptr && this->hotDataSize_ != nullptr && this->hotDataSizeDayGrowthRatio_ != nullptr
        && this->largeFileCount_ != nullptr && this->largeFileCountDayGrowthRatio_ != nullptr && this->largeFileDayGrowthCount_ != nullptr && this->largeFileRatio_ != nullptr && this->mediumFileCount_ != nullptr
        && this->mediumFileCountDayGrowthRatio_ != nullptr && this->mediumFileDayGrowthCount_ != nullptr && this->mediumFileRatio_ != nullptr && this->partitionNum_ != nullptr && this->smallFileCount_ != nullptr
        && this->smallFileCountDayGrowthRatio_ != nullptr && this->smallFileDayGrowthCount_ != nullptr && this->smallFileRatio_ != nullptr && this->tableCount_ != nullptr && this->tinyFileCount_ != nullptr
        && this->tinyFileCountDayGrowthRatio_ != nullptr && this->tinyFileDayGrowthCount_ != nullptr && this->tinyFileRatio_ != nullptr && this->totalDataDayGrowthSize_ != nullptr && this->totalDataSize_ != nullptr
        && this->totalDataSizeDayGrowthRatio_ != nullptr && this->totalFileCount_ != nullptr && this->totalFileCountDayGrowthRatio_ != nullptr && this->totalFileDayGrowthCount_ != nullptr && this->warmDataDayGrowthSize_ != nullptr
        && this->warmDataRatio_ != nullptr && this->warmDataSize_ != nullptr && this->warmDataSizeDayGrowthRatio_ != nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataRatio Field Functions 
    bool hasColdDataRatio() const { return this->coldDataRatio_ != nullptr;};
    void deleteColdDataRatio() { this->coldDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio & coldDataRatio() const { DARABONBA_PTR_GET_CONST(coldDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio coldDataRatio() { DARABONBA_PTR_GET(coldDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio & coldDataRatio) { DARABONBA_PTR_SET_VALUE(coldDataRatio_, coldDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio && coldDataRatio) { DARABONBA_PTR_SET_RVALUE(coldDataRatio_, coldDataRatio) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // emptyFileRatio Field Functions 
    bool hasEmptyFileRatio() const { return this->emptyFileRatio_ != nullptr;};
    void deleteEmptyFileRatio() { this->emptyFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio() const { DARABONBA_PTR_GET_CONST(emptyFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio emptyFileRatio() { DARABONBA_PTR_GET(emptyFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio) { DARABONBA_PTR_SET_VALUE(emptyFileRatio_, emptyFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setEmptyFileRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio && emptyFileRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileRatio_, emptyFileRatio) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataRatio Field Functions 
    bool hasFreezeDataRatio() const { return this->freezeDataRatio_ != nullptr;};
    void deleteFreezeDataRatio() { this->freezeDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio() const { DARABONBA_PTR_GET_CONST(freezeDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio freezeDataRatio() { DARABONBA_PTR_GET(freezeDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio) { DARABONBA_PTR_SET_VALUE(freezeDataRatio_, freezeDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio && freezeDataRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataRatio_, freezeDataRatio) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataRatio Field Functions 
    bool hasHotDataRatio() const { return this->hotDataRatio_ != nullptr;};
    void deleteHotDataRatio() { this->hotDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio & hotDataRatio() const { DARABONBA_PTR_GET_CONST(hotDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio hotDataRatio() { DARABONBA_PTR_GET(hotDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio & hotDataRatio) { DARABONBA_PTR_SET_VALUE(hotDataRatio_, hotDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio && hotDataRatio) { DARABONBA_PTR_SET_RVALUE(hotDataRatio_, hotDataRatio) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // largeFileRatio Field Functions 
    bool hasLargeFileRatio() const { return this->largeFileRatio_ != nullptr;};
    void deleteLargeFileRatio() { this->largeFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio & largeFileRatio() const { DARABONBA_PTR_GET_CONST(largeFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio largeFileRatio() { DARABONBA_PTR_GET(largeFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio & largeFileRatio) { DARABONBA_PTR_SET_VALUE(largeFileRatio_, largeFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setLargeFileRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio && largeFileRatio) { DARABONBA_PTR_SET_RVALUE(largeFileRatio_, largeFileRatio) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // mediumFileRatio Field Functions 
    bool hasMediumFileRatio() const { return this->mediumFileRatio_ != nullptr;};
    void deleteMediumFileRatio() { this->mediumFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio & mediumFileRatio() const { DARABONBA_PTR_GET_CONST(mediumFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio mediumFileRatio() { DARABONBA_PTR_GET(mediumFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio & mediumFileRatio) { DARABONBA_PTR_SET_VALUE(mediumFileRatio_, mediumFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setMediumFileRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio && mediumFileRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileRatio_, mediumFileRatio) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum & partitionNum() const { DARABONBA_PTR_GET_CONST(partitionNum_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum partitionNum() { DARABONBA_PTR_GET(partitionNum_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setPartitionNum(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum & partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setPartitionNum(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum && partitionNum) { DARABONBA_PTR_SET_RVALUE(partitionNum_, partitionNum) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // smallFileRatio Field Functions 
    bool hasSmallFileRatio() const { return this->smallFileRatio_ != nullptr;};
    void deleteSmallFileRatio() { this->smallFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio & smallFileRatio() const { DARABONBA_PTR_GET_CONST(smallFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio smallFileRatio() { DARABONBA_PTR_GET(smallFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio & smallFileRatio) { DARABONBA_PTR_SET_VALUE(smallFileRatio_, smallFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setSmallFileRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio && smallFileRatio) { DARABONBA_PTR_SET_RVALUE(smallFileRatio_, smallFileRatio) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount & tableCount() const { DARABONBA_PTR_GET_CONST(tableCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount tableCount() { DARABONBA_PTR_GET(tableCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTableCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount & tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTableCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount && tableCount) { DARABONBA_PTR_SET_RVALUE(tableCount_, tableCount) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // tinyFileRatio Field Functions 
    bool hasTinyFileRatio() const { return this->tinyFileRatio_ != nullptr;};
    void deleteTinyFileRatio() { this->tinyFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio & tinyFileRatio() const { DARABONBA_PTR_GET_CONST(tinyFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio tinyFileRatio() { DARABONBA_PTR_GET(tinyFileRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio & tinyFileRatio) { DARABONBA_PTR_SET_VALUE(tinyFileRatio_, tinyFileRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTinyFileRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio && tinyFileRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileRatio_, tinyFileRatio) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalDataSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalDataSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalFileCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalFileCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataRatio Field Functions 
    bool hasWarmDataRatio() const { return this->warmDataRatio_ != nullptr;};
    void deleteWarmDataRatio() { this->warmDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio & warmDataRatio() const { DARABONBA_PTR_GET_CONST(warmDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio warmDataRatio() { DARABONBA_PTR_GET(warmDataRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio & warmDataRatio) { DARABONBA_PTR_SET_VALUE(warmDataRatio_, warmDataRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio && warmDataRatio) { DARABONBA_PTR_SET_RVALUE(warmDataRatio_, warmDataRatio) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataSize(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataSize(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline ListDoctorHiveDatabasesResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The proportion of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataRatio> coldDataRatio_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The proportion of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsEmptyFileRatio> emptyFileRatio_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The proportion of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataRatio> freezeDataRatio_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The proportion of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataRatio> hotDataRatio_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in recent seven days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The proportion of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsLargeFileRatio> largeFileRatio_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The proportion of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsMediumFileRatio> mediumFileRatio_ = nullptr;
    // The number of partitions.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsPartitionNum> partitionNum_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The proportion of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsSmallFileRatio> smallFileRatio_ = nullptr;
    // The number of tables.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTableCount> tableCount_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The proportion of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTinyFileRatio> tinyFileRatio_ = nullptr;
    // The daily increment of the total data volume.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total data volume.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The proportion of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataRatio> warmDataRatio_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in 30 days.
    std::shared_ptr<Models::ListDoctorHiveDatabasesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
