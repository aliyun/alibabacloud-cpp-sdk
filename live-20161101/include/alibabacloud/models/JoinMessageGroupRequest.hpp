// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_JOINMESSAGEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class JoinMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BroadCastStatistics, broadCastStatistics_);
      DARABONBA_PTR_TO_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, JoinMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BroadCastStatistics, broadCastStatistics_);
      DARABONBA_PTR_FROM_JSON(BroadCastType, broadCastType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    JoinMessageGroupRequest() = default ;
    JoinMessageGroupRequest(const JoinMessageGroupRequest &) = default ;
    JoinMessageGroupRequest(JoinMessageGroupRequest &&) = default ;
    JoinMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinMessageGroupRequest() = default ;
    JoinMessageGroupRequest& operator=(const JoinMessageGroupRequest &) = default ;
    JoinMessageGroupRequest& operator=(JoinMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->broadCastStatistics_ == nullptr && return this->broadCastType_ == nullptr && return this->groupId_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline JoinMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // broadCastStatistics Field Functions 
    bool hasBroadCastStatistics() const { return this->broadCastStatistics_ != nullptr;};
    void deleteBroadCastStatistics() { this->broadCastStatistics_ = nullptr;};
    inline bool broadCastStatistics() const { DARABONBA_PTR_GET_DEFAULT(broadCastStatistics_, false) };
    inline JoinMessageGroupRequest& setBroadCastStatistics(bool broadCastStatistics) { DARABONBA_PTR_SET_VALUE(broadCastStatistics_, broadCastStatistics) };


    // broadCastType Field Functions 
    bool hasBroadCastType() const { return this->broadCastType_ != nullptr;};
    void deleteBroadCastType() { this->broadCastType_ = nullptr;};
    inline int32_t broadCastType() const { DARABONBA_PTR_GET_DEFAULT(broadCastType_, 0) };
    inline JoinMessageGroupRequest& setBroadCastType(int32_t broadCastType) { DARABONBA_PTR_SET_VALUE(broadCastType_, broadCastType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline JoinMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline JoinMessageGroupRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the interactive messaging application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to broadcast statistical messages. If you set the value to true, statistical messages of the message group are broadcasted after the users join the message group. The client can receive and process these messages. Valid values:
    // 
    // *   true: broadcasts statistical messages.
    // *   false: does not broadcast statistical messages.
    std::shared_ptr<bool> broadCastStatistics_ = nullptr;
    // The mode in which system messages are broadcasted. Valid values:
    // 
    // *   0: specifies that system messages are not broadcasted. This is the default value.
    // *   1: specifies that system messages are broadcasted to specified users.
    // *   2: specifies that system messages are broadcasted to the message group.
    std::shared_ptr<int32_t> broadCastType_ = nullptr;
    // The ID of the message group to join.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the user. Each user has a unique ID in the application. The ID can be up to 32 characters in length and can contain lowercase letters, digits, underscores (_), and periods (.). You can specify multiple user IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
