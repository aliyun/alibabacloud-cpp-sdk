// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyModule.hpp>
#include <alibabacloud/models/FlightOrderListQueryResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOrderListQueryResponseBody() = default ;
    FlightOrderListQueryResponseBody(const FlightOrderListQueryResponseBody &) = default ;
    FlightOrderListQueryResponseBody(FlightOrderListQueryResponseBody &&) = default ;
    FlightOrderListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryResponseBody() = default ;
    FlightOrderListQueryResponseBody& operator=(const FlightOrderListQueryResponseBody &) = default ;
    FlightOrderListQueryResponseBody& operator=(FlightOrderListQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->module_ != nullptr && this->pageInfo_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->traceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOrderListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOrderListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<FlightOrderListQueryResponseBodyModule> & module() const { DARABONBA_PTR_GET_CONST(module_, vector<FlightOrderListQueryResponseBodyModule>) };
    inline vector<FlightOrderListQueryResponseBodyModule> module() { DARABONBA_PTR_GET(module_, vector<FlightOrderListQueryResponseBodyModule>) };
    inline FlightOrderListQueryResponseBody& setModule(const vector<FlightOrderListQueryResponseBodyModule> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOrderListQueryResponseBody& setModule(vector<FlightOrderListQueryResponseBodyModule> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const FlightOrderListQueryResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, FlightOrderListQueryResponseBodyPageInfo) };
    inline FlightOrderListQueryResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, FlightOrderListQueryResponseBodyPageInfo) };
    inline FlightOrderListQueryResponseBody& setPageInfo(const FlightOrderListQueryResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline FlightOrderListQueryResponseBody& setPageInfo(FlightOrderListQueryResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOrderListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOrderListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOrderListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<FlightOrderListQueryResponseBodyModule>> module_ = nullptr;
    std::shared_ptr<FlightOrderListQueryResponseBodyPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
