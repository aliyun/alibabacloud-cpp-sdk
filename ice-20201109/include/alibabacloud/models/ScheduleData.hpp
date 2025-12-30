// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDATA_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ScheduleData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleData& obj) { 
      DARABONBA_PTR_TO_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_TO_JSON(ApproximateDurationSeconds, approximateDurationSeconds_);
      DARABONBA_PTR_TO_JSON(ApproximateStartTime, approximateStartTime_);
      DARABONBA_PTR_TO_JSON(EntryType, entryType_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleData& obj) { 
      DARABONBA_PTR_FROM_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_FROM_JSON(ApproximateDurationSeconds, approximateDurationSeconds_);
      DARABONBA_PTR_FROM_JSON(ApproximateStartTime, approximateStartTime_);
      DARABONBA_PTR_FROM_JSON(EntryType, entryType_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ScheduleData() = default ;
    ScheduleData(const ScheduleData &) = default ;
    ScheduleData(ScheduleData &&) = default ;
    ScheduleData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleData() = default ;
    ScheduleData& operator=(const ScheduleData &) = default ;
    ScheduleData& operator=(ScheduleData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdBreaks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdBreaks& obj) { 
        DARABONBA_PTR_TO_JSON(MessageType, messageType_);
        DARABONBA_PTR_TO_JSON(OffsetMillis, offsetMillis_);
        DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
        DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
        DARABONBA_PTR_TO_JSON(SpliceInsertSettings, spliceInsertSettings_);
        DARABONBA_PTR_TO_JSON(TimeSignalSettings, timeSignalSettings_);
      };
      friend void from_json(const Darabonba::Json& j, AdBreaks& obj) { 
        DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
        DARABONBA_PTR_FROM_JSON(OffsetMillis, offsetMillis_);
        DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
        DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
        DARABONBA_PTR_FROM_JSON(SpliceInsertSettings, spliceInsertSettings_);
        DARABONBA_PTR_FROM_JSON(TimeSignalSettings, timeSignalSettings_);
      };
      AdBreaks() = default ;
      AdBreaks(const AdBreaks &) = default ;
      AdBreaks(AdBreaks &&) = default ;
      AdBreaks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdBreaks() = default ;
      AdBreaks& operator=(const AdBreaks &) = default ;
      AdBreaks& operator=(AdBreaks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->messageType_ == nullptr
        && this->offsetMillis_ == nullptr && this->sourceLocationName_ == nullptr && this->sourceName_ == nullptr && this->spliceInsertSettings_ == nullptr && this->timeSignalSettings_ == nullptr; };
      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline AdBreaks& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // offsetMillis Field Functions 
      bool hasOffsetMillis() const { return this->offsetMillis_ != nullptr;};
      void deleteOffsetMillis() { this->offsetMillis_ = nullptr;};
      inline string getOffsetMillis() const { DARABONBA_PTR_GET_DEFAULT(offsetMillis_, "") };
      inline AdBreaks& setOffsetMillis(string offsetMillis) { DARABONBA_PTR_SET_VALUE(offsetMillis_, offsetMillis) };


      // sourceLocationName Field Functions 
      bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
      void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
      inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
      inline AdBreaks& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


      // sourceName Field Functions 
      bool hasSourceName() const { return this->sourceName_ != nullptr;};
      void deleteSourceName() { this->sourceName_ = nullptr;};
      inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
      inline AdBreaks& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      // spliceInsertSettings Field Functions 
      bool hasSpliceInsertSettings() const { return this->spliceInsertSettings_ != nullptr;};
      void deleteSpliceInsertSettings() { this->spliceInsertSettings_ = nullptr;};
      inline string getSpliceInsertSettings() const { DARABONBA_PTR_GET_DEFAULT(spliceInsertSettings_, "") };
      inline AdBreaks& setSpliceInsertSettings(string spliceInsertSettings) { DARABONBA_PTR_SET_VALUE(spliceInsertSettings_, spliceInsertSettings) };


      // timeSignalSettings Field Functions 
      bool hasTimeSignalSettings() const { return this->timeSignalSettings_ != nullptr;};
      void deleteTimeSignalSettings() { this->timeSignalSettings_ = nullptr;};
      inline string getTimeSignalSettings() const { DARABONBA_PTR_GET_DEFAULT(timeSignalSettings_, "") };
      inline AdBreaks& setTimeSignalSettings(string timeSignalSettings) { DARABONBA_PTR_SET_VALUE(timeSignalSettings_, timeSignalSettings) };


    protected:
      shared_ptr<string> messageType_ {};
      shared_ptr<string> offsetMillis_ {};
      shared_ptr<string> sourceLocationName_ {};
      shared_ptr<string> sourceName_ {};
      shared_ptr<string> spliceInsertSettings_ {};
      shared_ptr<string> timeSignalSettings_ {};
    };

    virtual bool empty() const override { return this->adBreaks_ == nullptr
        && this->approximateDurationSeconds_ == nullptr && this->approximateStartTime_ == nullptr && this->entryType_ == nullptr && this->programName_ == nullptr && this->sourceLocationName_ == nullptr
        && this->sourceName_ == nullptr && this->sourceType_ == nullptr; };
    // adBreaks Field Functions 
    bool hasAdBreaks() const { return this->adBreaks_ != nullptr;};
    void deleteAdBreaks() { this->adBreaks_ = nullptr;};
    inline const vector<ScheduleData::AdBreaks> & getAdBreaks() const { DARABONBA_PTR_GET_CONST(adBreaks_, vector<ScheduleData::AdBreaks>) };
    inline vector<ScheduleData::AdBreaks> getAdBreaks() { DARABONBA_PTR_GET(adBreaks_, vector<ScheduleData::AdBreaks>) };
    inline ScheduleData& setAdBreaks(const vector<ScheduleData::AdBreaks> & adBreaks) { DARABONBA_PTR_SET_VALUE(adBreaks_, adBreaks) };
    inline ScheduleData& setAdBreaks(vector<ScheduleData::AdBreaks> && adBreaks) { DARABONBA_PTR_SET_RVALUE(adBreaks_, adBreaks) };


    // approximateDurationSeconds Field Functions 
    bool hasApproximateDurationSeconds() const { return this->approximateDurationSeconds_ != nullptr;};
    void deleteApproximateDurationSeconds() { this->approximateDurationSeconds_ = nullptr;};
    inline int64_t getApproximateDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(approximateDurationSeconds_, 0L) };
    inline ScheduleData& setApproximateDurationSeconds(int64_t approximateDurationSeconds) { DARABONBA_PTR_SET_VALUE(approximateDurationSeconds_, approximateDurationSeconds) };


    // approximateStartTime Field Functions 
    bool hasApproximateStartTime() const { return this->approximateStartTime_ != nullptr;};
    void deleteApproximateStartTime() { this->approximateStartTime_ = nullptr;};
    inline string getApproximateStartTime() const { DARABONBA_PTR_GET_DEFAULT(approximateStartTime_, "") };
    inline ScheduleData& setApproximateStartTime(string approximateStartTime) { DARABONBA_PTR_SET_VALUE(approximateStartTime_, approximateStartTime) };


    // entryType Field Functions 
    bool hasEntryType() const { return this->entryType_ != nullptr;};
    void deleteEntryType() { this->entryType_ = nullptr;};
    inline string getEntryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
    inline ScheduleData& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ScheduleData& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ScheduleData& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ScheduleData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ScheduleData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<vector<ScheduleData::AdBreaks>> adBreaks_ {};
    shared_ptr<int64_t> approximateDurationSeconds_ {};
    shared_ptr<string> approximateStartTime_ {};
    shared_ptr<string> entryType_ {};
    shared_ptr<string> programName_ {};
    shared_ptr<string> sourceLocationName_ {};
    shared_ptr<string> sourceName_ {};
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
