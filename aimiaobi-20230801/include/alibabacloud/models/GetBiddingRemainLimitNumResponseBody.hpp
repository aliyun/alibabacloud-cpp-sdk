// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIDDINGREMAINLIMITNUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIDDINGREMAINLIMITNUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetBiddingRemainLimitNumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBiddingRemainLimitNumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBiddingRemainLimitNumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBiddingRemainLimitNumResponseBody() = default ;
    GetBiddingRemainLimitNumResponseBody(const GetBiddingRemainLimitNumResponseBody &) = default ;
    GetBiddingRemainLimitNumResponseBody(GetBiddingRemainLimitNumResponseBody &&) = default ;
    GetBiddingRemainLimitNumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBiddingRemainLimitNumResponseBody() = default ;
    GetBiddingRemainLimitNumResponseBody& operator=(const GetBiddingRemainLimitNumResponseBody &) = default ;
    GetBiddingRemainLimitNumResponseBody& operator=(GetBiddingRemainLimitNumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RemainNum, remainNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RemainNum, remainNum_);
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
      virtual bool empty() const override { return this->remainNum_ == nullptr; };
      // remainNum Field Functions 
      bool hasRemainNum() const { return this->remainNum_ != nullptr;};
      void deleteRemainNum() { this->remainNum_ = nullptr;};
      inline int32_t getRemainNum() const { DARABONBA_PTR_GET_DEFAULT(remainNum_, 0) };
      inline Data& setRemainNum(int32_t remainNum) { DARABONBA_PTR_SET_VALUE(remainNum_, remainNum) };


    protected:
      shared_ptr<int32_t> remainNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBiddingRemainLimitNumResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBiddingRemainLimitNumResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBiddingRemainLimitNumResponseBody::Data) };
    inline GetBiddingRemainLimitNumResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBiddingRemainLimitNumResponseBody::Data) };
    inline GetBiddingRemainLimitNumResponseBody& setData(const GetBiddingRemainLimitNumResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBiddingRemainLimitNumResponseBody& setData(GetBiddingRemainLimitNumResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBiddingRemainLimitNumResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBiddingRemainLimitNumResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBiddingRemainLimitNumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBiddingRemainLimitNumResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBiddingRemainLimitNumResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
