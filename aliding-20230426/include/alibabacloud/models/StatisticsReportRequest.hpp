// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATISTICSREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STATISTICSREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StatisticsReportRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class StatisticsReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatisticsReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, StatisticsReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    StatisticsReportRequest() = default ;
    StatisticsReportRequest(const StatisticsReportRequest &) = default ;
    StatisticsReportRequest(StatisticsReportRequest &&) = default ;
    StatisticsReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatisticsReportRequest() = default ;
    StatisticsReportRequest& operator=(const StatisticsReportRequest &) = default ;
    StatisticsReportRequest& operator=(StatisticsReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline StatisticsReportRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const StatisticsReportRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, StatisticsReportRequestTenantContext) };
    inline StatisticsReportRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, StatisticsReportRequestTenantContext) };
    inline StatisticsReportRequest& setTenantContext(const StatisticsReportRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline StatisticsReportRequest& setTenantContext(StatisticsReportRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
    std::shared_ptr<StatisticsReportRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
