// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTSEGMENTAVAILABLECERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightSegmentAvailableCertResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightSegmentAvailableCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightSegmentAvailableCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result_code, resultCode_);
      DARABONBA_PTR_TO_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightSegmentAvailableCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result_code, resultCode_);
      DARABONBA_PTR_FROM_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightSegmentAvailableCertResponseBody() = default ;
    IntlFlightSegmentAvailableCertResponseBody(const IntlFlightSegmentAvailableCertResponseBody &) = default ;
    IntlFlightSegmentAvailableCertResponseBody(IntlFlightSegmentAvailableCertResponseBody &&) = default ;
    IntlFlightSegmentAvailableCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightSegmentAvailableCertResponseBody() = default ;
    IntlFlightSegmentAvailableCertResponseBody& operator=(const IntlFlightSegmentAvailableCertResponseBody &) = default ;
    IntlFlightSegmentAvailableCertResponseBody& operator=(IntlFlightSegmentAvailableCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->module_ != nullptr
        && this->requestId_ != nullptr && this->resultCode_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr && this->traceId_ != nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightSegmentAvailableCertResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightSegmentAvailableCertResponseBodyModule) };
    inline IntlFlightSegmentAvailableCertResponseBodyModule module() { DARABONBA_PTR_GET(module_, IntlFlightSegmentAvailableCertResponseBodyModule) };
    inline IntlFlightSegmentAvailableCertResponseBody& setModule(const IntlFlightSegmentAvailableCertResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightSegmentAvailableCertResponseBody& setModule(IntlFlightSegmentAvailableCertResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightSegmentAvailableCertResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightSegmentAvailableCertResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<IntlFlightSegmentAvailableCertResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
