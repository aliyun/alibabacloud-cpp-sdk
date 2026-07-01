// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCARDSMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDCARDSMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendCardSmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCardSmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SendCardSmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SendCardSmsResponseBody() = default ;
    SendCardSmsResponseBody(const SendCardSmsResponseBody &) = default ;
    SendCardSmsResponseBody(SendCardSmsResponseBody &&) = default ;
    SendCardSmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCardSmsResponseBody() = default ;
    SendCardSmsResponseBody& operator=(const SendCardSmsResponseBody &) = default ;
    SendCardSmsResponseBody& operator=(SendCardSmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizCardId, bizCardId_);
        DARABONBA_PTR_TO_JSON(BizDigitalId, bizDigitalId_);
        DARABONBA_PTR_TO_JSON(BizSmsId, bizSmsId_);
        DARABONBA_PTR_TO_JSON(CardTmpState, cardTmpState_);
        DARABONBA_PTR_TO_JSON(MediaMobiles, mediaMobiles_);
        DARABONBA_PTR_TO_JSON(NotMediaMobiles, notMediaMobiles_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizCardId, bizCardId_);
        DARABONBA_PTR_FROM_JSON(BizDigitalId, bizDigitalId_);
        DARABONBA_PTR_FROM_JSON(BizSmsId, bizSmsId_);
        DARABONBA_PTR_FROM_JSON(CardTmpState, cardTmpState_);
        DARABONBA_PTR_FROM_JSON(MediaMobiles, mediaMobiles_);
        DARABONBA_PTR_FROM_JSON(NotMediaMobiles, notMediaMobiles_);
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
      virtual bool empty() const override { return this->bizCardId_ == nullptr
        && this->bizDigitalId_ == nullptr && this->bizSmsId_ == nullptr && this->cardTmpState_ == nullptr && this->mediaMobiles_ == nullptr && this->notMediaMobiles_ == nullptr; };
      // bizCardId Field Functions 
      bool hasBizCardId() const { return this->bizCardId_ != nullptr;};
      void deleteBizCardId() { this->bizCardId_ = nullptr;};
      inline string getBizCardId() const { DARABONBA_PTR_GET_DEFAULT(bizCardId_, "") };
      inline Data& setBizCardId(string bizCardId) { DARABONBA_PTR_SET_VALUE(bizCardId_, bizCardId) };


      // bizDigitalId Field Functions 
      bool hasBizDigitalId() const { return this->bizDigitalId_ != nullptr;};
      void deleteBizDigitalId() { this->bizDigitalId_ = nullptr;};
      inline string getBizDigitalId() const { DARABONBA_PTR_GET_DEFAULT(bizDigitalId_, "") };
      inline Data& setBizDigitalId(string bizDigitalId) { DARABONBA_PTR_SET_VALUE(bizDigitalId_, bizDigitalId) };


      // bizSmsId Field Functions 
      bool hasBizSmsId() const { return this->bizSmsId_ != nullptr;};
      void deleteBizSmsId() { this->bizSmsId_ = nullptr;};
      inline string getBizSmsId() const { DARABONBA_PTR_GET_DEFAULT(bizSmsId_, "") };
      inline Data& setBizSmsId(string bizSmsId) { DARABONBA_PTR_SET_VALUE(bizSmsId_, bizSmsId) };


      // cardTmpState Field Functions 
      bool hasCardTmpState() const { return this->cardTmpState_ != nullptr;};
      void deleteCardTmpState() { this->cardTmpState_ = nullptr;};
      inline int32_t getCardTmpState() const { DARABONBA_PTR_GET_DEFAULT(cardTmpState_, 0) };
      inline Data& setCardTmpState(int32_t cardTmpState) { DARABONBA_PTR_SET_VALUE(cardTmpState_, cardTmpState) };


      // mediaMobiles Field Functions 
      bool hasMediaMobiles() const { return this->mediaMobiles_ != nullptr;};
      void deleteMediaMobiles() { this->mediaMobiles_ = nullptr;};
      inline string getMediaMobiles() const { DARABONBA_PTR_GET_DEFAULT(mediaMobiles_, "") };
      inline Data& setMediaMobiles(string mediaMobiles) { DARABONBA_PTR_SET_VALUE(mediaMobiles_, mediaMobiles) };


      // notMediaMobiles Field Functions 
      bool hasNotMediaMobiles() const { return this->notMediaMobiles_ != nullptr;};
      void deleteNotMediaMobiles() { this->notMediaMobiles_ = nullptr;};
      inline string getNotMediaMobiles() const { DARABONBA_PTR_GET_DEFAULT(notMediaMobiles_, "") };
      inline Data& setNotMediaMobiles(string notMediaMobiles) { DARABONBA_PTR_SET_VALUE(notMediaMobiles_, notMediaMobiles) };


    protected:
      // 卡片短信发送ID。
      shared_ptr<string> bizCardId_ {};
      // 数字短信发送ID。
      shared_ptr<string> bizDigitalId_ {};
      // 文本短信发送ID。
      shared_ptr<string> bizSmsId_ {};
      // 卡片短信模板审核状态。取值：
      // - **0**：审核中。
      // - **1**：审核通过。
      // - **2**：审核不通过。
      // >  审核不通过的短信可通过**FallbackType**字段设置回落流程。
      shared_ptr<int32_t> cardTmpState_ {};
      // 接收卡片短信的手机号。
      shared_ptr<string> mediaMobiles_ {};
      // 回落的手机号。
      shared_ptr<string> notMediaMobiles_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendCardSmsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SendCardSmsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SendCardSmsResponseBody::Data) };
    inline SendCardSmsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SendCardSmsResponseBody::Data) };
    inline SendCardSmsResponseBody& setData(const SendCardSmsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SendCardSmsResponseBody& setData(SendCardSmsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendCardSmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SendCardSmsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 请求状态码。
    // * 返回OK代表请求成功。
    // * 其他错误码，请参见[错误码列表](https://help.aliyun.com/document_detail/101346.html)。
    shared_ptr<string> code_ {};
    // 返回数据。
    shared_ptr<SendCardSmsResponseBody::Data> data_ {};
    // 请求ID。
    shared_ptr<string> requestId_ {};
    // 调用接口是否成功。取值：
    // 
    // - **true**：调用成功。
    // 
    // - **false**：调用失败。
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
