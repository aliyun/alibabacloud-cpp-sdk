// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAITEACHERSYNCDIALOGUESUGGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAITEACHERSYNCDIALOGUESUGGESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class GetAITeacherSyncDialogueSuggestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAITeacherSyncDialogueSuggestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAITeacherSyncDialogueSuggestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetAITeacherSyncDialogueSuggestionResponseBody() = default ;
    GetAITeacherSyncDialogueSuggestionResponseBody(const GetAITeacherSyncDialogueSuggestionResponseBody &) = default ;
    GetAITeacherSyncDialogueSuggestionResponseBody(GetAITeacherSyncDialogueSuggestionResponseBody &&) = default ;
    GetAITeacherSyncDialogueSuggestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAITeacherSyncDialogueSuggestionResponseBody() = default ;
    GetAITeacherSyncDialogueSuggestionResponseBody& operator=(const GetAITeacherSyncDialogueSuggestionResponseBody &) = default ;
    GetAITeacherSyncDialogueSuggestionResponseBody& operator=(GetAITeacherSyncDialogueSuggestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(chineseResult, chineseResult_);
        DARABONBA_PTR_TO_JSON(englishResult, englishResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(chineseResult, chineseResult_);
        DARABONBA_PTR_FROM_JSON(englishResult, englishResult_);
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
      virtual bool empty() const override { return this->chineseResult_ == nullptr
        && this->englishResult_ == nullptr; };
      // chineseResult Field Functions 
      bool hasChineseResult() const { return this->chineseResult_ != nullptr;};
      void deleteChineseResult() { this->chineseResult_ = nullptr;};
      inline string getChineseResult() const { DARABONBA_PTR_GET_DEFAULT(chineseResult_, "") };
      inline Data& setChineseResult(string chineseResult) { DARABONBA_PTR_SET_VALUE(chineseResult_, chineseResult) };


      // englishResult Field Functions 
      bool hasEnglishResult() const { return this->englishResult_ != nullptr;};
      void deleteEnglishResult() { this->englishResult_ = nullptr;};
      inline string getEnglishResult() const { DARABONBA_PTR_GET_DEFAULT(englishResult_, "") };
      inline Data& setEnglishResult(string englishResult) { DARABONBA_PTR_SET_VALUE(englishResult_, englishResult) };


    protected:
      shared_ptr<string> chineseResult_ {};
      shared_ptr<string> englishResult_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAITeacherSyncDialogueSuggestionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAITeacherSyncDialogueSuggestionResponseBody::Data) };
    inline GetAITeacherSyncDialogueSuggestionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAITeacherSyncDialogueSuggestionResponseBody::Data) };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setData(const GetAITeacherSyncDialogueSuggestionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setData(GetAITeacherSyncDialogueSuggestionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAITeacherSyncDialogueSuggestionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetAITeacherSyncDialogueSuggestionResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
