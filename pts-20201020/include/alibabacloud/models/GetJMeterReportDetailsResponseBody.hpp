// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJMETERREPORTDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJMETERREPORTDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJMeterReportDetailsResponseBodyReportOverView.hpp>
#include <vector>
#include <alibabacloud/models/GetJMeterReportDetailsResponseBodySamplerMetricsList.hpp>
#include <alibabacloud/models/GetJMeterReportDetailsResponseBodySceneMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetJMeterReportDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJMeterReportDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CodeKey, codeKey_);
      DARABONBA_PTR_TO_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_TO_JSON(DynamicCtx, dynamicCtx_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReportOverView, reportOverView_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplerMetricsList, samplerMetricsList_);
      DARABONBA_PTR_TO_JSON(SceneMetrics, sceneMetrics_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetJMeterReportDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CodeKey, codeKey_);
      DARABONBA_PTR_FROM_JSON(DocumentUrl, documentUrl_);
      DARABONBA_PTR_FROM_JSON(DynamicCtx, dynamicCtx_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReportOverView, reportOverView_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplerMetricsList, samplerMetricsList_);
      DARABONBA_PTR_FROM_JSON(SceneMetrics, sceneMetrics_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetJMeterReportDetailsResponseBody() = default ;
    GetJMeterReportDetailsResponseBody(const GetJMeterReportDetailsResponseBody &) = default ;
    GetJMeterReportDetailsResponseBody(GetJMeterReportDetailsResponseBody &&) = default ;
    GetJMeterReportDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJMeterReportDetailsResponseBody() = default ;
    GetJMeterReportDetailsResponseBody& operator=(const GetJMeterReportDetailsResponseBody &) = default ;
    GetJMeterReportDetailsResponseBody& operator=(GetJMeterReportDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->codeKey_ == nullptr && return this->documentUrl_ == nullptr && return this->dynamicCtx_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr
        && return this->reportOverView_ == nullptr && return this->requestId_ == nullptr && return this->samplerMetricsList_ == nullptr && return this->sceneMetrics_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetJMeterReportDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // codeKey Field Functions 
    bool hasCodeKey() const { return this->codeKey_ != nullptr;};
    void deleteCodeKey() { this->codeKey_ = nullptr;};
    inline string codeKey() const { DARABONBA_PTR_GET_DEFAULT(codeKey_, "") };
    inline GetJMeterReportDetailsResponseBody& setCodeKey(string codeKey) { DARABONBA_PTR_SET_VALUE(codeKey_, codeKey) };


    // documentUrl Field Functions 
    bool hasDocumentUrl() const { return this->documentUrl_ != nullptr;};
    void deleteDocumentUrl() { this->documentUrl_ = nullptr;};
    inline string documentUrl() const { DARABONBA_PTR_GET_DEFAULT(documentUrl_, "") };
    inline GetJMeterReportDetailsResponseBody& setDocumentUrl(string documentUrl) { DARABONBA_PTR_SET_VALUE(documentUrl_, documentUrl) };


    // dynamicCtx Field Functions 
    bool hasDynamicCtx() const { return this->dynamicCtx_ != nullptr;};
    void deleteDynamicCtx() { this->dynamicCtx_ = nullptr;};
    inline string dynamicCtx() const { DARABONBA_PTR_GET_DEFAULT(dynamicCtx_, "") };
    inline GetJMeterReportDetailsResponseBody& setDynamicCtx(string dynamicCtx) { DARABONBA_PTR_SET_VALUE(dynamicCtx_, dynamicCtx) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetJMeterReportDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetJMeterReportDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reportOverView Field Functions 
    bool hasReportOverView() const { return this->reportOverView_ != nullptr;};
    void deleteReportOverView() { this->reportOverView_ = nullptr;};
    inline const GetJMeterReportDetailsResponseBodyReportOverView & reportOverView() const { DARABONBA_PTR_GET_CONST(reportOverView_, GetJMeterReportDetailsResponseBodyReportOverView) };
    inline GetJMeterReportDetailsResponseBodyReportOverView reportOverView() { DARABONBA_PTR_GET(reportOverView_, GetJMeterReportDetailsResponseBodyReportOverView) };
    inline GetJMeterReportDetailsResponseBody& setReportOverView(const GetJMeterReportDetailsResponseBodyReportOverView & reportOverView) { DARABONBA_PTR_SET_VALUE(reportOverView_, reportOverView) };
    inline GetJMeterReportDetailsResponseBody& setReportOverView(GetJMeterReportDetailsResponseBodyReportOverView && reportOverView) { DARABONBA_PTR_SET_RVALUE(reportOverView_, reportOverView) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJMeterReportDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplerMetricsList Field Functions 
    bool hasSamplerMetricsList() const { return this->samplerMetricsList_ != nullptr;};
    void deleteSamplerMetricsList() { this->samplerMetricsList_ = nullptr;};
    inline const vector<GetJMeterReportDetailsResponseBodySamplerMetricsList> & samplerMetricsList() const { DARABONBA_PTR_GET_CONST(samplerMetricsList_, vector<GetJMeterReportDetailsResponseBodySamplerMetricsList>) };
    inline vector<GetJMeterReportDetailsResponseBodySamplerMetricsList> samplerMetricsList() { DARABONBA_PTR_GET(samplerMetricsList_, vector<GetJMeterReportDetailsResponseBodySamplerMetricsList>) };
    inline GetJMeterReportDetailsResponseBody& setSamplerMetricsList(const vector<GetJMeterReportDetailsResponseBodySamplerMetricsList> & samplerMetricsList) { DARABONBA_PTR_SET_VALUE(samplerMetricsList_, samplerMetricsList) };
    inline GetJMeterReportDetailsResponseBody& setSamplerMetricsList(vector<GetJMeterReportDetailsResponseBodySamplerMetricsList> && samplerMetricsList) { DARABONBA_PTR_SET_RVALUE(samplerMetricsList_, samplerMetricsList) };


    // sceneMetrics Field Functions 
    bool hasSceneMetrics() const { return this->sceneMetrics_ != nullptr;};
    void deleteSceneMetrics() { this->sceneMetrics_ = nullptr;};
    inline const GetJMeterReportDetailsResponseBodySceneMetrics & sceneMetrics() const { DARABONBA_PTR_GET_CONST(sceneMetrics_, GetJMeterReportDetailsResponseBodySceneMetrics) };
    inline GetJMeterReportDetailsResponseBodySceneMetrics sceneMetrics() { DARABONBA_PTR_GET(sceneMetrics_, GetJMeterReportDetailsResponseBodySceneMetrics) };
    inline GetJMeterReportDetailsResponseBody& setSceneMetrics(const GetJMeterReportDetailsResponseBodySceneMetrics & sceneMetrics) { DARABONBA_PTR_SET_VALUE(sceneMetrics_, sceneMetrics) };
    inline GetJMeterReportDetailsResponseBody& setSceneMetrics(GetJMeterReportDetailsResponseBodySceneMetrics && sceneMetrics) { DARABONBA_PTR_SET_RVALUE(sceneMetrics_, sceneMetrics) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetJMeterReportDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The system status code. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The code key that corresponds to the key in Medusa. If no code key is available, or if the content corresponding to the code key fails to be obtained or is empty, the returned message is displayed as the default information.
    std::shared_ptr<string> codeKey_ = nullptr;
    // The URL used to access the document.
    std::shared_ptr<string> documentUrl_ = nullptr;
    // The returned dynamic contents that are separated by the && operator.
    std::shared_ptr<string> dynamicCtx_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message. If the request was successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The details of the report.
    std::shared_ptr<GetJMeterReportDetailsResponseBodyReportOverView> reportOverView_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The dimensions of APIs.
    std::shared_ptr<vector<GetJMeterReportDetailsResponseBodySamplerMetricsList>> samplerMetricsList_ = nullptr;
    // The dimensions of the whole scenario.
    std::shared_ptr<GetJMeterReportDetailsResponseBodySceneMetrics> sceneMetrics_ = nullptr;
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
