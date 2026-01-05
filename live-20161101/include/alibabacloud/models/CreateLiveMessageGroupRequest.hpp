// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEMESSAGEGROUPREQUEST_HPP_
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
  class CreateLiveMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Administrators, administrators_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Administrators, administrators_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    CreateLiveMessageGroupRequest() = default ;
    CreateLiveMessageGroupRequest(const CreateLiveMessageGroupRequest &) = default ;
    CreateLiveMessageGroupRequest(CreateLiveMessageGroupRequest &&) = default ;
    CreateLiveMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveMessageGroupRequest() = default ;
    CreateLiveMessageGroupRequest& operator=(const CreateLiveMessageGroupRequest &) = default ;
    CreateLiveMessageGroupRequest& operator=(CreateLiveMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->administrators_ == nullptr
        && this->appId_ == nullptr && this->creatorId_ == nullptr && this->dataCenter_ == nullptr && this->groupId_ == nullptr && this->groupInfo_ == nullptr
        && this->groupName_ == nullptr; };
    // administrators Field Functions 
    bool hasAdministrators() const { return this->administrators_ != nullptr;};
    void deleteAdministrators() { this->administrators_ = nullptr;};
    inline const vector<string> & getAdministrators() const { DARABONBA_PTR_GET_CONST(administrators_, vector<string>) };
    inline vector<string> getAdministrators() { DARABONBA_PTR_GET(administrators_, vector<string>) };
    inline CreateLiveMessageGroupRequest& setAdministrators(const vector<string> & administrators) { DARABONBA_PTR_SET_VALUE(administrators_, administrators) };
    inline CreateLiveMessageGroupRequest& setAdministrators(vector<string> && administrators) { DARABONBA_PTR_SET_RVALUE(administrators_, administrators) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateLiveMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateLiveMessageGroupRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline CreateLiveMessageGroupRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateLiveMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline string getGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
    inline CreateLiveMessageGroupRequest& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateLiveMessageGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The list of administrators.
    shared_ptr<vector<string>> administrators_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of the group creator. The ID can be up to 64 bytes in length and can contain letters and digits.
    shared_ptr<string> creatorId_ {};
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2593195.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // The ID of the group that you want to create. The group ID must be unique within your business. The ID can be up to 64 bytes in length and can contain letters and digits.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The additional information about the group. The value can be up to 32 KB in length.
    shared_ptr<string> groupInfo_ {};
    // The name of the group. The name can be up to 128 bytes in length.
    shared_ptr<string> groupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
