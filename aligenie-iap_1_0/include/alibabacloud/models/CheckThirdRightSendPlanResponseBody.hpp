// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CheckThirdRightSendPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckThirdRightSendPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_TO_JSON(RetValue, retValue_);
    };
    friend void from_json(const Darabonba::Json& j, CheckThirdRightSendPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
    };
    CheckThirdRightSendPlanResponseBody() = default ;
    CheckThirdRightSendPlanResponseBody(const CheckThirdRightSendPlanResponseBody &) = default ;
    CheckThirdRightSendPlanResponseBody(CheckThirdRightSendPlanResponseBody &&) = default ;
    CheckThirdRightSendPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckThirdRightSendPlanResponseBody() = default ;
    CheckThirdRightSendPlanResponseBody& operator=(const CheckThirdRightSendPlanResponseBody &) = default ;
    CheckThirdRightSendPlanResponseBody& operator=(CheckThirdRightSendPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetValue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetValue& obj) { 
        DARABONBA_PTR_TO_JSON(ActivateDate, activateDate_);
        DARABONBA_PTR_TO_JSON(CardType, cardType_);
        DARABONBA_PTR_TO_JSON(ChannelCode, channelCode_);
        DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
        DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(RightsExpiredDate, rightsExpiredDate_);
      };
      friend void from_json(const Darabonba::Json& j, RetValue& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivateDate, activateDate_);
        DARABONBA_PTR_FROM_JSON(CardType, cardType_);
        DARABONBA_PTR_FROM_JSON(ChannelCode, channelCode_);
        DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
        DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(RightsExpiredDate, rightsExpiredDate_);
      };
      RetValue() = default ;
      RetValue(const RetValue &) = default ;
      RetValue(RetValue &&) = default ;
      RetValue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetValue() = default ;
      RetValue& operator=(const RetValue &) = default ;
      RetValue& operator=(RetValue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activateDate_ == nullptr
        && this->cardType_ == nullptr && this->channelCode_ == nullptr && this->channelName_ == nullptr && this->extendInfo_ == nullptr && this->requestId_ == nullptr
        && this->rightsExpiredDate_ == nullptr; };
      // activateDate Field Functions 
      bool hasActivateDate() const { return this->activateDate_ != nullptr;};
      void deleteActivateDate() { this->activateDate_ = nullptr;};
      inline string getActivateDate() const { DARABONBA_PTR_GET_DEFAULT(activateDate_, "") };
      inline RetValue& setActivateDate(string activateDate) { DARABONBA_PTR_SET_VALUE(activateDate_, activateDate) };


      // cardType Field Functions 
      bool hasCardType() const { return this->cardType_ != nullptr;};
      void deleteCardType() { this->cardType_ = nullptr;};
      inline int32_t getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
      inline RetValue& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


      // channelCode Field Functions 
      bool hasChannelCode() const { return this->channelCode_ != nullptr;};
      void deleteChannelCode() { this->channelCode_ = nullptr;};
      inline string getChannelCode() const { DARABONBA_PTR_GET_DEFAULT(channelCode_, "") };
      inline RetValue& setChannelCode(string channelCode) { DARABONBA_PTR_SET_VALUE(channelCode_, channelCode) };


      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline RetValue& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
      Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
      inline RetValue& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
      inline RetValue& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline RetValue& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // rightsExpiredDate Field Functions 
      bool hasRightsExpiredDate() const { return this->rightsExpiredDate_ != nullptr;};
      void deleteRightsExpiredDate() { this->rightsExpiredDate_ = nullptr;};
      inline string getRightsExpiredDate() const { DARABONBA_PTR_GET_DEFAULT(rightsExpiredDate_, "") };
      inline RetValue& setRightsExpiredDate(string rightsExpiredDate) { DARABONBA_PTR_SET_VALUE(rightsExpiredDate_, rightsExpiredDate) };


    protected:
      // Activation time
      shared_ptr<string> activateDate_ {};
      // Card type
      shared_ptr<int32_t> cardType_ {};
      // Channel code
      shared_ptr<string> channelCode_ {};
      // Channel Name
      shared_ptr<string> channelName_ {};
      // Extension field
      Darabonba::Json extendInfo_ {};
      // Request ID
      shared_ptr<string> requestId_ {};
      // Rights expiration time
      shared_ptr<string> rightsExpiredDate_ {};
    };

    virtual bool empty() const override { return this->retCode_ == nullptr
        && this->retMsg_ == nullptr && this->retValue_ == nullptr; };
    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline CheckThirdRightSendPlanResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retMsg Field Functions 
    bool hasRetMsg() const { return this->retMsg_ != nullptr;};
    void deleteRetMsg() { this->retMsg_ = nullptr;};
    inline string getRetMsg() const { DARABONBA_PTR_GET_DEFAULT(retMsg_, "") };
    inline CheckThirdRightSendPlanResponseBody& setRetMsg(string retMsg) { DARABONBA_PTR_SET_VALUE(retMsg_, retMsg) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline const CheckThirdRightSendPlanResponseBody::RetValue & getRetValue() const { DARABONBA_PTR_GET_CONST(retValue_, CheckThirdRightSendPlanResponseBody::RetValue) };
    inline CheckThirdRightSendPlanResponseBody::RetValue getRetValue() { DARABONBA_PTR_GET(retValue_, CheckThirdRightSendPlanResponseBody::RetValue) };
    inline CheckThirdRightSendPlanResponseBody& setRetValue(const CheckThirdRightSendPlanResponseBody::RetValue & retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };
    inline CheckThirdRightSendPlanResponseBody& setRetValue(CheckThirdRightSendPlanResponseBody::RetValue && retValue) { DARABONBA_PTR_SET_RVALUE(retValue_, retValue) };


  protected:
    // Return code
    shared_ptr<int32_t> retCode_ {};
    // Error message
    shared_ptr<string> retMsg_ {};
    // Result of invoking the API
    shared_ptr<CheckThirdRightSendPlanResponseBody::RetValue> retValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
