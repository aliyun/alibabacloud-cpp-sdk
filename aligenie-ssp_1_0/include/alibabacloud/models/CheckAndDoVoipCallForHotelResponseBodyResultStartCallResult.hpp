// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULTSTARTCALLRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULTSTARTCALLRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetValue, retValue_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetValue, retValue_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult(const CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult(CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult &&) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& operator=(const CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& operator=(CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->retCode_ != nullptr && this->retValue_ != nullptr && this->success_ != nullptr && this->traceId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retValue Field Functions 
    bool hasRetValue() const { return this->retValue_ != nullptr;};
    void deleteRetValue() { this->retValue_ = nullptr;};
    inline string retValue() const { DARABONBA_PTR_GET_DEFAULT(retValue_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& setRetValue(string retValue) { DARABONBA_PTR_SET_VALUE(retValue_, retValue) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultStartCallResult& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> retCode_ = nullptr;
    std::shared_ptr<string> retValue_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
