// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENTDATADELIVER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENTDATADELIVER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnReportListResponseBodyContentDataDeliverReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportListResponseBodyContentDataDeliver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportListResponseBodyContentDataDeliver& obj) { 
      DARABONBA_PTR_TO_JSON(report, report_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportListResponseBodyContentDataDeliver& obj) { 
      DARABONBA_PTR_FROM_JSON(report, report_);
    };
    DescribeCdnReportListResponseBodyContentDataDeliver() = default ;
    DescribeCdnReportListResponseBodyContentDataDeliver(const DescribeCdnReportListResponseBodyContentDataDeliver &) = default ;
    DescribeCdnReportListResponseBodyContentDataDeliver(DescribeCdnReportListResponseBodyContentDataDeliver &&) = default ;
    DescribeCdnReportListResponseBodyContentDataDeliver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportListResponseBodyContentDataDeliver() = default ;
    DescribeCdnReportListResponseBodyContentDataDeliver& operator=(const DescribeCdnReportListResponseBodyContentDataDeliver &) = default ;
    DescribeCdnReportListResponseBodyContentDataDeliver& operator=(DescribeCdnReportListResponseBodyContentDataDeliver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->report_ == nullptr; };
    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const Models::DescribeCdnReportListResponseBodyContentDataDeliverReport & report() const { DARABONBA_PTR_GET_CONST(report_, Models::DescribeCdnReportListResponseBodyContentDataDeliverReport) };
    inline Models::DescribeCdnReportListResponseBodyContentDataDeliverReport report() { DARABONBA_PTR_GET(report_, Models::DescribeCdnReportListResponseBodyContentDataDeliverReport) };
    inline DescribeCdnReportListResponseBodyContentDataDeliver& setReport(const Models::DescribeCdnReportListResponseBodyContentDataDeliverReport & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeCdnReportListResponseBodyContentDataDeliver& setReport(Models::DescribeCdnReportListResponseBodyContentDataDeliverReport && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


  protected:
    std::shared_ptr<Models::DescribeCdnReportListResponseBodyContentDataDeliverReport> report_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
