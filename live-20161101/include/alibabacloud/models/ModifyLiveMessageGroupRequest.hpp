// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEMESSAGEGROUPREQUEST_HPP_
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
  class ModifyLiveMessageGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminList, adminList_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(ModifyAdmin, modifyAdmin_);
      DARABONBA_PTR_TO_JSON(ModifyInfo, modifyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveMessageGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DataCenter, dataCenter_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(ModifyAdmin, modifyAdmin_);
      DARABONBA_PTR_FROM_JSON(ModifyInfo, modifyInfo_);
    };
    ModifyLiveMessageGroupRequest() = default ;
    ModifyLiveMessageGroupRequest(const ModifyLiveMessageGroupRequest &) = default ;
    ModifyLiveMessageGroupRequest(ModifyLiveMessageGroupRequest &&) = default ;
    ModifyLiveMessageGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveMessageGroupRequest() = default ;
    ModifyLiveMessageGroupRequest& operator=(const ModifyLiveMessageGroupRequest &) = default ;
    ModifyLiveMessageGroupRequest& operator=(ModifyLiveMessageGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminList_ != nullptr
        && this->appId_ != nullptr && this->dataCenter_ != nullptr && this->groupId_ != nullptr && this->groupInfo_ != nullptr && this->modifyAdmin_ != nullptr
        && this->modifyInfo_ != nullptr; };
    // adminList Field Functions 
    bool hasAdminList() const { return this->adminList_ != nullptr;};
    void deleteAdminList() { this->adminList_ = nullptr;};
    inline const vector<string> & adminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<string>) };
    inline vector<string> adminList() { DARABONBA_PTR_GET(adminList_, vector<string>) };
    inline ModifyLiveMessageGroupRequest& setAdminList(const vector<string> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
    inline ModifyLiveMessageGroupRequest& setAdminList(vector<string> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyLiveMessageGroupRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // dataCenter Field Functions 
    bool hasDataCenter() const { return this->dataCenter_ != nullptr;};
    void deleteDataCenter() { this->dataCenter_ = nullptr;};
    inline string dataCenter() const { DARABONBA_PTR_GET_DEFAULT(dataCenter_, "") };
    inline ModifyLiveMessageGroupRequest& setDataCenter(string dataCenter) { DARABONBA_PTR_SET_VALUE(dataCenter_, dataCenter) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyLiveMessageGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline string groupInfo() const { DARABONBA_PTR_GET_DEFAULT(groupInfo_, "") };
    inline ModifyLiveMessageGroupRequest& setGroupInfo(string groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };


    // modifyAdmin Field Functions 
    bool hasModifyAdmin() const { return this->modifyAdmin_ != nullptr;};
    void deleteModifyAdmin() { this->modifyAdmin_ = nullptr;};
    inline bool modifyAdmin() const { DARABONBA_PTR_GET_DEFAULT(modifyAdmin_, false) };
    inline ModifyLiveMessageGroupRequest& setModifyAdmin(bool modifyAdmin) { DARABONBA_PTR_SET_VALUE(modifyAdmin_, modifyAdmin) };


    // modifyInfo Field Functions 
    bool hasModifyInfo() const { return this->modifyInfo_ != nullptr;};
    void deleteModifyInfo() { this->modifyInfo_ = nullptr;};
    inline bool modifyInfo() const { DARABONBA_PTR_GET_DEFAULT(modifyInfo_, false) };
    inline ModifyLiveMessageGroupRequest& setModifyInfo(bool modifyInfo) { DARABONBA_PTR_SET_VALUE(modifyInfo_, modifyInfo) };


  protected:
    // The list of administrators after your change.
    std::shared_ptr<vector<string>> adminList_ = nullptr;
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The data center. It must be the same as the data center that was specified when you called the [CreateLiveMessageApp](https://help.aliyun.com/document_detail/2848162.html) operation to create the interactive messaging application. Valid values: cn-shanghai and ap-southeast-1 (Singapore).
    std::shared_ptr<string> dataCenter_ = nullptr;
    // The group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The additional information about the group after the modification. The value can be up to 32 KB in length.
    std::shared_ptr<string> groupInfo_ = nullptr;
    // Specifies whether to change the group administrators.
    std::shared_ptr<bool> modifyAdmin_ = nullptr;
    // Specifies whether to modify the additional information about the group.
    std::shared_ptr<bool> modifyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
