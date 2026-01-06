// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYREQUEST_HPP_
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
  class QueryMinutesSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(summaryTypeList, summaryTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(summaryTypeList, summaryTypeList_);
    };
    QueryMinutesSummaryRequest() = default ;
    QueryMinutesSummaryRequest(const QueryMinutesSummaryRequest &) = default ;
    QueryMinutesSummaryRequest(QueryMinutesSummaryRequest &&) = default ;
    QueryMinutesSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesSummaryRequest() = default ;
    QueryMinutesSummaryRequest& operator=(const QueryMinutesSummaryRequest &) = default ;
    QueryMinutesSummaryRequest& operator=(QueryMinutesSummaryRequest &&) = default ;
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

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->conferenceId_ == nullptr && this->summaryTypeList_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryMinutesSummaryRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryMinutesSummaryRequest::TenantContext) };
    inline QueryMinutesSummaryRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryMinutesSummaryRequest::TenantContext) };
    inline QueryMinutesSummaryRequest& setTenantContext(const QueryMinutesSummaryRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryMinutesSummaryRequest& setTenantContext(QueryMinutesSummaryRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryMinutesSummaryRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // summaryTypeList Field Functions 
    bool hasSummaryTypeList() const { return this->summaryTypeList_ != nullptr;};
    void deleteSummaryTypeList() { this->summaryTypeList_ = nullptr;};
    inline const vector<string> & getSummaryTypeList() const { DARABONBA_PTR_GET_CONST(summaryTypeList_, vector<string>) };
    inline vector<string> getSummaryTypeList() { DARABONBA_PTR_GET(summaryTypeList_, vector<string>) };
    inline QueryMinutesSummaryRequest& setSummaryTypeList(const vector<string> & summaryTypeList) { DARABONBA_PTR_SET_VALUE(summaryTypeList_, summaryTypeList) };
    inline QueryMinutesSummaryRequest& setSummaryTypeList(vector<string> && summaryTypeList) { DARABONBA_PTR_SET_RVALUE(summaryTypeList_, summaryTypeList) };


  protected:
    shared_ptr<QueryMinutesSummaryRequest::TenantContext> tenantContext_ {};
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
    shared_ptr<vector<string>> summaryTypeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
