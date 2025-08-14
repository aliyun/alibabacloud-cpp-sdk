// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELASSEMBLYPROGRAM_HPP_
#define ALIBABACLOUD_MODELS_CHANNELASSEMBLYPROGRAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblyProgramAdBreaks.hpp>
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
    virtual bool empty() const override { this->adBreaks_ != nullptr
        && this->arn_ != nullptr && this->channelName_ != nullptr && this->clipRange_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->programName_ != nullptr && this->sourceLocationName_ != nullptr && this->sourceName_ != nullptr && this->sourceType_ != nullptr && this->transition_ != nullptr; };
    // adBreaks Field Functions 
    bool hasAdBreaks() const { return this->adBreaks_ != nullptr;};
    void deleteAdBreaks() { this->adBreaks_ = nullptr;};
    inline const vector<ChannelAssemblyProgramAdBreaks> & adBreaks() const { DARABONBA_PTR_GET_CONST(adBreaks_, vector<ChannelAssemblyProgramAdBreaks>) };
    inline vector<ChannelAssemblyProgramAdBreaks> adBreaks() { DARABONBA_PTR_GET(adBreaks_, vector<ChannelAssemblyProgramAdBreaks>) };
    inline ChannelAssemblyProgram& setAdBreaks(const vector<ChannelAssemblyProgramAdBreaks> & adBreaks) { DARABONBA_PTR_SET_VALUE(adBreaks_, adBreaks) };
    inline ChannelAssemblyProgram& setAdBreaks(vector<ChannelAssemblyProgramAdBreaks> && adBreaks) { DARABONBA_PTR_SET_RVALUE(adBreaks_, adBreaks) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ChannelAssemblyProgram& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline ChannelAssemblyProgram& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // clipRange Field Functions 
    bool hasClipRange() const { return this->clipRange_ != nullptr;};
    void deleteClipRange() { this->clipRange_ = nullptr;};
    inline string clipRange() const { DARABONBA_PTR_GET_DEFAULT(clipRange_, "") };
    inline ChannelAssemblyProgram& setClipRange(string clipRange) { DARABONBA_PTR_SET_VALUE(clipRange_, clipRange) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ChannelAssemblyProgram& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ChannelAssemblyProgram& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ChannelAssemblyProgram& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ChannelAssemblyProgram& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ChannelAssemblyProgram& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ChannelAssemblyProgram& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // transition Field Functions 
    bool hasTransition() const { return this->transition_ != nullptr;};
    void deleteTransition() { this->transition_ = nullptr;};
    inline string transition() const { DARABONBA_PTR_GET_DEFAULT(transition_, "") };
    inline ChannelAssemblyProgram& setTransition(string transition) { DARABONBA_PTR_SET_VALUE(transition_, transition) };


  protected:
    std::shared_ptr<vector<ChannelAssemblyProgramAdBreaks>> adBreaks_ = nullptr;
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> channelName_ = nullptr;
    std::shared_ptr<string> clipRange_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> programName_ = nullptr;
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> transition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
