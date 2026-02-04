// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestions, dataIngestions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestions, dataIngestions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataIngestionsResponseBody() = default ;
    ListDataIngestionsResponseBody(const ListDataIngestionsResponseBody &) = default ;
    ListDataIngestionsResponseBody(ListDataIngestionsResponseBody &&) = default ;
    ListDataIngestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionsResponseBody() = default ;
    ListDataIngestionsResponseBody& operator=(const ListDataIngestionsResponseBody &) = default ;
    ListDataIngestionsResponseBody& operator=(ListDataIngestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataIngestions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataIngestions& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataIngestions& obj) { 
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
      DataIngestions() = default ;
      DataIngestions(const DataIngestions &) = default ;
      DataIngestions(DataIngestions &&) = default ;
      DataIngestions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataIngestions() = default ;
      DataIngestions& operator=(const DataIngestions &) = default ;
      DataIngestions& operator=(DataIngestions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeTime_ == nullptr
        && this->capacityCount_ == nullptr && this->createTime_ == nullptr && this->dataIngestionId_ == nullptr && this->dataIngestionMode_ == nullptr && this->dataIngestionModeEditable_ == nullptr
        && this->dataIngestionState_ == nullptr && this->dataIngestionStateCode_ == nullptr && this->dataIngestionStatus_ == nullptr && this->dataIngestionTemplateId_ == nullptr && this->dataIngestionType_ == nullptr
        && this->dataSourceEditable_ == nullptr && this->dataSourceId_ == nullptr && this->normalizationRuleEditable_ == nullptr && this->normalizationRuleId_ == nullptr && this->realtimeDataSourceId_ == nullptr
        && this->scanDataSourceId_ == nullptr && this->streamJobId_ == nullptr && this->updateTime_ == nullptr; };
      // activeTime Field Functions 
      bool hasActiveTime() const { return this->activeTime_ != nullptr;};
      void deleteActiveTime() { this->activeTime_ = nullptr;};
      inline int64_t getActiveTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, 0L) };
      inline DataIngestions& setActiveTime(int64_t activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


      // capacityCount Field Functions 
      bool hasCapacityCount() const { return this->capacityCount_ != nullptr;};
      void deleteCapacityCount() { this->capacityCount_ = nullptr;};
      inline int32_t getCapacityCount() const { DARABONBA_PTR_GET_DEFAULT(capacityCount_, 0) };
      inline DataIngestions& setCapacityCount(int32_t capacityCount) { DARABONBA_PTR_SET_VALUE(capacityCount_, capacityCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataIngestions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataIngestionId Field Functions 
      bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
      void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
      inline string getDataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
      inline DataIngestions& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


      // dataIngestionMode Field Functions 
      bool hasDataIngestionMode() const { return this->dataIngestionMode_ != nullptr;};
      void deleteDataIngestionMode() { this->dataIngestionMode_ = nullptr;};
      inline string getDataIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionMode_, "") };
      inline DataIngestions& setDataIngestionMode(string dataIngestionMode) { DARABONBA_PTR_SET_VALUE(dataIngestionMode_, dataIngestionMode) };


      // dataIngestionModeEditable Field Functions 
      bool hasDataIngestionModeEditable() const { return this->dataIngestionModeEditable_ != nullptr;};
      void deleteDataIngestionModeEditable() { this->dataIngestionModeEditable_ = nullptr;};
      inline bool getDataIngestionModeEditable() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionModeEditable_, false) };
      inline DataIngestions& setDataIngestionModeEditable(bool dataIngestionModeEditable) { DARABONBA_PTR_SET_VALUE(dataIngestionModeEditable_, dataIngestionModeEditable) };


      // dataIngestionState Field Functions 
      bool hasDataIngestionState() const { return this->dataIngestionState_ != nullptr;};
      void deleteDataIngestionState() { this->dataIngestionState_ = nullptr;};
      inline string getDataIngestionState() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionState_, "") };
      inline DataIngestions& setDataIngestionState(string dataIngestionState) { DARABONBA_PTR_SET_VALUE(dataIngestionState_, dataIngestionState) };


      // dataIngestionStateCode Field Functions 
      bool hasDataIngestionStateCode() const { return this->dataIngestionStateCode_ != nullptr;};
      void deleteDataIngestionStateCode() { this->dataIngestionStateCode_ = nullptr;};
      inline string getDataIngestionStateCode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStateCode_, "") };
      inline DataIngestions& setDataIngestionStateCode(string dataIngestionStateCode) { DARABONBA_PTR_SET_VALUE(dataIngestionStateCode_, dataIngestionStateCode) };


      // dataIngestionStatus Field Functions 
      bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
      void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
      inline string getDataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
      inline DataIngestions& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


      // dataIngestionTemplateId Field Functions 
      bool hasDataIngestionTemplateId() const { return this->dataIngestionTemplateId_ != nullptr;};
      void deleteDataIngestionTemplateId() { this->dataIngestionTemplateId_ = nullptr;};
      inline string getDataIngestionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateId_, "") };
      inline DataIngestions& setDataIngestionTemplateId(string dataIngestionTemplateId) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateId_, dataIngestionTemplateId) };


      // dataIngestionType Field Functions 
      bool hasDataIngestionType() const { return this->dataIngestionType_ != nullptr;};
      void deleteDataIngestionType() { this->dataIngestionType_ = nullptr;};
      inline string getDataIngestionType() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionType_, "") };
      inline DataIngestions& setDataIngestionType(string dataIngestionType) { DARABONBA_PTR_SET_VALUE(dataIngestionType_, dataIngestionType) };


      // dataSourceEditable Field Functions 
      bool hasDataSourceEditable() const { return this->dataSourceEditable_ != nullptr;};
      void deleteDataSourceEditable() { this->dataSourceEditable_ = nullptr;};
      inline bool getDataSourceEditable() const { DARABONBA_PTR_GET_DEFAULT(dataSourceEditable_, false) };
      inline DataIngestions& setDataSourceEditable(bool dataSourceEditable) { DARABONBA_PTR_SET_VALUE(dataSourceEditable_, dataSourceEditable) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataIngestions& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // normalizationRuleEditable Field Functions 
      bool hasNormalizationRuleEditable() const { return this->normalizationRuleEditable_ != nullptr;};
      void deleteNormalizationRuleEditable() { this->normalizationRuleEditable_ = nullptr;};
      inline bool getNormalizationRuleEditable() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleEditable_, false) };
      inline DataIngestions& setNormalizationRuleEditable(bool normalizationRuleEditable) { DARABONBA_PTR_SET_VALUE(normalizationRuleEditable_, normalizationRuleEditable) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline DataIngestions& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      // realtimeDataSourceId Field Functions 
      bool hasRealtimeDataSourceId() const { return this->realtimeDataSourceId_ != nullptr;};
      void deleteRealtimeDataSourceId() { this->realtimeDataSourceId_ = nullptr;};
      inline string getRealtimeDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(realtimeDataSourceId_, "") };
      inline DataIngestions& setRealtimeDataSourceId(string realtimeDataSourceId) { DARABONBA_PTR_SET_VALUE(realtimeDataSourceId_, realtimeDataSourceId) };


      // scanDataSourceId Field Functions 
      bool hasScanDataSourceId() const { return this->scanDataSourceId_ != nullptr;};
      void deleteScanDataSourceId() { this->scanDataSourceId_ = nullptr;};
      inline string getScanDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(scanDataSourceId_, "") };
      inline DataIngestions& setScanDataSourceId(string scanDataSourceId) { DARABONBA_PTR_SET_VALUE(scanDataSourceId_, scanDataSourceId) };


      // streamJobId Field Functions 
      bool hasStreamJobId() const { return this->streamJobId_ != nullptr;};
      void deleteStreamJobId() { this->streamJobId_ = nullptr;};
      inline string getStreamJobId() const { DARABONBA_PTR_GET_DEFAULT(streamJobId_, "") };
      inline DataIngestions& setStreamJobId(string streamJobId) { DARABONBA_PTR_SET_VALUE(streamJobId_, streamJobId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataIngestions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> activeTime_ {};
      shared_ptr<int32_t> capacityCount_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> dataIngestionId_ {};
      shared_ptr<string> dataIngestionMode_ {};
      shared_ptr<bool> dataIngestionModeEditable_ {};
      shared_ptr<string> dataIngestionState_ {};
      shared_ptr<string> dataIngestionStateCode_ {};
      shared_ptr<string> dataIngestionStatus_ {};
      shared_ptr<string> dataIngestionTemplateId_ {};
      shared_ptr<string> dataIngestionType_ {};
      shared_ptr<bool> dataSourceEditable_ {};
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<bool> normalizationRuleEditable_ {};
      shared_ptr<string> normalizationRuleId_ {};
      shared_ptr<string> realtimeDataSourceId_ {};
      shared_ptr<string> scanDataSourceId_ {};
      shared_ptr<string> streamJobId_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataIngestions_ == nullptr
        && this->requestId_ == nullptr; };
    // dataIngestions Field Functions 
    bool hasDataIngestions() const { return this->dataIngestions_ != nullptr;};
    void deleteDataIngestions() { this->dataIngestions_ = nullptr;};
    inline const vector<ListDataIngestionsResponseBody::DataIngestions> & getDataIngestions() const { DARABONBA_PTR_GET_CONST(dataIngestions_, vector<ListDataIngestionsResponseBody::DataIngestions>) };
    inline vector<ListDataIngestionsResponseBody::DataIngestions> getDataIngestions() { DARABONBA_PTR_GET(dataIngestions_, vector<ListDataIngestionsResponseBody::DataIngestions>) };
    inline ListDataIngestionsResponseBody& setDataIngestions(const vector<ListDataIngestionsResponseBody::DataIngestions> & dataIngestions) { DARABONBA_PTR_SET_VALUE(dataIngestions_, dataIngestions) };
    inline ListDataIngestionsResponseBody& setDataIngestions(vector<ListDataIngestionsResponseBody::DataIngestions> && dataIngestions) { DARABONBA_PTR_SET_RVALUE(dataIngestions_, dataIngestions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataIngestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDataIngestionsResponseBody::DataIngestions>> dataIngestions_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
