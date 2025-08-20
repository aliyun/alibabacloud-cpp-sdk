// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTHIRDRIGHTSENDPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckThirdRightSendPlanResponseBodyRetValue.hpp>
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
    virtual bool empty() const override { this->retCode_ != nullptr
        && this->retMsg_ != nullptr && this->retValue_ != nullptr; };
    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline CheckThirdRightSendPlanResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retMsg Field Functions 
    bool hasRetMsg() const { return this->retMsg_ != nullptr;};
    void deleteRetMsg() { this->retMsg_ = nullptr;};
    inline string retMsg() const { DARABONBA_PTR_GET_DEFAULT(retMsg_, "") };
    inline CheckThirdRightSendPlanResponseBody& setRetMsg(string retMsg) { DARABONBA_PTR_SET_VALUE(retMsg_, retMsg) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline const CheckThirdRightSendPlanResponseBodyRetValue & retValue() const { DARABONBA_PTR_GET_CONST(retValue_, CheckThirdRightSendPlanResponseBodyRetValue) };
    inline CheckThirdRightSendPlanResponseBodyRetValue retValue() { DARABONBA_PTR_GET(retValue_, CheckThirdRightSendPlanResponseBodyRetValue) };
    inline CheckThirdRightSendPlanResponseBody& setRetValue(const CheckThirdRightSendPlanResponseBodyRetValue & retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };
    inline CheckThirdRightSendPlanResponseBody& setRetValue(CheckThirdRightSendPlanResponseBodyRetValue && retValue) { DARABONBA_PTR_SET_RVALUE(retValue_, retValue) };


  protected:
    std::shared_ptr<int32_t> retCode_ = nullptr;
    std::shared_ptr<string> retMsg_ = nullptr;
    std::shared_ptr<CheckThirdRightSendPlanResponseBodyRetValue> retValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
