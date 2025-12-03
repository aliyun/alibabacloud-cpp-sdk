// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVIEWMERGEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVIEWMERGEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ReviewMergeRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReviewMergeRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(draftCommentIds, draftCommentIds_);
      DARABONBA_PTR_TO_JSON(reviewComment, reviewComment_);
      DARABONBA_PTR_TO_JSON(reviewOpinion, reviewOpinion_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ReviewMergeRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(draftCommentIds, draftCommentIds_);
      DARABONBA_PTR_FROM_JSON(reviewComment, reviewComment_);
      DARABONBA_PTR_FROM_JSON(reviewOpinion, reviewOpinion_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    ReviewMergeRequestRequest() = default ;
    ReviewMergeRequestRequest(const ReviewMergeRequestRequest &) = default ;
    ReviewMergeRequestRequest(ReviewMergeRequestRequest &&) = default ;
    ReviewMergeRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReviewMergeRequestRequest() = default ;
    ReviewMergeRequestRequest& operator=(const ReviewMergeRequestRequest &) = default ;
    ReviewMergeRequestRequest& operator=(ReviewMergeRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->draftCommentIds_ == nullptr && return this->reviewComment_ == nullptr && return this->reviewOpinion_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ReviewMergeRequestRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // draftCommentIds Field Functions 
    bool hasDraftCommentIds() const { return this->draftCommentIds_ != nullptr;};
    void deleteDraftCommentIds() { this->draftCommentIds_ = nullptr;};
    inline const vector<string> & draftCommentIds() const { DARABONBA_PTR_GET_CONST(draftCommentIds_, vector<string>) };
    inline vector<string> draftCommentIds() { DARABONBA_PTR_GET(draftCommentIds_, vector<string>) };
    inline ReviewMergeRequestRequest& setDraftCommentIds(const vector<string> & draftCommentIds) { DARABONBA_PTR_SET_VALUE(draftCommentIds_, draftCommentIds) };
    inline ReviewMergeRequestRequest& setDraftCommentIds(vector<string> && draftCommentIds) { DARABONBA_PTR_SET_RVALUE(draftCommentIds_, draftCommentIds) };


    // reviewComment Field Functions 
    bool hasReviewComment() const { return this->reviewComment_ != nullptr;};
    void deleteReviewComment() { this->reviewComment_ = nullptr;};
    inline string reviewComment() const { DARABONBA_PTR_GET_DEFAULT(reviewComment_, "") };
    inline ReviewMergeRequestRequest& setReviewComment(string reviewComment) { DARABONBA_PTR_SET_VALUE(reviewComment_, reviewComment) };


    // reviewOpinion Field Functions 
    bool hasReviewOpinion() const { return this->reviewOpinion_ != nullptr;};
    void deleteReviewOpinion() { this->reviewOpinion_ = nullptr;};
    inline string reviewOpinion() const { DARABONBA_PTR_GET_DEFAULT(reviewOpinion_, "") };
    inline ReviewMergeRequestRequest& setReviewOpinion(string reviewOpinion) { DARABONBA_PTR_SET_VALUE(reviewOpinion_, reviewOpinion) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ReviewMergeRequestRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<vector<string>> draftCommentIds_ = nullptr;
    std::shared_ptr<string> reviewComment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reviewOpinion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
