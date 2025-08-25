// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATACHATCONTEXTSMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_POLLUSERSTATUSRESPONSEBODYDATACHATCONTEXTSMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class PollUserStatusResponseBodyDataChatContextsMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollUserStatusResponseBodyDataChatContextsMembers& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, PollUserStatusResponseBodyDataChatContextsMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    PollUserStatusResponseBodyDataChatContextsMembers() = default ;
    PollUserStatusResponseBodyDataChatContextsMembers(const PollUserStatusResponseBodyDataChatContextsMembers &) = default ;
    PollUserStatusResponseBodyDataChatContextsMembers(PollUserStatusResponseBodyDataChatContextsMembers &&) = default ;
    PollUserStatusResponseBodyDataChatContextsMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollUserStatusResponseBodyDataChatContextsMembers() = default ;
    PollUserStatusResponseBodyDataChatContextsMembers& operator=(const PollUserStatusResponseBodyDataChatContextsMembers &) = default ;
    PollUserStatusResponseBodyDataChatContextsMembers& operator=(PollUserStatusResponseBodyDataChatContextsMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->releaseInitiator_ != nullptr && this->releaseReason_ != nullptr && this->skillGroupId_ != nullptr && this->status_ != nullptr && this->userId_ != nullptr
        && this->userType_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // releaseInitiator Field Functions 
    bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
    void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
    inline string releaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string releaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline PollUserStatusResponseBodyDataChatContextsMembers& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<string> releaseInitiator_ = nullptr;
    std::shared_ptr<string> releaseReason_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
