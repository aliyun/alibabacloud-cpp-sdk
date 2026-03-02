// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEMORYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEMORYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class QueryMemoryConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMemoryConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMemoryConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMemoryConfigResponseBody() = default ;
    QueryMemoryConfigResponseBody(const QueryMemoryConfigResponseBody &) = default ;
    QueryMemoryConfigResponseBody(QueryMemoryConfigResponseBody &&) = default ;
    QueryMemoryConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMemoryConfigResponseBody() = default ;
    QueryMemoryConfigResponseBody& operator=(const QueryMemoryConfigResponseBody &) = default ;
    QueryMemoryConfigResponseBody& operator=(QueryMemoryConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AutoUpdate, autoUpdate_);
        DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(Prompt, prompt_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
        DARABONBA_PTR_TO_JSON(TopK, topK_);
        DARABONBA_PTR_TO_JSON(UserDefinedId, userDefinedId_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AutoUpdate, autoUpdate_);
        DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
        DARABONBA_PTR_FROM_JSON(TopK, topK_);
        DARABONBA_PTR_FROM_JSON(UserDefinedId, userDefinedId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoUpdate_ == nullptr && this->expirationTime_ == nullptr && this->prompt_ == nullptr && this->threshold_ == nullptr && this->topK_ == nullptr
        && this->userDefinedId_ == nullptr && this->workspaceId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // autoUpdate Field Functions 
      bool hasAutoUpdate() const { return this->autoUpdate_ != nullptr;};
      void deleteAutoUpdate() { this->autoUpdate_ = nullptr;};
      inline bool getAutoUpdate() const { DARABONBA_PTR_GET_DEFAULT(autoUpdate_, false) };
      inline Data& setAutoUpdate(bool autoUpdate) { DARABONBA_PTR_SET_VALUE(autoUpdate_, autoUpdate) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int32_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0) };
      inline Data& setExpirationTime(int32_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline Data& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline Data& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


      // topK Field Functions 
      bool hasTopK() const { return this->topK_ != nullptr;};
      void deleteTopK() { this->topK_ = nullptr;};
      inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
      inline Data& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


      // userDefinedId Field Functions 
      bool hasUserDefinedId() const { return this->userDefinedId_ != nullptr;};
      void deleteUserDefinedId() { this->userDefinedId_ = nullptr;};
      inline string getUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(userDefinedId_, "") };
      inline Data& setUserDefinedId(string userDefinedId) { DARABONBA_PTR_SET_VALUE(userDefinedId_, userDefinedId) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<bool> autoUpdate_ {};
      shared_ptr<int32_t> expirationTime_ {};
      shared_ptr<string> prompt_ {};
      shared_ptr<double> threshold_ {};
      shared_ptr<int32_t> topK_ {};
      shared_ptr<string> userDefinedId_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMemoryConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryMemoryConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryMemoryConfigResponseBody::Data) };
    inline QueryMemoryConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryMemoryConfigResponseBody::Data) };
    inline QueryMemoryConfigResponseBody& setData(const QueryMemoryConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMemoryConfigResponseBody& setData(QueryMemoryConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryMemoryConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMemoryConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMemoryConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMemoryConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryMemoryConfigResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
