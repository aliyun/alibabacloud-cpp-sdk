// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEMESSAGELOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEMESSAGELOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineMessageLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineMessageLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineMessageLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetHotlineMessageLogResponseBody() = default ;
    GetHotlineMessageLogResponseBody(const GetHotlineMessageLogResponseBody &) = default ;
    GetHotlineMessageLogResponseBody(GetHotlineMessageLogResponseBody &&) = default ;
    GetHotlineMessageLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineMessageLogResponseBody() = default ;
    GetHotlineMessageLogResponseBody& operator=(const GetHotlineMessageLogResponseBody &) = default ;
    GetHotlineMessageLogResponseBody& operator=(GetHotlineMessageLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Acid, acid_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Mid, mid_);
        DARABONBA_PTR_TO_JSON(SenderType, senderType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Acid, acid_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Mid, mid_);
        DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      virtual bool empty() const override { return this->acid_ == nullptr
        && this->content_ == nullptr && this->endTime_ == nullptr && this->mid_ == nullptr && this->senderType_ == nullptr && this->startTime_ == nullptr; };
      // acid Field Functions 
      bool hasAcid() const { return this->acid_ != nullptr;};
      void deleteAcid() { this->acid_ = nullptr;};
      inline string getAcid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
      inline Data& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // mid Field Functions 
      bool hasMid() const { return this->mid_ != nullptr;};
      void deleteMid() { this->mid_ = nullptr;};
      inline string getMid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
      inline Data& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


      // senderType Field Functions 
      bool hasSenderType() const { return this->senderType_ != nullptr;};
      void deleteSenderType() { this->senderType_ = nullptr;};
      inline int32_t getSenderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, 0) };
      inline Data& setSenderType(int32_t senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> acid_ {};
      shared_ptr<string> content_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> mid_ {};
      shared_ptr<int32_t> senderType_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetHotlineMessageLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetHotlineMessageLogResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetHotlineMessageLogResponseBody::Data>) };
    inline vector<GetHotlineMessageLogResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetHotlineMessageLogResponseBody::Data>) };
    inline GetHotlineMessageLogResponseBody& setData(const vector<GetHotlineMessageLogResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetHotlineMessageLogResponseBody& setData(vector<GetHotlineMessageLogResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetHotlineMessageLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHotlineMessageLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHotlineMessageLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetHotlineMessageLogResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
