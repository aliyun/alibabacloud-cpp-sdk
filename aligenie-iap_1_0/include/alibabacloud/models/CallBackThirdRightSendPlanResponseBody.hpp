// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALLBACKTHIRDRIGHTSENDPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CALLBACKTHIRDRIGHTSENDPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CallBackThirdRightSendPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CallBackThirdRightSendPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_TO_JSON(RetValue, retValue_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CallBackThirdRightSendPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetMsg, retMsg_);
      DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CallBackThirdRightSendPlanResponseBody() = default ;
    CallBackThirdRightSendPlanResponseBody(const CallBackThirdRightSendPlanResponseBody &) = default ;
    CallBackThirdRightSendPlanResponseBody(CallBackThirdRightSendPlanResponseBody &&) = default ;
    CallBackThirdRightSendPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CallBackThirdRightSendPlanResponseBody() = default ;
    CallBackThirdRightSendPlanResponseBody& operator=(const CallBackThirdRightSendPlanResponseBody &) = default ;
    CallBackThirdRightSendPlanResponseBody& operator=(CallBackThirdRightSendPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->retCode_ != nullptr
        && this->retMsg_ != nullptr && this->retValue_ != nullptr && this->requestId_ != nullptr; };
    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline string retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, "") };
    inline CallBackThirdRightSendPlanResponseBody& setRetCode(string retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retMsg Field Functions 
    bool hasRetMsg() const { return this->retMsg_ != nullptr;};
    void deleteRetMsg() { this->retMsg_ = nullptr;};
    inline string retMsg() const { DARABONBA_PTR_GET_DEFAULT(retMsg_, "") };
    inline CallBackThirdRightSendPlanResponseBody& setRetMsg(string retMsg) { DARABONBA_PTR_SET_VALUE(retMsg_, retMsg) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline bool retValue() const { DARABONBA_PTR_GET_DEFAULT(retValue_, false) };
    inline CallBackThirdRightSendPlanResponseBody& setRetValue(bool retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CallBackThirdRightSendPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> retCode_ = nullptr;
    std::shared_ptr<string> retMsg_ = nullptr;
    std::shared_ptr<bool> retValue_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
