// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodyApiMetricsList.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodyReportOverView.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneMetrics.hpp>
#include <alibabacloud/models/GetPtsReportDetailsResponseBodySceneSnapShot.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiMetricsList, apiMetricsList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ReportOverView, reportOverView_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneMetrics, sceneMetrics_);
      DARABONBA_PTR_TO_JSON(SceneSnapShot, sceneSnapShot_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiMetricsList, apiMetricsList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ReportOverView, reportOverView_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneMetrics, sceneMetrics_);
      DARABONBA_PTR_FROM_JSON(SceneSnapShot, sceneSnapShot_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPtsReportDetailsResponseBody() = default ;
    GetPtsReportDetailsResponseBody(const GetPtsReportDetailsResponseBody &) = default ;
    GetPtsReportDetailsResponseBody(GetPtsReportDetailsResponseBody &&) = default ;
    GetPtsReportDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportDetailsResponseBody() = default ;
    GetPtsReportDetailsResponseBody& operator=(const GetPtsReportDetailsResponseBody &) = default ;
    GetPtsReportDetailsResponseBody& operator=(GetPtsReportDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiMetricsList_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->reportOverView_ == nullptr && return this->requestId_ == nullptr
        && return this->sceneMetrics_ == nullptr && return this->sceneSnapShot_ == nullptr && return this->success_ == nullptr; };
    // apiMetricsList Field Functions 
    bool hasApiMetricsList() const { return this->apiMetricsList_ != nullptr;};
    void deleteApiMetricsList() { this->apiMetricsList_ = nullptr;};
    inline const vector<GetPtsReportDetailsResponseBodyApiMetricsList> & apiMetricsList() const { DARABONBA_PTR_GET_CONST(apiMetricsList_, vector<GetPtsReportDetailsResponseBodyApiMetricsList>) };
    inline vector<GetPtsReportDetailsResponseBodyApiMetricsList> apiMetricsList() { DARABONBA_PTR_GET(apiMetricsList_, vector<GetPtsReportDetailsResponseBodyApiMetricsList>) };
    inline GetPtsReportDetailsResponseBody& setApiMetricsList(const vector<GetPtsReportDetailsResponseBodyApiMetricsList> & apiMetricsList) { DARABONBA_PTR_SET_VALUE(apiMetricsList_, apiMetricsList) };
    inline GetPtsReportDetailsResponseBody& setApiMetricsList(vector<GetPtsReportDetailsResponseBodyApiMetricsList> && apiMetricsList) { DARABONBA_PTR_SET_RVALUE(apiMetricsList_, apiMetricsList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPtsReportDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPtsReportDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPtsReportDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reportOverView Field Functions 
    bool hasReportOverView() const { return this->reportOverView_ != nullptr;};
    void deleteReportOverView() { this->reportOverView_ = nullptr;};
    inline const GetPtsReportDetailsResponseBodyReportOverView & reportOverView() const { DARABONBA_PTR_GET_CONST(reportOverView_, GetPtsReportDetailsResponseBodyReportOverView) };
    inline GetPtsReportDetailsResponseBodyReportOverView reportOverView() { DARABONBA_PTR_GET(reportOverView_, GetPtsReportDetailsResponseBodyReportOverView) };
    inline GetPtsReportDetailsResponseBody& setReportOverView(const GetPtsReportDetailsResponseBodyReportOverView & reportOverView) { DARABONBA_PTR_SET_VALUE(reportOverView_, reportOverView) };
    inline GetPtsReportDetailsResponseBody& setReportOverView(GetPtsReportDetailsResponseBodyReportOverView && reportOverView) { DARABONBA_PTR_SET_RVALUE(reportOverView_, reportOverView) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPtsReportDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneMetrics Field Functions 
    bool hasSceneMetrics() const { return this->sceneMetrics_ != nullptr;};
    void deleteSceneMetrics() { this->sceneMetrics_ = nullptr;};
    inline const GetPtsReportDetailsResponseBodySceneMetrics & sceneMetrics() const { DARABONBA_PTR_GET_CONST(sceneMetrics_, GetPtsReportDetailsResponseBodySceneMetrics) };
    inline GetPtsReportDetailsResponseBodySceneMetrics sceneMetrics() { DARABONBA_PTR_GET(sceneMetrics_, GetPtsReportDetailsResponseBodySceneMetrics) };
    inline GetPtsReportDetailsResponseBody& setSceneMetrics(const GetPtsReportDetailsResponseBodySceneMetrics & sceneMetrics) { DARABONBA_PTR_SET_VALUE(sceneMetrics_, sceneMetrics) };
    inline GetPtsReportDetailsResponseBody& setSceneMetrics(GetPtsReportDetailsResponseBodySceneMetrics && sceneMetrics) { DARABONBA_PTR_SET_RVALUE(sceneMetrics_, sceneMetrics) };


    // sceneSnapShot Field Functions 
    bool hasSceneSnapShot() const { return this->sceneSnapShot_ != nullptr;};
    void deleteSceneSnapShot() { this->sceneSnapShot_ = nullptr;};
    inline const GetPtsReportDetailsResponseBodySceneSnapShot & sceneSnapShot() const { DARABONBA_PTR_GET_CONST(sceneSnapShot_, GetPtsReportDetailsResponseBodySceneSnapShot) };
    inline GetPtsReportDetailsResponseBodySceneSnapShot sceneSnapShot() { DARABONBA_PTR_GET(sceneSnapShot_, GetPtsReportDetailsResponseBodySceneSnapShot) };
    inline GetPtsReportDetailsResponseBody& setSceneSnapShot(const GetPtsReportDetailsResponseBodySceneSnapShot & sceneSnapShot) { DARABONBA_PTR_SET_VALUE(sceneSnapShot_, sceneSnapShot) };
    inline GetPtsReportDetailsResponseBody& setSceneSnapShot(GetPtsReportDetailsResponseBodySceneSnapShot && sceneSnapShot) { DARABONBA_PTR_SET_RVALUE(sceneSnapShot_, sceneSnapShot) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPtsReportDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The metrics for API operations in the PTS scenario
    std::shared_ptr<vector<GetPtsReportDetailsResponseBodyApiMetricsList>> apiMetricsList_ = nullptr;
    // The system status code. If the operation is successful, this parameter is not returned.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code. If the operation is successful, this parameter is not returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The error message. If the operation is successful, this parameter is not returned.
    std::shared_ptr<string> message_ = nullptr;
    // The summary of the report.
    std::shared_ptr<GetPtsReportDetailsResponseBodyReportOverView> reportOverView_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The metrics of the scenario.
    std::shared_ptr<GetPtsReportDetailsResponseBodySceneMetrics> sceneMetrics_ = nullptr;
    // The snapshot of the scenario.
    std::shared_ptr<GetPtsReportDetailsResponseBodySceneSnapShot> sceneSnapShot_ = nullptr;
    // Indicates whether the operation is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
