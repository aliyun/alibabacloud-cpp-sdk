// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERSAMPLEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERSAMPLEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterSampleMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterSampleMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleMetricList, sampleMetricList_);
      DARABONBA_ANY_TO_JSON(SamplerMap, samplerMap_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterSampleMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleMetricList, sampleMetricList_);
      DARABONBA_ANY_FROM_JSON(SamplerMap, samplerMap_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJMeterSampleMetricsResponseBody() = default ;
    GetJMeterSampleMetricsResponseBody(const GetJMeterSampleMetricsResponseBody &) = default ;
    GetJMeterSampleMetricsResponseBody(GetJMeterSampleMetricsResponseBody &&) = default ;
    GetJMeterSampleMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterSampleMetricsResponseBody() = default ;
    GetJMeterSampleMetricsResponseBody& operator=(const GetJMeterSampleMetricsResponseBody &) = default ;
    GetJMeterSampleMetricsResponseBody& operator=(GetJMeterSampleMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->sampleMetricList_ == nullptr && return this->samplerMap_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetJMeterSampleMetricsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJMeterSampleMetricsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJMeterSampleMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleMetricList Field Functions 
    bool hasSampleMetricList() const { return this->sampleMetricList_ != nullptr;};
    void deleteSampleMetricList() { this->sampleMetricList_ = nullptr;};
    inline const vector<string> & sampleMetricList() const { DARABONBA_PTR_GET_CONST(sampleMetricList_, vector<string>) };
    inline vector<string> sampleMetricList() { DARABONBA_PTR_GET(sampleMetricList_, vector<string>) };
    inline GetJMeterSampleMetricsResponseBody& setSampleMetricList(const vector<string> & sampleMetricList) { DARABONBA_PTR_SET_VALUE(sampleMetricList_, sampleMetricList) };
    inline GetJMeterSampleMetricsResponseBody& setSampleMetricList(vector<string> && sampleMetricList) { DARABONBA_PTR_SET_RVALUE(sampleMetricList_, sampleMetricList) };


    // samplerMap Field Functions 
    bool hasSamplerMap() const { return this->samplerMap_ != nullptr;};
    void deleteSamplerMap() { this->samplerMap_ = nullptr;};
    inline     const Darabonba::Json & samplerMap() const { DARABONBA_GET(samplerMap_) };
    Darabonba::Json & samplerMap() { DARABONBA_GET(samplerMap_) };
    inline GetJMeterSampleMetricsResponseBody& setSamplerMap(const Darabonba::Json & samplerMap) { DARABONBA_SET_VALUE(samplerMap_, samplerMap) };
    inline GetJMeterSampleMetricsResponseBody& setSamplerMap(Darabonba::Json & samplerMap) { DARABONBA_SET_RVALUE(samplerMap_, samplerMap) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJMeterSampleMetricsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The system status code.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message. If the request was successful, this parameter is left empty.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metrics of the samplers.
    std::shared_ptr<vector<string>> sampleMetricList_ = nullptr;
    // The sampler list. You can find the sampler to be queried based on this list.
    Darabonba::Json samplerMap_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
