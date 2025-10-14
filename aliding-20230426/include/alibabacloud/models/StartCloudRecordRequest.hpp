// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCloudRecordRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StartCloudRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(SmallWindowPosition, smallWindowPosition_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(SmallWindowPosition, smallWindowPosition_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    StartCloudRecordRequest() = default ;
    StartCloudRecordRequest(const StartCloudRecordRequest &) = default ;
    StartCloudRecordRequest(StartCloudRecordRequest &&) = default ;
    StartCloudRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordRequest() = default ;
    StartCloudRecordRequest& operator=(const StartCloudRecordRequest &) = default ;
    StartCloudRecordRequest& operator=(StartCloudRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->smallWindowPosition_ == nullptr && return this->tenantContext_ == nullptr && return this->conferenceId_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline StartCloudRecordRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // smallWindowPosition Field Functions 
    bool hasSmallWindowPosition() const { return this->smallWindowPosition_ != nullptr;};
    void deleteSmallWindowPosition() { this->smallWindowPosition_ = nullptr;};
    inline string smallWindowPosition() const { DARABONBA_PTR_GET_DEFAULT(smallWindowPosition_, "") };
    inline StartCloudRecordRequest& setSmallWindowPosition(string smallWindowPosition) { DARABONBA_PTR_SET_VALUE(smallWindowPosition_, smallWindowPosition) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StartCloudRecordRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StartCloudRecordRequestTenantContext) };
    inline StartCloudRecordRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, StartCloudRecordRequestTenantContext) };
    inline StartCloudRecordRequest& setTenantContext(const StartCloudRecordRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StartCloudRecordRequest& setTenantContext(StartCloudRecordRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StartCloudRecordRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> smallWindowPosition_ = nullptr;
    std::shared_ptr<StartCloudRecordRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
