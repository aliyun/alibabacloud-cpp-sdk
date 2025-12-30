// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomizedVoiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizedVoiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizedVoiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomizedVoiceResponseBody() = default ;
    GetCustomizedVoiceResponseBody(const GetCustomizedVoiceResponseBody &) = default ;
    GetCustomizedVoiceResponseBody(GetCustomizedVoiceResponseBody &&) = default ;
    GetCustomizedVoiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizedVoiceResponseBody() = default ;
    GetCustomizedVoiceResponseBody& operator=(const GetCustomizedVoiceResponseBody &) = default ;
    GetCustomizedVoiceResponseBody& operator=(GetCustomizedVoiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomizedVoice, customizedVoice_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomizedVoice, customizedVoice_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomizedVoice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomizedVoice& obj) { 
          DARABONBA_PTR_TO_JSON(DemoAudioMediaId, demoAudioMediaId_);
          DARABONBA_PTR_TO_JSON(Gender, gender_);
          DARABONBA_PTR_TO_JSON(Scenario, scenario_);
          DARABONBA_PTR_TO_JSON(VoiceDesc, voiceDesc_);
          DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_TO_JSON(VoiceName, voiceName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomizedVoice& obj) { 
          DARABONBA_PTR_FROM_JSON(DemoAudioMediaId, demoAudioMediaId_);
          DARABONBA_PTR_FROM_JSON(Gender, gender_);
          DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
          DARABONBA_PTR_FROM_JSON(VoiceDesc, voiceDesc_);
          DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
          DARABONBA_PTR_FROM_JSON(VoiceName, voiceName_);
        };
        CustomizedVoice() = default ;
        CustomizedVoice(const CustomizedVoice &) = default ;
        CustomizedVoice(CustomizedVoice &&) = default ;
        CustomizedVoice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomizedVoice() = default ;
        CustomizedVoice& operator=(const CustomizedVoice &) = default ;
        CustomizedVoice& operator=(CustomizedVoice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->demoAudioMediaId_ == nullptr
        && this->gender_ == nullptr && this->scenario_ == nullptr && this->voiceDesc_ == nullptr && this->voiceId_ == nullptr && this->voiceName_ == nullptr; };
        // demoAudioMediaId Field Functions 
        bool hasDemoAudioMediaId() const { return this->demoAudioMediaId_ != nullptr;};
        void deleteDemoAudioMediaId() { this->demoAudioMediaId_ = nullptr;};
        inline string getDemoAudioMediaId() const { DARABONBA_PTR_GET_DEFAULT(demoAudioMediaId_, "") };
        inline CustomizedVoice& setDemoAudioMediaId(string demoAudioMediaId) { DARABONBA_PTR_SET_VALUE(demoAudioMediaId_, demoAudioMediaId) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
        inline CustomizedVoice& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
        inline CustomizedVoice& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


        // voiceDesc Field Functions 
        bool hasVoiceDesc() const { return this->voiceDesc_ != nullptr;};
        void deleteVoiceDesc() { this->voiceDesc_ = nullptr;};
        inline string getVoiceDesc() const { DARABONBA_PTR_GET_DEFAULT(voiceDesc_, "") };
        inline CustomizedVoice& setVoiceDesc(string voiceDesc) { DARABONBA_PTR_SET_VALUE(voiceDesc_, voiceDesc) };


        // voiceId Field Functions 
        bool hasVoiceId() const { return this->voiceId_ != nullptr;};
        void deleteVoiceId() { this->voiceId_ = nullptr;};
        inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
        inline CustomizedVoice& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


        // voiceName Field Functions 
        bool hasVoiceName() const { return this->voiceName_ != nullptr;};
        void deleteVoiceName() { this->voiceName_ = nullptr;};
        inline string getVoiceName() const { DARABONBA_PTR_GET_DEFAULT(voiceName_, "") };
        inline CustomizedVoice& setVoiceName(string voiceName) { DARABONBA_PTR_SET_VALUE(voiceName_, voiceName) };


      protected:
        // The media asset ID of the sample audio file.
        shared_ptr<string> demoAudioMediaId_ {};
        // The gender. Valid values:
        // 
        // *   female
        // *   male
        shared_ptr<string> gender_ {};
        // The demonstration scenario.
        // 
        // Valid values:
        // 
        // *   **story**
        // *   **interaction**
        // *   **navigation**
        shared_ptr<string> scenario_ {};
        // The voice description.
        shared_ptr<string> voiceDesc_ {};
        // The voice ID.
        shared_ptr<string> voiceId_ {};
        // The voice name.
        shared_ptr<string> voiceName_ {};
      };

      virtual bool empty() const override { return this->customizedVoice_ == nullptr; };
      // customizedVoice Field Functions 
      bool hasCustomizedVoice() const { return this->customizedVoice_ != nullptr;};
      void deleteCustomizedVoice() { this->customizedVoice_ = nullptr;};
      inline const Data::CustomizedVoice & getCustomizedVoice() const { DARABONBA_PTR_GET_CONST(customizedVoice_, Data::CustomizedVoice) };
      inline Data::CustomizedVoice getCustomizedVoice() { DARABONBA_PTR_GET(customizedVoice_, Data::CustomizedVoice) };
      inline Data& setCustomizedVoice(const Data::CustomizedVoice & customizedVoice) { DARABONBA_PTR_SET_VALUE(customizedVoice_, customizedVoice) };
      inline Data& setCustomizedVoice(Data::CustomizedVoice && customizedVoice) { DARABONBA_PTR_SET_RVALUE(customizedVoice_, customizedVoice) };


    protected:
      // The personalized human voice.
      shared_ptr<Data::CustomizedVoice> customizedVoice_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomizedVoiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomizedVoiceResponseBody::Data) };
    inline GetCustomizedVoiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomizedVoiceResponseBody::Data) };
    inline GetCustomizedVoiceResponseBody& setData(const GetCustomizedVoiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomizedVoiceResponseBody& setData(GetCustomizedVoiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomizedVoiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomizedVoiceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<GetCustomizedVoiceResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
