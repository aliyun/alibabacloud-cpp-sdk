// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMEMBERDISPLAYNAMESYNCSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETMEMBERDISPLAYNAMESYNCSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SetMemberDisplayNameSyncStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMemberDisplayNameSyncStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetMemberDisplayNameSyncStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetMemberDisplayNameSyncStatusRequest() = default ;
    SetMemberDisplayNameSyncStatusRequest(const SetMemberDisplayNameSyncStatusRequest &) = default ;
    SetMemberDisplayNameSyncStatusRequest(SetMemberDisplayNameSyncStatusRequest &&) = default ;
    SetMemberDisplayNameSyncStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMemberDisplayNameSyncStatusRequest() = default ;
    SetMemberDisplayNameSyncStatusRequest& operator=(const SetMemberDisplayNameSyncStatusRequest &) = default ;
    SetMemberDisplayNameSyncStatusRequest& operator=(SetMemberDisplayNameSyncStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetMemberDisplayNameSyncStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status of the Member Display Name Synchronization feature. Valid values:
    // 
    // *   Enabled: The feature is enabled. This indicates that the display names specified by the management account for the members will be synchronized to the basic account information of the members. The display name information will be visible and perceptible to the members. If a notification is sent to a member, the display name of the member will be used as the appellation of the member.
    // *   Disabled: The feature is disabled. This indicates that the display names specified by the management account for the members are valid only in the resource directory and will not be updated to the basic account information of the members.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
