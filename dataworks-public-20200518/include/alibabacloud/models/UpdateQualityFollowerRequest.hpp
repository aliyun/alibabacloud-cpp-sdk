// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEQUALITYFOLLOWERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEQUALITYFOLLOWERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateQualityFollowerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateQualityFollowerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmMode, alarmMode_);
      DARABONBA_PTR_TO_JSON(Follower, follower_);
      DARABONBA_PTR_TO_JSON(FollowerId, followerId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateQualityFollowerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmMode, alarmMode_);
      DARABONBA_PTR_FROM_JSON(Follower, follower_);
      DARABONBA_PTR_FROM_JSON(FollowerId, followerId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    UpdateQualityFollowerRequest() = default ;
    UpdateQualityFollowerRequest(const UpdateQualityFollowerRequest &) = default ;
    UpdateQualityFollowerRequest(UpdateQualityFollowerRequest &&) = default ;
    UpdateQualityFollowerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateQualityFollowerRequest() = default ;
    UpdateQualityFollowerRequest& operator=(const UpdateQualityFollowerRequest &) = default ;
    UpdateQualityFollowerRequest& operator=(UpdateQualityFollowerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmMode_ != nullptr
        && this->follower_ != nullptr && this->followerId_ != nullptr && this->projectId_ != nullptr && this->projectName_ != nullptr; };
    // alarmMode Field Functions 
    bool hasAlarmMode() const { return this->alarmMode_ != nullptr;};
    void deleteAlarmMode() { this->alarmMode_ = nullptr;};
    inline int32_t alarmMode() const { DARABONBA_PTR_GET_DEFAULT(alarmMode_, 0) };
    inline UpdateQualityFollowerRequest& setAlarmMode(int32_t alarmMode) { DARABONBA_PTR_SET_VALUE(alarmMode_, alarmMode) };


    // follower Field Functions 
    bool hasFollower() const { return this->follower_ != nullptr;};
    void deleteFollower() { this->follower_ = nullptr;};
    inline string follower() const { DARABONBA_PTR_GET_DEFAULT(follower_, "") };
    inline UpdateQualityFollowerRequest& setFollower(string follower) { DARABONBA_PTR_SET_VALUE(follower_, follower) };


    // followerId Field Functions 
    bool hasFollowerId() const { return this->followerId_ != nullptr;};
    void deleteFollowerId() { this->followerId_ = nullptr;};
    inline int64_t followerId() const { DARABONBA_PTR_GET_DEFAULT(followerId_, 0L) };
    inline UpdateQualityFollowerRequest& setFollowerId(int64_t followerId) { DARABONBA_PTR_SET_VALUE(followerId_, followerId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateQualityFollowerRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateQualityFollowerRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The notification method. Valid values: 1, 2, 4, 5, 6, 7, 8, and 9. The value 1 indicates that the notification is sent by email. The value 2 indicates that the notification is sent by email and text message. The value 4 indicates that the notification is sent by a DingTalk chatbot. The value 5 indicates that the notification is sent by a DingTalk chatbot to all members in a DingTalk group. The value 6 indicates that the notification is sent by Lark. The value 7 indicates that the notification is sent by WeCom. The value 8 indicates that the notification is sent by webhook. The value 9 indicates that the notification is sent by phone call.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> alarmMode_ = nullptr;
    // The name of the subscriber.
    // 
    // This parameter is required.
    std::shared_ptr<string> follower_ = nullptr;
    // The ID of the subscription relationship.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> followerId_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console to obtain the workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the compute engine or data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
