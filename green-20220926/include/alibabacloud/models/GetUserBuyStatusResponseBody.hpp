// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBUYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBUYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetUserBuyStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserBuyStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserBuyStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserBuyStatusResponseBody() = default ;
    GetUserBuyStatusResponseBody(const GetUserBuyStatusResponseBody &) = default ;
    GetUserBuyStatusResponseBody(GetUserBuyStatusResponseBody &&) = default ;
    GetUserBuyStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserBuyStatusResponseBody() = default ;
    GetUserBuyStatusResponseBody& operator=(const GetUserBuyStatusResponseBody &) = default ;
    GetUserBuyStatusResponseBody& operator=(GetUserBuyStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bid, bid_);
        DARABONBA_PTR_TO_JSON(Buy, buy_);
        DARABONBA_PTR_TO_JSON(Indebt, indebt_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bid, bid_);
        DARABONBA_PTR_FROM_JSON(Buy, buy_);
        DARABONBA_PTR_FROM_JSON(Indebt, indebt_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      virtual bool empty() const override { return this->bid_ == nullptr
        && this->buy_ == nullptr && this->indebt_ == nullptr && this->instanceId_ == nullptr && this->tag_ == nullptr; };
      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline int64_t getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0L) };
      inline Data& setBid(int64_t bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // buy Field Functions 
      bool hasBuy() const { return this->buy_ != nullptr;};
      void deleteBuy() { this->buy_ = nullptr;};
      inline bool getBuy() const { DARABONBA_PTR_GET_DEFAULT(buy_, false) };
      inline Data& setBuy(bool buy) { DARABONBA_PTR_SET_VALUE(buy_, buy) };


      // indebt Field Functions 
      bool hasIndebt() const { return this->indebt_ != nullptr;};
      void deleteIndebt() { this->indebt_ = nullptr;};
      inline bool getIndebt() const { DARABONBA_PTR_GET_DEFAULT(indebt_, false) };
      inline Data& setIndebt(bool indebt) { DARABONBA_PTR_SET_VALUE(indebt_, indebt) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // Bid.
      shared_ptr<int64_t> bid_ {};
      // Indicates whether the product has been activated on Alibaba Cloud.
      shared_ptr<bool> buy_ {};
      // Indicates whether there is an outstanding payment.
      shared_ptr<bool> indebt_ {};
      shared_ptr<string> instanceId_ {};
      // Tag.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetUserBuyStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetUserBuyStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetUserBuyStatusResponseBody::Data) };
    inline GetUserBuyStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetUserBuyStatusResponseBody::Data) };
    inline GetUserBuyStatusResponseBody& setData(const GetUserBuyStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetUserBuyStatusResponseBody& setData(GetUserBuyStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GetUserBuyStatusResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserBuyStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserBuyStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code.
    shared_ptr<int32_t> code_ {};
    // Returned data.
    shared_ptr<GetUserBuyStatusResponseBody::Data> data_ {};
    // Further description of the error code.
    shared_ptr<string> msg_ {};
    // ID assigned by the backend to uniquely identify a request. It can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // Success indicator.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
