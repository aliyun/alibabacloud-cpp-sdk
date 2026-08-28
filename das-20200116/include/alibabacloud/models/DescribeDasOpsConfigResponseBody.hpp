// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDASOPSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDASOPSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeDasOpsConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDasOpsConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDasOpsConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDasOpsConfigResponseBody() = default ;
    DescribeDasOpsConfigResponseBody(const DescribeDasOpsConfigResponseBody &) = default ;
    DescribeDasOpsConfigResponseBody(DescribeDasOpsConfigResponseBody &&) = default ;
    DescribeDasOpsConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDasOpsConfigResponseBody() = default ;
    DescribeDasOpsConfigResponseBody& operator=(const DescribeDasOpsConfigResponseBody &) = default ;
    DescribeDasOpsConfigResponseBody& operator=(DescribeDasOpsConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityInstanceId, commodityInstanceId_);
        DARABONBA_PTR_TO_JSON(EcoEnable, ecoEnable_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(OpsEnable, opsEnable_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityInstanceId, commodityInstanceId_);
        DARABONBA_PTR_FROM_JSON(EcoEnable, ecoEnable_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(OpsEnable, opsEnable_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
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
      virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->chargeType_ == nullptr && this->commodityInstanceId_ == nullptr && this->ecoEnable_ == nullptr && this->enable_ == nullptr && this->endTime_ == nullptr
        && this->opsEnable_ == nullptr && this->orderId_ == nullptr && this->startTime_ == nullptr; };
      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Data& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityInstanceId Field Functions 
      bool hasCommodityInstanceId() const { return this->commodityInstanceId_ != nullptr;};
      void deleteCommodityInstanceId() { this->commodityInstanceId_ = nullptr;};
      inline string getCommodityInstanceId() const { DARABONBA_PTR_GET_DEFAULT(commodityInstanceId_, "") };
      inline Data& setCommodityInstanceId(string commodityInstanceId) { DARABONBA_PTR_SET_VALUE(commodityInstanceId_, commodityInstanceId) };


      // ecoEnable Field Functions 
      bool hasEcoEnable() const { return this->ecoEnable_ != nullptr;};
      void deleteEcoEnable() { this->ecoEnable_ = nullptr;};
      inline bool getEcoEnable() const { DARABONBA_PTR_GET_DEFAULT(ecoEnable_, false) };
      inline Data& setEcoEnable(bool ecoEnable) { DARABONBA_PTR_SET_VALUE(ecoEnable_, ecoEnable) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // opsEnable Field Functions 
      bool hasOpsEnable() const { return this->opsEnable_ != nullptr;};
      void deleteOpsEnable() { this->opsEnable_ = nullptr;};
      inline bool getOpsEnable() const { DARABONBA_PTR_GET_DEFAULT(opsEnable_, false) };
      inline Data& setOpsEnable(bool opsEnable) { DARABONBA_PTR_SET_VALUE(opsEnable_, opsEnable) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // Indicates whether auto-renewal is enabled for the instance. Valid values:
      // 
      // * **true**: Auto-renewal is enabled.
      // * **false** (default): Auto-renewal is disabled.
      shared_ptr<bool> autoRenew_ {};
      // The payment method.
      shared_ptr<string> chargeType_ {};
      // The Alibaba Cloud Managed Services instance ID.
      shared_ptr<string> commodityInstanceId_ {};
      // Indicates whether DAS Economy Edition is enabled.
      shared_ptr<bool> ecoEnable_ {};
      // Indicates whether the Alibaba Cloud Managed Services is enabled.
      shared_ptr<bool> enable_ {};
      // The end time. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // Indicates whether the Alibaba Cloud Managed Services is enabled.
      shared_ptr<bool> opsEnable_ {};
      // The order ID.
      shared_ptr<int64_t> orderId_ {};
      // The start time. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDasOpsConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDasOpsConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDasOpsConfigResponseBody::Data) };
    inline DescribeDasOpsConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDasOpsConfigResponseBody::Data) };
    inline DescribeDasOpsConfigResponseBody& setData(const DescribeDasOpsConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDasOpsConfigResponseBody& setData(DescribeDasOpsConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDasOpsConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDasOpsConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeDasOpsConfigResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // SqlLogConfig
    shared_ptr<DescribeDasOpsConfigResponseBody::Data> data_ {};
    // The returned message.
    // 
    // > If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
