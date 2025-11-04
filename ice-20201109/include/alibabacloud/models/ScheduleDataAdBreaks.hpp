// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEDULEDATAADBREAKS_HPP_
#define ALIBABACLOUD_MODELS_SCHEDULEDATAADBREAKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ScheduleDataAdBreaks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScheduleDataAdBreaks& obj) { 
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(OffsetMillis, offsetMillis_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SpliceInsertSettings, spliceInsertSettings_);
      DARABONBA_PTR_TO_JSON(TimeSignalSettings, timeSignalSettings_);
    };
    friend void from_json(const Darabonba::Json& j, ScheduleDataAdBreaks& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(OffsetMillis, offsetMillis_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SpliceInsertSettings, spliceInsertSettings_);
      DARABONBA_PTR_FROM_JSON(TimeSignalSettings, timeSignalSettings_);
    };
    ScheduleDataAdBreaks() = default ;
    ScheduleDataAdBreaks(const ScheduleDataAdBreaks &) = default ;
    ScheduleDataAdBreaks(ScheduleDataAdBreaks &&) = default ;
    ScheduleDataAdBreaks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScheduleDataAdBreaks() = default ;
    ScheduleDataAdBreaks& operator=(const ScheduleDataAdBreaks &) = default ;
    ScheduleDataAdBreaks& operator=(ScheduleDataAdBreaks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageType_ == nullptr
        && return this->offsetMillis_ == nullptr && return this->sourceLocationName_ == nullptr && return this->sourceName_ == nullptr && return this->spliceInsertSettings_ == nullptr && return this->timeSignalSettings_ == nullptr; };
    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline ScheduleDataAdBreaks& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // offsetMillis Field Functions 
    bool hasOffsetMillis() const { return this->offsetMillis_ != nullptr;};
    void deleteOffsetMillis() { this->offsetMillis_ = nullptr;};
    inline string offsetMillis() const { DARABONBA_PTR_GET_DEFAULT(offsetMillis_, "") };
    inline ScheduleDataAdBreaks& setOffsetMillis(string offsetMillis) { DARABONBA_PTR_SET_VALUE(offsetMillis_, offsetMillis) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ScheduleDataAdBreaks& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ScheduleDataAdBreaks& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // spliceInsertSettings Field Functions 
    bool hasSpliceInsertSettings() const { return this->spliceInsertSettings_ != nullptr;};
    void deleteSpliceInsertSettings() { this->spliceInsertSettings_ = nullptr;};
    inline string spliceInsertSettings() const { DARABONBA_PTR_GET_DEFAULT(spliceInsertSettings_, "") };
    inline ScheduleDataAdBreaks& setSpliceInsertSettings(string spliceInsertSettings) { DARABONBA_PTR_SET_VALUE(spliceInsertSettings_, spliceInsertSettings) };


    // timeSignalSettings Field Functions 
    bool hasTimeSignalSettings() const { return this->timeSignalSettings_ != nullptr;};
    void deleteTimeSignalSettings() { this->timeSignalSettings_ = nullptr;};
    inline string timeSignalSettings() const { DARABONBA_PTR_GET_DEFAULT(timeSignalSettings_, "") };
    inline ScheduleDataAdBreaks& setTimeSignalSettings(string timeSignalSettings) { DARABONBA_PTR_SET_VALUE(timeSignalSettings_, timeSignalSettings) };


  protected:
    std::shared_ptr<string> messageType_ = nullptr;
    std::shared_ptr<string> offsetMillis_ = nullptr;
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> spliceInsertSettings_ = nullptr;
    std::shared_ptr<string> timeSignalSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
