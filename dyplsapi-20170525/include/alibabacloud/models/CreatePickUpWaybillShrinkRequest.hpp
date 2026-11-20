// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppointGotEndTime, appointGotEndTime_);
      DARABONBA_PTR_TO_JSON(AppointGotStartTime, appointGotStartTime_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsigneeAddress, consigneeAddressShrink_);
      DARABONBA_PTR_TO_JSON(ConsigneeMobile, consigneeMobile_);
      DARABONBA_PTR_TO_JSON(ConsigneeName, consigneeName_);
      DARABONBA_PTR_TO_JSON(ConsigneePhone, consigneePhone_);
      DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(GoodsInfos, goodsInfosShrink_);
      DARABONBA_PTR_TO_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_TO_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SendAddress, sendAddressShrink_);
      DARABONBA_PTR_TO_JSON(SendMobile, sendMobile_);
      DARABONBA_PTR_TO_JSON(SendName, sendName_);
      DARABONBA_PTR_TO_JSON(SendPhone, sendPhone_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppointGotEndTime, appointGotEndTime_);
      DARABONBA_PTR_FROM_JSON(AppointGotStartTime, appointGotStartTime_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsigneeAddress, consigneeAddressShrink_);
      DARABONBA_PTR_FROM_JSON(ConsigneeMobile, consigneeMobile_);
      DARABONBA_PTR_FROM_JSON(ConsigneeName, consigneeName_);
      DARABONBA_PTR_FROM_JSON(ConsigneePhone, consigneePhone_);
      DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(GoodsInfos, goodsInfosShrink_);
      DARABONBA_PTR_FROM_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_FROM_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SendAddress, sendAddressShrink_);
      DARABONBA_PTR_FROM_JSON(SendMobile, sendMobile_);
      DARABONBA_PTR_FROM_JSON(SendName, sendName_);
      DARABONBA_PTR_FROM_JSON(SendPhone, sendPhone_);
    };
    CreatePickUpWaybillShrinkRequest() = default ;
    CreatePickUpWaybillShrinkRequest(const CreatePickUpWaybillShrinkRequest &) = default ;
    CreatePickUpWaybillShrinkRequest(CreatePickUpWaybillShrinkRequest &&) = default ;
    CreatePickUpWaybillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillShrinkRequest() = default ;
    CreatePickUpWaybillShrinkRequest& operator=(const CreatePickUpWaybillShrinkRequest &) = default ;
    CreatePickUpWaybillShrinkRequest& operator=(CreatePickUpWaybillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appointGotEndTime_ == nullptr
        && this->appointGotStartTime_ == nullptr && this->bizType_ == nullptr && this->consigneeAddressShrink_ == nullptr && this->consigneeMobile_ == nullptr && this->consigneeName_ == nullptr
        && this->consigneePhone_ == nullptr && this->cpCode_ == nullptr && this->goodsInfosShrink_ == nullptr && this->orderChannels_ == nullptr && this->outerOrderCode_ == nullptr
        && this->remark_ == nullptr && this->sendAddressShrink_ == nullptr && this->sendMobile_ == nullptr && this->sendName_ == nullptr && this->sendPhone_ == nullptr; };
    // appointGotEndTime Field Functions 
    bool hasAppointGotEndTime() const { return this->appointGotEndTime_ != nullptr;};
    void deleteAppointGotEndTime() { this->appointGotEndTime_ = nullptr;};
    inline string getAppointGotEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotEndTime_, "") };
    inline CreatePickUpWaybillShrinkRequest& setAppointGotEndTime(string appointGotEndTime) { DARABONBA_PTR_SET_VALUE(appointGotEndTime_, appointGotEndTime) };


    // appointGotStartTime Field Functions 
    bool hasAppointGotStartTime() const { return this->appointGotStartTime_ != nullptr;};
    void deleteAppointGotStartTime() { this->appointGotStartTime_ = nullptr;};
    inline string getAppointGotStartTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotStartTime_, "") };
    inline CreatePickUpWaybillShrinkRequest& setAppointGotStartTime(string appointGotStartTime) { DARABONBA_PTR_SET_VALUE(appointGotStartTime_, appointGotStartTime) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreatePickUpWaybillShrinkRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consigneeAddressShrink Field Functions 
    bool hasConsigneeAddressShrink() const { return this->consigneeAddressShrink_ != nullptr;};
    void deleteConsigneeAddressShrink() { this->consigneeAddressShrink_ = nullptr;};
    inline string getConsigneeAddressShrink() const { DARABONBA_PTR_GET_DEFAULT(consigneeAddressShrink_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneeAddressShrink(string consigneeAddressShrink) { DARABONBA_PTR_SET_VALUE(consigneeAddressShrink_, consigneeAddressShrink) };


    // consigneeMobile Field Functions 
    bool hasConsigneeMobile() const { return this->consigneeMobile_ != nullptr;};
    void deleteConsigneeMobile() { this->consigneeMobile_ = nullptr;};
    inline string getConsigneeMobile() const { DARABONBA_PTR_GET_DEFAULT(consigneeMobile_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneeMobile(string consigneeMobile) { DARABONBA_PTR_SET_VALUE(consigneeMobile_, consigneeMobile) };


    // consigneeName Field Functions 
    bool hasConsigneeName() const { return this->consigneeName_ != nullptr;};
    void deleteConsigneeName() { this->consigneeName_ = nullptr;};
    inline string getConsigneeName() const { DARABONBA_PTR_GET_DEFAULT(consigneeName_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneeName(string consigneeName) { DARABONBA_PTR_SET_VALUE(consigneeName_, consigneeName) };


    // consigneePhone Field Functions 
    bool hasConsigneePhone() const { return this->consigneePhone_ != nullptr;};
    void deleteConsigneePhone() { this->consigneePhone_ = nullptr;};
    inline string getConsigneePhone() const { DARABONBA_PTR_GET_DEFAULT(consigneePhone_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneePhone(string consigneePhone) { DARABONBA_PTR_SET_VALUE(consigneePhone_, consigneePhone) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string getCpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillShrinkRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // goodsInfosShrink Field Functions 
    bool hasGoodsInfosShrink() const { return this->goodsInfosShrink_ != nullptr;};
    void deleteGoodsInfosShrink() { this->goodsInfosShrink_ = nullptr;};
    inline string getGoodsInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(goodsInfosShrink_, "") };
    inline CreatePickUpWaybillShrinkRequest& setGoodsInfosShrink(string goodsInfosShrink) { DARABONBA_PTR_SET_VALUE(goodsInfosShrink_, goodsInfosShrink) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string getOrderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillShrinkRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string getOuterOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillShrinkRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePickUpWaybillShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sendAddressShrink Field Functions 
    bool hasSendAddressShrink() const { return this->sendAddressShrink_ != nullptr;};
    void deleteSendAddressShrink() { this->sendAddressShrink_ = nullptr;};
    inline string getSendAddressShrink() const { DARABONBA_PTR_GET_DEFAULT(sendAddressShrink_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendAddressShrink(string sendAddressShrink) { DARABONBA_PTR_SET_VALUE(sendAddressShrink_, sendAddressShrink) };


    // sendMobile Field Functions 
    bool hasSendMobile() const { return this->sendMobile_ != nullptr;};
    void deleteSendMobile() { this->sendMobile_ = nullptr;};
    inline string getSendMobile() const { DARABONBA_PTR_GET_DEFAULT(sendMobile_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendMobile(string sendMobile) { DARABONBA_PTR_SET_VALUE(sendMobile_, sendMobile) };


    // sendName Field Functions 
    bool hasSendName() const { return this->sendName_ != nullptr;};
    void deleteSendName() { this->sendName_ = nullptr;};
    inline string getSendName() const { DARABONBA_PTR_GET_DEFAULT(sendName_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendName(string sendName) { DARABONBA_PTR_SET_VALUE(sendName_, sendName) };


    // sendPhone Field Functions 
    bool hasSendPhone() const { return this->sendPhone_ != nullptr;};
    void deleteSendPhone() { this->sendPhone_ = nullptr;};
    inline string getSendPhone() const { DARABONBA_PTR_GET_DEFAULT(sendPhone_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendPhone(string sendPhone) { DARABONBA_PTR_SET_VALUE(sendPhone_, sendPhone) };


  protected:
    // The end time of the scheduled door-to-door pickup, in the YYYY-MM-DD HH:mm:ss format. To obtain the value of **AppointGotEndTime**, obtain the **EndTime** value from **AppointTimes** in the **CpTimeSelectList** response parameter of the [CreatePickUpWaybillPreQuery](https://api.aliyun.com/document/Dyplsapi/2017-05-25/CreatePickUpWaybillPreQuery) operation.
    // > Required when **bizType** is set to **1**.
    shared_ptr<string> appointGotEndTime_ {};
    // The start time of the scheduled door-to-door pickup, in the YYYY-MM-DD HH:mm:ss format. To obtain the value of **AppointGotStartTime**, obtain the **StartTime** value from **AppointTimes** in the **CpTimeSelectList** response parameter of the [CreatePickUpWaybillPreQuery](https://api.aliyun.com/document/Dyplsapi/2017-05-25/CreatePickUpWaybillPreQuery) operation.
    // 
    // > Required when **bizType** is set to **1**.
    shared_ptr<string> appointGotStartTime_ {};
    // The delivery mode. Valid values:
    // 
    // - **0**: real-time order (default)
    // - **1**: scheduled order
    shared_ptr<int32_t> bizType_ {};
    // The address of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> consigneeAddressShrink_ {};
    // The mobile phone number of the recipient.
    // 
    // > You must specify either ConsigneeMobile or ConsigneePhone.
    shared_ptr<string> consigneeMobile_ {};
    // The name of the recipient.
    // 
    // This parameter is required.
    shared_ptr<string> consigneeName_ {};
    // The landline phone number of the recipient.
    // > You must specify either ConsigneeMobile or ConsigneePhone.
    shared_ptr<string> consigneePhone_ {};
    // The express delivery company code.
    shared_ptr<string> cpCode_ {};
    // The list of goods.
    shared_ptr<string> goodsInfosShrink_ {};
    // The external channel source.
    // 
    // This parameter is required.
    shared_ptr<string> orderChannels_ {};
    // The external order ID.
    // 
    // This parameter is required.
    shared_ptr<string> outerOrderCode_ {};
    // The remark. The remark content printed on the waybill.
    shared_ptr<string> remark_ {};
    // The address of the sender.
    // 
    // This parameter is required.
    shared_ptr<string> sendAddressShrink_ {};
    // The mobile phone number of the sender.
    // 
    // > You must specify either SendMobile or SendPhone.
    shared_ptr<string> sendMobile_ {};
    // The name of the sender.
    // 
    // This parameter is required.
    shared_ptr<string> sendName_ {};
    // The landline phone number of the sender.
    // > You must specify either SendMobile or SendPhone.
    shared_ptr<string> sendPhone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
