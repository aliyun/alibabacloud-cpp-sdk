// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTSAMPLECONSISTENCYJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPORTSAMPLECONSISTENCYJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReportSampleConsistencyJobResponseBodyFeaturesDifference.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ReportSampleConsistencyJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportSampleConsistencyJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeaturesDifference, featuresDifference_);
      DARABONBA_PTR_TO_JSON(ReplyTableFeatures, replyTableFeatures_);
      DARABONBA_PTR_TO_JSON(ReplyTableLostFeatures, replyTableLostFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleTableFeatures, sampleTableFeatures_);
      DARABONBA_PTR_TO_JSON(SampleTableLostFeatures, sampleTableLostFeatures_);
    };
    friend void from_json(const Darabonba::Json& j, ReportSampleConsistencyJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeaturesDifference, featuresDifference_);
      DARABONBA_PTR_FROM_JSON(ReplyTableFeatures, replyTableFeatures_);
      DARABONBA_PTR_FROM_JSON(ReplyTableLostFeatures, replyTableLostFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleTableFeatures, sampleTableFeatures_);
      DARABONBA_PTR_FROM_JSON(SampleTableLostFeatures, sampleTableLostFeatures_);
    };
    ReportSampleConsistencyJobResponseBody() = default ;
    ReportSampleConsistencyJobResponseBody(const ReportSampleConsistencyJobResponseBody &) = default ;
    ReportSampleConsistencyJobResponseBody(ReportSampleConsistencyJobResponseBody &&) = default ;
    ReportSampleConsistencyJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportSampleConsistencyJobResponseBody() = default ;
    ReportSampleConsistencyJobResponseBody& operator=(const ReportSampleConsistencyJobResponseBody &) = default ;
    ReportSampleConsistencyJobResponseBody& operator=(ReportSampleConsistencyJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featuresDifference_ != nullptr
        && this->replyTableFeatures_ != nullptr && this->replyTableLostFeatures_ != nullptr && this->requestId_ != nullptr && this->sampleTableFeatures_ != nullptr && this->sampleTableLostFeatures_ != nullptr; };
    // featuresDifference Field Functions 
    bool hasFeaturesDifference() const { return this->featuresDifference_ != nullptr;};
    void deleteFeaturesDifference() { this->featuresDifference_ = nullptr;};
    inline const vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference> & featuresDifference() const { DARABONBA_PTR_GET_CONST(featuresDifference_, vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference>) };
    inline vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference> featuresDifference() { DARABONBA_PTR_GET(featuresDifference_, vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference>) };
    inline ReportSampleConsistencyJobResponseBody& setFeaturesDifference(const vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference> & featuresDifference) { DARABONBA_PTR_SET_VALUE(featuresDifference_, featuresDifference) };
    inline ReportSampleConsistencyJobResponseBody& setFeaturesDifference(vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference> && featuresDifference) { DARABONBA_PTR_SET_RVALUE(featuresDifference_, featuresDifference) };


    // replyTableFeatures Field Functions 
    bool hasReplyTableFeatures() const { return this->replyTableFeatures_ != nullptr;};
    void deleteReplyTableFeatures() { this->replyTableFeatures_ = nullptr;};
    inline int64_t replyTableFeatures() const { DARABONBA_PTR_GET_DEFAULT(replyTableFeatures_, 0L) };
    inline ReportSampleConsistencyJobResponseBody& setReplyTableFeatures(int64_t replyTableFeatures) { DARABONBA_PTR_SET_VALUE(replyTableFeatures_, replyTableFeatures) };


    // replyTableLostFeatures Field Functions 
    bool hasReplyTableLostFeatures() const { return this->replyTableLostFeatures_ != nullptr;};
    void deleteReplyTableLostFeatures() { this->replyTableLostFeatures_ = nullptr;};
    inline int64_t replyTableLostFeatures() const { DARABONBA_PTR_GET_DEFAULT(replyTableLostFeatures_, 0L) };
    inline ReportSampleConsistencyJobResponseBody& setReplyTableLostFeatures(int64_t replyTableLostFeatures) { DARABONBA_PTR_SET_VALUE(replyTableLostFeatures_, replyTableLostFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline int64_t requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, 0L) };
    inline ReportSampleConsistencyJobResponseBody& setRequestId(int64_t requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleTableFeatures Field Functions 
    bool hasSampleTableFeatures() const { return this->sampleTableFeatures_ != nullptr;};
    void deleteSampleTableFeatures() { this->sampleTableFeatures_ = nullptr;};
    inline int64_t sampleTableFeatures() const { DARABONBA_PTR_GET_DEFAULT(sampleTableFeatures_, 0L) };
    inline ReportSampleConsistencyJobResponseBody& setSampleTableFeatures(int64_t sampleTableFeatures) { DARABONBA_PTR_SET_VALUE(sampleTableFeatures_, sampleTableFeatures) };


    // sampleTableLostFeatures Field Functions 
    bool hasSampleTableLostFeatures() const { return this->sampleTableLostFeatures_ != nullptr;};
    void deleteSampleTableLostFeatures() { this->sampleTableLostFeatures_ = nullptr;};
    inline int64_t sampleTableLostFeatures() const { DARABONBA_PTR_GET_DEFAULT(sampleTableLostFeatures_, 0L) };
    inline ReportSampleConsistencyJobResponseBody& setSampleTableLostFeatures(int64_t sampleTableLostFeatures) { DARABONBA_PTR_SET_VALUE(sampleTableLostFeatures_, sampleTableLostFeatures) };


  protected:
    std::shared_ptr<vector<ReportSampleConsistencyJobResponseBodyFeaturesDifference>> featuresDifference_ = nullptr;
    std::shared_ptr<int64_t> replyTableFeatures_ = nullptr;
    std::shared_ptr<int64_t> replyTableLostFeatures_ = nullptr;
    std::shared_ptr<int64_t> requestId_ = nullptr;
    std::shared_ptr<int64_t> sampleTableFeatures_ = nullptr;
    std::shared_ptr<int64_t> sampleTableLostFeatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
