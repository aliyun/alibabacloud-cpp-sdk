// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODYNUMBERFEATUREDIFFERENCES_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODYNUMBERFEATUREDIFFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& obj) { 
      DARABONBA_PTR_TO_JSON(DiffValue, diffValue_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& obj) { 
      DARABONBA_PTR_FROM_JSON(DiffValue, diffValue_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences() = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences(const QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences(QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences &&) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences() = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& operator=(const QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& operator=(QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diffValue_ != nullptr
        && this->itemId_ != nullptr && this->replyTableFeatureValue_ != nullptr && this->requestId_ != nullptr && this->sampleTableFeatureValue_ != nullptr && this->userId_ != nullptr; };
    // diffValue Field Functions 
    bool hasDiffValue() const { return this->diffValue_ != nullptr;};
    void deleteDiffValue() { this->diffValue_ = nullptr;};
    inline double diffValue() const { DARABONBA_PTR_GET_DEFAULT(diffValue_, 0.0) };
    inline QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& setDiffValue(double diffValue) { DARABONBA_PTR_SET_VALUE(diffValue_, diffValue) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // replyTableFeatureValue Field Functions 
    bool hasReplyTableFeatureValue() const { return this->replyTableFeatureValue_ != nullptr;};
    void deleteReplyTableFeatureValue() { this->replyTableFeatureValue_ = nullptr;};
    inline double replyTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(replyTableFeatureValue_, 0.0) };
    inline QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& setReplyTableFeatureValue(double replyTableFeatureValue) { DARABONBA_PTR_SET_VALUE(replyTableFeatureValue_, replyTableFeatureValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleTableFeatureValue Field Functions 
    bool hasSampleTableFeatureValue() const { return this->sampleTableFeatureValue_ != nullptr;};
    void deleteSampleTableFeatureValue() { this->sampleTableFeatureValue_ = nullptr;};
    inline double sampleTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(sampleTableFeatureValue_, 0.0) };
    inline QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& setSampleTableFeatureValue(double sampleTableFeatureValue) { DARABONBA_PTR_SET_VALUE(sampleTableFeatureValue_, sampleTableFeatureValue) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyNumberFeatureDifferences& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<double> diffValue_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<double> replyTableFeatureValue_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<double> sampleTableFeatureValue_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
