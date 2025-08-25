// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RemoveUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NotificationEmail, notificationEmail_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NotificationEmail, notificationEmail_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    RemoveUsersRequest() = default ;
    RemoveUsersRequest(const RemoveUsersRequest &) = default ;
    RemoveUsersRequest(RemoveUsersRequest &&) = default ;
    RemoveUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersRequest() = default ;
    RemoveUsersRequest& operator=(const RemoveUsersRequest &) = default ;
    RemoveUsersRequest& operator=(RemoveUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filePath_ != nullptr
        && this->force_ != nullptr && this->instanceId_ != nullptr && this->notificationEmail_ != nullptr && this->userIdList_ != nullptr; };
    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline RemoveUsersRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RemoveUsersRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveUsersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // notificationEmail Field Functions 
    bool hasNotificationEmail() const { return this->notificationEmail_ != nullptr;};
    void deleteNotificationEmail() { this->notificationEmail_ = nullptr;};
    inline string notificationEmail() const { DARABONBA_PTR_GET_DEFAULT(notificationEmail_, "") };
    inline RemoveUsersRequest& setNotificationEmail(string notificationEmail) { DARABONBA_PTR_SET_VALUE(notificationEmail_, notificationEmail) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline string userIdList() const { DARABONBA_PTR_GET_DEFAULT(userIdList_, "") };
    inline RemoveUsersRequest& setUserIdList(string userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };


  protected:
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> notificationEmail_ = nullptr;
    std::shared_ptr<string> userIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
