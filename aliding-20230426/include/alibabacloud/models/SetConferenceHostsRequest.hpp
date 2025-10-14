// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCONFERENCEHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCONFERENCEHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetConferenceHostsRequestTenantContext.hpp>
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
    virtual bool empty() const override { return this->operationType_ == nullptr
        && return this->tenantContext_ == nullptr && return this->userIds_ == nullptr && return this->conferenceId_ == nullptr; };
    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SetConferenceHostsRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const SetConferenceHostsRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, SetConferenceHostsRequestTenantContext) };
    inline SetConferenceHostsRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, SetConferenceHostsRequestTenantContext) };
    inline SetConferenceHostsRequest& setTenantContext(const SetConferenceHostsRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline SetConferenceHostsRequest& setTenantContext(SetConferenceHostsRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline SetConferenceHostsRequest& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline SetConferenceHostsRequest& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline SetConferenceHostsRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<SetConferenceHostsRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> userIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
