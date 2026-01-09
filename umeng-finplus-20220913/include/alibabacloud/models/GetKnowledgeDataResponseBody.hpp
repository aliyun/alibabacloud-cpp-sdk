// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetKnowledgeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKnowledgeDataResponseBody() = default ;
    GetKnowledgeDataResponseBody(const GetKnowledgeDataResponseBody &) = default ;
    GetKnowledgeDataResponseBody(GetKnowledgeDataResponseBody &&) = default ;
    GetKnowledgeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeDataResponseBody() = default ;
    GetKnowledgeDataResponseBody& operator=(const GetKnowledgeDataResponseBody &) = default ;
    GetKnowledgeDataResponseBody& operator=(GetKnowledgeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(internalKnowledgeId, internalKnowledgeId_);
        DARABONBA_PTR_TO_JSON(knowledgeName, knowledgeName_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(internalKnowledgeId, internalKnowledgeId_);
        DARABONBA_PTR_FROM_JSON(knowledgeName, knowledgeName_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
        && this->internalKnowledgeId_ == nullptr && this->knowledgeName_ == nullptr && this->message_ == nullptr && this->status_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // internalKnowledgeId Field Functions 
      bool hasInternalKnowledgeId() const { return this->internalKnowledgeId_ != nullptr;};
      void deleteInternalKnowledgeId() { this->internalKnowledgeId_ = nullptr;};
      inline string getInternalKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(internalKnowledgeId_, "") };
      inline Data& setInternalKnowledgeId(string internalKnowledgeId) { DARABONBA_PTR_SET_VALUE(internalKnowledgeId_, internalKnowledgeId) };


      // knowledgeName Field Functions 
      bool hasKnowledgeName() const { return this->knowledgeName_ != nullptr;};
      void deleteKnowledgeName() { this->knowledgeName_ = nullptr;};
      inline string getKnowledgeName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeName_, "") };
      inline Data& setKnowledgeName(string knowledgeName) { DARABONBA_PTR_SET_VALUE(knowledgeName_, knowledgeName) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> internalKnowledgeId_ {};
      shared_ptr<string> knowledgeName_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKnowledgeDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetKnowledgeDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetKnowledgeDataResponseBody::Data>) };
    inline vector<GetKnowledgeDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetKnowledgeDataResponseBody::Data>) };
    inline GetKnowledgeDataResponseBody& setData(const vector<GetKnowledgeDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKnowledgeDataResponseBody& setData(vector<GetKnowledgeDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetKnowledgeDataResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKnowledgeDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetKnowledgeDataResponseBody::Data>> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
