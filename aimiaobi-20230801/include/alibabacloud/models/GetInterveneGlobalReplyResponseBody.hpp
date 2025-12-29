// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTERVENEGLOBALREPLYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTERVENEGLOBALREPLYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetInterveneGlobalReplyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInterveneGlobalReplyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInterveneGlobalReplyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInterveneGlobalReplyResponseBody() = default ;
    GetInterveneGlobalReplyResponseBody(const GetInterveneGlobalReplyResponseBody &) = default ;
    GetInterveneGlobalReplyResponseBody(GetInterveneGlobalReplyResponseBody &&) = default ;
    GetInterveneGlobalReplyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInterveneGlobalReplyResponseBody() = default ;
    GetInterveneGlobalReplyResponseBody& operator=(const GetInterveneGlobalReplyResponseBody &) = default ;
    GetInterveneGlobalReplyResponseBody& operator=(GetInterveneGlobalReplyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ReplyMessagList, replyMessagList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ReplyMessagList, replyMessagList_);
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
      class ReplyMessagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReplyMessagList& obj) { 
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ReplyType, replyType_);
        };
        friend void from_json(const Darabonba::Json& j, ReplyMessagList& obj) { 
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ReplyType, replyType_);
        };
        ReplyMessagList() = default ;
        ReplyMessagList(const ReplyMessagList &) = default ;
        ReplyMessagList(ReplyMessagList &&) = default ;
        ReplyMessagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReplyMessagList() = default ;
        ReplyMessagList& operator=(const ReplyMessagList &) = default ;
        ReplyMessagList& operator=(ReplyMessagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->message_ == nullptr
        && this->replyType_ == nullptr; };
        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline ReplyMessagList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // replyType Field Functions 
        bool hasReplyType() const { return this->replyType_ != nullptr;};
        void deleteReplyType() { this->replyType_ = nullptr;};
        inline string getReplyType() const { DARABONBA_PTR_GET_DEFAULT(replyType_, "") };
        inline ReplyMessagList& setReplyType(string replyType) { DARABONBA_PTR_SET_VALUE(replyType_, replyType) };


      protected:
        shared_ptr<string> message_ {};
        shared_ptr<string> replyType_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->replyMessagList_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
      inline Data& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // replyMessagList Field Functions 
      bool hasReplyMessagList() const { return this->replyMessagList_ != nullptr;};
      void deleteReplyMessagList() { this->replyMessagList_ = nullptr;};
      inline const vector<Data::ReplyMessagList> & getReplyMessagList() const { DARABONBA_PTR_GET_CONST(replyMessagList_, vector<Data::ReplyMessagList>) };
      inline vector<Data::ReplyMessagList> getReplyMessagList() { DARABONBA_PTR_GET(replyMessagList_, vector<Data::ReplyMessagList>) };
      inline Data& setReplyMessagList(const vector<Data::ReplyMessagList> & replyMessagList) { DARABONBA_PTR_SET_VALUE(replyMessagList_, replyMessagList) };
      inline Data& setReplyMessagList(vector<Data::ReplyMessagList> && replyMessagList) { DARABONBA_PTR_SET_RVALUE(replyMessagList_, replyMessagList) };


    protected:
      shared_ptr<int32_t> code_ {};
      shared_ptr<vector<Data::ReplyMessagList>> replyMessagList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInterveneGlobalReplyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInterveneGlobalReplyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInterveneGlobalReplyResponseBody::Data) };
    inline GetInterveneGlobalReplyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInterveneGlobalReplyResponseBody::Data) };
    inline GetInterveneGlobalReplyResponseBody& setData(const GetInterveneGlobalReplyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInterveneGlobalReplyResponseBody& setData(GetInterveneGlobalReplyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInterveneGlobalReplyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInterveneGlobalReplyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInterveneGlobalReplyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInterveneGlobalReplyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetInterveneGlobalReplyResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
