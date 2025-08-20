// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANRESPONSEBODYRETVALUE_HPP_
#define ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANRESPONSEBODYRETVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CheckThirdRightSendPlanResponseBodyRetValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckThirdRightSendPlanResponseBodyRetValue& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateDate, activateDate_);
      DARABONBA_PTR_TO_JSON(CardType, cardType_);
      DARABONBA_PTR_TO_JSON(ChannelCode, channelCode_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RightsExpiredDate, rightsExpiredDate_);
    };
    friend void from_json(const Darabonba::Json& j, CheckThirdRightSendPlanResponseBodyRetValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateDate, activateDate_);
      DARABONBA_PTR_FROM_JSON(CardType, cardType_);
      DARABONBA_PTR_FROM_JSON(ChannelCode, channelCode_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RightsExpiredDate, rightsExpiredDate_);
    };
    CheckThirdRightSendPlanResponseBodyRetValue() = default ;
    CheckThirdRightSendPlanResponseBodyRetValue(const CheckThirdRightSendPlanResponseBodyRetValue &) = default ;
    CheckThirdRightSendPlanResponseBodyRetValue(CheckThirdRightSendPlanResponseBodyRetValue &&) = default ;
    CheckThirdRightSendPlanResponseBodyRetValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckThirdRightSendPlanResponseBodyRetValue() = default ;
    CheckThirdRightSendPlanResponseBodyRetValue& operator=(const CheckThirdRightSendPlanResponseBodyRetValue &) = default ;
    CheckThirdRightSendPlanResponseBodyRetValue& operator=(CheckThirdRightSendPlanResponseBodyRetValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activateDate_ != nullptr
        && this->cardType_ != nullptr && this->channelCode_ != nullptr && this->channelName_ != nullptr && this->extendInfo_ != nullptr && this->requestId_ != nullptr
        && this->rightsExpiredDate_ != nullptr; };
    // activateDate Field Functions 
    bool hasActivateDate() const { return this->activateDate_ != nullptr;};
    void deleteActivateDate() { this->activateDate_ = nullptr;};
    inline string activateDate() const { DARABONBA_PTR_GET_DEFAULT(activateDate_, "") };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setActivateDate(string activateDate) { DARABONBA_PTR_SET_VALUE(activateDate_, activateDate) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline int32_t cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // channelCode Field Functions 
    bool hasChannelCode() const { return this->channelCode_ != nullptr;};
    void deleteChannelCode() { this->channelCode_ = nullptr;};
    inline string channelCode() const { DARABONBA_PTR_GET_DEFAULT(channelCode_, "") };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setChannelCode(string channelCode) { DARABONBA_PTR_SET_VALUE(channelCode_, channelCode) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rightsExpiredDate Field Functions 
    bool hasRightsExpiredDate() const { return this->rightsExpiredDate_ != nullptr;};
    void deleteRightsExpiredDate() { this->rightsExpiredDate_ = nullptr;};
    inline string rightsExpiredDate() const { DARABONBA_PTR_GET_DEFAULT(rightsExpiredDate_, "") };
    inline CheckThirdRightSendPlanResponseBodyRetValue& setRightsExpiredDate(string rightsExpiredDate) { DARABONBA_PTR_SET_VALUE(rightsExpiredDate_, rightsExpiredDate) };


  protected:
    std::shared_ptr<string> activateDate_ = nullptr;
    std::shared_ptr<int32_t> cardType_ = nullptr;
    std::shared_ptr<string> channelCode_ = nullptr;
    std::shared_ptr<string> channelName_ = nullptr;
    Darabonba::Json extendInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> rightsExpiredDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
