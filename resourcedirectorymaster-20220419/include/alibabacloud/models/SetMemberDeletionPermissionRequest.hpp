// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETMEMBERDELETIONPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETMEMBERDELETIONPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class SetMemberDeletionPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetMemberDeletionPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SetMemberDeletionPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SetMemberDeletionPermissionRequest() = default ;
    SetMemberDeletionPermissionRequest(const SetMemberDeletionPermissionRequest &) = default ;
    SetMemberDeletionPermissionRequest(SetMemberDeletionPermissionRequest &&) = default ;
    SetMemberDeletionPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetMemberDeletionPermissionRequest() = default ;
    SetMemberDeletionPermissionRequest& operator=(const SetMemberDeletionPermissionRequest &) = default ;
    SetMemberDeletionPermissionRequest& operator=(SetMemberDeletionPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetMemberDeletionPermissionRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Specifies whether to enable the member deletion feature. Valid values:
    // 
    // *   Enabled: enables the member deletion feature.
    // *   Disabled: disables the member deletion feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
