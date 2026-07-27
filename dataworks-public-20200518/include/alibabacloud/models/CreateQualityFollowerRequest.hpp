// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQUALITYFOLLOWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEQUALITYFOLLOWERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateQualityFollowerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQualityFollowerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMode, alarmMode_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Follower, follower_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQualityFollowerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMode, alarmMode_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Follower, follower_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    CreateQualityFollowerRequest() = default ;
    CreateQualityFollowerRequest(const CreateQualityFollowerRequest &) = default ;
    CreateQualityFollowerRequest(CreateQualityFollowerRequest &&) = default ;
    CreateQualityFollowerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQualityFollowerRequest() = default ;
    CreateQualityFollowerRequest& operator=(const CreateQualityFollowerRequest &) = default ;
    CreateQualityFollowerRequest& operator=(CreateQualityFollowerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmMode_ == nullptr
        && this->entityId_ == nullptr && this->follower_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr; };
    // alarmMode Field Functions 
    bool hasAlarmMode() const { return this->alarmMode_ != nullptr;};
    void deleteAlarmMode() { this->alarmMode_ = nullptr;};
    inline int32_t getAlarmMode() const { DARABONBA_PTR_GET_DEFAULT(alarmMode_, 0) };
    inline CreateQualityFollowerRequest& setAlarmMode(int32_t alarmMode) { DARABONBA_PTR_SET_VALUE(alarmMode_, alarmMode) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline int64_t getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, 0L) };
    inline CreateQualityFollowerRequest& setEntityId(int64_t entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // follower Field Functions 
    bool hasFollower() const { return this->follower_ != nullptr;};
    void deleteFollower() { this->follower_ = nullptr;};
    inline string getFollower() const { DARABONBA_PTR_GET_DEFAULT(follower_, "") };
    inline CreateQualityFollowerRequest& setFollower(string follower) { DARABONBA_PTR_SET_VALUE(follower_, follower) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateQualityFollowerRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateQualityFollowerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The alert method. Valid values: 1 (email), 2 (email and SMS), 4 (DingTalk Group Bot), 5 (DingTalk Group Bot with an @all message), 6 (Lark), 7 (WeCom), 8 (webhook), and 9 (Phone Alert).
    // 
    // This parameter is required.
    shared_ptr<int32_t> alarmMode_ {};
    // The ID of the partition expression.
    // 
    // This parameter is required.
    shared_ptr<int64_t> entityId_ {};
    // The Alibaba Cloud account ID of the follower.
    // 
    // This parameter is required.
    shared_ptr<string> follower_ {};
    // The ID of the DataWorks workspace. To find the workspace ID, log in to the DataWorks console.
    shared_ptr<int64_t> projectId_ {};
    // The name of the compute engine or data source.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
