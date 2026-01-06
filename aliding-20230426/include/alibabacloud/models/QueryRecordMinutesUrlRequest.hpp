// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDMINUTESURLREQUEST_HPP_
#include <darabonba/Core.hpp>
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

    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->conferenceId_ == nullptr && this->tenantContext_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryRecordMinutesUrlRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryRecordMinutesUrlRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryRecordMinutesUrlRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryRecordMinutesUrlRequest::TenantContext) };
    inline QueryRecordMinutesUrlRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryRecordMinutesUrlRequest::TenantContext) };
    inline QueryRecordMinutesUrlRequest& setTenantContext(const QueryRecordMinutesUrlRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryRecordMinutesUrlRequest& setTenantContext(QueryRecordMinutesUrlRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizType_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<QueryRecordMinutesUrlRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
