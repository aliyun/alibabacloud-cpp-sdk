// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRecordMinutesUrlRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryRecordMinutesUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordMinutesUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordMinutesUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    QueryRecordMinutesUrlRequest() = default ;
    QueryRecordMinutesUrlRequest(const QueryRecordMinutesUrlRequest &) = default ;
    QueryRecordMinutesUrlRequest(QueryRecordMinutesUrlRequest &&) = default ;
    QueryRecordMinutesUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordMinutesUrlRequest() = default ;
    QueryRecordMinutesUrlRequest& operator=(const QueryRecordMinutesUrlRequest &) = default ;
    QueryRecordMinutesUrlRequest& operator=(QueryRecordMinutesUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->conferenceId_ == nullptr && return this->tenantContext_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryRecordMinutesUrlRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryRecordMinutesUrlRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryRecordMinutesUrlRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryRecordMinutesUrlRequestTenantContext) };
    inline QueryRecordMinutesUrlRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryRecordMinutesUrlRequestTenantContext) };
    inline QueryRecordMinutesUrlRequest& setTenantContext(const QueryRecordMinutesUrlRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryRecordMinutesUrlRequest& setTenantContext(QueryRecordMinutesUrlRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<QueryRecordMinutesUrlRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
