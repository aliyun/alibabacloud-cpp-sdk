// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICESRESPONSEBODYDATACUSTOMIZEDVOICELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMIZEDVOICESRESPONSEBODYDATACUSTOMIZEDVOICELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomizedVoicesResponseBodyDataCustomizedVoiceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& obj) { 
      DARABONBA_PTR_TO_JSON(DemoAudioMediaId, demoAudioMediaId_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VoiceDesc, voiceDesc_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& obj) { 
      DARABONBA_PTR_FROM_JSON(DemoAudioMediaId, demoAudioMediaId_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VoiceDesc, voiceDesc_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
    };
    ListCustomizedVoicesResponseBodyDataCustomizedVoiceList() = default ;
    ListCustomizedVoicesResponseBodyDataCustomizedVoiceList(const ListCustomizedVoicesResponseBodyDataCustomizedVoiceList &) = default ;
    ListCustomizedVoicesResponseBodyDataCustomizedVoiceList(ListCustomizedVoicesResponseBodyDataCustomizedVoiceList &&) = default ;
    ListCustomizedVoicesResponseBodyDataCustomizedVoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomizedVoicesResponseBodyDataCustomizedVoiceList() = default ;
    ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& operator=(const ListCustomizedVoicesResponseBodyDataCustomizedVoiceList &) = default ;
    ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& operator=(ListCustomizedVoicesResponseBodyDataCustomizedVoiceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->demoAudioMediaId_ != nullptr
        && this->gender_ != nullptr && this->scenario_ != nullptr && this->type_ != nullptr && this->voiceDesc_ != nullptr && this->voiceId_ != nullptr
        && this->voiceName_ != nullptr; };
    // demoAudioMediaId Field Functions 
    bool hasDemoAudioMediaId() const { return this->demoAudioMediaId_ != nullptr;};
    void deleteDemoAudioMediaId() { this->demoAudioMediaId_ = nullptr;};
    inline string demoAudioMediaId() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaId_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setDemoAudioMediaId(string demoAudioMediaId) { DARABONBA_PTR_SET_VALUE(demoAudioMediaId_, demoAudioMediaId) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceDesc Field Functions 
    bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
    void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
    inline string voiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceName Field Functions 
    bool hasVoiceName() const { return this->voiceName_ != nullptr;};
    void deleteVoiceName() { this->voiceName_ = nullptr;};
    inline string voiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
    inline ListCustomizedVoicesResponseBodyDataCustomizedVoiceList& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


  protected:
    // The media asset ID of the sample audio file.
    std::shared_ptr<string> demoAudioMediaId_ = nullptr;
    // The gender. Valid values:
    // 
    // *   female
    // *   male
    std::shared_ptr<string> gender_ = nullptr;
    // The scenario. Valid values:
    // 
    // *   story
    // *   interaction
    // *   navigation
    std::shared_ptr<string> scenario_ = nullptr;
    // *   The voice type. Valid values:
    // 
    //     *   Basic
    //     *   Standard
    std::shared_ptr<string> type_ = nullptr;
    // The voice description.
    std::shared_ptr<string> voiceDesc_ = nullptr;
    // The voice ID.
    std::shared_ptr<string> voiceId_ = nullptr;
    // The voice name.
    std::shared_ptr<string> voiceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
