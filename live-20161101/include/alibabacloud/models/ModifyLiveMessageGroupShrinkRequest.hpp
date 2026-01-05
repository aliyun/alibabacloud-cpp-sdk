// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveMessageGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminListShrink_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(ModifyAdmin, modifyAdmin_);
      DARABONBA_PTR_TO_JSON(ModifyInfo, modifyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminListShrink_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(ModifyAdmin, modifyAdmin_);
      DARABONBA_PTR_FROM_JSON(ModifyInfo, modifyInfo_);
    };
    ModifyLiveMessageGroupShrinkRequest() = default ;
    ModifyLiveMessageGroupShrinkRequest(const ModifyLiveMessageGroupShrinkRequest &) = default ;
    ModifyLiveMessageGroupShrinkRequest(ModifyLiveMessageGroupShrinkRequest &&) = default ;
    ModifyLiveMessageGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageGroupShrinkRequest() = default ;
    ModifyLiveMessageGroupShrinkRequest& operator=(const ModifyLiveMessageGroupShrinkRequest &) = default ;
    ModifyLiveMessageGroupShrinkRequest& operator=(ModifyLiveMessageGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminListShrink_ == nullptr
        && this->appId_ == nullptr && this->dataCenter_ == nullptr && this->groupId_ == nullptr && this->groupInfo_ == nullptr && this->modifyAdmin_ == nullptr
        && this->modifyInfo_ == nullptr; };
    // adminListShrink Field Functions 
    bool hasAdminListShrink() const { return this->adminListShrink_ != nullptr;};
    void deleteAdminListShrink() { this->adminListShrink_ = nullptr;};
    inline string getAdminListShrink() const { DARABONBA_PTR_GET_DEFAULT(adminListShrink_, "") };
    inline ModifyLiveMessageGroupShrinkRequest& setAdminListShrink(string adminListShrink) { DARABONBA_PTR_SET_VALUE(adminListShrink_, adminListShrink) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageGroupShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string getDataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageGroupShrinkRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLiveMessageGroupShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline string getGroupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
    inline ModifyLiveMessageGroupShrinkRequest& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


    // modifyAdmin Field Functions 
    bool hasModifyAdmin() const { return this->modifyAdmin_ != nullptr;};
    void deleteModifyAdmin() { this->modifyAdmin_ = nullptr;};
    inline bool getModifyAdmin() const { DARABONBA_PTR_GET_DEFAULT(modifyAdmin_, false) };
    inline ModifyLiveMessageGroupShrinkRequest& setModifyAdmin(bool modifyAdmin) { DARABONBA_PTR_SET_VALUE(modifyAdmin_, modifyAdmin) };


    // modifyInfo Field Functions 
    bool hasModifyInfo() const { return this->modifyInfo_ != nullptr;};
    void deleteModifyInfo() { this->modifyInfo_ = nullptr;};
    inline bool getModifyInfo() const { DARABONBA_PTR_GET_DEFAULT(modifyInfo_, false) };
    inline ModifyLiveMessageGroupShrinkRequest& setModifyInfo(bool modifyInfo) { DARABONBA_PTR_SET_VALUE(modifyInfo_, modifyInfo) };


  protected:
    // The list of administrators after your change.
    shared_ptr<string> adminListShrink_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    shared_ptr<string> dataCenter_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The additional information about the group after the modification. The value can be up to 32 KB in length.
    shared_ptr<string> groupInfo_ {};
    // Specifies whether to change the group administrators.
    shared_ptr<bool> modifyAdmin_ {};
    // Specifies whether to modify the additional information about the group.
    shared_ptr<bool> modifyInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
