// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREPORTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREPORTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnReportListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnReportListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnReportListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DescribeDcdnReportListRequest() = default ;
    DescribeDcdnReportListRequest(const DescribeDcdnReportListRequest &) = default ;
    DescribeDcdnReportListRequest(DescribeDcdnReportListRequest &&) = default ;
    DescribeDcdnReportListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnReportListRequest() = default ;
    DescribeDcdnReportListRequest& operator=(const DescribeDcdnReportListRequest &) = default ;
    DescribeDcdnReportListRequest& operator=(DescribeDcdnReportListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeDcdnReportListRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The ID of the operations report that you want to query. If you do not specify an ID, all operations reports are queried.
    std::shared_ptr<int64_t> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
