// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASRCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASRCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class GetAsrConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsrConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsrConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAsrConfigResponseBody() = default ;
    GetAsrConfigResponseBody(const GetAsrConfigResponseBody &) = default ;
    GetAsrConfigResponseBody(GetAsrConfigResponseBody &&) = default ;
    GetAsrConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsrConfigResponseBody() = default ;
    GetAsrConfigResponseBody& operator=(const GetAsrConfigResponseBody &) = default ;
    GetAsrConfigResponseBody& operator=(GetAsrConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AsrAcousticModelId, asrAcousticModelId_);
        DARABONBA_PTR_TO_JSON(AsrClassVocabularyId, asrClassVocabularyId_);
        DARABONBA_PTR_TO_JSON(AsrCustomizationId, asrCustomizationId_);
        DARABONBA_PTR_TO_JSON(AsrOverrides, asrOverrides_);
        DARABONBA_PTR_TO_JSON(AsrVocabularyId, asrVocabularyId_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(EngineXufei, engineXufei_);
        DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AsrAcousticModelId, asrAcousticModelId_);
        DARABONBA_PTR_FROM_JSON(AsrClassVocabularyId, asrClassVocabularyId_);
        DARABONBA_PTR_FROM_JSON(AsrCustomizationId, asrCustomizationId_);
        DARABONBA_PTR_FROM_JSON(AsrOverrides, asrOverrides_);
        DARABONBA_PTR_FROM_JSON(AsrVocabularyId, asrVocabularyId_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(EngineXufei, engineXufei_);
        DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
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
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->asrAcousticModelId_ == nullptr && this->asrClassVocabularyId_ == nullptr && this->asrCustomizationId_ == nullptr && this->asrOverrides_ == nullptr && this->asrVocabularyId_ == nullptr
        && this->engine_ == nullptr && this->engineXufei_ == nullptr && this->nlsServiceType_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline Data& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // asrAcousticModelId Field Functions 
      bool hasAsrAcousticModelId() const { return this->asrAcousticModelId_ != nullptr;};
      void deleteAsrAcousticModelId() { this->asrAcousticModelId_ = nullptr;};
      inline string getAsrAcousticModelId() const { DARABONBA_PTR_GET_DEFAULT(asrAcousticModelId_, "") };
      inline Data& setAsrAcousticModelId(string asrAcousticModelId) { DARABONBA_PTR_SET_VALUE(asrAcousticModelId_, asrAcousticModelId) };


      // asrClassVocabularyId Field Functions 
      bool hasAsrClassVocabularyId() const { return this->asrClassVocabularyId_ != nullptr;};
      void deleteAsrClassVocabularyId() { this->asrClassVocabularyId_ = nullptr;};
      inline string getAsrClassVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(asrClassVocabularyId_, "") };
      inline Data& setAsrClassVocabularyId(string asrClassVocabularyId) { DARABONBA_PTR_SET_VALUE(asrClassVocabularyId_, asrClassVocabularyId) };


      // asrCustomizationId Field Functions 
      bool hasAsrCustomizationId() const { return this->asrCustomizationId_ != nullptr;};
      void deleteAsrCustomizationId() { this->asrCustomizationId_ = nullptr;};
      inline string getAsrCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(asrCustomizationId_, "") };
      inline Data& setAsrCustomizationId(string asrCustomizationId) { DARABONBA_PTR_SET_VALUE(asrCustomizationId_, asrCustomizationId) };


      // asrOverrides Field Functions 
      bool hasAsrOverrides() const { return this->asrOverrides_ != nullptr;};
      void deleteAsrOverrides() { this->asrOverrides_ = nullptr;};
      inline string getAsrOverrides() const { DARABONBA_PTR_GET_DEFAULT(asrOverrides_, "") };
      inline Data& setAsrOverrides(string asrOverrides) { DARABONBA_PTR_SET_VALUE(asrOverrides_, asrOverrides) };


      // asrVocabularyId Field Functions 
      bool hasAsrVocabularyId() const { return this->asrVocabularyId_ != nullptr;};
      void deleteAsrVocabularyId() { this->asrVocabularyId_ = nullptr;};
      inline string getAsrVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(asrVocabularyId_, "") };
      inline Data& setAsrVocabularyId(string asrVocabularyId) { DARABONBA_PTR_SET_VALUE(asrVocabularyId_, asrVocabularyId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineXufei Field Functions 
      bool hasEngineXufei() const { return this->engineXufei_ != nullptr;};
      void deleteEngineXufei() { this->engineXufei_ = nullptr;};
      inline string getEngineXufei() const { DARABONBA_PTR_GET_DEFAULT(engineXufei_, "") };
      inline Data& setEngineXufei(string engineXufei) { DARABONBA_PTR_SET_VALUE(engineXufei_, engineXufei) };


      // nlsServiceType Field Functions 
      bool hasNlsServiceType() const { return this->nlsServiceType_ != nullptr;};
      void deleteNlsServiceType() { this->nlsServiceType_ = nullptr;};
      inline string getNlsServiceType() const { DARABONBA_PTR_GET_DEFAULT(nlsServiceType_, "") };
      inline Data& setNlsServiceType(string nlsServiceType) { DARABONBA_PTR_SET_VALUE(nlsServiceType_, nlsServiceType) };


    protected:
      // The application key.
      shared_ptr<string> appKey_ {};
      // The acoustic model ID.
      shared_ptr<string> asrAcousticModelId_ {};
      // The ASR class vocabulary ID.
      shared_ptr<string> asrClassVocabularyId_ {};
      // The customization ID.
      shared_ptr<string> asrCustomizationId_ {};
      shared_ptr<string> asrOverrides_ {};
      // The vocabulary ID. You can view the ID on the [ASR Vocabulary Management page](https://aiccs.console.aliyun.com/sentence/vocab?spm=a2c4g.11186623.0.0.7f9bf965IKBpsi).
      shared_ptr<string> asrVocabularyId_ {};
      // The speech engine.
      shared_ptr<string> engine_ {};
      // Parameters for the iFLYTEK engine.
      shared_ptr<string> engineXufei_ {};
      // The NLS service type.
      shared_ptr<string> nlsServiceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMsg_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAsrConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAsrConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAsrConfigResponseBody::Data) };
    inline GetAsrConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAsrConfigResponseBody::Data) };
    inline GetAsrConfigResponseBody& setData(const GetAsrConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAsrConfigResponseBody& setData(GetAsrConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetAsrConfigResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAsrConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAsrConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAsrConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetAsrConfigResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
