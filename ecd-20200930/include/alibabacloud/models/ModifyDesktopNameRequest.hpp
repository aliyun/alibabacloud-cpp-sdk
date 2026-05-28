// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPNAMEREQUEST_HPP_
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
  class ModifyDesktopNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(NewDesktopName, newDesktopName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserAssignMode, userAssignMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(NewDesktopName, newDesktopName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserAssignMode, userAssignMode_);
    };
    ModifyDesktopNameRequest() = default ;
    ModifyDesktopNameRequest(const ModifyDesktopNameRequest &) = default ;
    ModifyDesktopNameRequest(ModifyDesktopNameRequest &&) = default ;
    ModifyDesktopNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopNameRequest() = default ;
    ModifyDesktopNameRequest& operator=(const ModifyDesktopNameRequest &) = default ;
    ModifyDesktopNameRequest& operator=(ModifyDesktopNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopIds_ == nullptr && this->newDesktopName_ == nullptr && this->regionId_ == nullptr && this->userAssignMode_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopNameRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & getDesktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> getDesktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline ModifyDesktopNameRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline ModifyDesktopNameRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // newDesktopName Field Functions 
    bool hasNewDesktopName() const { return this->newDesktopName_ != nullptr;};
    void deleteNewDesktopName() { this->newDesktopName_ = nullptr;};
    inline string getNewDesktopName() const { DARABONBA_PTR_GET_DEFAULT(newDesktopName_, "") };
    inline ModifyDesktopNameRequest& setNewDesktopName(string newDesktopName) { DARABONBA_PTR_SET_VALUE(newDesktopName_, newDesktopName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopNameRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userAssignMode Field Functions 
    bool hasUserAssignMode() const { return this->userAssignMode_ != nullptr;};
    void deleteUserAssignMode() { this->userAssignMode_ = nullptr;};
    inline string getUserAssignMode() const { DARABONBA_PTR_GET_DEFAULT(userAssignMode_, "") };
    inline ModifyDesktopNameRequest& setUserAssignMode(string userAssignMode) { DARABONBA_PTR_SET_VALUE(userAssignMode_, userAssignMode) };


  protected:
    // The ID of the cloud computer.
    shared_ptr<string> desktopId_ {};
    shared_ptr<vector<string>> desktopIds_ {};
    // The new name of the cloud computer. The name of the cloud computer must meet the following requirements:
    // 
    // *   The name must be 1 to 64 characters in length.
    // *   The name must start with a letter but cannot start with `http://` or `https://`.
    // *   The name can only contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> newDesktopName_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> userAssignMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
