// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODYCONTENTDATADELIVER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODYCONTENTDATADELIVER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnReportResponseBodyContentDataDeliverReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportResponseBodyContentDataDeliver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportResponseBodyContentDataDeliver& obj) { 
      DARABONBA_PTR_TO_JSON(report, report_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportResponseBodyContentDataDeliver& obj) { 
      DARABONBA_PTR_FROM_JSON(report, report_);
    };
    DescribeCdnReportResponseBodyContentDataDeliver() = default ;
    DescribeCdnReportResponseBodyContentDataDeliver(const DescribeCdnReportResponseBodyContentDataDeliver &) = default ;
    DescribeCdnReportResponseBodyContentDataDeliver(DescribeCdnReportResponseBodyContentDataDeliver &&) = default ;
    DescribeCdnReportResponseBodyContentDataDeliver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportResponseBodyContentDataDeliver() = default ;
    DescribeCdnReportResponseBodyContentDataDeliver& operator=(const DescribeCdnReportResponseBodyContentDataDeliver &) = default ;
    DescribeCdnReportResponseBodyContentDataDeliver& operator=(DescribeCdnReportResponseBodyContentDataDeliver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->report_ == nullptr; };
    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const Models::DescribeCdnReportResponseBodyContentDataDeliverReport & report() const { DARABONBA_PTR_GET_CONST(report_, Models::DescribeCdnReportResponseBodyContentDataDeliverReport) };
    inline Models::DescribeCdnReportResponseBodyContentDataDeliverReport report() { DARABONBA_PTR_GET(report_, Models::DescribeCdnReportResponseBodyContentDataDeliverReport) };
    inline DescribeCdnReportResponseBodyContentDataDeliver& setReport(const Models::DescribeCdnReportResponseBodyContentDataDeliverReport & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeCdnReportResponseBodyContentDataDeliver& setReport(Models::DescribeCdnReportResponseBodyContentDataDeliverReport && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


  protected:
    std::shared_ptr<Models::DescribeCdnReportResponseBodyContentDataDeliverReport> report_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
