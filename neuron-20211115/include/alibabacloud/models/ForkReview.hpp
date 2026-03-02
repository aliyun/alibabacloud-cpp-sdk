// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORKREVIEW_HPP_
#define ALIBABACLOUD_MODELS_FORKREVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ForkReview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForkReview& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(forkId, forkId_);
      DARABONBA_PTR_TO_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(repoUrls, repoUrls_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewer, reviewer_);
      DARABONBA_PTR_TO_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ForkReview& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(forkId, forkId_);
      DARABONBA_PTR_FROM_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(repoUrls, repoUrls_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewer, reviewer_);
      DARABONBA_PTR_FROM_JSON(reviewerId, reviewerId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    ForkReview() = default ;
    ForkReview(const ForkReview &) = default ;
    ForkReview(ForkReview &&) = default ;
    ForkReview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForkReview() = default ;
    ForkReview& operator=(const ForkReview &) = default ;
    ForkReview& operator=(ForkReview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->forkId_ == nullptr && this->gitGroup_ == nullptr && this->id_ == nullptr && this->pbcName_ == nullptr && this->repoUrls_ == nullptr
        && this->requestId_ == nullptr && this->reviewer_ == nullptr && this->reviewerId_ == nullptr && this->status_ == nullptr && this->usage_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline ForkReview& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // forkId Field Functions 
    bool hasForkId() const { return this->forkId_ != nullptr;};
    void deleteForkId() { this->forkId_ = nullptr;};
    inline int64_t getForkId() const { DARABONBA_PTR_GET_DEFAULT(forkId_, 0L) };
    inline ForkReview& setForkId(int64_t forkId) { DARABONBA_PTR_SET_VALUE(forkId_, forkId) };


    // gitGroup Field Functions 
    bool hasGitGroup() const { return this->gitGroup_ != nullptr;};
    void deleteGitGroup() { this->gitGroup_ = nullptr;};
    inline string getGitGroup() const { DARABONBA_PTR_GET_DEFAULT(gitGroup_, "") };
    inline ForkReview& setGitGroup(string gitGroup) { DARABONBA_PTR_SET_VALUE(gitGroup_, gitGroup) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ForkReview& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline ForkReview& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // repoUrls Field Functions 
    bool hasRepoUrls() const { return this->repoUrls_ != nullptr;};
    void deleteRepoUrls() { this->repoUrls_ = nullptr;};
    inline const vector<string> & getRepoUrls() const { DARABONBA_PTR_GET_CONST(repoUrls_, vector<string>) };
    inline vector<string> getRepoUrls() { DARABONBA_PTR_GET(repoUrls_, vector<string>) };
    inline ForkReview& setRepoUrls(const vector<string> & repoUrls) { DARABONBA_PTR_SET_VALUE(repoUrls_, repoUrls) };
    inline ForkReview& setRepoUrls(vector<string> && repoUrls) { DARABONBA_PTR_SET_RVALUE(repoUrls_, repoUrls) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ForkReview& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewer Field Functions 
    bool hasReviewer() const { return this->reviewer_ != nullptr;};
    void deleteReviewer() { this->reviewer_ = nullptr;};
    inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
    inline ForkReview& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline string getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, "") };
    inline ForkReview& setReviewerId(string reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ForkReview& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline ForkReview& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<string> applicant_ {};
    shared_ptr<int64_t> forkId_ {};
    shared_ptr<string> gitGroup_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<vector<string>> repoUrls_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> reviewer_ {};
    shared_ptr<string> reviewerId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
