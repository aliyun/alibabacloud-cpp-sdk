// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMERGEREQUESTRESPONSEBODYRESULTREVIEWERS_HPP_
#define ALIBABACLOUD_MODELS_GETMERGEREQUESTRESPONSEBODYRESULTREVIEWERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetMergeRequestResponseBodyResultReviewers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMergeRequestResponseBodyResultReviewers& obj) { 
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(hasCommented, hasCommented_);
      DARABONBA_PTR_TO_JSON(hasReviewed, hasReviewed_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(reviewOpinionStatus, reviewOpinionStatus_);
      DARABONBA_PTR_TO_JSON(reviewTime, reviewTime_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetMergeRequestResponseBodyResultReviewers& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(hasCommented, hasCommented_);
      DARABONBA_PTR_FROM_JSON(hasReviewed, hasReviewed_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(reviewOpinionStatus, reviewOpinionStatus_);
      DARABONBA_PTR_FROM_JSON(reviewTime, reviewTime_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GetMergeRequestResponseBodyResultReviewers() = default ;
    GetMergeRequestResponseBodyResultReviewers(const GetMergeRequestResponseBodyResultReviewers &) = default ;
    GetMergeRequestResponseBodyResultReviewers(GetMergeRequestResponseBodyResultReviewers &&) = default ;
    GetMergeRequestResponseBodyResultReviewers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMergeRequestResponseBodyResultReviewers() = default ;
    GetMergeRequestResponseBodyResultReviewers& operator=(const GetMergeRequestResponseBodyResultReviewers &) = default ;
    GetMergeRequestResponseBodyResultReviewers& operator=(GetMergeRequestResponseBodyResultReviewers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && return this->email_ == nullptr && return this->hasCommented_ == nullptr && return this->hasReviewed_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->reviewOpinionStatus_ == nullptr && return this->reviewTime_ == nullptr && return this->state_ == nullptr && return this->username_ == nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // hasCommented Field Functions 
    bool hasHasCommented() const { return this->hasCommented_ != nullptr;};
    void deleteHasCommented() { this->hasCommented_ = nullptr;};
    inline bool hasCommented() const { DARABONBA_PTR_GET_DEFAULT(hasCommented_, false) };
    inline GetMergeRequestResponseBodyResultReviewers& setHasCommented(bool hasCommented) { DARABONBA_PTR_SET_VALUE(hasCommented_, hasCommented) };


    // hasReviewed Field Functions 
    bool hasHasReviewed() const { return this->hasReviewed_ != nullptr;};
    void deleteHasReviewed() { this->hasReviewed_ = nullptr;};
    inline bool hasReviewed() const { DARABONBA_PTR_GET_DEFAULT(hasReviewed_, false) };
    inline GetMergeRequestResponseBodyResultReviewers& setHasReviewed(bool hasReviewed) { DARABONBA_PTR_SET_VALUE(hasReviewed_, hasReviewed) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMergeRequestResponseBodyResultReviewers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reviewOpinionStatus Field Functions 
    bool hasReviewOpinionStatus() const { return this->reviewOpinionStatus_ != nullptr;};
    void deleteReviewOpinionStatus() { this->reviewOpinionStatus_ = nullptr;};
    inline string reviewOpinionStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewOpinionStatus_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setReviewOpinionStatus(string reviewOpinionStatus) { DARABONBA_PTR_SET_VALUE(reviewOpinionStatus_, reviewOpinionStatus) };


    // reviewTime Field Functions 
    bool hasReviewTime() const { return this->reviewTime_ != nullptr;};
    void deleteReviewTime() { this->reviewTime_ = nullptr;};
    inline string reviewTime() const { DARABONBA_PTR_GET_DEFAULT(reviewTime_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setReviewTime(string reviewTime) { DARABONBA_PTR_SET_VALUE(reviewTime_, reviewTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetMergeRequestResponseBodyResultReviewers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<bool> hasCommented_ = nullptr;
    std::shared_ptr<bool> hasReviewed_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> reviewOpinionStatus_ = nullptr;
    std::shared_ptr<string> reviewTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
