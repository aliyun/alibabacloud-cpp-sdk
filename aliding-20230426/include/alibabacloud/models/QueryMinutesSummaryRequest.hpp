// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMinutesSummaryRequestTenantContext.hpp>
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
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->conferenceId_ == nullptr && return this->summaryTypeList_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryMinutesSummaryRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryMinutesSummaryRequestTenantContext) };
    inline QueryMinutesSummaryRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryMinutesSummaryRequestTenantContext) };
    inline QueryMinutesSummaryRequest& setTenantContext(const QueryMinutesSummaryRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryMinutesSummaryRequest& setTenantContext(QueryMinutesSummaryRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryMinutesSummaryRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // summaryTypeList Field Functions 
    bool hasSummaryTypeList() const { return this->summaryTypeList_ != nullptr;};
    void deleteSummaryTypeList() { this->summaryTypeList_ = nullptr;};
    inline const vector<string> & summaryTypeList() const { DARABONBA_PTR_GET_CONST(summaryTypeList_, vector<string>) };
    inline vector<string> summaryTypeList() { DARABONBA_PTR_GET(summaryTypeList_, vector<string>) };
    inline QueryMinutesSummaryRequest& setSummaryTypeList(const vector<string> & summaryTypeList) { DARABONBA_PTR_SET_VALUE(summaryTypeList_, summaryTypeList) };
    inline QueryMinutesSummaryRequest& setSummaryTypeList(vector<string> && summaryTypeList) { DARABONBA_PTR_SET_RVALUE(summaryTypeList_, summaryTypeList) };


  protected:
    std::shared_ptr<QueryMinutesSummaryRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<vector<string>> summaryTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
