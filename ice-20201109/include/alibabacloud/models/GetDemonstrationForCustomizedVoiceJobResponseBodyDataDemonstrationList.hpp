// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODYDATADEMONSTRATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODYDATADEMONSTRATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& obj) { 
      DARABONBA_PTR_TO_JSON(AudioId, audioId_);
      DARABONBA_PTR_TO_JSON(DemoAudio, demoAudio_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioId, audioId_);
      DARABONBA_PTR_FROM_JSON(DemoAudio, demoAudio_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList(const GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList(GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList &&) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& operator=(const GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& operator=(GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioId_ != nullptr
        && this->demoAudio_ != nullptr && this->text_ != nullptr; };
    // audioId Field Functions 
    bool hasAudioId() const { return this->audioId_ != nullptr;};
    void deleteAudioId() { this->audioId_ = nullptr;};
    inline int32_t audioId() const { DARABONBA_PTR_GET_DEFAULT(audioId_, 0) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& setAudioId(int32_t audioId) { DARABONBA_PTR_SET_VALUE(audioId_, audioId) };


    // demoAudio Field Functions 
    bool hasDemoAudio() const { return this->demoAudio_ != nullptr;};
    void deleteDemoAudio() { this->demoAudio_ = nullptr;};
    inline string demoAudio() const { DARABONBA_PTR_GET_DEFAULT(demoAudio_, "") };
    inline GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& setDemoAudio(string demoAudio) { DARABONBA_PTR_SET_VALUE(demoAudio_, demoAudio) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The sequence number of the text, which corresponds to the AduioRecordId parameter to be passed during audio check.
    std::shared_ptr<int32_t> audioId_ = nullptr;
    // The URL of the sample audio.
    // 
    // *   The value is an Object Storage Service (OSS) URL.
    // 
    //     **
    // 
    //     **Note**: The URL expires in 12 hours.
    std::shared_ptr<string> demoAudio_ = nullptr;
    // The text content to be read.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
