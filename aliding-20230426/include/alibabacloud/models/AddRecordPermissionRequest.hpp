// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRECORDPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRECORDPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddRecordPermissionRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddRecordPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRecordPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRecordPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddRecordPermissionRequest() = default ;
    AddRecordPermissionRequest(const AddRecordPermissionRequest &) = default ;
    AddRecordPermissionRequest(AddRecordPermissionRequest &&) = default ;
    AddRecordPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRecordPermissionRequest() = default ;
    AddRecordPermissionRequest& operator=(const AddRecordPermissionRequest &) = default ;
    AddRecordPermissionRequest& operator=(AddRecordPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->conferenceId_ != nullptr && this->tenantContext_ != nullptr && this->userId_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline AddRecordPermissionRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline AddRecordPermissionRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const AddRecordPermissionRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, AddRecordPermissionRequestTenantContext) };
    inline AddRecordPermissionRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, AddRecordPermissionRequestTenantContext) };
    inline AddRecordPermissionRequest& setTenantContext(const AddRecordPermissionRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline AddRecordPermissionRequest& setTenantContext(AddRecordPermissionRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddRecordPermissionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<AddRecordPermissionRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
