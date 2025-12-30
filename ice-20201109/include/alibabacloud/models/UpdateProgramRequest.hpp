// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROGRAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateProgramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProgramRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(ClipRange, clipRange_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Transition, transition_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProgramRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(ClipRange, clipRange_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Transition, transition_);
    };
    UpdateProgramRequest() = default ;
    UpdateProgramRequest(const UpdateProgramRequest &) = default ;
    UpdateProgramRequest(UpdateProgramRequest &&) = default ;
    UpdateProgramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProgramRequest() = default ;
    UpdateProgramRequest& operator=(const UpdateProgramRequest &) = default ;
    UpdateProgramRequest& operator=(UpdateProgramRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adBreaks_ == nullptr
        && this->channelName_ == nullptr && this->clipRange_ == nullptr && this->programName_ == nullptr && this->sourceLocationName_ == nullptr && this->sourceName_ == nullptr
        && this->sourceType_ == nullptr && this->transition_ == nullptr; };
    // adBreaks Field Functions 
    bool hasAdBreaks() const { return this->adBreaks_ != nullptr;};
    void deleteAdBreaks() { this->adBreaks_ = nullptr;};
    inline string getAdBreaks() const { DARABONBA_PTR_GET_DEFAULT(adBreaks_, "") };
    inline UpdateProgramRequest& setAdBreaks(string adBreaks) { DARABONBA_PTR_SET_VALUE(adBreaks_, adBreaks) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline UpdateProgramRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // clipRange Field Functions 
    bool hasClipRange() const { return this->clipRange_ != nullptr;};
    void deleteClipRange() { this->clipRange_ = nullptr;};
    inline string getClipRange() const { DARABONBA_PTR_GET_DEFAULT(clipRange_, "") };
    inline UpdateProgramRequest& setClipRange(string clipRange) { DARABONBA_PTR_SET_VALUE(clipRange_, clipRange) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline UpdateProgramRequest& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline UpdateProgramRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline UpdateProgramRequest& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateProgramRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // transition Field Functions 
    bool hasTransition() const { return this->transition_ != nullptr;};
    void deleteTransition() { this->transition_ = nullptr;};
    inline string getTransition() const { DARABONBA_PTR_GET_DEFAULT(transition_, "") };
    inline UpdateProgramRequest& setTransition(string transition) { DARABONBA_PTR_SET_VALUE(transition_, transition) };


  protected:
    // The information about ad breaks.
    shared_ptr<string> adBreaks_ {};
    // The name of the channel.
    // 
    // This parameter is required.
    shared_ptr<string> channelName_ {};
    // Extracts a clip from the source.
    shared_ptr<string> clipRange_ {};
    // The name of the program.
    // 
    // This parameter is required.
    shared_ptr<string> programName_ {};
    // The name of the source location.
    shared_ptr<string> sourceLocationName_ {};
    // The name of the source.
    shared_ptr<string> sourceName_ {};
    // The source type of the program. Valid values: vodSource and liveSource.
    shared_ptr<string> sourceType_ {};
    // The program transition method.
    shared_ptr<string> transition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
