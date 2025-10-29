// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BANLIVEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BANLIVEMESSAGEGROUPREQUEST_HPP_
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
  class BanLiveMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BanLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(ExceptUsers, exceptUsers_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, BanLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(ExceptUsers, exceptUsers_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    BanLiveMessageGroupRequest() = default ;
    BanLiveMessageGroupRequest(const BanLiveMessageGroupRequest &) = default ;
    BanLiveMessageGroupRequest(BanLiveMessageGroupRequest &&) = default ;
    BanLiveMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BanLiveMessageGroupRequest() = default ;
    BanLiveMessageGroupRequest& operator=(const BanLiveMessageGroupRequest &) = default ;
    BanLiveMessageGroupRequest& operator=(BanLiveMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->dataCenter_ == nullptr && return this->exceptUsers_ == nullptr && return this->groupId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline BanLiveMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline BanLiveMessageGroupRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // exceptUsers Field Functions 
    bool hasExceptUsers() const { return this->exceptUsers_ != nullptr;};
    void deleteExceptUsers() { this->exceptUsers_ = nullptr;};
    inline const vector<string> & exceptUsers() const { DARABONBA_PTR_GET_CONST(exceptUsers_, vector<string>) };
    inline vector<string> exceptUsers() { DARABONBA_PTR_GET(exceptUsers_, vector<string>) };
    inline BanLiveMessageGroupRequest& setExceptUsers(const vector<string> & exceptUsers) { DARABONBA_PTR_SET_VALUE(exceptUsers_, exceptUsers) };
    inline BanLiveMessageGroupRequest& setExceptUsers(vector<string> && exceptUsers) { DARABONBA_PTR_SET_RVALUE(exceptUsers_, exceptUsers) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BanLiveMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application.
    // 
    // >  Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The users whom you do not want to mute when the group is muted.
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
