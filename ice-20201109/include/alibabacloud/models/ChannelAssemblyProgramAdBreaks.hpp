// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELASSEMBLYPROGRAMADBREAKS_HPP_
#define ALIBABACLOUD_MODELS_CHANNELASSEMBLYPROGRAMADBREAKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ChannelAssemblyProgramAdBreaks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelAssemblyProgramAdBreaks& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(OffsetMillis, offsetMillis_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SpliceInsertSettings, spliceInsertSettings_);
      DARABONBA_PTR_TO_JSON(TimeSignalSettings, timeSignalSettings_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelAssemblyProgramAdBreaks& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(OffsetMillis, offsetMillis_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SpliceInsertSettings, spliceInsertSettings_);
      DARABONBA_PTR_FROM_JSON(TimeSignalSettings, timeSignalSettings_);
    };
    ChannelAssemblyProgramAdBreaks() = default ;
    ChannelAssemblyProgramAdBreaks(const ChannelAssemblyProgramAdBreaks &) = default ;
    ChannelAssemblyProgramAdBreaks(ChannelAssemblyProgramAdBreaks &&) = default ;
    ChannelAssemblyProgramAdBreaks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelAssemblyProgramAdBreaks() = default ;
    ChannelAssemblyProgramAdBreaks& operator=(const ChannelAssemblyProgramAdBreaks &) = default ;
    ChannelAssemblyProgramAdBreaks& operator=(ChannelAssemblyProgramAdBreaks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelName_ == nullptr
        && return this->messageType_ == nullptr && return this->offsetMillis_ == nullptr && return this->programName_ == nullptr && return this->sourceLocationName_ == nullptr && return this->sourceName_ == nullptr
        && return this->spliceInsertSettings_ == nullptr && return this->timeSignalSettings_ == nullptr; };
    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ChannelAssemblyProgramAdBreaks& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline ChannelAssemblyProgramAdBreaks& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // offsetMillis Field Functions 
    bool hasOffsetMillis() const { return this->offsetMillis_ != nullptr;};
    void deleteOffsetMillis() { this->offsetMillis_ = nullptr;};
    inline int64_t offsetMillis() const { DARABONBA_PTR_GET_DEFAULT(offsetMillis_, 0L) };
    inline ChannelAssemblyProgramAdBreaks& setOffsetMillis(int64_t offsetMillis) { DARABONBA_PTR_SET_VALUE(offsetMillis_, offsetMillis) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ChannelAssemblyProgramAdBreaks& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ChannelAssemblyProgramAdBreaks& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ChannelAssemblyProgramAdBreaks& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // spliceInsertSettings Field Functions 
    bool hasSpliceInsertSettings() const { return this->spliceInsertSettings_ != nullptr;};
    void deleteSpliceInsertSettings() { this->spliceInsertSettings_ = nullptr;};
    inline string spliceInsertSettings() const { DARABONBA_PTR_GET_DEFAULT(spliceInsertSettings_, "") };
    inline ChannelAssemblyProgramAdBreaks& setSpliceInsertSettings(string spliceInsertSettings) { DARABONBA_PTR_SET_VALUE(spliceInsertSettings_, spliceInsertSettings) };


    // timeSignalSettings Field Functions 
    bool hasTimeSignalSettings() const { return this->timeSignalSettings_ != nullptr;};
    void deleteTimeSignalSettings() { this->timeSignalSettings_ = nullptr;};
    inline string timeSignalSettings() const { DARABONBA_PTR_GET_DEFAULT(timeSignalSettings_, "") };
    inline ChannelAssemblyProgramAdBreaks& setTimeSignalSettings(string timeSignalSettings) { DARABONBA_PTR_SET_VALUE(timeSignalSettings_, timeSignalSettings) };


  protected:
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> messageType_ = nullptr;
    std::shared_ptr<int64_t> offsetMillis_ = nullptr;
    std::shared_ptr<string> programName_ = nullptr;
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> spliceInsertSettings_ = nullptr;
    std::shared_ptr<string> timeSignalSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
