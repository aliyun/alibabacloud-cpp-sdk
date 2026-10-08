// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMMINGLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSwimmingLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimmingLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(EntryApp, entryApp_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateSwimmingLaneGroupRequest() = default ;
    UpdateSwimmingLaneGroupRequest(const UpdateSwimmingLaneGroupRequest &) = default ;
    UpdateSwimmingLaneGroupRequest(UpdateSwimmingLaneGroupRequest &&) = default ;
    UpdateSwimmingLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimmingLaneGroupRequest() = default ;
    UpdateSwimmingLaneGroupRequest& operator=(const UpdateSwimmingLaneGroupRequest &) = default ;
    UpdateSwimmingLaneGroupRequest& operator=(UpdateSwimmingLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->entryApp_ == nullptr && this->groupId_ == nullptr && this->name_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline UpdateSwimmingLaneGroupRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // entryApp Field Functions 
    bool hasEntryApp() const { return this->entryApp_ != nullptr;};
    void deleteEntryApp() { this->entryApp_ = nullptr;};
    inline string getEntryApp() const { DARABONBA_PTR_GET_DEFAULT(entryApp_, "") };
    inline UpdateSwimmingLaneGroupRequest& setEntryApp(string entryApp) { DARABONBA_PTR_SET_VALUE(entryApp_, entryApp) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline UpdateSwimmingLaneGroupRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSwimmingLaneGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The list of application IDs related to the lane group.
    shared_ptr<string> appIds_ {};
    // The ingress application. The application is in the EDAS:{application ID} format.
    shared_ptr<string> entryApp_ {};
    // The ID of the lane group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The name of the lane group.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
