// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPMINUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPMINUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StopMinutesRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StopMinutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopMinutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopMinutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    StopMinutesRequest() = default ;
    StopMinutesRequest(const StopMinutesRequest &) = default ;
    StopMinutesRequest(StopMinutesRequest &&) = default ;
    StopMinutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopMinutesRequest() = default ;
    StopMinutesRequest& operator=(const StopMinutesRequest &) = default ;
    StopMinutesRequest& operator=(StopMinutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->conferenceId_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StopMinutesRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StopMinutesRequestTenantContext) };
    inline StopMinutesRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, StopMinutesRequestTenantContext) };
    inline StopMinutesRequest& setTenantContext(const StopMinutesRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StopMinutesRequest& setTenantContext(StopMinutesRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StopMinutesRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    std::shared_ptr<StopMinutesRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
