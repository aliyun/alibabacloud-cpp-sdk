// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTQUOTAUTILIZATIONREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTQUOTAUTILIZATIONREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class StartQuotaUtilizationReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartQuotaUtilizationReportRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, StartQuotaUtilizationReportRequest& obj) { 
      (void)j; (void)obj; 
    };
    StartQuotaUtilizationReportRequest() = default ;
    StartQuotaUtilizationReportRequest(const StartQuotaUtilizationReportRequest &) = default ;
    StartQuotaUtilizationReportRequest(StartQuotaUtilizationReportRequest &&) = default ;
    StartQuotaUtilizationReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartQuotaUtilizationReportRequest() = default ;
    StartQuotaUtilizationReportRequest& operator=(const StartQuotaUtilizationReportRequest &) = default ;
    StartQuotaUtilizationReportRequest& operator=(StartQuotaUtilizationReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
