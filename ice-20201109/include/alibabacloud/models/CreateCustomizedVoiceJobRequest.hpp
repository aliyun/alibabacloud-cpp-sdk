// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIZEDVOICEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIZEDVOICEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateCustomizedVoiceJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(VoiceDesc, voiceDesc_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomizedVoiceJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(VoiceDesc, voiceDesc_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    CreateCustomizedVoiceJobRequest() = default ;
    CreateCustomizedVoiceJobRequest(const CreateCustomizedVoiceJobRequest &) = default ;
    CreateCustomizedVoiceJobRequest(CreateCustomizedVoiceJobRequest &&) = default ;
    CreateCustomizedVoiceJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomizedVoiceJobRequest() = default ;
    CreateCustomizedVoiceJobRequest& operator=(const CreateCustomizedVoiceJobRequest &) = default ;
    CreateCustomizedVoiceJobRequest& operator=(CreateCustomizedVoiceJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gender_ != nullptr
        && this->scenario_ != nullptr && this->voiceDesc_ != nullptr && this->voiceId_ != nullptr && this->voiceName_ != nullptr; };
    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline CreateCustomizedVoiceJobRequest& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateCustomizedVoiceJobRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // voiceDesc Field Functions 
    bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
    void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
    inline string voiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
    inline CreateCustomizedVoiceJobRequest& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline CreateCustomizedVoiceJobRequest& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string voiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline CreateCustomizedVoiceJobRequest& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The gender. Valid values:
    // 
    // *   female
    // *   male
    // 
    // This parameter is required.
    std::shared_ptr<string> gender_ = nullptr;
    // The scenario. Valid values:
    // 
    // *   story
    // *   interaction
    // *   navigation
    // 
    // This parameter is required.
    std::shared_ptr<string> scenario_ = nullptr;
    // The voice description.
    // 
    // *   The description can be up to 256 characters in length.
    std::shared_ptr<string> voiceDesc_ = nullptr;
    // The voice ID. It can be the English name or Chinese Pinyin of the voice.
    // 
    // *   The value must be a unique ID that is not used by other custom voices.
    // *   The ID can be up to 32 characters in length.
    // *   Only letters and digits are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> voiceId_ = nullptr;
    // The voice name.
    // 
    // *   The name can be up to 32 characters in length.
    std::shared_ptr<string> voiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
