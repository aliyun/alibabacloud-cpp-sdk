// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALLBACKTHIRDRIGHTSENDPLANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CALLBACKTHIRDRIGHTSENDPLANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CallBackThirdRightSendPlanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CallBackThirdRightSendPlanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CardType, cardType_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfoShrink_);
      DARABONBA_PTR_TO_JSON(GenieOpenId, genieOpenId_);
      DARABONBA_PTR_TO_JSON(ReceiveStatus, receiveStatus_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(SupplierId, supplierId_);
    };
    friend void from_json(const Darabonba::Json& j, CallBackThirdRightSendPlanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CardType, cardType_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfoShrink_);
      DARABONBA_PTR_FROM_JSON(GenieOpenId, genieOpenId_);
      DARABONBA_PTR_FROM_JSON(ReceiveStatus, receiveStatus_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(SupplierId, supplierId_);
    };
    CallBackThirdRightSendPlanShrinkRequest() = default ;
    CallBackThirdRightSendPlanShrinkRequest(const CallBackThirdRightSendPlanShrinkRequest &) = default ;
    CallBackThirdRightSendPlanShrinkRequest(CallBackThirdRightSendPlanShrinkRequest &&) = default ;
    CallBackThirdRightSendPlanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CallBackThirdRightSendPlanShrinkRequest() = default ;
    CallBackThirdRightSendPlanShrinkRequest& operator=(const CallBackThirdRightSendPlanShrinkRequest &) = default ;
    CallBackThirdRightSendPlanShrinkRequest& operator=(CallBackThirdRightSendPlanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizGroup_ != nullptr
        && this->bizType_ != nullptr && this->cardType_ != nullptr && this->errorMsg_ != nullptr && this->extendInfoShrink_ != nullptr && this->genieOpenId_ != nullptr
        && this->receiveStatus_ != nullptr && this->sn_ != nullptr && this->supplierId_ != nullptr; };
    // bizGroup Field Functions 
    bool hasBizGroup() const { return this->bizGroup_ != nullptr;};
    void deleteBizGroup() { this->bizGroup_ = nullptr;};
    inline string bizGroup() const { DARABONBA_PTR_GET_DEFAULT(bizGroup_, "") };
    inline CallBackThirdRightSendPlanShrinkRequest& setBizGroup(string bizGroup) { DARABONBA_PTR_SET_VALUE(bizGroup_, bizGroup) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CallBackThirdRightSendPlanShrinkRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline int32_t cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
    inline CallBackThirdRightSendPlanShrinkRequest& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CallBackThirdRightSendPlanShrinkRequest& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // extendInfoShrink Field Functions 
    bool hasExtendInfoShrink() const { return this->extendInfoShrink_ != nullptr;};
    void deleteExtendInfoShrink() { this->extendInfoShrink_ = nullptr;};
    inline string extendInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(extendInfoShrink_, "") };
    inline CallBackThirdRightSendPlanShrinkRequest& setExtendInfoShrink(string extendInfoShrink) { DARABONBA_PTR_SET_VALUE(extendInfoShrink_, extendInfoShrink) };


    // genieOpenId Field Functions 
    bool hasGenieOpenId() const { return this->genieOpenId_ != nullptr;};
    void deleteGenieOpenId() { this->genieOpenId_ = nullptr;};
    inline string genieOpenId() const { DARABONBA_PTR_GET_DEFAULT(genieOpenId_, "") };
    inline CallBackThirdRightSendPlanShrinkRequest& setGenieOpenId(string genieOpenId) { DARABONBA_PTR_SET_VALUE(genieOpenId_, genieOpenId) };


    // receiveStatus Field Functions 
    bool hasReceiveStatus() const { return this->receiveStatus_ != nullptr;};
    void deleteReceiveStatus() { this->receiveStatus_ = nullptr;};
    inline int32_t receiveStatus() const { DARABONBA_PTR_GET_DEFAULT(receiveStatus_, 0) };
    inline CallBackThirdRightSendPlanShrinkRequest& setReceiveStatus(int32_t receiveStatus) { DARABONBA_PTR_SET_VALUE(receiveStatus_, receiveStatus) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CallBackThirdRightSendPlanShrinkRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // supplierId Field Functions 
    bool hasSupplierId() const { return this->supplierId_ != nullptr;};
    void deleteSupplierId() { this->supplierId_ = nullptr;};
    inline int64_t supplierId() const { DARABONBA_PTR_GET_DEFAULT(supplierId_, 0L) };
    inline CallBackThirdRightSendPlanShrinkRequest& setSupplierId(int64_t supplierId) { DARABONBA_PTR_SET_VALUE(supplierId_, supplierId) };


  protected:
    std::shared_ptr<string> bizGroup_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    std::shared_ptr<int32_t> cardType_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> extendInfoShrink_ = nullptr;
    std::shared_ptr<string> genieOpenId_ = nullptr;
    std::shared_ptr<int32_t> receiveStatus_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<int64_t> supplierId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
