// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHIVETABLESRESPONSEBODYDATAMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHIVETABLESRESPONSEBODYDATAMETRICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize.hpp>
#include <alibabacloud/models/ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHiveTablesResponseBodyDataMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHiveTablesResponseBodyDataMetrics& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDoctorHiveTablesResponseBodyDataMetrics& obj) { 
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
    ListDoctorHiveTablesResponseBodyDataMetrics() = default ;
    ListDoctorHiveTablesResponseBodyDataMetrics(const ListDoctorHiveTablesResponseBodyDataMetrics &) = default ;
    ListDoctorHiveTablesResponseBodyDataMetrics(ListDoctorHiveTablesResponseBodyDataMetrics &&) = default ;
    ListDoctorHiveTablesResponseBodyDataMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHiveTablesResponseBodyDataMetrics() = default ;
    ListDoctorHiveTablesResponseBodyDataMetrics& operator=(const ListDoctorHiveTablesResponseBodyDataMetrics &) = default ;
    ListDoctorHiveTablesResponseBodyDataMetrics& operator=(ListDoctorHiveTablesResponseBodyDataMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldDataDayGrowthSize_ == nullptr
        && return this->coldDataRatio_ == nullptr && return this->coldDataSize_ == nullptr && return this->coldDataSizeDayGrowthRatio_ == nullptr && return this->emptyFileCount_ == nullptr && return this->emptyFileCountDayGrowthRatio_ == nullptr
        && return this->emptyFileDayGrowthCount_ == nullptr && return this->emptyFileRatio_ == nullptr && return this->freezeDataDayGrowthSize_ == nullptr && return this->freezeDataRatio_ == nullptr && return this->freezeDataSize_ == nullptr
        && return this->freezeDataSizeDayGrowthRatio_ == nullptr && return this->hotDataDayGrowthSize_ == nullptr && return this->hotDataRatio_ == nullptr && return this->hotDataSize_ == nullptr && return this->hotDataSizeDayGrowthRatio_ == nullptr
        && return this->largeFileCount_ == nullptr && return this->largeFileCountDayGrowthRatio_ == nullptr && return this->largeFileDayGrowthCount_ == nullptr && return this->largeFileRatio_ == nullptr && return this->mediumFileCount_ == nullptr
        && return this->mediumFileCountDayGrowthRatio_ == nullptr && return this->mediumFileDayGrowthCount_ == nullptr && return this->mediumFileRatio_ == nullptr && return this->partitionNum_ == nullptr && return this->smallFileCount_ == nullptr
        && return this->smallFileCountDayGrowthRatio_ == nullptr && return this->smallFileDayGrowthCount_ == nullptr && return this->smallFileRatio_ == nullptr && return this->tinyFileCount_ == nullptr && return this->tinyFileCountDayGrowthRatio_ == nullptr
        && return this->tinyFileDayGrowthCount_ == nullptr && return this->tinyFileRatio_ == nullptr && return this->totalDataDayGrowthSize_ == nullptr && return this->totalDataSize_ == nullptr && return this->totalDataSizeDayGrowthRatio_ == nullptr
        && return this->totalFileCount_ == nullptr && return this->totalFileCountDayGrowthRatio_ == nullptr && return this->totalFileDayGrowthCount_ == nullptr && return this->warmDataDayGrowthSize_ == nullptr && return this->warmDataRatio_ == nullptr
        && return this->warmDataSize_ == nullptr && return this->warmDataSizeDayGrowthRatio_ == nullptr; };
    // coldDataDayGrowthSize Field Functions 
    bool hasColdDataDayGrowthSize() const { return this->coldDataDayGrowthSize_ != nullptr;};
    void deleteColdDataDayGrowthSize() { this->coldDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(coldDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize coldDataDayGrowthSize() { DARABONBA_PTR_GET(coldDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataDayGrowthSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize & coldDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataDayGrowthSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize && coldDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(coldDataDayGrowthSize_, coldDataDayGrowthSize) };


    // coldDataRatio Field Functions 
    bool hasColdDataRatio() const { return this->coldDataRatio_ != nullptr;};
    void deleteColdDataRatio() { this->coldDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio & coldDataRatio() const { DARABONBA_PTR_GET_CONST(coldDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio coldDataRatio() { DARABONBA_PTR_GET(coldDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio & coldDataRatio) { DARABONBA_PTR_SET_VALUE(coldDataRatio_, coldDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio && coldDataRatio) { DARABONBA_PTR_SET_RVALUE(coldDataRatio_, coldDataRatio) };


    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize & coldDataSize() const { DARABONBA_PTR_GET_CONST(coldDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize coldDataSize() { DARABONBA_PTR_GET(coldDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize & coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize && coldDataSize) { DARABONBA_PTR_SET_RVALUE(coldDataSize_, coldDataSize) };


    // coldDataSizeDayGrowthRatio Field Functions 
    bool hasColdDataSizeDayGrowthRatio() const { return this->coldDataSizeDayGrowthRatio_ != nullptr;};
    void deleteColdDataSizeDayGrowthRatio() { this->coldDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(coldDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio coldDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(coldDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio & coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setColdDataSizeDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio && coldDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(coldDataSizeDayGrowthRatio_, coldDataSizeDayGrowthRatio) };


    // emptyFileCount Field Functions 
    bool hasEmptyFileCount() const { return this->emptyFileCount_ != nullptr;};
    void deleteEmptyFileCount() { this->emptyFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount & emptyFileCount() const { DARABONBA_PTR_GET_CONST(emptyFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount emptyFileCount() { DARABONBA_PTR_GET(emptyFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount & emptyFileCount) { DARABONBA_PTR_SET_VALUE(emptyFileCount_, emptyFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount && emptyFileCount) { DARABONBA_PTR_SET_RVALUE(emptyFileCount_, emptyFileCount) };


    // emptyFileCountDayGrowthRatio Field Functions 
    bool hasEmptyFileCountDayGrowthRatio() const { return this->emptyFileCountDayGrowthRatio_ != nullptr;};
    void deleteEmptyFileCountDayGrowthRatio() { this->emptyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(emptyFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio emptyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(emptyFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio & emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileCountDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio && emptyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileCountDayGrowthRatio_, emptyFileCountDayGrowthRatio) };


    // emptyFileDayGrowthCount Field Functions 
    bool hasEmptyFileDayGrowthCount() const { return this->emptyFileDayGrowthCount_ != nullptr;};
    void deleteEmptyFileDayGrowthCount() { this->emptyFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(emptyFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount emptyFileDayGrowthCount() { DARABONBA_PTR_GET(emptyFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileDayGrowthCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount & emptyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileDayGrowthCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount && emptyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(emptyFileDayGrowthCount_, emptyFileDayGrowthCount) };


    // emptyFileRatio Field Functions 
    bool hasEmptyFileRatio() const { return this->emptyFileRatio_ != nullptr;};
    void deleteEmptyFileRatio() { this->emptyFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio() const { DARABONBA_PTR_GET_CONST(emptyFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio emptyFileRatio() { DARABONBA_PTR_GET(emptyFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio & emptyFileRatio) { DARABONBA_PTR_SET_VALUE(emptyFileRatio_, emptyFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setEmptyFileRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio && emptyFileRatio) { DARABONBA_PTR_SET_RVALUE(emptyFileRatio_, emptyFileRatio) };


    // freezeDataDayGrowthSize Field Functions 
    bool hasFreezeDataDayGrowthSize() const { return this->freezeDataDayGrowthSize_ != nullptr;};
    void deleteFreezeDataDayGrowthSize() { this->freezeDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(freezeDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize freezeDataDayGrowthSize() { DARABONBA_PTR_GET(freezeDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataDayGrowthSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize & freezeDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataDayGrowthSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize && freezeDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(freezeDataDayGrowthSize_, freezeDataDayGrowthSize) };


    // freezeDataRatio Field Functions 
    bool hasFreezeDataRatio() const { return this->freezeDataRatio_ != nullptr;};
    void deleteFreezeDataRatio() { this->freezeDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio() const { DARABONBA_PTR_GET_CONST(freezeDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio freezeDataRatio() { DARABONBA_PTR_GET(freezeDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio & freezeDataRatio) { DARABONBA_PTR_SET_VALUE(freezeDataRatio_, freezeDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio && freezeDataRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataRatio_, freezeDataRatio) };


    // freezeDataSize Field Functions 
    bool hasFreezeDataSize() const { return this->freezeDataSize_ != nullptr;};
    void deleteFreezeDataSize() { this->freezeDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize & freezeDataSize() const { DARABONBA_PTR_GET_CONST(freezeDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize freezeDataSize() { DARABONBA_PTR_GET(freezeDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize & freezeDataSize) { DARABONBA_PTR_SET_VALUE(freezeDataSize_, freezeDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize && freezeDataSize) { DARABONBA_PTR_SET_RVALUE(freezeDataSize_, freezeDataSize) };


    // freezeDataSizeDayGrowthRatio Field Functions 
    bool hasFreezeDataSizeDayGrowthRatio() const { return this->freezeDataSizeDayGrowthRatio_ != nullptr;};
    void deleteFreezeDataSizeDayGrowthRatio() { this->freezeDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(freezeDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio freezeDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(freezeDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio & freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setFreezeDataSizeDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio && freezeDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(freezeDataSizeDayGrowthRatio_, freezeDataSizeDayGrowthRatio) };


    // hotDataDayGrowthSize Field Functions 
    bool hasHotDataDayGrowthSize() const { return this->hotDataDayGrowthSize_ != nullptr;};
    void deleteHotDataDayGrowthSize() { this->hotDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(hotDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize hotDataDayGrowthSize() { DARABONBA_PTR_GET(hotDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataDayGrowthSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize & hotDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataDayGrowthSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize && hotDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(hotDataDayGrowthSize_, hotDataDayGrowthSize) };


    // hotDataRatio Field Functions 
    bool hasHotDataRatio() const { return this->hotDataRatio_ != nullptr;};
    void deleteHotDataRatio() { this->hotDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio & hotDataRatio() const { DARABONBA_PTR_GET_CONST(hotDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio hotDataRatio() { DARABONBA_PTR_GET(hotDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio & hotDataRatio) { DARABONBA_PTR_SET_VALUE(hotDataRatio_, hotDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio && hotDataRatio) { DARABONBA_PTR_SET_RVALUE(hotDataRatio_, hotDataRatio) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize & hotDataSize() const { DARABONBA_PTR_GET_CONST(hotDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize hotDataSize() { DARABONBA_PTR_GET(hotDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize & hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize && hotDataSize) { DARABONBA_PTR_SET_RVALUE(hotDataSize_, hotDataSize) };


    // hotDataSizeDayGrowthRatio Field Functions 
    bool hasHotDataSizeDayGrowthRatio() const { return this->hotDataSizeDayGrowthRatio_ != nullptr;};
    void deleteHotDataSizeDayGrowthRatio() { this->hotDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(hotDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio hotDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(hotDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio & hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setHotDataSizeDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio && hotDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(hotDataSizeDayGrowthRatio_, hotDataSizeDayGrowthRatio) };


    // largeFileCount Field Functions 
    bool hasLargeFileCount() const { return this->largeFileCount_ != nullptr;};
    void deleteLargeFileCount() { this->largeFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount & largeFileCount() const { DARABONBA_PTR_GET_CONST(largeFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount largeFileCount() { DARABONBA_PTR_GET(largeFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount & largeFileCount) { DARABONBA_PTR_SET_VALUE(largeFileCount_, largeFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount && largeFileCount) { DARABONBA_PTR_SET_RVALUE(largeFileCount_, largeFileCount) };


    // largeFileCountDayGrowthRatio Field Functions 
    bool hasLargeFileCountDayGrowthRatio() const { return this->largeFileCountDayGrowthRatio_ != nullptr;};
    void deleteLargeFileCountDayGrowthRatio() { this->largeFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(largeFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio largeFileCountDayGrowthRatio() { DARABONBA_PTR_GET(largeFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio & largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileCountDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio && largeFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(largeFileCountDayGrowthRatio_, largeFileCountDayGrowthRatio) };


    // largeFileDayGrowthCount Field Functions 
    bool hasLargeFileDayGrowthCount() const { return this->largeFileDayGrowthCount_ != nullptr;};
    void deleteLargeFileDayGrowthCount() { this->largeFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(largeFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount largeFileDayGrowthCount() { DARABONBA_PTR_GET(largeFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileDayGrowthCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount & largeFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileDayGrowthCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount && largeFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(largeFileDayGrowthCount_, largeFileDayGrowthCount) };


    // largeFileRatio Field Functions 
    bool hasLargeFileRatio() const { return this->largeFileRatio_ != nullptr;};
    void deleteLargeFileRatio() { this->largeFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio & largeFileRatio() const { DARABONBA_PTR_GET_CONST(largeFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio largeFileRatio() { DARABONBA_PTR_GET(largeFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio & largeFileRatio) { DARABONBA_PTR_SET_VALUE(largeFileRatio_, largeFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setLargeFileRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio && largeFileRatio) { DARABONBA_PTR_SET_RVALUE(largeFileRatio_, largeFileRatio) };


    // mediumFileCount Field Functions 
    bool hasMediumFileCount() const { return this->mediumFileCount_ != nullptr;};
    void deleteMediumFileCount() { this->mediumFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount & mediumFileCount() const { DARABONBA_PTR_GET_CONST(mediumFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount mediumFileCount() { DARABONBA_PTR_GET(mediumFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount & mediumFileCount) { DARABONBA_PTR_SET_VALUE(mediumFileCount_, mediumFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount && mediumFileCount) { DARABONBA_PTR_SET_RVALUE(mediumFileCount_, mediumFileCount) };


    // mediumFileCountDayGrowthRatio Field Functions 
    bool hasMediumFileCountDayGrowthRatio() const { return this->mediumFileCountDayGrowthRatio_ != nullptr;};
    void deleteMediumFileCountDayGrowthRatio() { this->mediumFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(mediumFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio mediumFileCountDayGrowthRatio() { DARABONBA_PTR_GET(mediumFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio & mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileCountDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio && mediumFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileCountDayGrowthRatio_, mediumFileCountDayGrowthRatio) };


    // mediumFileDayGrowthCount Field Functions 
    bool hasMediumFileDayGrowthCount() const { return this->mediumFileDayGrowthCount_ != nullptr;};
    void deleteMediumFileDayGrowthCount() { this->mediumFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(mediumFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount mediumFileDayGrowthCount() { DARABONBA_PTR_GET(mediumFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileDayGrowthCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount & mediumFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileDayGrowthCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount && mediumFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(mediumFileDayGrowthCount_, mediumFileDayGrowthCount) };


    // mediumFileRatio Field Functions 
    bool hasMediumFileRatio() const { return this->mediumFileRatio_ != nullptr;};
    void deleteMediumFileRatio() { this->mediumFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio & mediumFileRatio() const { DARABONBA_PTR_GET_CONST(mediumFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio mediumFileRatio() { DARABONBA_PTR_GET(mediumFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio & mediumFileRatio) { DARABONBA_PTR_SET_VALUE(mediumFileRatio_, mediumFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setMediumFileRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio && mediumFileRatio) { DARABONBA_PTR_SET_RVALUE(mediumFileRatio_, mediumFileRatio) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum & partitionNum() const { DARABONBA_PTR_GET_CONST(partitionNum_, Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum partitionNum() { DARABONBA_PTR_GET(partitionNum_, Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setPartitionNum(const Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum & partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setPartitionNum(Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum && partitionNum) { DARABONBA_PTR_SET_RVALUE(partitionNum_, partitionNum) };


    // smallFileCount Field Functions 
    bool hasSmallFileCount() const { return this->smallFileCount_ != nullptr;};
    void deleteSmallFileCount() { this->smallFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount & smallFileCount() const { DARABONBA_PTR_GET_CONST(smallFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount smallFileCount() { DARABONBA_PTR_GET(smallFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount & smallFileCount) { DARABONBA_PTR_SET_VALUE(smallFileCount_, smallFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount && smallFileCount) { DARABONBA_PTR_SET_RVALUE(smallFileCount_, smallFileCount) };


    // smallFileCountDayGrowthRatio Field Functions 
    bool hasSmallFileCountDayGrowthRatio() const { return this->smallFileCountDayGrowthRatio_ != nullptr;};
    void deleteSmallFileCountDayGrowthRatio() { this->smallFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(smallFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio smallFileCountDayGrowthRatio() { DARABONBA_PTR_GET(smallFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio & smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileCountDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio && smallFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(smallFileCountDayGrowthRatio_, smallFileCountDayGrowthRatio) };


    // smallFileDayGrowthCount Field Functions 
    bool hasSmallFileDayGrowthCount() const { return this->smallFileDayGrowthCount_ != nullptr;};
    void deleteSmallFileDayGrowthCount() { this->smallFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(smallFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount smallFileDayGrowthCount() { DARABONBA_PTR_GET(smallFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileDayGrowthCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount & smallFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileDayGrowthCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount && smallFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(smallFileDayGrowthCount_, smallFileDayGrowthCount) };


    // smallFileRatio Field Functions 
    bool hasSmallFileRatio() const { return this->smallFileRatio_ != nullptr;};
    void deleteSmallFileRatio() { this->smallFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio & smallFileRatio() const { DARABONBA_PTR_GET_CONST(smallFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio smallFileRatio() { DARABONBA_PTR_GET(smallFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio & smallFileRatio) { DARABONBA_PTR_SET_VALUE(smallFileRatio_, smallFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setSmallFileRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio && smallFileRatio) { DARABONBA_PTR_SET_RVALUE(smallFileRatio_, smallFileRatio) };


    // tinyFileCount Field Functions 
    bool hasTinyFileCount() const { return this->tinyFileCount_ != nullptr;};
    void deleteTinyFileCount() { this->tinyFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount & tinyFileCount() const { DARABONBA_PTR_GET_CONST(tinyFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount tinyFileCount() { DARABONBA_PTR_GET(tinyFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount & tinyFileCount) { DARABONBA_PTR_SET_VALUE(tinyFileCount_, tinyFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount && tinyFileCount) { DARABONBA_PTR_SET_RVALUE(tinyFileCount_, tinyFileCount) };


    // tinyFileCountDayGrowthRatio Field Functions 
    bool hasTinyFileCountDayGrowthRatio() const { return this->tinyFileCountDayGrowthRatio_ != nullptr;};
    void deleteTinyFileCountDayGrowthRatio() { this->tinyFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(tinyFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio tinyFileCountDayGrowthRatio() { DARABONBA_PTR_GET(tinyFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio & tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileCountDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio && tinyFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileCountDayGrowthRatio_, tinyFileCountDayGrowthRatio) };


    // tinyFileDayGrowthCount Field Functions 
    bool hasTinyFileDayGrowthCount() const { return this->tinyFileDayGrowthCount_ != nullptr;};
    void deleteTinyFileDayGrowthCount() { this->tinyFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(tinyFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount tinyFileDayGrowthCount() { DARABONBA_PTR_GET(tinyFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileDayGrowthCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount & tinyFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileDayGrowthCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount && tinyFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(tinyFileDayGrowthCount_, tinyFileDayGrowthCount) };


    // tinyFileRatio Field Functions 
    bool hasTinyFileRatio() const { return this->tinyFileRatio_ != nullptr;};
    void deleteTinyFileRatio() { this->tinyFileRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio & tinyFileRatio() const { DARABONBA_PTR_GET_CONST(tinyFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio tinyFileRatio() { DARABONBA_PTR_GET(tinyFileRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio & tinyFileRatio) { DARABONBA_PTR_SET_VALUE(tinyFileRatio_, tinyFileRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTinyFileRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio && tinyFileRatio) { DARABONBA_PTR_SET_RVALUE(tinyFileRatio_, tinyFileRatio) };


    // totalDataDayGrowthSize Field Functions 
    bool hasTotalDataDayGrowthSize() const { return this->totalDataDayGrowthSize_ != nullptr;};
    void deleteTotalDataDayGrowthSize() { this->totalDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(totalDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize totalDataDayGrowthSize() { DARABONBA_PTR_GET(totalDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalDataDayGrowthSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize & totalDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalDataDayGrowthSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize && totalDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(totalDataDayGrowthSize_, totalDataDayGrowthSize) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize & totalDataSize() const { DARABONBA_PTR_GET_CONST(totalDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize totalDataSize() { DARABONBA_PTR_GET(totalDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalDataSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize & totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalDataSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize && totalDataSize) { DARABONBA_PTR_SET_RVALUE(totalDataSize_, totalDataSize) };


    // totalDataSizeDayGrowthRatio Field Functions 
    bool hasTotalDataSizeDayGrowthRatio() const { return this->totalDataSizeDayGrowthRatio_ != nullptr;};
    void deleteTotalDataSizeDayGrowthRatio() { this->totalDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio totalDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(totalDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio & totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalDataSizeDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio && totalDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalDataSizeDayGrowthRatio_, totalDataSizeDayGrowthRatio) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount & totalFileCount() const { DARABONBA_PTR_GET_CONST(totalFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount totalFileCount() { DARABONBA_PTR_GET(totalFileCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalFileCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount & totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalFileCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount && totalFileCount) { DARABONBA_PTR_SET_RVALUE(totalFileCount_, totalFileCount) };


    // totalFileCountDayGrowthRatio Field Functions 
    bool hasTotalFileCountDayGrowthRatio() const { return this->totalFileCountDayGrowthRatio_ != nullptr;};
    void deleteTotalFileCountDayGrowthRatio() { this->totalFileCountDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(totalFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio totalFileCountDayGrowthRatio() { DARABONBA_PTR_GET(totalFileCountDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio & totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalFileCountDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio && totalFileCountDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(totalFileCountDayGrowthRatio_, totalFileCountDayGrowthRatio) };


    // totalFileDayGrowthCount Field Functions 
    bool hasTotalFileDayGrowthCount() const { return this->totalFileDayGrowthCount_ != nullptr;};
    void deleteTotalFileDayGrowthCount() { this->totalFileDayGrowthCount_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount() const { DARABONBA_PTR_GET_CONST(totalFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount totalFileDayGrowthCount() { DARABONBA_PTR_GET(totalFileDayGrowthCount_, Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalFileDayGrowthCount(const Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount & totalFileDayGrowthCount) { DARABONBA_PTR_SET_VALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setTotalFileDayGrowthCount(Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount && totalFileDayGrowthCount) { DARABONBA_PTR_SET_RVALUE(totalFileDayGrowthCount_, totalFileDayGrowthCount) };


    // warmDataDayGrowthSize Field Functions 
    bool hasWarmDataDayGrowthSize() const { return this->warmDataDayGrowthSize_ != nullptr;};
    void deleteWarmDataDayGrowthSize() { this->warmDataDayGrowthSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize() const { DARABONBA_PTR_GET_CONST(warmDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize warmDataDayGrowthSize() { DARABONBA_PTR_GET(warmDataDayGrowthSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataDayGrowthSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize & warmDataDayGrowthSize) { DARABONBA_PTR_SET_VALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataDayGrowthSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize && warmDataDayGrowthSize) { DARABONBA_PTR_SET_RVALUE(warmDataDayGrowthSize_, warmDataDayGrowthSize) };


    // warmDataRatio Field Functions 
    bool hasWarmDataRatio() const { return this->warmDataRatio_ != nullptr;};
    void deleteWarmDataRatio() { this->warmDataRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio & warmDataRatio() const { DARABONBA_PTR_GET_CONST(warmDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio warmDataRatio() { DARABONBA_PTR_GET(warmDataRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio & warmDataRatio) { DARABONBA_PTR_SET_VALUE(warmDataRatio_, warmDataRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio && warmDataRatio) { DARABONBA_PTR_SET_RVALUE(warmDataRatio_, warmDataRatio) };


    // warmDataSize Field Functions 
    bool hasWarmDataSize() const { return this->warmDataSize_ != nullptr;};
    void deleteWarmDataSize() { this->warmDataSize_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize & warmDataSize() const { DARABONBA_PTR_GET_CONST(warmDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize warmDataSize() { DARABONBA_PTR_GET(warmDataSize_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataSize(const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize & warmDataSize) { DARABONBA_PTR_SET_VALUE(warmDataSize_, warmDataSize) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataSize(Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize && warmDataSize) { DARABONBA_PTR_SET_RVALUE(warmDataSize_, warmDataSize) };


    // warmDataSizeDayGrowthRatio Field Functions 
    bool hasWarmDataSizeDayGrowthRatio() const { return this->warmDataSizeDayGrowthRatio_ != nullptr;};
    void deleteWarmDataSizeDayGrowthRatio() { this->warmDataSizeDayGrowthRatio_ = nullptr;};
    inline const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio() const { DARABONBA_PTR_GET_CONST(warmDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio warmDataSizeDayGrowthRatio() { DARABONBA_PTR_GET(warmDataSizeDayGrowthRatio_, Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(const Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio & warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };
    inline ListDoctorHiveTablesResponseBodyDataMetrics& setWarmDataSizeDayGrowthRatio(Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio && warmDataSizeDayGrowthRatio) { DARABONBA_PTR_SET_RVALUE(warmDataSizeDayGrowthRatio_, warmDataSizeDayGrowthRatio) };


  protected:
    // The daily increment of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataDayGrowthSize> coldDataDayGrowthSize_ = nullptr;
    // The proportion of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataRatio> coldDataRatio_ = nullptr;
    // The amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSize> coldDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of cold data. Cold data refers to data that is not accessed for more than 30 days but is accessed in previous 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsColdDataSizeDayGrowthRatio> coldDataSizeDayGrowthRatio_ = nullptr;
    // The number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCount> emptyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileCountDayGrowthRatio> emptyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileDayGrowthCount> emptyFileDayGrowthCount_ = nullptr;
    // The proportion of empty files. Empty files are those with a size of 0 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsEmptyFileRatio> emptyFileRatio_ = nullptr;
    // The daily increment of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataDayGrowthSize> freezeDataDayGrowthSize_ = nullptr;
    // The proportion of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataRatio> freezeDataRatio_ = nullptr;
    // The amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSize> freezeDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of very cold data. Very cold data refers to data that is not accessed for more than 90 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsFreezeDataSizeDayGrowthRatio> freezeDataSizeDayGrowthRatio_ = nullptr;
    // The daily increment of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataDayGrowthSize> hotDataDayGrowthSize_ = nullptr;
    // The proportion of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataRatio> hotDataRatio_ = nullptr;
    // The amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSize> hotDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of hot data. Hot data refers to data that is accessed in previous seven days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsHotDataSizeDayGrowthRatio> hotDataSizeDayGrowthRatio_ = nullptr;
    // The number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCount> largeFileCount_ = nullptr;
    // The day-to-day growth rate of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileCountDayGrowthRatio> largeFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileDayGrowthCount> largeFileDayGrowthCount_ = nullptr;
    // The proportion of large files. Large files are those with a size greater than 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsLargeFileRatio> largeFileRatio_ = nullptr;
    // The number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCount> mediumFileCount_ = nullptr;
    // The day-to-day growth rate of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileCountDayGrowthRatio> mediumFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileDayGrowthCount> mediumFileDayGrowthCount_ = nullptr;
    // The proportion of medium files. Medium files are those with a size greater than or equal to 128 MB and less than or equal to 1 GB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsMediumFileRatio> mediumFileRatio_ = nullptr;
    // The number of partitions.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsPartitionNum> partitionNum_ = nullptr;
    // The number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCount> smallFileCount_ = nullptr;
    // The day-to-day growth rate of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileCountDayGrowthRatio> smallFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileDayGrowthCount> smallFileDayGrowthCount_ = nullptr;
    // The proportion of small files. Small files are those with a size greater than or equal to 10 MB and less than 128 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsSmallFileRatio> smallFileRatio_ = nullptr;
    // The number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCount> tinyFileCount_ = nullptr;
    // The day-to-day growth rate of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileCountDayGrowthRatio> tinyFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the number of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileDayGrowthCount> tinyFileDayGrowthCount_ = nullptr;
    // The proportion of very small files. Very small files are those with a size greater than 0 MB and less than 10 MB.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTinyFileRatio> tinyFileRatio_ = nullptr;
    // The daily increment of the total amount of data.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataDayGrowthSize> totalDataDayGrowthSize_ = nullptr;
    // The total amount of data.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSize> totalDataSize_ = nullptr;
    // The day-to-day growth rate of the total amount of data.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalDataSizeDayGrowthRatio> totalDataSizeDayGrowthRatio_ = nullptr;
    // The total number of files.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCount> totalFileCount_ = nullptr;
    // The day-to-day growth rate of the total number of files.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileCountDayGrowthRatio> totalFileCountDayGrowthRatio_ = nullptr;
    // The daily increment of the total number of files.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsTotalFileDayGrowthCount> totalFileDayGrowthCount_ = nullptr;
    // The daily increment of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataDayGrowthSize> warmDataDayGrowthSize_ = nullptr;
    // The proportion of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataRatio> warmDataRatio_ = nullptr;
    // The amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSize> warmDataSize_ = nullptr;
    // The day-to-day growth rate of the amount of warm data. Warm data refers to data that is not accessed for more than 7 days but is accessed in previous 30 days.
    std::shared_ptr<Models::ListDoctorHiveTablesResponseBodyDataMetricsWarmDataSizeDayGrowthRatio> warmDataSizeDayGrowthRatio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
