// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnExtensionFixedLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnExtensionFixedLineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Anucode, anucode_);
      DARABONBA_PTR_TO_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Areacode, areacode_);
      DARABONBA_PTR_TO_JSON(BindType, bindType_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Extraaxx, extraaxx_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Subts, subts_);
      DARABONBA_PTR_TO_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_TO_JSON(TelA, telA_);
      DARABONBA_PTR_TO_JSON(TelX, telX_);
      DARABONBA_PTR_TO_JSON(TelXext, telXext_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxnExtensionFixedLineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Anucode, anucode_);
      DARABONBA_PTR_FROM_JSON(Anucodecalled, anucodecalled_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Areacode, areacode_);
      DARABONBA_PTR_FROM_JSON(BindType, bindType_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Extraaxx, extraaxx_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Subts, subts_);
      DARABONBA_PTR_FROM_JSON(TAnucodeConnect, TAnucodeConnect_);
      DARABONBA_PTR_FROM_JSON(TelA, telA_);
      DARABONBA_PTR_FROM_JSON(TelX, telX_);
      DARABONBA_PTR_FROM_JSON(TelXext, telXext_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
    };
    BindAxnExtensionFixedLineRequest() = default ;
    BindAxnExtensionFixedLineRequest(const BindAxnExtensionFixedLineRequest &) = default ;
    BindAxnExtensionFixedLineRequest(BindAxnExtensionFixedLineRequest &&) = default ;
    BindAxnExtensionFixedLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnExtensionFixedLineRequest() = default ;
    BindAxnExtensionFixedLineRequest& operator=(const BindAxnExtensionFixedLineRequest &) = default ;
    BindAxnExtensionFixedLineRequest& operator=(BindAxnExtensionFixedLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extraaxx : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extraaxx& obj) { 
        DARABONBA_PTR_TO_JSON(Callback, callback_);
        DARABONBA_PTR_TO_JSON(Callrecording, callrecording_);
      };
      friend void from_json(const Darabonba::Json& j, Extraaxx& obj) { 
        DARABONBA_PTR_FROM_JSON(Callback, callback_);
        DARABONBA_PTR_FROM_JSON(Callrecording, callrecording_);
      };
      Extraaxx() = default ;
      Extraaxx(const Extraaxx &) = default ;
      Extraaxx(Extraaxx &&) = default ;
      Extraaxx(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extraaxx() = default ;
      Extraaxx& operator=(const Extraaxx &) = default ;
      Extraaxx& operator=(Extraaxx &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callback_ == nullptr
        && this->callrecording_ == nullptr; };
      // callback Field Functions 
      bool hasCallback() const { return this->callback_ != nullptr;};
      void deleteCallback() { this->callback_ = nullptr;};
      inline string getCallback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
      inline Extraaxx& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


      // callrecording Field Functions 
      bool hasCallrecording() const { return this->callrecording_ != nullptr;};
      void deleteCallrecording() { this->callrecording_ = nullptr;};
      inline string getCallrecording() const { DARABONBA_PTR_GET_DEFAULT(callrecording_, "") };
      inline Extraaxx& setCallrecording(string callrecording) { DARABONBA_PTR_SET_VALUE(callrecording_, callrecording) };


    protected:
      // Callback control. When A calls through X, that is, A dials X as the caller. Valid values:
      // 
      // - 0 (default): Cannot make outbound calls.
      // 
      // - 1: Connect to the most recent N number.
      // 
      // - 2: Call back the fixed number TelB.
      shared_ptr<string> callback_ {};
      // Recording control. Valid values:
      // 
      // - 0 (default): No recording.
      // 
      // - 1: Recording.
      // 
      // > After you enable the call recording feature, you can play and download audio files in the call records. Recording files are billed at CNY 0.010/minute.
      shared_ptr<string> callrecording_ {};
    };

    virtual bool empty() const override { return this->anucode_ == nullptr
        && this->anucodecalled_ == nullptr && this->appId_ == nullptr && this->areacode_ == nullptr && this->bindType_ == nullptr && this->expiration_ == nullptr
        && this->extraaxx_ == nullptr && this->orderId_ == nullptr && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->subts_ == nullptr && this->TAnucodeConnect_ == nullptr && this->telA_ == nullptr && this->telX_ == nullptr
        && this->telXext_ == nullptr && this->ts_ == nullptr; };
    // anucode Field Functions 
    bool hasAnucode() const { return this->anucode_ != nullptr;};
    void deleteAnucode() { this->anucode_ = nullptr;};
    inline string getAnucode() const { DARABONBA_PTR_GET_DEFAULT(anucode_, "") };
    inline BindAxnExtensionFixedLineRequest& setAnucode(string anucode) { DARABONBA_PTR_SET_VALUE(anucode_, anucode) };


    // anucodecalled Field Functions 
    bool hasAnucodecalled() const { return this->anucodecalled_ != nullptr;};
    void deleteAnucodecalled() { this->anucodecalled_ = nullptr;};
    inline string getAnucodecalled() const { DARABONBA_PTR_GET_DEFAULT(anucodecalled_, "") };
    inline BindAxnExtensionFixedLineRequest& setAnucodecalled(string anucodecalled) { DARABONBA_PTR_SET_VALUE(anucodecalled_, anucodecalled) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BindAxnExtensionFixedLineRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // areacode Field Functions 
    bool hasAreacode() const { return this->areacode_ != nullptr;};
    void deleteAreacode() { this->areacode_ = nullptr;};
    inline string getAreacode() const { DARABONBA_PTR_GET_DEFAULT(areacode_, "") };
    inline BindAxnExtensionFixedLineRequest& setAreacode(string areacode) { DARABONBA_PTR_SET_VALUE(areacode_, areacode) };


    // bindType Field Functions 
    bool hasBindType() const { return this->bindType_ != nullptr;};
    void deleteBindType() { this->bindType_ = nullptr;};
    inline string getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, "") };
    inline BindAxnExtensionFixedLineRequest& setBindType(string bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline BindAxnExtensionFixedLineRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // extraaxx Field Functions 
    bool hasExtraaxx() const { return this->extraaxx_ != nullptr;};
    void deleteExtraaxx() { this->extraaxx_ = nullptr;};
    inline const BindAxnExtensionFixedLineRequest::Extraaxx & getExtraaxx() const { DARABONBA_PTR_GET_CONST(extraaxx_, BindAxnExtensionFixedLineRequest::Extraaxx) };
    inline BindAxnExtensionFixedLineRequest::Extraaxx getExtraaxx() { DARABONBA_PTR_GET(extraaxx_, BindAxnExtensionFixedLineRequest::Extraaxx) };
    inline BindAxnExtensionFixedLineRequest& setExtraaxx(const BindAxnExtensionFixedLineRequest::Extraaxx & extraaxx) { DARABONBA_PTR_SET_VALUE(extraaxx_, extraaxx) };
    inline BindAxnExtensionFixedLineRequest& setExtraaxx(BindAxnExtensionFixedLineRequest::Extraaxx && extraaxx) { DARABONBA_PTR_SET_RVALUE(extraaxx_, extraaxx) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline BindAxnExtensionFixedLineRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindAxnExtensionFixedLineRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline BindAxnExtensionFixedLineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindAxnExtensionFixedLineRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindAxnExtensionFixedLineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subts Field Functions 
    bool hasSubts() const { return this->subts_ != nullptr;};
    void deleteSubts() { this->subts_ = nullptr;};
    inline string getSubts() const { DARABONBA_PTR_GET_DEFAULT(subts_, "") };
    inline BindAxnExtensionFixedLineRequest& setSubts(string subts) { DARABONBA_PTR_SET_VALUE(subts_, subts) };


    // TAnucodeConnect Field Functions 
    bool hasTAnucodeConnect() const { return this->TAnucodeConnect_ != nullptr;};
    void deleteTAnucodeConnect() { this->TAnucodeConnect_ = nullptr;};
    inline string getTAnucodeConnect() const { DARABONBA_PTR_GET_DEFAULT(TAnucodeConnect_, "") };
    inline BindAxnExtensionFixedLineRequest& setTAnucodeConnect(string TAnucodeConnect) { DARABONBA_PTR_SET_VALUE(TAnucodeConnect_, TAnucodeConnect) };


    // telA Field Functions 
    bool hasTelA() const { return this->telA_ != nullptr;};
    void deleteTelA() { this->telA_ = nullptr;};
    inline string getTelA() const { DARABONBA_PTR_GET_DEFAULT(telA_, "") };
    inline BindAxnExtensionFixedLineRequest& setTelA(string telA) { DARABONBA_PTR_SET_VALUE(telA_, telA) };


    // telX Field Functions 
    bool hasTelX() const { return this->telX_ != nullptr;};
    void deleteTelX() { this->telX_ = nullptr;};
    inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
    inline BindAxnExtensionFixedLineRequest& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    // telXext Field Functions 
    bool hasTelXext() const { return this->telXext_ != nullptr;};
    void deleteTelXext() { this->telXext_ = nullptr;};
    inline string getTelXext() const { DARABONBA_PTR_GET_DEFAULT(telXext_, "") };
    inline BindAxnExtensionFixedLineRequest& setTelXext(string telXext) { DARABONBA_PTR_SET_VALUE(telXext_, telXext) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline BindAxnExtensionFixedLineRequest& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


  protected:
    // Caller-side ringtone code. This parameter is required for AXB scenarios. Must contain codes for 3 scenarios. Enter the codes in the order of "B->X, A->X, other numbers->X", separated by commas.
    // 
    // > "1,2,3" indicates that the ringtone code for B->X is 1, for A->X is 2, and for other numbers->X is 3.
    // 
    // This parameter is required.
    shared_ptr<string> anucode_ {};
    // Called-side ringtone code after connection. Must contain codes for 2 scenarios. Enter the codes in the order of "A as called party, B as called party", separated by commas.
    // 
    // > "1,2" indicates that the ringtone code when A is the called party is 1, and the ringtone code when B is the called party is 2.
    shared_ptr<string> anucodecalled_ {};
    // Number pool ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Area code. Supports specifying the home location of the X number (specified city -> provincial capital -> nationwide routing). If no home location is specified, a number is randomly assigned nationwide.
    shared_ptr<string> areacode_ {};
    // Binding type. Valid values:
    // 
    // - mode101: Customer specifies the X number.
    // 
    // - mode102: Platform assigns the X number.
    // 
    // This parameter is required.
    shared_ptr<string> bindType_ {};
    // Expiration time. Unit: seconds. Valid values:
    // 
    // - 0: Never expires.
    // 
    // - Other values: When other values are specified, such as 60, the binding is valid for 60 seconds after the X number is successfully assigned. After 60 seconds, the binding is automatically released.
    // 
    // This parameter is required.
    shared_ptr<string> expiration_ {};
    // Extension parameters.
    shared_ptr<BindAxnExtensionFixedLineRequest::Extraaxx> extraaxx_ {};
    // Unique identifier of the message request.
    // 
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // External business extension field. This parameter is returned in call record receipt messages. Must not exceed 100 characters.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Binding time. Format: yyyyMMddHHmmss. Uses Beijing time, 24-hour clock.
    // 
    // This parameter is required.
    shared_ptr<string> subts_ {};
    // Caller-side ringtone code after connection. Must contain codes for 2 scenarios. Enter the codes in the order of "A as called party, B as called party", separated by commas.
    // 
    // > "1,2" indicates that the caller-side ringtone code when A is the called party is 1, and the caller-side ringtone code when B is the called party is 2.
    shared_ptr<string> TAnucodeConnect_ {};
    // The A number for the fixed-line AXN extension number.
    // 
    // > The A number can be set to a mobile number or a fixed-line number. Fixed-line numbers must include the area code, and no hyphen is needed between the area code and the number.
    // 
    // This parameter is required.
    shared_ptr<string> telA_ {};
    // The X number for the fixed-line AXN extension number. The X number is a privacy number that you have [purchased](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
    shared_ptr<string> telX_ {};
    // Extension number. This parameter is required when the BindType parameter is set to mode101.
    shared_ptr<string> telXext_ {};
    // Business timestamp. Format: yyyyMMddHHmmssSSS. Uses Beijing time, 24-hour clock, accurate to milliseconds.
    // 
    // This parameter is required.
    shared_ptr<string> ts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
