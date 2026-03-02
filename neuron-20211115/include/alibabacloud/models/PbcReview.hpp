// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCREVIEW_HPP_
#define ALIBABACLOUD_MODELS_PBCREVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcReview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcReview& obj) { 
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(developerName, developerName_);
      DARABONBA_PTR_TO_JSON(feedbackPbcApi, feedbackPbcApi_);
      DARABONBA_PTR_TO_JSON(feedbackPbcInstruction, feedbackPbcInstruction_);
      DARABONBA_PTR_TO_JSON(feedbackPbcSchema, feedbackPbcSchema_);
      DARABONBA_PTR_TO_JSON(feedbackSecurity, feedbackSecurity_);
      DARABONBA_PTR_TO_JSON(feedbackServiceAvailable, feedbackServiceAvailable_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(marketName, marketName_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(pbcUrl, pbcUrl_);
      DARABONBA_PTR_TO_JSON(pbcVersion, pbcVersion_);
      DARABONBA_PTR_TO_JSON(remainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PbcReview& obj) { 
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(developerName, developerName_);
      DARABONBA_PTR_FROM_JSON(feedbackPbcApi, feedbackPbcApi_);
      DARABONBA_PTR_FROM_JSON(feedbackPbcInstruction, feedbackPbcInstruction_);
      DARABONBA_PTR_FROM_JSON(feedbackPbcSchema, feedbackPbcSchema_);
      DARABONBA_PTR_FROM_JSON(feedbackSecurity, feedbackSecurity_);
      DARABONBA_PTR_FROM_JSON(feedbackServiceAvailable, feedbackServiceAvailable_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(marketName, marketName_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(pbcUrl, pbcUrl_);
      DARABONBA_PTR_FROM_JSON(pbcVersion, pbcVersion_);
      DARABONBA_PTR_FROM_JSON(remainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    PbcReview() = default ;
    PbcReview(const PbcReview &) = default ;
    PbcReview(PbcReview &&) = default ;
    PbcReview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcReview() = default ;
    PbcReview& operator=(const PbcReview &) = default ;
    PbcReview& operator=(PbcReview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->developerId_ == nullptr
        && this->developerName_ == nullptr && this->feedbackPbcApi_ == nullptr && this->feedbackPbcInstruction_ == nullptr && this->feedbackPbcSchema_ == nullptr && this->feedbackSecurity_ == nullptr
        && this->feedbackServiceAvailable_ == nullptr && this->id_ == nullptr && this->marketId_ == nullptr && this->marketName_ == nullptr && this->pbcName_ == nullptr
        && this->pbcUrl_ == nullptr && this->pbcVersion_ == nullptr && this->remainTime_ == nullptr && this->requestId_ == nullptr && this->reviewerId_ == nullptr
        && this->status_ == nullptr; };
    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline int64_t getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, 0L) };
    inline PbcReview& setDeveloperId(int64_t developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // developerName Field Functions 
    bool hasDeveloperName() const { return this->developerName_ != nullptr;};
    void deleteDeveloperName() { this->developerName_ = nullptr;};
    inline string getDeveloperName() const { DARABONBA_PTR_GET_DEFAULT(developerName_, "") };
    inline PbcReview& setDeveloperName(string developerName) { DARABONBA_PTR_SET_VALUE(developerName_, developerName) };


    // feedbackPbcApi Field Functions 
    bool hasFeedbackPbcApi() const { return this->feedbackPbcApi_ != nullptr;};
    void deleteFeedbackPbcApi() { this->feedbackPbcApi_ = nullptr;};
    inline string getFeedbackPbcApi() const { DARABONBA_PTR_GET_DEFAULT(feedbackPbcApi_, "") };
    inline PbcReview& setFeedbackPbcApi(string feedbackPbcApi) { DARABONBA_PTR_SET_VALUE(feedbackPbcApi_, feedbackPbcApi) };


    // feedbackPbcInstruction Field Functions 
    bool hasFeedbackPbcInstruction() const { return this->feedbackPbcInstruction_ != nullptr;};
    void deleteFeedbackPbcInstruction() { this->feedbackPbcInstruction_ = nullptr;};
    inline string getFeedbackPbcInstruction() const { DARABONBA_PTR_GET_DEFAULT(feedbackPbcInstruction_, "") };
    inline PbcReview& setFeedbackPbcInstruction(string feedbackPbcInstruction) { DARABONBA_PTR_SET_VALUE(feedbackPbcInstruction_, feedbackPbcInstruction) };


    // feedbackPbcSchema Field Functions 
    bool hasFeedbackPbcSchema() const { return this->feedbackPbcSchema_ != nullptr;};
    void deleteFeedbackPbcSchema() { this->feedbackPbcSchema_ = nullptr;};
    inline string getFeedbackPbcSchema() const { DARABONBA_PTR_GET_DEFAULT(feedbackPbcSchema_, "") };
    inline PbcReview& setFeedbackPbcSchema(string feedbackPbcSchema) { DARABONBA_PTR_SET_VALUE(feedbackPbcSchema_, feedbackPbcSchema) };


    // feedbackSecurity Field Functions 
    bool hasFeedbackSecurity() const { return this->feedbackSecurity_ != nullptr;};
    void deleteFeedbackSecurity() { this->feedbackSecurity_ = nullptr;};
    inline string getFeedbackSecurity() const { DARABONBA_PTR_GET_DEFAULT(feedbackSecurity_, "") };
    inline PbcReview& setFeedbackSecurity(string feedbackSecurity) { DARABONBA_PTR_SET_VALUE(feedbackSecurity_, feedbackSecurity) };


    // feedbackServiceAvailable Field Functions 
    bool hasFeedbackServiceAvailable() const { return this->feedbackServiceAvailable_ != nullptr;};
    void deleteFeedbackServiceAvailable() { this->feedbackServiceAvailable_ = nullptr;};
    inline string getFeedbackServiceAvailable() const { DARABONBA_PTR_GET_DEFAULT(feedbackServiceAvailable_, "") };
    inline PbcReview& setFeedbackServiceAvailable(string feedbackServiceAvailable) { DARABONBA_PTR_SET_VALUE(feedbackServiceAvailable_, feedbackServiceAvailable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcReview& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcReview& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // marketName Field Functions 
    bool hasMarketName() const { return this->marketName_ != nullptr;};
    void deleteMarketName() { this->marketName_ = nullptr;};
    inline string getMarketName() const { DARABONBA_PTR_GET_DEFAULT(marketName_, "") };
    inline PbcReview& setMarketName(string marketName) { DARABONBA_PTR_SET_VALUE(marketName_, marketName) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline PbcReview& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // pbcUrl Field Functions 
    bool hasPbcUrl() const { return this->pbcUrl_ != nullptr;};
    void deletePbcUrl() { this->pbcUrl_ = nullptr;};
    inline string getPbcUrl() const { DARABONBA_PTR_GET_DEFAULT(pbcUrl_, "") };
    inline PbcReview& setPbcUrl(string pbcUrl) { DARABONBA_PTR_SET_VALUE(pbcUrl_, pbcUrl) };


    // pbcVersion Field Functions 
    bool hasPbcVersion() const { return this->pbcVersion_ != nullptr;};
    void deletePbcVersion() { this->pbcVersion_ = nullptr;};
    inline string getPbcVersion() const { DARABONBA_PTR_GET_DEFAULT(pbcVersion_, "") };
    inline PbcReview& setPbcVersion(string pbcVersion) { DARABONBA_PTR_SET_VALUE(pbcVersion_, pbcVersion) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline string getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, "") };
    inline PbcReview& setRemainTime(string remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcReview& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline int64_t getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, 0L) };
    inline PbcReview& setReviewerId(int64_t reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PbcReview& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int64_t> developerId_ {};
    shared_ptr<string> developerName_ {};
    shared_ptr<string> feedbackPbcApi_ {};
    shared_ptr<string> feedbackPbcInstruction_ {};
    shared_ptr<string> feedbackPbcSchema_ {};
    shared_ptr<string> feedbackSecurity_ {};
    shared_ptr<string> feedbackServiceAvailable_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> marketName_ {};
    // This parameter is required.
    shared_ptr<string> pbcName_ {};
    // This parameter is required.
    shared_ptr<string> pbcUrl_ {};
    // This parameter is required.
    shared_ptr<string> pbcVersion_ {};
    shared_ptr<string> remainTime_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<int64_t> reviewerId_ {};
    // This parameter is required.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
