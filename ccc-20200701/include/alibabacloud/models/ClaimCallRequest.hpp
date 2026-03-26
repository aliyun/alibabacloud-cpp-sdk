// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLAIMCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLAIMCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ClaimCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClaimCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CandidateUserListJson, candidateUserListJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ClaimCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CandidateUserListJson, candidateUserListJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ClaimCallRequest() = default ;
    ClaimCallRequest(const ClaimCallRequest &) = default ;
    ClaimCallRequest(ClaimCallRequest &&) = default ;
    ClaimCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClaimCallRequest() = default ;
    ClaimCallRequest& operator=(const ClaimCallRequest &) = default ;
    ClaimCallRequest& operator=(ClaimCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->candidateUserListJson_ == nullptr
        && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->skillGroupId_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr; };
    // candidateUserListJson Field Functions 
    bool hasCandidateUserListJson() const { return this->candidateUserListJson_ != nullptr;};
    void deleteCandidateUserListJson() { this->candidateUserListJson_ = nullptr;};
    inline string getCandidateUserListJson() const { DARABONBA_PTR_GET_DEFAULT(candidateUserListJson_, "") };
    inline ClaimCallRequest& setCandidateUserListJson(string candidateUserListJson) { DARABONBA_PTR_SET_VALUE(candidateUserListJson_, candidateUserListJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ClaimCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ClaimCallRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ClaimCallRequest& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ClaimCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ClaimCallRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> candidateUserListJson_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    shared_ptr<string> skillGroupId_ {};
    shared_ptr<string> tags_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
