// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXBFIXEDLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAXBFIXEDLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxbFixedLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxbFixedLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Areacode, areacode_);
      DARABONBA_PTR_TO_JSON(BindType, bindType_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelB, telB_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxbFixedLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
      DARABONBA_PTR_FROM_JSON(BindType, bindType_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelB, telB_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    BindAxbFixedLineRequest() = default ;
    BindAxbFixedLineRequest(const BindAxbFixedLineRequest &) = default ;
    BindAxbFixedLineRequest(BindAxbFixedLineRequest &&) = default ;
    BindAxbFixedLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxbFixedLineRequest() = default ;
    BindAxbFixedLineRequest& operator=(const BindAxbFixedLineRequest &) = default ;
    BindAxbFixedLineRequest& operator=(BindAxbFixedLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extra : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extra& obj) { 
        DARABONBA_PTR_TO_JSON(Callrecording, callrecording_);
      };
      friend void from_json(const Darabonba::Json& j, Extra& obj) { 
        DARABONBA_PTR_FROM_JSON(Callrecording, callrecording_);
      };
      Extra() = default ;
      Extra(const Extra &) = default ;
      Extra(Extra &&) = default ;
      Extra(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extra() = default ;
      Extra& operator=(const Extra &) = default ;
      Extra& operator=(Extra &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callrecording_ == nullptr; };
      // callrecording Field Functions 
      bool hasCallrecording() const { return this->callrecording_ != nullptr;};
      void deleteCallrecording() { this->callrecording_ = nullptr;};
      inline string getCallrecording() const { DARABONBA_PTR_GET_DEFAULT(callrecording_, "") };
      inline Extra& setCallrecording(string callrecording) { DARABONBA_PTR_SET_VALUE(callrecording_, callrecording) };


    protected:
      // The call recording control. Valid values:
      // 
      // - 0 (default): Do not record the call.
      // 
      // - 1: Record the call.
      // > After you enable call recording, you can play and download voice files in the call records. Recording files are billed at CNY 0.010 per minute.
      shared_ptr<string> callrecording_ {};
    };

    virtual bool empty() const override { return this->anucode_ == nullptr
        && this->anucodecalled_ == nullptr && this->appId_ == nullptr && this->areacode_ == nullptr && this->bindType_ == nullptr && this->expiration_ == nullptr
        && this->extra_ == nullptr && this->orderId_ == nullptr && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->subts_ == nullptr && this->TAnucodeConnect_ == nullptr && this->telA_ == nullptr && this->telB_ == nullptr
        && this->telX_ == nullptr && this->ts_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string getAnucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline BindAxbFixedLineRequest& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string getAnucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline BindAxbFixedLineRequest& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindAxbFixedLineRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // areacode Field Functions 
    bool hasAreacode() const { return this->areacode_ != nullptr;};
    void deleteAreacode() { this->areacode_ = nullptr;};
    inline string getAreacode() const { DARABONBA_PTR_GET_DEFAULT(areacode_, "") };
    inline BindAxbFixedLineRequest& setAreacode(string areacode) { DARABONBA_PTR_SET_VALUE(areacode_, areacode) };


    // bindType Field Functions 
    bool hasBindType() const { return this->bindType_ != nullptr;};
    void deleteBindType() { this->bindType_ = nullptr;};
    inline string getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, "") };
    inline BindAxbFixedLineRequest& setBindType(string bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindAxbFixedLineRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const BindAxbFixedLineRequest::Extra & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, BindAxbFixedLineRequest::Extra) };
    inline BindAxbFixedLineRequest::Extra getExtra() { DARABONBA_PTR_GET(extra_, BindAxbFixedLineRequest::Extra) };
    inline BindAxbFixedLineRequest& setExtra(const BindAxbFixedLineRequest::Extra & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline BindAxbFixedLineRequest& setExtra(BindAxbFixedLineRequest::Extra && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BindAxbFixedLineRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindAxbFixedLineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline BindAxbFixedLineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindAxbFixedLineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindAxbFixedLineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string getSubts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline BindAxbFixedLineRequest& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string getTAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline BindAxbFixedLineRequest& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline BindAxbFixedLineRequest& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telB Field Functions 
    bool hasTelB() const { return this->telB_ != nullptr;};
    void deleteTelB() { this->telB_ = nullptr;};
    inline string getTelB() const { DARABONBA_PTR_GET_DEFAULT(telB_, "") };
    inline BindAxbFixedLineRequest& setTelB(string telB) { DARABONBA_PTR_SET_VALUE(telB_, telB) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindAxbFixedLineRequest& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline BindAxbFixedLineRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // The caller-side announcement code. This parameter is required for the fixed-line AXB privacy number service. The code must include announcements for three scenarios. Specify the codes in the order of "B->X, A->X, other numbers->X", separated by commas.
    // 
    // > For example, "1,2,3" indicates that the announcement code for B->X is 1, the announcement code for A->X is 2, and the announcement code for other numbers->X is 3.
    // 
    // This parameter is required.
    shared_ptr<string> anucode_ {};
    // The callee-side announcement code after the call is connected. The code must include announcements for two scenarios. Specify the codes in the order of "A as callee, B as callee", separated by commas.
    // 
    // > For example, "1,2" indicates that the announcement code when Number A answers as the callee is 1, and the announcement code when Number B answers as the callee is 2.
    shared_ptr<string> anucodecalled_ {};
    // The ID of the number pool.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The area code. You can specify the location of Number X (specified city -> provincial capital -> national routing). If you do not specify a location, a number is randomly assigned nationwide.
    shared_ptr<string> areacode_ {};
    // The binding type. Valid values:
    // 
    // - mode101: The customer specifies Number X.
    // 
    // - mode102: The platform allocates Number X.
    // 
    // This parameter is required.
    shared_ptr<string> bindType_ {};
    // The expiration time. Unit: seconds. Valid values:
    // 
    // - 0: The binding never expires.
    // 
    // - Other values: If you specify another value, such as 60, the binding is valid for 60 seconds after Number X is successfully allocated. After 60 seconds, the binding is automatically unbound.
    // 
    // This parameter is required.
    shared_ptr<string> expiration_ {};
    // The extended parameters.
    shared_ptr<BindAxbFixedLineRequest::Extra> extra_ {};
    // The unique identifier of the message request.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The external business extension field. This parameter is returned in the call record receipt message. The value cannot exceed 100 characters in length.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The binding time. The format is yyyyMMddHHmmss. The time is in UTC+8 and uses the 24-hour clock.
    // 
    // This parameter is required.
    shared_ptr<string> subts_ {};
    // The caller-side announcement code after the call is connected. The code must include announcements for two scenarios. Specify the codes in the order of "A as callee, B as callee", separated by commas.
    // 
    // > For example, "1,2" indicates that the caller-side announcement code when Number A is the callee is 1, and the caller-side announcement code when Number B is the callee is 2.
    shared_ptr<string> TAnucodeConnect_ {};
    // Number A of the fixed-line AXB privacy number.
    // 
    // > - Number A can be a mobile phone number or a fixed-line number. For a fixed-line number, add the area code. No hyphen is required between the area code and the fixed-line number. 
    // > - If your business requires modifying a bound number, you can call the [UpdateAxbBindFixedLine](https://api.aliyun.com/document/Dyplsapi/2017-05-25/UpdateAxbBindFixedLine) operation.
    // 
    // This parameter is required.
    shared_ptr<string> telA_ {};
    // Number B of the fixed-line AXB privacy number.
    // 
    // > - Number B can be a mobile phone number or a fixed-line number. For a fixed-line number, add the area code. No hyphen is required between the area code and the fixed-line number.
    // > - If your business requires modifying a bound number, you can call the [UpdateAxbBindFixedLine](https://api.aliyun.com/document/Dyplsapi/2017-05-25/UpdateAxbBindFixedLine) operation.
    // 
    // This parameter is required.
    shared_ptr<string> telB_ {};
    // Number X of the fixed-line AXB privacy number. Number X is a privacy number that you have [purchased](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
    // 
    // > This parameter is required when the customer specifies Number X (that is, the BindType parameter is set to mode101).
    shared_ptr<string> telX_ {};
    // The business timestamp. The format is yyyyMMddHHmmssSSS. The time is in UTC+8 and uses the 24-hour clock, accurate to milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> ts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
