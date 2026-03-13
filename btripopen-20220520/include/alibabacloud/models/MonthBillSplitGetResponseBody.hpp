// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONTHBILLSPLITGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MONTHBILLSPLITGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class MonthBillSplitGetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonthBillSplitGetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, MonthBillSplitGetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    MonthBillSplitGetResponseBody() = default ;
    MonthBillSplitGetResponseBody(const MonthBillSplitGetResponseBody &) = default ;
    MonthBillSplitGetResponseBody(MonthBillSplitGetResponseBody &&) = default ;
    MonthBillSplitGetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonthBillSplitGetResponseBody() = default ;
    MonthBillSplitGetResponseBody& operator=(const MonthBillSplitGetResponseBody &) = default ;
    MonthBillSplitGetResponseBody& operator=(MonthBillSplitGetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(bill_split_key, billSplitKey_);
        DARABONBA_PTR_TO_JSON(end_date, endDate_);
        DARABONBA_PTR_TO_JSON(start_date, startDate_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(bill_split_key, billSplitKey_);
        DARABONBA_PTR_FROM_JSON(end_date, endDate_);
        DARABONBA_PTR_FROM_JSON(start_date, startDate_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billSplitKey_ == nullptr
        && this->endDate_ == nullptr && this->startDate_ == nullptr && this->url_ == nullptr; };
      // billSplitKey Field Functions 
      bool hasBillSplitKey() const { return this->billSplitKey_ != nullptr;};
      void deleteBillSplitKey() { this->billSplitKey_ = nullptr;};
      inline string getBillSplitKey() const { DARABONBA_PTR_GET_DEFAULT(billSplitKey_, "") };
      inline Module& setBillSplitKey(string billSplitKey) { DARABONBA_PTR_SET_VALUE(billSplitKey_, billSplitKey) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Module& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Module& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Module& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> billSplitKey_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<string> startDate_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MonthBillSplitGetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MonthBillSplitGetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<MonthBillSplitGetResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<MonthBillSplitGetResponseBody::Module>) };
    inline vector<MonthBillSplitGetResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<MonthBillSplitGetResponseBody::Module>) };
    inline MonthBillSplitGetResponseBody& setModule(const vector<MonthBillSplitGetResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline MonthBillSplitGetResponseBody& setModule(vector<MonthBillSplitGetResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MonthBillSplitGetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MonthBillSplitGetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline MonthBillSplitGetResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<MonthBillSplitGetResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
