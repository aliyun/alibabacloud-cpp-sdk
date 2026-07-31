// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVOICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVOICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class ListVoiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVoiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VoiceList, voiceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVoiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VoiceList, voiceList_);
    };
    ListVoiceResponseBody() = default ;
    ListVoiceResponseBody(const ListVoiceResponseBody &) = default ;
    ListVoiceResponseBody(ListVoiceResponseBody &&) = default ;
    ListVoiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVoiceResponseBody() = default ;
    ListVoiceResponseBody& operator=(const ListVoiceResponseBody &) = default ;
    ListVoiceResponseBody& operator=(ListVoiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceList& obj) { 
        DARABONBA_PTR_TO_JSON(Gender, gender_);
        DARABONBA_PTR_TO_JSON(Illustration, illustration_);
        DARABONBA_PTR_TO_JSON(IllustrationAudio, illustrationAudio_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(ModelId, modelId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Voice, voice_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Gender, gender_);
        DARABONBA_PTR_FROM_JSON(Illustration, illustration_);
        DARABONBA_PTR_FROM_JSON(IllustrationAudio, illustrationAudio_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Voice, voice_);
      };
      VoiceList() = default ;
      VoiceList(const VoiceList &) = default ;
      VoiceList(VoiceList &&) = default ;
      VoiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceList() = default ;
      VoiceList& operator=(const VoiceList &) = default ;
      VoiceList& operator=(VoiceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gender_ == nullptr
        && this->illustration_ == nullptr && this->illustrationAudio_ == nullptr && this->language_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr
        && this->voice_ == nullptr; };
      // gender Field Functions 
      bool hasGender() const { return this->gender_ != nullptr;};
      void deleteGender() { this->gender_ = nullptr;};
      inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
      inline VoiceList& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


      // illustration Field Functions 
      bool hasIllustration() const { return this->illustration_ != nullptr;};
      void deleteIllustration() { this->illustration_ = nullptr;};
      inline string getIllustration() const { DARABONBA_PTR_GET_DEFAULT(illustration_, "") };
      inline VoiceList& setIllustration(string illustration) { DARABONBA_PTR_SET_VALUE(illustration_, illustration) };


      // illustrationAudio Field Functions 
      bool hasIllustrationAudio() const { return this->illustrationAudio_ != nullptr;};
      void deleteIllustrationAudio() { this->illustrationAudio_ = nullptr;};
      inline string getIllustrationAudio() const { DARABONBA_PTR_GET_DEFAULT(illustrationAudio_, "") };
      inline VoiceList& setIllustrationAudio(string illustrationAudio) { DARABONBA_PTR_SET_VALUE(illustrationAudio_, illustrationAudio) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline VoiceList& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline VoiceList& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VoiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // voice Field Functions 
      bool hasVoice() const { return this->voice_ != nullptr;};
      void deleteVoice() { this->voice_ = nullptr;};
      inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
      inline VoiceList& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    protected:
      shared_ptr<string> gender_ {};
      shared_ptr<string> illustration_ {};
      shared_ptr<string> illustrationAudio_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> modelId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> voice_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->voiceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVoiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // voiceList Field Functions 
    bool hasVoiceList() const { return this->voiceList_ != nullptr;};
    void deleteVoiceList() { this->voiceList_ = nullptr;};
    inline const vector<ListVoiceResponseBody::VoiceList> & getVoiceList() const { DARABONBA_PTR_GET_CONST(voiceList_, vector<ListVoiceResponseBody::VoiceList>) };
    inline vector<ListVoiceResponseBody::VoiceList> getVoiceList() { DARABONBA_PTR_GET(voiceList_, vector<ListVoiceResponseBody::VoiceList>) };
    inline ListVoiceResponseBody& setVoiceList(const vector<ListVoiceResponseBody::VoiceList> & voiceList) { DARABONBA_PTR_SET_VALUE(voiceList_, voiceList) };
    inline ListVoiceResponseBody& setVoiceList(vector<ListVoiceResponseBody::VoiceList> && voiceList) { DARABONBA_PTR_SET_RVALUE(voiceList_, voiceList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListVoiceResponseBody::VoiceList>> voiceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
