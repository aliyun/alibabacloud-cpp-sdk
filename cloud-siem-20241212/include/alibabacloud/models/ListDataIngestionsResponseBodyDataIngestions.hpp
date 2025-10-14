// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONSRESPONSEBODYDATAINGESTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONSRESPONSEBODYDATAINGESTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionsResponseBodyDataIngestions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionsResponseBodyDataIngestions& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveTime, activeTime_);
      DARABONBA_PTR_TO_JSON(CapacityCount, capacityCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_TO_JSON(DataIngestionMode, dataIngestionMode_);
      DARABONBA_PTR_TO_JSON(DataIngestionModeEditable, dataIngestionModeEditable_);
      DARABONBA_PTR_TO_JSON(DataIngestionState, dataIngestionState_);
      DARABONBA_PTR_TO_JSON(DataIngestionStateCode, dataIngestionStateCode_);
      DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_TO_JSON(DataIngestionTemplateId, dataIngestionTemplateId_);
      DARABONBA_PTR_TO_JSON(DataIngestionType, dataIngestionType_);
      DARABONBA_PTR_TO_JSON(DataSourceEditable, dataSourceEditable_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleEditable, normalizationRuleEditable_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(RealtimeDataSourceId, realtimeDataSourceId_);
      DARABONBA_PTR_TO_JSON(ScanDataSourceId, scanDataSourceId_);
      DARABONBA_PTR_TO_JSON(StreamJobId, streamJobId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionsResponseBodyDataIngestions& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveTime, activeTime_);
      DARABONBA_PTR_FROM_JSON(CapacityCount, capacityCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
      DARABONBA_PTR_FROM_JSON(DataIngestionMode, dataIngestionMode_);
      DARABONBA_PTR_FROM_JSON(DataIngestionModeEditable, dataIngestionModeEditable_);
      DARABONBA_PTR_FROM_JSON(DataIngestionState, dataIngestionState_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStateCode, dataIngestionStateCode_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplateId, dataIngestionTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataIngestionType, dataIngestionType_);
      DARABONBA_PTR_FROM_JSON(DataSourceEditable, dataSourceEditable_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleEditable, normalizationRuleEditable_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(RealtimeDataSourceId, realtimeDataSourceId_);
      DARABONBA_PTR_FROM_JSON(ScanDataSourceId, scanDataSourceId_);
      DARABONBA_PTR_FROM_JSON(StreamJobId, streamJobId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDataIngestionsResponseBodyDataIngestions() = default ;
    ListDataIngestionsResponseBodyDataIngestions(const ListDataIngestionsResponseBodyDataIngestions &) = default ;
    ListDataIngestionsResponseBodyDataIngestions(ListDataIngestionsResponseBodyDataIngestions &&) = default ;
    ListDataIngestionsResponseBodyDataIngestions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionsResponseBodyDataIngestions() = default ;
    ListDataIngestionsResponseBodyDataIngestions& operator=(const ListDataIngestionsResponseBodyDataIngestions &) = default ;
    ListDataIngestionsResponseBodyDataIngestions& operator=(ListDataIngestionsResponseBodyDataIngestions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeTime_ == nullptr
        && return this->capacityCount_ == nullptr && return this->createTime_ == nullptr && return this->dataIngestionId_ == nullptr && return this->dataIngestionMode_ == nullptr && return this->dataIngestionModeEditable_ == nullptr
        && return this->dataIngestionState_ == nullptr && return this->dataIngestionStateCode_ == nullptr && return this->dataIngestionStatus_ == nullptr && return this->dataIngestionTemplateId_ == nullptr && return this->dataIngestionType_ == nullptr
        && return this->dataSourceEditable_ == nullptr && return this->dataSourceId_ == nullptr && return this->normalizationRuleEditable_ == nullptr && return this->normalizationRuleId_ == nullptr && return this->realtimeDataSourceId_ == nullptr
        && return this->scanDataSourceId_ == nullptr && return this->streamJobId_ == nullptr && return this->updateTime_ == nullptr; };
    // activeTime Field Functions 
    bool hasActiveTime() const { return this->activeTime_ != nullptr;};
    void deleteActiveTime() { this->activeTime_ = nullptr;};
    inline int64_t activeTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, 0L) };
    inline ListDataIngestionsResponseBodyDataIngestions& setActiveTime(int64_t activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


    // capacityCount Field Functions 
    bool hasCapacityCount() const { return this->capacityCount_ != nullptr;};
    void deleteCapacityCount() { this->capacityCount_ = nullptr;};
    inline int32_t capacityCount() const { DARABONBA_PTR_GET_DEFAULT(capacityCount_, 0) };
    inline ListDataIngestionsResponseBodyDataIngestions& setCapacityCount(int32_t capacityCount) { DARABONBA_PTR_SET_VALUE(capacityCount_, capacityCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataIngestionsResponseBodyDataIngestions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataIngestionId Field Functions 
    bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
    void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
    inline string dataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


    // dataIngestionMode Field Functions 
    bool hasDataIngestionMode() const { return this->dataIngestionMode_ != nullptr;};
    void deleteDataIngestionMode() { this->dataIngestionMode_ = nullptr;};
    inline string dataIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionMode_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionMode(string dataIngestionMode) { DARABONBA_PTR_SET_VALUE(dataIngestionMode_, dataIngestionMode) };


    // dataIngestionModeEditable Field Functions 
    bool hasDataIngestionModeEditable() const { return this->dataIngestionModeEditable_ != nullptr;};
    void deleteDataIngestionModeEditable() { this->dataIngestionModeEditable_ = nullptr;};
    inline bool dataIngestionModeEditable() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionModeEditable_, false) };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionModeEditable(bool dataIngestionModeEditable) { DARABONBA_PTR_SET_VALUE(dataIngestionModeEditable_, dataIngestionModeEditable) };


    // dataIngestionState Field Functions 
    bool hasDataIngestionState() const { return this->dataIngestionState_ != nullptr;};
    void deleteDataIngestionState() { this->dataIngestionState_ = nullptr;};
    inline string dataIngestionState() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionState_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionState(string dataIngestionState) { DARABONBA_PTR_SET_VALUE(dataIngestionState_, dataIngestionState) };


    // dataIngestionStateCode Field Functions 
    bool hasDataIngestionStateCode() const { return this->dataIngestionStateCode_ != nullptr;};
    void deleteDataIngestionStateCode() { this->dataIngestionStateCode_ = nullptr;};
    inline string dataIngestionStateCode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStateCode_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionStateCode(string dataIngestionStateCode) { DARABONBA_PTR_SET_VALUE(dataIngestionStateCode_, dataIngestionStateCode) };


    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline string dataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // dataIngestionTemplateId Field Functions 
    bool hasDataIngestionTemplateId() const { return this->dataIngestionTemplateId_ != nullptr;};
    void deleteDataIngestionTemplateId() { this->dataIngestionTemplateId_ = nullptr;};
    inline string dataIngestionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionTemplateId(string dataIngestionTemplateId) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateId_, dataIngestionTemplateId) };


    // dataIngestionType Field Functions 
    bool hasDataIngestionType() const { return this->dataIngestionType_ != nullptr;};
    void deleteDataIngestionType() { this->dataIngestionType_ = nullptr;};
    inline string dataIngestionType() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionType_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataIngestionType(string dataIngestionType) { DARABONBA_PTR_SET_VALUE(dataIngestionType_, dataIngestionType) };


    // dataSourceEditable Field Functions 
    bool hasDataSourceEditable() const { return this->dataSourceEditable_ != nullptr;};
    void deleteDataSourceEditable() { this->dataSourceEditable_ = nullptr;};
    inline bool dataSourceEditable() const { DARABONBA_PTR_GET_DEFAULT(dataSourceEditable_, false) };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataSourceEditable(bool dataSourceEditable) { DARABONBA_PTR_SET_VALUE(dataSourceEditable_, dataSourceEditable) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // normalizationRuleEditable Field Functions 
    bool hasNormalizationRuleEditable() const { return this->normalizationRuleEditable_ != nullptr;};
    void deleteNormalizationRuleEditable() { this->normalizationRuleEditable_ = nullptr;};
    inline bool normalizationRuleEditable() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleEditable_, false) };
    inline ListDataIngestionsResponseBodyDataIngestions& setNormalizationRuleEditable(bool normalizationRuleEditable) { DARABONBA_PTR_SET_VALUE(normalizationRuleEditable_, normalizationRuleEditable) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // realtimeDataSourceId Field Functions 
    bool hasRealtimeDataSourceId() const { return this->realtimeDataSourceId_ != nullptr;};
    void deleteRealtimeDataSourceId() { this->realtimeDataSourceId_ = nullptr;};
    inline string realtimeDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(realtimeDataSourceId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setRealtimeDataSourceId(string realtimeDataSourceId) { DARABONBA_PTR_SET_VALUE(realtimeDataSourceId_, realtimeDataSourceId) };


    // scanDataSourceId Field Functions 
    bool hasScanDataSourceId() const { return this->scanDataSourceId_ != nullptr;};
    void deleteScanDataSourceId() { this->scanDataSourceId_ = nullptr;};
    inline string scanDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(scanDataSourceId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setScanDataSourceId(string scanDataSourceId) { DARABONBA_PTR_SET_VALUE(scanDataSourceId_, scanDataSourceId) };


    // streamJobId Field Functions 
    bool hasStreamJobId() const { return this->streamJobId_ != nullptr;};
    void deleteStreamJobId() { this->streamJobId_ = nullptr;};
    inline string streamJobId() const { DARABONBA_PTR_GET_DEFAULT(streamJobId_, "") };
    inline ListDataIngestionsResponseBodyDataIngestions& setStreamJobId(string streamJobId) { DARABONBA_PTR_SET_VALUE(streamJobId_, streamJobId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDataIngestionsResponseBodyDataIngestions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> activeTime_ = nullptr;
    std::shared_ptr<int32_t> capacityCount_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataIngestionId_ = nullptr;
    std::shared_ptr<string> dataIngestionMode_ = nullptr;
    std::shared_ptr<bool> dataIngestionModeEditable_ = nullptr;
    std::shared_ptr<string> dataIngestionState_ = nullptr;
    std::shared_ptr<string> dataIngestionStateCode_ = nullptr;
    std::shared_ptr<string> dataIngestionStatus_ = nullptr;
    std::shared_ptr<string> dataIngestionTemplateId_ = nullptr;
    std::shared_ptr<string> dataIngestionType_ = nullptr;
    std::shared_ptr<bool> dataSourceEditable_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<bool> normalizationRuleEditable_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> realtimeDataSourceId_ = nullptr;
    std::shared_ptr<string> scanDataSourceId_ = nullptr;
    std::shared_ptr<string> streamJobId_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
