// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSSEDIALOGUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTETEXTBOOKASSISTANTSSEDIALOGUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ExecuteTextbookAssistantSseDialogueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteTextbookAssistantSseDialogueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(assistant, assistant_);
      DARABONBA_PTR_TO_JSON(chatId, chatId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteTextbookAssistantSseDialogueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(assistant, assistant_);
      DARABONBA_PTR_FROM_JSON(chatId, chatId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    ExecuteTextbookAssistantSseDialogueResponseBody() = default ;
    ExecuteTextbookAssistantSseDialogueResponseBody(const ExecuteTextbookAssistantSseDialogueResponseBody &) = default ;
    ExecuteTextbookAssistantSseDialogueResponseBody(ExecuteTextbookAssistantSseDialogueResponseBody &&) = default ;
    ExecuteTextbookAssistantSseDialogueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteTextbookAssistantSseDialogueResponseBody() = default ;
    ExecuteTextbookAssistantSseDialogueResponseBody& operator=(const ExecuteTextbookAssistantSseDialogueResponseBody &) = default ;
    ExecuteTextbookAssistantSseDialogueResponseBody& operator=(ExecuteTextbookAssistantSseDialogueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(englishResult, englishResult_);
        DARABONBA_PTR_TO_JSON(isFinish, isFinish_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(englishResult, englishResult_);
        DARABONBA_PTR_FROM_JSON(isFinish, isFinish_);
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
      virtual bool empty() const override { return this->englishResult_ == nullptr
        && this->isFinish_ == nullptr; };
      // englishResult Field Functions 
      bool hasEnglishResult() const { return this->englishResult_ != nullptr;};
      void deleteEnglishResult() { this->englishResult_ = nullptr;};
      inline string getEnglishResult() const { DARABONBA_PTR_GET_DEFAULT(englishResult_, "") };
      inline Data& setEnglishResult(string englishResult) { DARABONBA_PTR_SET_VALUE(englishResult_, englishResult) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


    protected:
      shared_ptr<string> englishResult_ {};
      shared_ptr<bool> isFinish_ {};
    };

    virtual bool empty() const override { return this->assistant_ == nullptr
        && this->chatId_ == nullptr && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->user_ == nullptr; };
    // assistant Field Functions 
    bool hasAssistant() const { return this->assistant_ != nullptr;};
    void deleteAssistant() { this->assistant_ = nullptr;};
    inline string getAssistant() const { DARABONBA_PTR_GET_DEFAULT(assistant_, "") };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setAssistant(string assistant) { DARABONBA_PTR_SET_VALUE(assistant_, assistant) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteTextbookAssistantSseDialogueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteTextbookAssistantSseDialogueResponseBody::Data) };
    inline ExecuteTextbookAssistantSseDialogueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteTextbookAssistantSseDialogueResponseBody::Data) };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setData(const ExecuteTextbookAssistantSseDialogueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setData(ExecuteTextbookAssistantSseDialogueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ExecuteTextbookAssistantSseDialogueResponseBody& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    shared_ptr<string> assistant_ {};
    shared_ptr<string> chatId_ {};
    shared_ptr<ExecuteTextbookAssistantSseDialogueResponseBody::Data> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
