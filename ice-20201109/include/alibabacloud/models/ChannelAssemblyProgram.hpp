// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELASSEMBLYPROGRAM_HPP_
#define ALIBABACLOUD_MODELS_CHANNELASSEMBLYPROGRAM_HPP_
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
  class ChannelAssemblyProgram : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelAssemblyProgram& obj) { 
      DARABONBA_PTR_TO_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ClipRange, clipRange_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Transition, transition_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelAssemblyProgram& obj) { 
      DARABONBA_PTR_FROM_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ClipRange, clipRange_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Transition, transition_);
    };
    ChannelAssemblyProgram() = default ;
    ChannelAssemblyProgram(const ChannelAssemblyProgram &) = default ;
    ChannelAssemblyProgram(ChannelAssemblyProgram &&) = default ;
    ChannelAssemblyProgram(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelAssemblyProgram() = default ;
    ChannelAssemblyProgram& operator=(const ChannelAssemblyProgram &) = default ;
    ChannelAssemblyProgram& operator=(ChannelAssemblyProgram &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AdBreaks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdBreaks& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
        DARABONBA_PTR_TO_JSON(MessageType, messageType_);
        DARABONBA_PTR_TO_JSON(OffsetMillis, offsetMillis_);
        DARABONBA_PTR_TO_JSON(ProgramName, programName_);
        DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
        DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
        DARABONBA_PTR_TO_JSON(SpliceInsertSettings, spliceInsertSettings_);
        DARABONBA_PTR_TO_JSON(TimeSignalSettings, timeSignalSettings_);
      };
      friend void from_json(const Darabonba::Json& j, AdBreaks& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
        DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
        DARABONBA_PTR_FROM_JSON(OffsetMillis, offsetMillis_);
        DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
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
      virtual bool empty() const override { return this->channelName_ == nullptr
        && this->messageType_ == nullptr && this->offsetMillis_ == nullptr && this->programName_ == nullptr && this->sourceLocationName_ == nullptr && this->sourceName_ == nullptr
        && this->spliceInsertSettings_ == nullptr && this->timeSignalSettings_ == nullptr; };
      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline AdBreaks& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // messageType Field Functions 
      bool hasMessageType() const { return this->messageType_ != nullptr;};
      void deleteMessageType() { this->messageType_ = nullptr;};
      inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
      inline AdBreaks& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


      // offsetMillis Field Functions 
      bool hasOffsetMillis() const { return this->offsetMillis_ != nullptr;};
      void deleteOffsetMillis() { this->offsetMillis_ = nullptr;};
      inline int64_t getOffsetMillis() const { DARABONBA_PTR_GET_DEFAULT(offsetMillis_, 0L) };
      inline AdBreaks& setOffsetMillis(int64_t offsetMillis) { DARABONBA_PTR_SET_VALUE(offsetMillis_, offsetMillis) };


      // programName Field Functions 
      bool hasProgramName() const { return this->programName_ != nullptr;};
      void deleteProgramName() { this->programName_ = nullptr;};
      inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
      inline AdBreaks& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


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
      shared_ptr<string> channelName_ {};
      shared_ptr<string> messageType_ {};
      shared_ptr<int64_t> offsetMillis_ {};
      shared_ptr<string> programName_ {};
      shared_ptr<string> sourceLocationName_ {};
      shared_ptr<string> sourceName_ {};
      shared_ptr<string> spliceInsertSettings_ {};
      shared_ptr<string> timeSignalSettings_ {};
    };

    virtual bool empty() const override { return this->adBreaks_ == nullptr
        && this->arn_ == nullptr && this->channelName_ == nullptr && this->clipRange_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->programName_ == nullptr && this->sourceLocationName_ == nullptr && this->sourceName_ == nullptr && this->sourceType_ == nullptr && this->transition_ == nullptr; };
    // adBreaks Field Functions 
    bool hasAdBreaks() const { return this->adBreaks_ != nullptr;};
    void deleteAdBreaks() { this->adBreaks_ = nullptr;};
    inline const vector<ChannelAssemblyProgram::AdBreaks> & getAdBreaks() const { DARABONBA_PTR_GET_CONST(adBreaks_, vector<ChannelAssemblyProgram::AdBreaks>) };
    inline vector<ChannelAssemblyProgram::AdBreaks> getAdBreaks() { DARABONBA_PTR_GET(adBreaks_, vector<ChannelAssemblyProgram::AdBreaks>) };
    inline ChannelAssemblyProgram& setAdBreaks(const vector<ChannelAssemblyProgram::AdBreaks> & adBreaks) { DARABONBA_PTR_SET_VALUE(adBreaks_, adBreaks) };
    inline ChannelAssemblyProgram& setAdBreaks(vector<ChannelAssemblyProgram::AdBreaks> && adBreaks) { DARABONBA_PTR_SET_RVALUE(adBreaks_, adBreaks) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ChannelAssemblyProgram& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ChannelAssemblyProgram& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // clipRange Field Functions 
    bool hasClipRange() const { return this->clipRange_ != nullptr;};
    void deleteClipRange() { this->clipRange_ = nullptr;};
    inline string getClipRange() const { DARABONBA_PTR_GET_DEFAULT(clipRange_, "") };
    inline ChannelAssemblyProgram& setClipRange(string clipRange) { DARABONBA_PTR_SET_VALUE(clipRange_, clipRange) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ChannelAssemblyProgram& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ChannelAssemblyProgram& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ChannelAssemblyProgram& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ChannelAssemblyProgram& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ChannelAssemblyProgram& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ChannelAssemblyProgram& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // transition Field Functions 
    bool hasTransition() const { return this->transition_ != nullptr;};
    void deleteTransition() { this->transition_ = nullptr;};
    inline string getTransition() const { DARABONBA_PTR_GET_DEFAULT(transition_, "") };
    inline ChannelAssemblyProgram& setTransition(string transition) { DARABONBA_PTR_SET_VALUE(transition_, transition) };


  protected:
    shared_ptr<vector<ChannelAssemblyProgram::AdBreaks>> adBreaks_ {};
    shared_ptr<string> arn_ {};
    shared_ptr<string> channelName_ {};
    shared_ptr<string> clipRange_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> programName_ {};
    shared_ptr<string> sourceLocationName_ {};
    shared_ptr<string> sourceName_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> transition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
