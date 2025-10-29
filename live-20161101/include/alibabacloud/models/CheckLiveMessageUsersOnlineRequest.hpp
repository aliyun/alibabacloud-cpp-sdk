// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKLIVEMESSAGEUSERSONLINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CheckLiveMessageUsersOnlineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckLiveMessageUsersOnlineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, CheckLiveMessageUsersOnlineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    CheckLiveMessageUsersOnlineRequest() = default ;
    CheckLiveMessageUsersOnlineRequest(const CheckLiveMessageUsersOnlineRequest &) = default ;
    CheckLiveMessageUsersOnlineRequest(CheckLiveMessageUsersOnlineRequest &&) = default ;
    CheckLiveMessageUsersOnlineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckLiveMessageUsersOnlineRequest() = default ;
    CheckLiveMessageUsersOnlineRequest& operator=(const CheckLiveMessageUsersOnlineRequest &) = default ;
    CheckLiveMessageUsersOnlineRequest& operator=(CheckLiveMessageUsersOnlineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dataCenter_ == nullptr && return this->userIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CheckLiveMessageUsersOnlineRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CheckLiveMessageUsersOnlineRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline CheckLiveMessageUsersOnlineRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline CheckLiveMessageUsersOnlineRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The list of users that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
