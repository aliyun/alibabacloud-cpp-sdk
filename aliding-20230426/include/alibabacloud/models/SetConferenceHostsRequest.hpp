// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCONFERENCEHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCONFERENCEHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SetConferenceHostsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetConferenceHostsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetConferenceHostsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    SetConferenceHostsRequest() = default ;
    SetConferenceHostsRequest(const SetConferenceHostsRequest &) = default ;
    SetConferenceHostsRequest(SetConferenceHostsRequest &&) = default ;
    SetConferenceHostsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetConferenceHostsRequest() = default ;
    SetConferenceHostsRequest& operator=(const SetConferenceHostsRequest &) = default ;
    SetConferenceHostsRequest& operator=(SetConferenceHostsRequest &&) = default ;
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

    virtual bool empty() const override { return this->operationType_ == nullptr
        && this->tenantContext_ == nullptr && this->userIds_ == nullptr && this->conferenceId_ == nullptr; };
    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SetConferenceHostsRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SetConferenceHostsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SetConferenceHostsRequest::TenantContext) };
    inline SetConferenceHostsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, SetConferenceHostsRequest::TenantContext) };
    inline SetConferenceHostsRequest& setTenantContext(const SetConferenceHostsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SetConferenceHostsRequest& setTenantContext(SetConferenceHostsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline SetConferenceHostsRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline SetConferenceHostsRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline SetConferenceHostsRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    shared_ptr<SetConferenceHostsRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<vector<string>> userIds_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
