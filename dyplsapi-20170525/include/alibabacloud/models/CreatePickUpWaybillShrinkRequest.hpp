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
        && return this->appointGotStartTime_ == nullptr && return this->bizType_ == nullptr && return this->consigneeAddressShrink_ == nullptr && return this->consigneeMobile_ == nullptr && return this->consigneeName_ == nullptr
        && return this->consigneePhone_ == nullptr && return this->cpCode_ == nullptr && return this->goodsInfosShrink_ == nullptr && return this->orderChannels_ == nullptr && return this->outerOrderCode_ == nullptr
        && return this->remark_ == nullptr && return this->sendAddressShrink_ == nullptr && return this->sendMobile_ == nullptr && return this->sendName_ == nullptr && return this->sendPhone_ == nullptr; };
    // appointGotEndTime Field Functions 
    bool hasAppointGotEndTime() const { return this->appointGotEndTime_ != nullptr;};
    void deleteAppointGotEndTime() { this->appointGotEndTime_ = nullptr;};
    inline string appointGotEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotEndTime_, "") };
    inline CreatePickUpWaybillShrinkRequest& setAppointGotEndTime(string appointGotEndTime) { DARABONBA_PTR_SET_VALUE(appointGotEndTime_, appointGotEndTime) };


    // appointGotStartTime Field Functions 
    bool hasAppointGotStartTime() const { return this->appointGotStartTime_ != nullptr;};
    void deleteAppointGotStartTime() { this->appointGotStartTime_ = nullptr;};
    inline string appointGotStartTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotStartTime_, "") };
    inline CreatePickUpWaybillShrinkRequest& setAppointGotStartTime(string appointGotStartTime) { DARABONBA_PTR_SET_VALUE(appointGotStartTime_, appointGotStartTime) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreatePickUpWaybillShrinkRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consigneeAddressShrink Field Functions 
    bool hasConsigneeAddressShrink() const { return this->consigneeAddressShrink_ != nullptr;};
    void deleteConsigneeAddressShrink() { this->consigneeAddressShrink_ = nullptr;};
    inline string consigneeAddressShrink() const { DARABONBA_PTR_GET_DEFAULT(consigneeAddressShrink_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneeAddressShrink(string consigneeAddressShrink) { DARABONBA_PTR_SET_VALUE(consigneeAddressShrink_, consigneeAddressShrink) };


    // consigneeMobile Field Functions 
    bool hasConsigneeMobile() const { return this->consigneeMobile_ != nullptr;};
    void deleteConsigneeMobile() { this->consigneeMobile_ = nullptr;};
    inline string consigneeMobile() const { DARABONBA_PTR_GET_DEFAULT(consigneeMobile_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneeMobile(string consigneeMobile) { DARABONBA_PTR_SET_VALUE(consigneeMobile_, consigneeMobile) };


    // consigneeName Field Functions 
    bool hasConsigneeName() const { return this->consigneeName_ != nullptr;};
    void deleteConsigneeName() { this->consigneeName_ = nullptr;};
    inline string consigneeName() const { DARABONBA_PTR_GET_DEFAULT(consigneeName_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneeName(string consigneeName) { DARABONBA_PTR_SET_VALUE(consigneeName_, consigneeName) };


    // consigneePhone Field Functions 
    bool hasConsigneePhone() const { return this->consigneePhone_ != nullptr;};
    void deleteConsigneePhone() { this->consigneePhone_ = nullptr;};
    inline string consigneePhone() const { DARABONBA_PTR_GET_DEFAULT(consigneePhone_, "") };
    inline CreatePickUpWaybillShrinkRequest& setConsigneePhone(string consigneePhone) { DARABONBA_PTR_SET_VALUE(consigneePhone_, consigneePhone) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string cpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillShrinkRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // goodsInfosShrink Field Functions 
    bool hasGoodsInfosShrink() const { return this->goodsInfosShrink_ != nullptr;};
    void deleteGoodsInfosShrink() { this->goodsInfosShrink_ = nullptr;};
    inline string goodsInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(goodsInfosShrink_, "") };
    inline CreatePickUpWaybillShrinkRequest& setGoodsInfosShrink(string goodsInfosShrink) { DARABONBA_PTR_SET_VALUE(goodsInfosShrink_, goodsInfosShrink) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string orderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillShrinkRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string outerOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillShrinkRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePickUpWaybillShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sendAddressShrink Field Functions 
    bool hasSendAddressShrink() const { return this->sendAddressShrink_ != nullptr;};
    void deleteSendAddressShrink() { this->sendAddressShrink_ = nullptr;};
    inline string sendAddressShrink() const { DARABONBA_PTR_GET_DEFAULT(sendAddressShrink_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendAddressShrink(string sendAddressShrink) { DARABONBA_PTR_SET_VALUE(sendAddressShrink_, sendAddressShrink) };


    // sendMobile Field Functions 
    bool hasSendMobile() const { return this->sendMobile_ != nullptr;};
    void deleteSendMobile() { this->sendMobile_ = nullptr;};
    inline string sendMobile() const { DARABONBA_PTR_GET_DEFAULT(sendMobile_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendMobile(string sendMobile) { DARABONBA_PTR_SET_VALUE(sendMobile_, sendMobile) };


    // sendName Field Functions 
    bool hasSendName() const { return this->sendName_ != nullptr;};
    void deleteSendName() { this->sendName_ = nullptr;};
    inline string sendName() const { DARABONBA_PTR_GET_DEFAULT(sendName_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendName(string sendName) { DARABONBA_PTR_SET_VALUE(sendName_, sendName) };


    // sendPhone Field Functions 
    bool hasSendPhone() const { return this->sendPhone_ != nullptr;};
    void deleteSendPhone() { this->sendPhone_ = nullptr;};
    inline string sendPhone() const { DARABONBA_PTR_GET_DEFAULT(sendPhone_, "") };
    inline CreatePickUpWaybillShrinkRequest& setSendPhone(string sendPhone) { DARABONBA_PTR_SET_VALUE(sendPhone_, sendPhone) };


  protected:
    // The end time of the door-to-door pickup in the appointment. The value of **AppointGotEndTime** is the value of **EndTime** of **AppointTimes** in **CpTimeSelectList** returned by the [CreatePickUpWaybillPreQuery](~~CreatePickUpWaybillPreQuery~~#resultMapping) operation.
    // 
    // >  This parameter is required when **BizType** is set to **1**.
    std::shared_ptr<string> appointGotEndTime_ = nullptr;
    // The start time of the door-to-door pickup in the appointment. The value of **AppointGotStartTime** is the value of **StartTime** of **AppointTimes** in **CpTimeSelectList** returned by the [CreatePickUpWaybillPreQuery](~~CreatePickUpWaybillPreQuery~~#resultMapping) operation.
    // 
    // >  This parameter is required when **BizType** is set to **1**.
    std::shared_ptr<string> appointGotStartTime_ = nullptr;
    // The pickup mode. Valid values:
    // 
    // *   **0** (default): real-time order.
    // *   **1**: appointment order.
    std::shared_ptr<int32_t> bizType_ = nullptr;
    // The address of the consignee.
    // 
    // This parameter is required.
    std::shared_ptr<string> consigneeAddressShrink_ = nullptr;
    // The mobile phone number of the consignee.
    // 
    // >  Either ConsigneeMobile or ConsigneePhone must be set.
    std::shared_ptr<string> consigneeMobile_ = nullptr;
    // The name of the consignee.
    // 
    // This parameter is required.
    std::shared_ptr<string> consigneeName_ = nullptr;
    // The landline phone number of the consignee.
    // 
    // >  Either ConsigneeMobile or ConsigneePhone must be set.
    std::shared_ptr<string> consigneePhone_ = nullptr;
    // The code of the courier company.
    std::shared_ptr<string> cpCode_ = nullptr;
    // The items.
    std::shared_ptr<string> goodsInfosShrink_ = nullptr;
    // The external channel sources.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderChannels_ = nullptr;
    // The ID of the external order.
    // 
    // This parameter is required.
    std::shared_ptr<string> outerOrderCode_ = nullptr;
    // The additional information about the order. The additional information will be printed on the order.
    std::shared_ptr<string> remark_ = nullptr;
    // The address of the sender.
    // 
    // This parameter is required.
    std::shared_ptr<string> sendAddressShrink_ = nullptr;
    // The mobile phone number of the sender.
    // 
    // >  Either SendMobile or SendPhone must be set.
    std::shared_ptr<string> sendMobile_ = nullptr;
    // The name of the sender.
    // 
    // This parameter is required.
    std::shared_ptr<string> sendName_ = nullptr;
    // The landline phone number of the sender.
    // 
    // >  Either SendMobile or SendPhone must be set.
    std::shared_ptr<string> sendPhone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
