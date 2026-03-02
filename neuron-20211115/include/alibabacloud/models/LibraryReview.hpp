// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYREVIEW_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYREVIEW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryReview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryReview& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(artificatId, artificatId_);
      DARABONBA_PTR_TO_JSON(developerName, developerName_);
      DARABONBA_PTR_TO_JSON(feedbackLibraryInstruction, feedbackLibraryInstruction_);
      DARABONBA_PTR_TO_JSON(feedbackLibrarySchema, feedbackLibrarySchema_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
      DARABONBA_PTR_TO_JSON(libraryUrl, libraryUrl_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(marketName, marketName_);
      DARABONBA_PTR_TO_JSON(remainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryReview& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(artificatId, artificatId_);
      DARABONBA_PTR_FROM_JSON(developerName, developerName_);
      DARABONBA_PTR_FROM_JSON(feedbackLibraryInstruction, feedbackLibraryInstruction_);
      DARABONBA_PTR_FROM_JSON(feedbackLibrarySchema, feedbackLibrarySchema_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
      DARABONBA_PTR_FROM_JSON(libraryUrl, libraryUrl_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(marketName, marketName_);
      DARABONBA_PTR_FROM_JSON(remainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    LibraryReview() = default ;
    LibraryReview(const LibraryReview &) = default ;
    LibraryReview(LibraryReview &&) = default ;
    LibraryReview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryReview() = default ;
    LibraryReview& operator=(const LibraryReview &) = default ;
    LibraryReview& operator=(LibraryReview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->artificatId_ == nullptr && this->developerName_ == nullptr && this->feedbackLibraryInstruction_ == nullptr && this->feedbackLibrarySchema_ == nullptr && this->gmtCreate_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->libraryName_ == nullptr && this->libraryUrl_ == nullptr && this->marketId_ == nullptr
        && this->marketName_ == nullptr && this->remainTime_ == nullptr && this->requestId_ == nullptr && this->reviewerId_ == nullptr && this->status_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline LibraryReview& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // artificatId Field Functions 
    bool hasArtificatId() const { return this->artificatId_ != nullptr;};
    void deleteArtificatId() { this->artificatId_ = nullptr;};
    inline string getArtificatId() const { DARABONBA_PTR_GET_DEFAULT(artificatId_, "") };
    inline LibraryReview& setArtificatId(string artificatId) { DARABONBA_PTR_SET_VALUE(artificatId_, artificatId) };


    // developerName Field Functions 
    bool hasDeveloperName() const { return this->developerName_ != nullptr;};
    void deleteDeveloperName() { this->developerName_ = nullptr;};
    inline string getDeveloperName() const { DARABONBA_PTR_GET_DEFAULT(developerName_, "") };
    inline LibraryReview& setDeveloperName(string developerName) { DARABONBA_PTR_SET_VALUE(developerName_, developerName) };


    // feedbackLibraryInstruction Field Functions 
    bool hasFeedbackLibraryInstruction() const { return this->feedbackLibraryInstruction_ != nullptr;};
    void deleteFeedbackLibraryInstruction() { this->feedbackLibraryInstruction_ = nullptr;};
    inline string getFeedbackLibraryInstruction() const { DARABONBA_PTR_GET_DEFAULT(feedbackLibraryInstruction_, "") };
    inline LibraryReview& setFeedbackLibraryInstruction(string feedbackLibraryInstruction) { DARABONBA_PTR_SET_VALUE(feedbackLibraryInstruction_, feedbackLibraryInstruction) };


    // feedbackLibrarySchema Field Functions 
    bool hasFeedbackLibrarySchema() const { return this->feedbackLibrarySchema_ != nullptr;};
    void deleteFeedbackLibrarySchema() { this->feedbackLibrarySchema_ = nullptr;};
    inline string getFeedbackLibrarySchema() const { DARABONBA_PTR_GET_DEFAULT(feedbackLibrarySchema_, "") };
    inline LibraryReview& setFeedbackLibrarySchema(string feedbackLibrarySchema) { DARABONBA_PTR_SET_VALUE(feedbackLibrarySchema_, feedbackLibrarySchema) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline LibraryReview& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline LibraryReview& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline LibraryReview& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // libraryName Field Functions 
    bool hasLibraryName() const { return this->libraryName_ != nullptr;};
    void deleteLibraryName() { this->libraryName_ = nullptr;};
    inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
    inline LibraryReview& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


    // libraryUrl Field Functions 
    bool hasLibraryUrl() const { return this->libraryUrl_ != nullptr;};
    void deleteLibraryUrl() { this->libraryUrl_ = nullptr;};
    inline string getLibraryUrl() const { DARABONBA_PTR_GET_DEFAULT(libraryUrl_, "") };
    inline LibraryReview& setLibraryUrl(string libraryUrl) { DARABONBA_PTR_SET_VALUE(libraryUrl_, libraryUrl) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline string getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, "") };
    inline LibraryReview& setMarketId(string marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // marketName Field Functions 
    bool hasMarketName() const { return this->marketName_ != nullptr;};
    void deleteMarketName() { this->marketName_ = nullptr;};
    inline string getMarketName() const { DARABONBA_PTR_GET_DEFAULT(marketName_, "") };
    inline LibraryReview& setMarketName(string marketName) { DARABONBA_PTR_SET_VALUE(marketName_, marketName) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline string getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, "") };
    inline LibraryReview& setRemainTime(string remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LibraryReview& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline string getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, "") };
    inline LibraryReview& setReviewerId(string reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline LibraryReview& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> applicant_ {};
    shared_ptr<string> artificatId_ {};
    shared_ptr<string> developerName_ {};
    shared_ptr<string> feedbackLibraryInstruction_ {};
    shared_ptr<string> feedbackLibrarySchema_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> libraryName_ {};
    shared_ptr<string> libraryUrl_ {};
    shared_ptr<string> marketId_ {};
    shared_ptr<string> marketName_ {};
    shared_ptr<string> remainTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> reviewerId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
