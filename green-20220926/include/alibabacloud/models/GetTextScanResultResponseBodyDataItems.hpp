// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTSCANRESULTRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTSCANRESULTRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTextScanResultResponseBodyDataItemsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetTextScanResultResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextScanResultResponseBodyDataItems& obj) { 
      DARABONBA_PTR_TO_JSON(BailianRequestId, bailianRequestId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ExtFeedback, extFeedback_);
      DARABONBA_ANY_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanResult, scanResult_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextScanResultResponseBodyDataItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BailianRequestId, bailianRequestId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ExtFeedback, extFeedback_);
      DARABONBA_ANY_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanResult, scanResult_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetTextScanResultResponseBodyDataItems() = default ;
    GetTextScanResultResponseBodyDataItems(const GetTextScanResultResponseBodyDataItems &) = default ;
    GetTextScanResultResponseBodyDataItems(GetTextScanResultResponseBodyDataItems &&) = default ;
    GetTextScanResultResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextScanResultResponseBodyDataItems() = default ;
    GetTextScanResultResponseBodyDataItems& operator=(const GetTextScanResultResponseBodyDataItems &) = default ;
    GetTextScanResultResponseBodyDataItems& operator=(GetTextScanResultResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bailianRequestId_ == nullptr
        && return this->content_ == nullptr && return this->extFeedback_ == nullptr && return this->extra_ == nullptr && return this->gmtCreate_ == nullptr && return this->labels_ == nullptr
        && return this->requestId_ == nullptr && return this->requestTime_ == nullptr && return this->result_ == nullptr && return this->riskLevel_ == nullptr && return this->scanResult_ == nullptr
        && return this->score_ == nullptr && return this->serviceCode_ == nullptr && return this->suggestion_ == nullptr && return this->taskId_ == nullptr; };
    // bailianRequestId Field Functions 
    bool hasBailianRequestId() const { return this->bailianRequestId_ != nullptr;};
    void deleteBailianRequestId() { this->bailianRequestId_ = nullptr;};
    inline string bailianRequestId() const { DARABONBA_PTR_GET_DEFAULT(bailianRequestId_, "") };
    inline GetTextScanResultResponseBodyDataItems& setBailianRequestId(string bailianRequestId) { DARABONBA_PTR_SET_VALUE(bailianRequestId_, bailianRequestId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetTextScanResultResponseBodyDataItems& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // extFeedback Field Functions 
    bool hasExtFeedback() const { return this->extFeedback_ != nullptr;};
    void deleteExtFeedback() { this->extFeedback_ = nullptr;};
    inline string extFeedback() const { DARABONBA_PTR_GET_DEFAULT(extFeedback_, "") };
    inline GetTextScanResultResponseBodyDataItems& setExtFeedback(string extFeedback) { DARABONBA_PTR_SET_VALUE(extFeedback_, extFeedback) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & extra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & extra() { DARABONBA_GET(extra_) };
    inline GetTextScanResultResponseBodyDataItems& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline GetTextScanResultResponseBodyDataItems& setExtra(Darabonba::Json & extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTextScanResultResponseBodyDataItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline GetTextScanResultResponseBodyDataItems& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTextScanResultResponseBodyDataItems& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline GetTextScanResultResponseBodyDataItems& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::GetTextScanResultResponseBodyDataItemsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::GetTextScanResultResponseBodyDataItemsResult>) };
    inline vector<Models::GetTextScanResultResponseBodyDataItemsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::GetTextScanResultResponseBodyDataItemsResult>) };
    inline GetTextScanResultResponseBodyDataItems& setResult(const vector<Models::GetTextScanResultResponseBodyDataItemsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTextScanResultResponseBodyDataItems& setResult(vector<Models::GetTextScanResultResponseBodyDataItemsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetTextScanResultResponseBodyDataItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanResult Field Functions 
    bool hasScanResult() const { return this->scanResult_ != nullptr;};
    void deleteScanResult() { this->scanResult_ = nullptr;};
    inline string scanResult() const { DARABONBA_PTR_GET_DEFAULT(scanResult_, "") };
    inline GetTextScanResultResponseBodyDataItems& setScanResult(string scanResult) { DARABONBA_PTR_SET_VALUE(scanResult_, scanResult) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline GetTextScanResultResponseBodyDataItems& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline GetTextScanResultResponseBodyDataItems& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetTextScanResultResponseBodyDataItems& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTextScanResultResponseBodyDataItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Bailian Request ID
    std::shared_ptr<string> bailianRequestId_ = nullptr;
    // Content.
    std::shared_ptr<string> content_ = nullptr;
    // Feedback information.
    std::shared_ptr<string> extFeedback_ = nullptr;
    // Spare parameters.
    Darabonba::Json extra_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Labels.
    std::shared_ptr<string> labels_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Request time.
    std::shared_ptr<string> requestTime_ = nullptr;
    // Detection results.
    std::shared_ptr<vector<Models::GetTextScanResultResponseBodyDataItemsResult>> result_ = nullptr;
    // Risk level, returned based on the set high and low risk scores. The return values include:
    // 
    // - high: High risk
    // 
    // - medium: Medium risk
    //  
    // - low: Low risk
    // 
    // - none: No risk detected
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Details of the result.
    std::shared_ptr<string> scanResult_ = nullptr;
    // Score.
    std::shared_ptr<float> score_ = nullptr;
    // Service code.
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Suggestion for handling.
    std::shared_ptr<string> suggestion_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
