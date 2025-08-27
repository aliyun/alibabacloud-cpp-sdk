// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CarOrderListQueryResponseBodyModule.hpp>
#include <alibabacloud/models/CarOrderListQueryResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarOrderListQueryResponseBody() = default ;
    CarOrderListQueryResponseBody(const CarOrderListQueryResponseBody &) = default ;
    CarOrderListQueryResponseBody(CarOrderListQueryResponseBody &&) = default ;
    CarOrderListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderListQueryResponseBody() = default ;
    CarOrderListQueryResponseBody& operator=(const CarOrderListQueryResponseBody &) = default ;
    CarOrderListQueryResponseBody& operator=(CarOrderListQueryResponseBody &&) = default ;
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
    inline CarOrderListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarOrderListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<CarOrderListQueryResponseBodyModule> & module() const { DARABONBA_PTR_GET_CONST(module_, vector<CarOrderListQueryResponseBodyModule>) };
    inline vector<CarOrderListQueryResponseBodyModule> module() { DARABONBA_PTR_GET(module_, vector<CarOrderListQueryResponseBodyModule>) };
    inline CarOrderListQueryResponseBody& setModule(const vector<CarOrderListQueryResponseBodyModule> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CarOrderListQueryResponseBody& setModule(vector<CarOrderListQueryResponseBodyModule> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const CarOrderListQueryResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, CarOrderListQueryResponseBodyPageInfo) };
    inline CarOrderListQueryResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, CarOrderListQueryResponseBodyPageInfo) };
    inline CarOrderListQueryResponseBody& setPageInfo(const CarOrderListQueryResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline CarOrderListQueryResponseBody& setPageInfo(CarOrderListQueryResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarOrderListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarOrderListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarOrderListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<CarOrderListQueryResponseBodyModule>> module_ = nullptr;
    std::shared_ptr<CarOrderListQueryResponseBodyPageInfo> pageInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    // traceId
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
