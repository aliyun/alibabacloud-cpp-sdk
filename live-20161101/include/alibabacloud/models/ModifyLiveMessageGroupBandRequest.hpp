// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPBANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPBANDREQUEST_HPP_
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
  class ModifyLiveMessageGroupBandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageGroupBandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BannedAll, bannedAll_);
      DARABONBA_PTR_TO_JSON(BannnedUsers, bannnedUsers_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(ExceptUsers, exceptUsers_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageGroupBandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BannedAll, bannedAll_);
      DARABONBA_PTR_FROM_JSON(BannnedUsers, bannnedUsers_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(ExceptUsers, exceptUsers_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    ModifyLiveMessageGroupBandRequest() = default ;
    ModifyLiveMessageGroupBandRequest(const ModifyLiveMessageGroupBandRequest &) = default ;
    ModifyLiveMessageGroupBandRequest(ModifyLiveMessageGroupBandRequest &&) = default ;
    ModifyLiveMessageGroupBandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageGroupBandRequest() = default ;
    ModifyLiveMessageGroupBandRequest& operator=(const ModifyLiveMessageGroupBandRequest &) = default ;
    ModifyLiveMessageGroupBandRequest& operator=(ModifyLiveMessageGroupBandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->bannedAll_ == nullptr && return this->bannnedUsers_ == nullptr && return this->dataCenter_ == nullptr && return this->exceptUsers_ == nullptr && return this->groupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageGroupBandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bannedAll Field Functions 
    bool hasBannedAll() const { return this->bannedAll_ != nullptr;};
    void deleteBannedAll() { this->bannedAll_ = nullptr;};
    inline bool bannedAll() const { DARABONBA_PTR_GET_DEFAULT(bannedAll_, false) };
    inline ModifyLiveMessageGroupBandRequest& setBannedAll(bool bannedAll) { DARABONBA_PTR_SET_VALUE(bannedAll_, bannedAll) };


    // bannnedUsers Field Functions 
    bool hasBannnedUsers() const { return this->bannnedUsers_ != nullptr;};
    void deleteBannnedUsers() { this->bannnedUsers_ = nullptr;};
    inline const vector<string> & bannnedUsers() const { DARABONBA_PTR_GET_CONST(bannnedUsers_, vector<string>) };
    inline vector<string> bannnedUsers() { DARABONBA_PTR_GET(bannnedUsers_, vector<string>) };
    inline ModifyLiveMessageGroupBandRequest& setBannnedUsers(const vector<string> & bannnedUsers) { DARABONBA_PTR_SET_VALUE(bannnedUsers_, bannnedUsers) };
    inline ModifyLiveMessageGroupBandRequest& setBannnedUsers(vector<string> && bannnedUsers) { DARABONBA_PTR_SET_RVALUE(bannnedUsers_, bannnedUsers) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageGroupBandRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // exceptUsers Field Functions 
    bool hasExceptUsers() const { return this->exceptUsers_ != nullptr;};
    void deleteExceptUsers() { this->exceptUsers_ = nullptr;};
    inline const vector<string> & exceptUsers() const { DARABONBA_PTR_GET_CONST(exceptUsers_, vector<string>) };
    inline vector<string> exceptUsers() { DARABONBA_PTR_GET(exceptUsers_, vector<string>) };
    inline ModifyLiveMessageGroupBandRequest& setExceptUsers(const vector<string> & exceptUsers) { DARABONBA_PTR_SET_VALUE(exceptUsers_, exceptUsers) };
    inline ModifyLiveMessageGroupBandRequest& setExceptUsers(vector<string> && exceptUsers) { DARABONBA_PTR_SET_RVALUE(exceptUsers_, exceptUsers) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLiveMessageGroupBandRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to mute all users.
    std::shared_ptr<bool> bannedAll_ = nullptr;
    // The ID of the user whom you want to mute. Separate multiple user IDs with commas (,). You can specify up to 30 users IDs.
    std::shared_ptr<vector<string>> bannnedUsers_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The ID of the user whom you do not want to mute when you set the BannedAll parameter to true. Separate multiple user IDs with commas (,). You can specify up to 30 users IDs.
    std::shared_ptr<vector<string>> exceptUsers_ = nullptr;
    // The group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
