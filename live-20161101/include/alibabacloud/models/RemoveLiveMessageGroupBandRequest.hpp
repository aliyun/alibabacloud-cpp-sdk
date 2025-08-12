// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVELIVEMESSAGEGROUPBANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVELIVEMESSAGEGROUPBANDREQUEST_HPP_
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
  class RemoveLiveMessageGroupBandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveLiveMessageGroupBandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(UnbannedUsers, unbannedUsers_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveLiveMessageGroupBandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(UnbannedUsers, unbannedUsers_);
    };
    RemoveLiveMessageGroupBandRequest() = default ;
    RemoveLiveMessageGroupBandRequest(const RemoveLiveMessageGroupBandRequest &) = default ;
    RemoveLiveMessageGroupBandRequest(RemoveLiveMessageGroupBandRequest &&) = default ;
    RemoveLiveMessageGroupBandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveLiveMessageGroupBandRequest() = default ;
    RemoveLiveMessageGroupBandRequest& operator=(const RemoveLiveMessageGroupBandRequest &) = default ;
    RemoveLiveMessageGroupBandRequest& operator=(RemoveLiveMessageGroupBandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->dataCenter_ != nullptr && this->groupId_ != nullptr && this->unbannedUsers_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RemoveLiveMessageGroupBandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline RemoveLiveMessageGroupBandRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveLiveMessageGroupBandRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // unbannedUsers Field Functions 
    bool hasUnbannedUsers() const { return this->unbannedUsers_ != nullptr;};
    void deleteUnbannedUsers() { this->unbannedUsers_ = nullptr;};
    inline const vector<string> & unbannedUsers() const { DARABONBA_PTR_GET_CONST(unbannedUsers_, vector<string>) };
    inline vector<string> unbannedUsers() { DARABONBA_PTR_GET(unbannedUsers_, vector<string>) };
    inline RemoveLiveMessageGroupBandRequest& setUnbannedUsers(const vector<string> & unbannedUsers) { DARABONBA_PTR_SET_VALUE(unbannedUsers_, unbannedUsers) };
    inline RemoveLiveMessageGroupBandRequest& setUnbannedUsers(vector<string> && unbannedUsers) { DARABONBA_PTR_SET_RVALUE(unbannedUsers_, unbannedUsers) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application.
    // 
    // >  Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The users whom you want to unmute.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> unbannedUsers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
