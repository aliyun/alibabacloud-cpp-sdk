// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MUTEALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class MuteAllRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteAllRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceMute, forceMute_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(muteAction, muteAction_);
    };
    friend void from_json(const Darabonba::Json& j, MuteAllRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceMute, forceMute_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(muteAction, muteAction_);
    };
    MuteAllRequest() = default ;
    MuteAllRequest(const MuteAllRequest &) = default ;
    MuteAllRequest(MuteAllRequest &&) = default ;
    MuteAllRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteAllRequest() = default ;
    MuteAllRequest& operator=(const MuteAllRequest &) = default ;
    MuteAllRequest& operator=(MuteAllRequest &&) = default ;
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

    virtual bool empty() const override { return this->forceMute_ == nullptr
        && this->tenantContext_ == nullptr && this->conferenceId_ == nullptr && this->muteAction_ == nullptr; };
    // forceMute Field Functions 
    bool hasForceMute() const { return this->forceMute_ != nullptr;};
    void deleteForceMute() { this->forceMute_ = nullptr;};
    inline bool getForceMute() const { DARABONBA_PTR_GET_DEFAULT(forceMute_, false) };
    inline MuteAllRequest& setForceMute(bool forceMute) { DARABONBA_PTR_SET_VALUE(forceMute_, forceMute) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const MuteAllRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, MuteAllRequest::TenantContext) };
    inline MuteAllRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, MuteAllRequest::TenantContext) };
    inline MuteAllRequest& setTenantContext(const MuteAllRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline MuteAllRequest& setTenantContext(MuteAllRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline MuteAllRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // muteAction Field Functions 
    bool hasMuteAction() const { return this->muteAction_ != nullptr;};
    void deleteMuteAction() { this->muteAction_ = nullptr;};
    inline string getMuteAction() const { DARABONBA_PTR_GET_DEFAULT(muteAction_, "") };
    inline MuteAllRequest& setMuteAction(string muteAction) { DARABONBA_PTR_SET_VALUE(muteAction_, muteAction) };


  protected:
    shared_ptr<bool> forceMute_ {};
    shared_ptr<MuteAllRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    // This parameter is required.
    shared_ptr<string> muteAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
