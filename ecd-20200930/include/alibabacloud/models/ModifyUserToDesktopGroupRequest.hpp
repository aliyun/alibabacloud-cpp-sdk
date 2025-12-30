// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERTODESKTOPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERTODESKTOPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyUserToDesktopGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserToDesktopGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(NewEndUserIds, newEndUserIds_);
      DARABONBA_PTR_TO_JSON(OldEndUserIds, oldEndUserIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserToDesktopGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(NewEndUserIds, newEndUserIds_);
      DARABONBA_PTR_FROM_JSON(OldEndUserIds, oldEndUserIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyUserToDesktopGroupRequest() = default ;
    ModifyUserToDesktopGroupRequest(const ModifyUserToDesktopGroupRequest &) = default ;
    ModifyUserToDesktopGroupRequest(ModifyUserToDesktopGroupRequest &&) = default ;
    ModifyUserToDesktopGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserToDesktopGroupRequest() = default ;
    ModifyUserToDesktopGroupRequest& operator=(const ModifyUserToDesktopGroupRequest &) = default ;
    ModifyUserToDesktopGroupRequest& operator=(ModifyUserToDesktopGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->newEndUserIds_ == nullptr && this->oldEndUserIds_ == nullptr && this->regionId_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline ModifyUserToDesktopGroupRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // newEndUserIds Field Functions 
    bool hasNewEndUserIds() const { return this->newEndUserIds_ != nullptr;};
    void deleteNewEndUserIds() { this->newEndUserIds_ = nullptr;};
    inline const vector<string> & getNewEndUserIds() const { DARABONBA_PTR_GET_CONST(newEndUserIds_, vector<string>) };
    inline vector<string> getNewEndUserIds() { DARABONBA_PTR_GET(newEndUserIds_, vector<string>) };
    inline ModifyUserToDesktopGroupRequest& setNewEndUserIds(const vector<string> & newEndUserIds) { DARABONBA_PTR_SET_VALUE(newEndUserIds_, newEndUserIds) };
    inline ModifyUserToDesktopGroupRequest& setNewEndUserIds(vector<string> && newEndUserIds) { DARABONBA_PTR_SET_RVALUE(newEndUserIds_, newEndUserIds) };


    // oldEndUserIds Field Functions 
    bool hasOldEndUserIds() const { return this->oldEndUserIds_ != nullptr;};
    void deleteOldEndUserIds() { this->oldEndUserIds_ = nullptr;};
    inline const vector<string> & getOldEndUserIds() const { DARABONBA_PTR_GET_CONST(oldEndUserIds_, vector<string>) };
    inline vector<string> getOldEndUserIds() { DARABONBA_PTR_GET(oldEndUserIds_, vector<string>) };
    inline ModifyUserToDesktopGroupRequest& setOldEndUserIds(const vector<string> & oldEndUserIds) { DARABONBA_PTR_SET_VALUE(oldEndUserIds_, oldEndUserIds) };
    inline ModifyUserToDesktopGroupRequest& setOldEndUserIds(vector<string> && oldEndUserIds) { DARABONBA_PTR_SET_RVALUE(oldEndUserIds_, oldEndUserIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserToDesktopGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cloud computer share.
    // 
    // This parameter is required.
    shared_ptr<string> desktopGroupId_ {};
    // The IDs of the end users that you want to add. You can configure 1 to 500 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> newEndUserIds_ {};
    // The IDs of the end users that you want to remove. You can configure 1 to 500 IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> oldEndUserIds_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
