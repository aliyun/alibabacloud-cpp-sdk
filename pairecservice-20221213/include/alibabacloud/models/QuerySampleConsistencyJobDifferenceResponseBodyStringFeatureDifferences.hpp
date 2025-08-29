// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODYSTRINGFEATUREDIFFERENCES_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCERESPONSEBODYSTRINGFEATUREDIFFERENCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& obj) { 
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ReplyTableFeatureValue, replyTableFeatureValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleTableFeatureValue, sampleTableFeatureValue_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences() = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences(const QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences(QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences &&) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences() = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& operator=(const QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences &) = default ;
    QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& operator=(QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemId_ != nullptr
        && this->replyTableFeatureValue_ != nullptr && this->requestId_ != nullptr && this->sampleTableFeatureValue_ != nullptr && this->userId_ != nullptr; };
    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // replyTableFeatureValue Field Functions 
    bool hasReplyTableFeatureValue() const { return this->replyTableFeatureValue_ != nullptr;};
    void deleteReplyTableFeatureValue() { this->replyTableFeatureValue_ = nullptr;};
    inline string replyTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(replyTableFeatureValue_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& setReplyTableFeatureValue(string replyTableFeatureValue) { DARABONBA_PTR_SET_VALUE(replyTableFeatureValue_, replyTableFeatureValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleTableFeatureValue Field Functions 
    bool hasSampleTableFeatureValue() const { return this->sampleTableFeatureValue_ != nullptr;};
    void deleteSampleTableFeatureValue() { this->sampleTableFeatureValue_ = nullptr;};
    inline string sampleTableFeatureValue() const { DARABONBA_PTR_GET_DEFAULT(sampleTableFeatureValue_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& setSampleTableFeatureValue(string sampleTableFeatureValue) { DARABONBA_PTR_SET_VALUE(sampleTableFeatureValue_, sampleTableFeatureValue) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuerySampleConsistencyJobDifferenceResponseBodyStringFeatureDifferences& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> replyTableFeatureValue_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sampleTableFeatureValue_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
