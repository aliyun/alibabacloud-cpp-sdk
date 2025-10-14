// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCLOUDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPCLOUDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StopCloudRecordRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StopCloudRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopCloudRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopCloudRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    StopCloudRecordRequest() = default ;
    StopCloudRecordRequest(const StopCloudRecordRequest &) = default ;
    StopCloudRecordRequest(StopCloudRecordRequest &&) = default ;
    StopCloudRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopCloudRecordRequest() = default ;
    StopCloudRecordRequest& operator=(const StopCloudRecordRequest &) = default ;
    StopCloudRecordRequest& operator=(StopCloudRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->conferenceId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StopCloudRecordRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StopCloudRecordRequestTenantContext) };
    inline StopCloudRecordRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, StopCloudRecordRequestTenantContext) };
    inline StopCloudRecordRequest& setTenantContext(const StopCloudRecordRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StopCloudRecordRequest& setTenantContext(StopCloudRecordRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StopCloudRecordRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    std::shared_ptr<StopCloudRecordRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
