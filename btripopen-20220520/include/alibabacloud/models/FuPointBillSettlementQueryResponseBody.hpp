// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUPOINTBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FUPOINTBILLSETTLEMENTQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FuPointBillSettlementQueryResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FuPointBillSettlementQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuPointBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(more_page, morePage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FuPointBillSettlementQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(more_page, morePage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result_msg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FuPointBillSettlementQueryResponseBody() = default ;
    FuPointBillSettlementQueryResponseBody(const FuPointBillSettlementQueryResponseBody &) = default ;
    FuPointBillSettlementQueryResponseBody(FuPointBillSettlementQueryResponseBody &&) = default ;
    FuPointBillSettlementQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuPointBillSettlementQueryResponseBody() = default ;
    FuPointBillSettlementQueryResponseBody& operator=(const FuPointBillSettlementQueryResponseBody &) = default ;
    FuPointBillSettlementQueryResponseBody& operator=(FuPointBillSettlementQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->module_ != nullptr && this->morePage_ != nullptr && this->requestId_ != nullptr && this->resultMsg_ != nullptr && this->success_ != nullptr
        && this->traceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline FuPointBillSettlementQueryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FuPointBillSettlementQueryResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, FuPointBillSettlementQueryResponseBodyModule) };
    inline FuPointBillSettlementQueryResponseBodyModule module() { DARABONBA_PTR_GET(module_, FuPointBillSettlementQueryResponseBodyModule) };
    inline FuPointBillSettlementQueryResponseBody& setModule(const FuPointBillSettlementQueryResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FuPointBillSettlementQueryResponseBody& setModule(FuPointBillSettlementQueryResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // morePage Field Functions 
    bool hasMorePage() const { return this->morePage_ != nullptr;};
    void deleteMorePage() { this->morePage_ = nullptr;};
    inline bool morePage() const { DARABONBA_PTR_GET_DEFAULT(morePage_, false) };
    inline FuPointBillSettlementQueryResponseBody& setMorePage(bool morePage) { DARABONBA_PTR_SET_VALUE(morePage_, morePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FuPointBillSettlementQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline FuPointBillSettlementQueryResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FuPointBillSettlementQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FuPointBillSettlementQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    // module。
    std::shared_ptr<FuPointBillSettlementQueryResponseBodyModule> module_ = nullptr;
    std::shared_ptr<bool> morePage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultMsg_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    // trace_id
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
