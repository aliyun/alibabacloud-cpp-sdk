// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDIAGNOSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDIAGNOSISRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DescribeInstanceDiagnosisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDiagnosisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDiagnosisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstanceDiagnosisResultResponseBody() = default ;
    DescribeInstanceDiagnosisResultResponseBody(const DescribeInstanceDiagnosisResultResponseBody &) = default ;
    DescribeInstanceDiagnosisResultResponseBody(DescribeInstanceDiagnosisResultResponseBody &&) = default ;
    DescribeInstanceDiagnosisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDiagnosisResultResponseBody() = default ;
    DescribeInstanceDiagnosisResultResponseBody& operator=(const DescribeInstanceDiagnosisResultResponseBody &) = default ;
    DescribeInstanceDiagnosisResultResponseBody& operator=(DescribeInstanceDiagnosisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BestPractice, bestPractice_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(EvaluationTime, evaluationTime_);
        DARABONBA_PTR_TO_JSON(FullScore, fullScore_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Introduction, introduction_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(ItemName, itemName_);
        DARABONBA_PTR_TO_JSON(ReportDate, reportDate_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BestPractice, bestPractice_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(EvaluationTime, evaluationTime_);
        DARABONBA_PTR_FROM_JSON(FullScore, fullScore_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
        DARABONBA_PTR_FROM_JSON(ReportDate, reportDate_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bestPractice_ == nullptr
        && this->description_ == nullptr && this->dimension_ == nullptr && this->evaluationTime_ == nullptr && this->fullScore_ == nullptr && this->instanceId_ == nullptr
        && this->introduction_ == nullptr && this->itemId_ == nullptr && this->itemName_ == nullptr && this->reportDate_ == nullptr && this->score_ == nullptr
        && this->status_ == nullptr && this->suggestion_ == nullptr; };
      // bestPractice Field Functions 
      bool hasBestPractice() const { return this->bestPractice_ != nullptr;};
      void deleteBestPractice() { this->bestPractice_ = nullptr;};
      inline string getBestPractice() const { DARABONBA_PTR_GET_DEFAULT(bestPractice_, "") };
      inline Data& setBestPractice(string bestPractice) { DARABONBA_PTR_SET_VALUE(bestPractice_, bestPractice) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
      inline Data& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // evaluationTime Field Functions 
      bool hasEvaluationTime() const { return this->evaluationTime_ != nullptr;};
      void deleteEvaluationTime() { this->evaluationTime_ = nullptr;};
      inline int64_t getEvaluationTime() const { DARABONBA_PTR_GET_DEFAULT(evaluationTime_, 0L) };
      inline Data& setEvaluationTime(int64_t evaluationTime) { DARABONBA_PTR_SET_VALUE(evaluationTime_, evaluationTime) };


      // fullScore Field Functions 
      bool hasFullScore() const { return this->fullScore_ != nullptr;};
      void deleteFullScore() { this->fullScore_ = nullptr;};
      inline double getFullScore() const { DARABONBA_PTR_GET_DEFAULT(fullScore_, 0.0) };
      inline Data& setFullScore(double fullScore) { DARABONBA_PTR_SET_VALUE(fullScore_, fullScore) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // introduction Field Functions 
      bool hasIntroduction() const { return this->introduction_ != nullptr;};
      void deleteIntroduction() { this->introduction_ = nullptr;};
      inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
      inline Data& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Data& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // itemName Field Functions 
      bool hasItemName() const { return this->itemName_ != nullptr;};
      void deleteItemName() { this->itemName_ = nullptr;};
      inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
      inline Data& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


      // reportDate Field Functions 
      bool hasReportDate() const { return this->reportDate_ != nullptr;};
      void deleteReportDate() { this->reportDate_ = nullptr;};
      inline string getReportDate() const { DARABONBA_PTR_GET_DEFAULT(reportDate_, "") };
      inline Data& setReportDate(string reportDate) { DARABONBA_PTR_SET_VALUE(reportDate_, reportDate) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Data& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline Data& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    protected:
      shared_ptr<string> bestPractice_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> dimension_ {};
      shared_ptr<int64_t> evaluationTime_ {};
      shared_ptr<double> fullScore_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> introduction_ {};
      shared_ptr<string> itemId_ {};
      shared_ptr<string> itemName_ {};
      shared_ptr<string> reportDate_ {};
      shared_ptr<double> score_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> suggestion_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeInstanceDiagnosisResultResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeInstanceDiagnosisResultResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeInstanceDiagnosisResultResponseBody::Data>) };
    inline vector<DescribeInstanceDiagnosisResultResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeInstanceDiagnosisResultResponseBody::Data>) };
    inline DescribeInstanceDiagnosisResultResponseBody& setData(const vector<DescribeInstanceDiagnosisResultResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInstanceDiagnosisResultResponseBody& setData(vector<DescribeInstanceDiagnosisResultResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeInstanceDiagnosisResultResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeInstanceDiagnosisResultResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeInstanceDiagnosisResultResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDiagnosisResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstanceDiagnosisResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeInstanceDiagnosisResultResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // AccessDeniedDetail
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<DescribeInstanceDiagnosisResultResponseBody::Data>> data_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> errMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
