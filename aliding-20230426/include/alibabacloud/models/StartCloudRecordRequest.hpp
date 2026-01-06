// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->mode_ == nullptr
        && this->smallWindowPosition_ == nullptr && this->tenantContext_ == nullptr && this->conferenceId_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline StartCloudRecordRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // smallWindowPosition Field Functions 
    bool hasSmallWindowPosition() const { return this->smallWindowPosition_ != nullptr;};
    void deleteSmallWindowPosition() { this->smallWindowPosition_ = nullptr;};
    inline string getSmallWindowPosition() const { DARABONBA_PTR_GET_DEFAULT(smallWindowPosition_, "") };
    inline StartCloudRecordRequest& setSmallWindowPosition(string smallWindowPosition) { DARABONBA_PTR_SET_VALUE(smallWindowPosition_, smallWindowPosition) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StartCloudRecordRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StartCloudRecordRequest::TenantContext) };
    inline StartCloudRecordRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, StartCloudRecordRequest::TenantContext) };
    inline StartCloudRecordRequest& setTenantContext(const StartCloudRecordRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StartCloudRecordRequest& setTenantContext(StartCloudRecordRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline StartCloudRecordRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    shared_ptr<string> mode_ {};
    shared_ptr<string> smallWindowPosition_ {};
    shared_ptr<StartCloudRecordRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
