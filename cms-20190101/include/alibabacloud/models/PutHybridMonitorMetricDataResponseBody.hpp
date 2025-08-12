// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTHYBRIDMONITORMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutHybridMonitorMetricDataResponseBodyErrorDetail.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->errorDetail_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutHybridMonitorMetricDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorDetail Field Functions 
    bool hasErrorDetail() const { return this->errorDetail_ != nullptr;};
    void deleteErrorDetail() { this->errorDetail_ = nullptr;};
    inline const vector<PutHybridMonitorMetricDataResponseBodyErrorDetail> & errorDetail() const { DARABONBA_PTR_GET_CONST(errorDetail_, vector<PutHybridMonitorMetricDataResponseBodyErrorDetail>) };
    inline vector<PutHybridMonitorMetricDataResponseBodyErrorDetail> errorDetail() { DARABONBA_PTR_GET(errorDetail_, vector<PutHybridMonitorMetricDataResponseBodyErrorDetail>) };
    inline PutHybridMonitorMetricDataResponseBody& setErrorDetail(const vector<PutHybridMonitorMetricDataResponseBodyErrorDetail> & errorDetail) { DARABONBA_PTR_SET_VALUE(errorDetail_, errorDetail) };
    inline PutHybridMonitorMetricDataResponseBody& setErrorDetail(vector<PutHybridMonitorMetricDataResponseBodyErrorDetail> && errorDetail) { DARABONBA_PTR_SET_RVALUE(errorDetail_, errorDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutHybridMonitorMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The details of invalid parameters.
    // 
    // If a request parameter is invalid, the details of the invalid parameter are returned.
    std::shared_ptr<vector<PutHybridMonitorMetricDataResponseBodyErrorDetail>> errorDetail_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
