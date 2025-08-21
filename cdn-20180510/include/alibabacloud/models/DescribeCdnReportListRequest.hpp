// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DescribeCdnReportListRequest() = default ;
    DescribeCdnReportListRequest(const DescribeCdnReportListRequest &) = default ;
    DescribeCdnReportListRequest(DescribeCdnReportListRequest &&) = default ;
    DescribeCdnReportListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportListRequest() = default ;
    DescribeCdnReportListRequest& operator=(const DescribeCdnReportListRequest &) = default ;
    DescribeCdnReportListRequest& operator=(DescribeCdnReportListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeCdnReportListRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The ID of the operations report that you want to query. If you do not specify an ID, all operations reports are queried.
    std::shared_ptr<int64_t> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
