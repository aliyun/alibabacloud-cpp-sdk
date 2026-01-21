// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutHybridMonitorMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutHybridMonitorMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PutHybridMonitorMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorDetail, errorDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PutHybridMonitorMetricDataResponseBody() = default ;
    PutHybridMonitorMetricDataResponseBody(const PutHybridMonitorMetricDataResponseBody &) = default ;
    PutHybridMonitorMetricDataResponseBody(PutHybridMonitorMetricDataResponseBody &&) = default ;
    PutHybridMonitorMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutHybridMonitorMetricDataResponseBody() = default ;
    PutHybridMonitorMetricDataResponseBody& operator=(const PutHybridMonitorMetricDataResponseBody &) = default ;
    PutHybridMonitorMetricDataResponseBody& operator=(PutHybridMonitorMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ErrorDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Index, index_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
      };
      ErrorDetail() = default ;
      ErrorDetail(const ErrorDetail &) = default ;
      ErrorDetail(ErrorDetail &&) = default ;
      ErrorDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorDetail() = default ;
      ErrorDetail& operator=(const ErrorDetail &) = default ;
      ErrorDetail& operator=(ErrorDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->index_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline ErrorDetail& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
      inline ErrorDetail& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    protected:
      // The error message of the invalid parameter.
      shared_ptr<string> errorMessage_ {};
      // The position of the error message in the array.
      shared_ptr<int64_t> index_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorDetail_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutHybridMonitorMetricDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline const vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail> & getErrorDetail() const { DARABONBA_PTR_GET_CONST(errorDetail_, vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail>) };
    inline vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail> getErrorDetail() { DARABONBA_PTR_GET(errorDetail_, vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail>) };
    inline PutHybridMonitorMetricDataResponseBody& setErrorDetail(const vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail> & errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };
    inline PutHybridMonitorMetricDataResponseBody& setErrorDetail(vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail> && errorDetail) { DARABONBA_PTR_SET_RVALUE(errorDetail_, errorDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutHybridMonitorMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The details of invalid parameters.
    // 
    // If a request parameter is invalid, the details of the invalid parameter are returned.
    shared_ptr<vector<PutHybridMonitorMetricDataResponseBody::ErrorDetail>> errorDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
