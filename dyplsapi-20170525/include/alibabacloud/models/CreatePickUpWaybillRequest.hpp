// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICKUPWAYBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePickUpWaybillRequestConsigneeAddress.hpp>
#include <vector>
#include <alibabacloud/models/CreatePickUpWaybillRequestGoodsInfos.hpp>
#include <alibabacloud/models/CreatePickUpWaybillRequestSendAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreatePickUpWaybillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePickUpWaybillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppointGotEndTime, appointGotEndTime_);
      DARABONBA_PTR_TO_JSON(AppointGotStartTime, appointGotStartTime_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConsigneeAddress, consigneeAddress_);
      DARABONBA_PTR_TO_JSON(ConsigneeMobile, consigneeMobile_);
      DARABONBA_PTR_TO_JSON(ConsigneeName, consigneeName_);
      DARABONBA_PTR_TO_JSON(ConsigneePhone, consigneePhone_);
      DARABONBA_PTR_TO_JSON(CpCode, cpCode_);
      DARABONBA_PTR_TO_JSON(GoodsInfos, goodsInfos_);
      DARABONBA_PTR_TO_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_TO_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SendAddress, sendAddress_);
      DARABONBA_PTR_TO_JSON(SendMobile, sendMobile_);
      DARABONBA_PTR_TO_JSON(SendName, sendName_);
      DARABONBA_PTR_TO_JSON(SendPhone, sendPhone_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePickUpWaybillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppointGotEndTime, appointGotEndTime_);
      DARABONBA_PTR_FROM_JSON(AppointGotStartTime, appointGotStartTime_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConsigneeAddress, consigneeAddress_);
      DARABONBA_PTR_FROM_JSON(ConsigneeMobile, consigneeMobile_);
      DARABONBA_PTR_FROM_JSON(ConsigneeName, consigneeName_);
      DARABONBA_PTR_FROM_JSON(ConsigneePhone, consigneePhone_);
      DARABONBA_PTR_FROM_JSON(CpCode, cpCode_);
      DARABONBA_PTR_FROM_JSON(GoodsInfos, goodsInfos_);
      DARABONBA_PTR_FROM_JSON(OrderChannels, orderChannels_);
      DARABONBA_PTR_FROM_JSON(OuterOrderCode, outerOrderCode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SendAddress, sendAddress_);
      DARABONBA_PTR_FROM_JSON(SendMobile, sendMobile_);
      DARABONBA_PTR_FROM_JSON(SendName, sendName_);
      DARABONBA_PTR_FROM_JSON(SendPhone, sendPhone_);
    };
    CreatePickUpWaybillRequest() = default ;
    CreatePickUpWaybillRequest(const CreatePickUpWaybillRequest &) = default ;
    CreatePickUpWaybillRequest(CreatePickUpWaybillRequest &&) = default ;
    CreatePickUpWaybillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePickUpWaybillRequest() = default ;
    CreatePickUpWaybillRequest& operator=(const CreatePickUpWaybillRequest &) = default ;
    CreatePickUpWaybillRequest& operator=(CreatePickUpWaybillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appointGotEndTime_ == nullptr
        && return this->appointGotStartTime_ == nullptr && return this->bizType_ == nullptr && return this->consigneeAddress_ == nullptr && return this->consigneeMobile_ == nullptr && return this->consigneeName_ == nullptr
        && return this->consigneePhone_ == nullptr && return this->cpCode_ == nullptr && return this->goodsInfos_ == nullptr && return this->orderChannels_ == nullptr && return this->outerOrderCode_ == nullptr
        && return this->remark_ == nullptr && return this->sendAddress_ == nullptr && return this->sendMobile_ == nullptr && return this->sendName_ == nullptr && return this->sendPhone_ == nullptr; };
    // appointGotEndTime Field Functions 
    bool hasAppointGotEndTime() const { return this->appointGotEndTime_ != nullptr;};
    void deleteAppointGotEndTime() { this->appointGotEndTime_ = nullptr;};
    inline string appointGotEndTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotEndTime_, "") };
    inline CreatePickUpWaybillRequest& setAppointGotEndTime(string appointGotEndTime) { DARABONBA_PTR_SET_VALUE(appointGotEndTime_, appointGotEndTime) };


    // appointGotStartTime Field Functions 
    bool hasAppointGotStartTime() const { return this->appointGotStartTime_ != nullptr;};
    void deleteAppointGotStartTime() { this->appointGotStartTime_ = nullptr;};
    inline string appointGotStartTime() const { DARABONBA_PTR_GET_DEFAULT(appointGotStartTime_, "") };
    inline CreatePickUpWaybillRequest& setAppointGotStartTime(string appointGotStartTime) { DARABONBA_PTR_SET_VALUE(appointGotStartTime_, appointGotStartTime) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreatePickUpWaybillRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // consigneeAddress Field Functions 
    bool hasConsigneeAddress() const { return this->consigneeAddress_ != nullptr;};
    void deleteConsigneeAddress() { this->consigneeAddress_ = nullptr;};
    inline const CreatePickUpWaybillRequestConsigneeAddress & consigneeAddress() const { DARABONBA_PTR_GET_CONST(consigneeAddress_, CreatePickUpWaybillRequestConsigneeAddress) };
    inline CreatePickUpWaybillRequestConsigneeAddress consigneeAddress() { DARABONBA_PTR_GET(consigneeAddress_, CreatePickUpWaybillRequestConsigneeAddress) };
    inline CreatePickUpWaybillRequest& setConsigneeAddress(const CreatePickUpWaybillRequestConsigneeAddress & consigneeAddress) { DARABONBA_PTR_SET_VALUE(consigneeAddress_, consigneeAddress) };
    inline CreatePickUpWaybillRequest& setConsigneeAddress(CreatePickUpWaybillRequestConsigneeAddress && consigneeAddress) { DARABONBA_PTR_SET_RVALUE(consigneeAddress_, consigneeAddress) };


    // consigneeMobile Field Functions 
    bool hasConsigneeMobile() const { return this->consigneeMobile_ != nullptr;};
    void deleteConsigneeMobile() { this->consigneeMobile_ = nullptr;};
    inline string consigneeMobile() const { DARABONBA_PTR_GET_DEFAULT(consigneeMobile_, "") };
    inline CreatePickUpWaybillRequest& setConsigneeMobile(string consigneeMobile) { DARABONBA_PTR_SET_VALUE(consigneeMobile_, consigneeMobile) };


    // consigneeName Field Functions 
    bool hasConsigneeName() const { return this->consigneeName_ != nullptr;};
    void deleteConsigneeName() { this->consigneeName_ = nullptr;};
    inline string consigneeName() const { DARABONBA_PTR_GET_DEFAULT(consigneeName_, "") };
    inline CreatePickUpWaybillRequest& setConsigneeName(string consigneeName) { DARABONBA_PTR_SET_VALUE(consigneeName_, consigneeName) };


    // consigneePhone Field Functions 
    bool hasConsigneePhone() const { return this->consigneePhone_ != nullptr;};
    void deleteConsigneePhone() { this->consigneePhone_ = nullptr;};
    inline string consigneePhone() const { DARABONBA_PTR_GET_DEFAULT(consigneePhone_, "") };
    inline CreatePickUpWaybillRequest& setConsigneePhone(string consigneePhone) { DARABONBA_PTR_SET_VALUE(consigneePhone_, consigneePhone) };


    // cpCode Field Functions 
    bool hasCpCode() const { return this->cpCode_ != nullptr;};
    void deleteCpCode() { this->cpCode_ = nullptr;};
    inline string cpCode() const { DARABONBA_PTR_GET_DEFAULT(cpCode_, "") };
    inline CreatePickUpWaybillRequest& setCpCode(string cpCode) { DARABONBA_PTR_SET_VALUE(cpCode_, cpCode) };


    // goodsInfos Field Functions 
    bool hasGoodsInfos() const { return this->goodsInfos_ != nullptr;};
    void deleteGoodsInfos() { this->goodsInfos_ = nullptr;};
    inline const vector<CreatePickUpWaybillRequestGoodsInfos> & goodsInfos() const { DARABONBA_PTR_GET_CONST(goodsInfos_, vector<CreatePickUpWaybillRequestGoodsInfos>) };
    inline vector<CreatePickUpWaybillRequestGoodsInfos> goodsInfos() { DARABONBA_PTR_GET(goodsInfos_, vector<CreatePickUpWaybillRequestGoodsInfos>) };
    inline CreatePickUpWaybillRequest& setGoodsInfos(const vector<CreatePickUpWaybillRequestGoodsInfos> & goodsInfos) { DARABONBA_PTR_SET_VALUE(goodsInfos_, goodsInfos) };
    inline CreatePickUpWaybillRequest& setGoodsInfos(vector<CreatePickUpWaybillRequestGoodsInfos> && goodsInfos) { DARABONBA_PTR_SET_RVALUE(goodsInfos_, goodsInfos) };


    // orderChannels Field Functions 
    bool hasOrderChannels() const { return this->orderChannels_ != nullptr;};
    void deleteOrderChannels() { this->orderChannels_ = nullptr;};
    inline string orderChannels() const { DARABONBA_PTR_GET_DEFAULT(orderChannels_, "") };
    inline CreatePickUpWaybillRequest& setOrderChannels(string orderChannels) { DARABONBA_PTR_SET_VALUE(orderChannels_, orderChannels) };


    // outerOrderCode Field Functions 
    bool hasOuterOrderCode() const { return this->outerOrderCode_ != nullptr;};
    void deleteOuterOrderCode() { this->outerOrderCode_ = nullptr;};
    inline string outerOrderCode() const { DARABONBA_PTR_GET_DEFAULT(outerOrderCode_, "") };
    inline CreatePickUpWaybillRequest& setOuterOrderCode(string outerOrderCode) { DARABONBA_PTR_SET_VALUE(outerOrderCode_, outerOrderCode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePickUpWaybillRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sendAddress Field Functions 
    bool hasSendAddress() const { return this->sendAddress_ != nullptr;};
    void deleteSendAddress() { this->sendAddress_ = nullptr;};
    inline const CreatePickUpWaybillRequestSendAddress & sendAddress() const { DARABONBA_PTR_GET_CONST(sendAddress_, CreatePickUpWaybillRequestSendAddress) };
    inline CreatePickUpWaybillRequestSendAddress sendAddress() { DARABONBA_PTR_GET(sendAddress_, CreatePickUpWaybillRequestSendAddress) };
    inline CreatePickUpWaybillRequest& setSendAddress(const CreatePickUpWaybillRequestSendAddress & sendAddress) { DARABONBA_PTR_SET_VALUE(sendAddress_, sendAddress) };
    inline CreatePickUpWaybillRequest& setSendAddress(CreatePickUpWaybillRequestSendAddress && sendAddress) { DARABONBA_PTR_SET_RVALUE(sendAddress_, sendAddress) };


    // sendMobile Field Functions 
    bool hasSendMobile() const { return this->sendMobile_ != nullptr;};
    void deleteSendMobile() { this->sendMobile_ = nullptr;};
    inline string sendMobile() const { DARABONBA_PTR_GET_DEFAULT(sendMobile_, "") };
    inline CreatePickUpWaybillRequest& setSendMobile(string sendMobile) { DARABONBA_PTR_SET_VALUE(sendMobile_, sendMobile) };


    // sendName Field Functions 
    bool hasSendName() const { return this->sendName_ != nullptr;};
    void deleteSendName() { this->sendName_ = nullptr;};
    inline string sendName() const { DARABONBA_PTR_GET_DEFAULT(sendName_, "") };
    inline CreatePickUpWaybillRequest& setSendName(string sendName) { DARABONBA_PTR_SET_VALUE(sendName_, sendName) };


    // sendPhone Field Functions 
    bool hasSendPhone() const { return this->sendPhone_ != nullptr;};
    void deleteSendPhone() { this->sendPhone_ = nullptr;};
    inline string sendPhone() const { DARABONBA_PTR_GET_DEFAULT(sendPhone_, "") };
    inline CreatePickUpWaybillRequest& setSendPhone(string sendPhone) { DARABONBA_PTR_SET_VALUE(sendPhone_, sendPhone) };


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
    std::shared_ptr<CreatePickUpWaybillRequestConsigneeAddress> consigneeAddress_ = nullptr;
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
    std::shared_ptr<vector<CreatePickUpWaybillRequestGoodsInfos>> goodsInfos_ = nullptr;
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
    std::shared_ptr<CreatePickUpWaybillRequestSendAddress> sendAddress_ = nullptr;
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
