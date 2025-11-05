// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnReportListResponseBodyContentDataDeliver.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportListResponseBodyContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportListResponseBodyContentData& obj) { 
      DARABONBA_PTR_TO_JSON(deliver, deliver_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportListResponseBodyContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(deliver, deliver_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
    };
    DescribeCdnReportListResponseBodyContentData() = default ;
    DescribeCdnReportListResponseBodyContentData(const DescribeCdnReportListResponseBodyContentData &) = default ;
    DescribeCdnReportListResponseBodyContentData(DescribeCdnReportListResponseBodyContentData &&) = default ;
    DescribeCdnReportListResponseBodyContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportListResponseBodyContentData() = default ;
    DescribeCdnReportListResponseBodyContentData& operator=(const DescribeCdnReportListResponseBodyContentData &) = default ;
    DescribeCdnReportListResponseBodyContentData& operator=(DescribeCdnReportListResponseBodyContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliver_ == nullptr
        && return this->reportId_ == nullptr; };
    // deliver Field Functions 
    bool hasDeliver() const { return this->deliver_ != nullptr;};
    void deleteDeliver() { this->deliver_ = nullptr;};
    inline const Models::DescribeCdnReportListResponseBodyContentDataDeliver & deliver() const { DARABONBA_PTR_GET_CONST(deliver_, Models::DescribeCdnReportListResponseBodyContentDataDeliver) };
    inline Models::DescribeCdnReportListResponseBodyContentDataDeliver deliver() { DARABONBA_PTR_GET(deliver_, Models::DescribeCdnReportListResponseBodyContentDataDeliver) };
    inline DescribeCdnReportListResponseBodyContentData& setDeliver(const Models::DescribeCdnReportListResponseBodyContentDataDeliver & deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };
    inline DescribeCdnReportListResponseBodyContentData& setDeliver(Models::DescribeCdnReportListResponseBodyContentDataDeliver && deliver) { DARABONBA_PTR_SET_RVALUE(deliver_, deliver) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeCdnReportListResponseBodyContentData& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    std::shared_ptr<Models::DescribeCdnReportListResponseBodyContentDataDeliver> deliver_ = nullptr;
    std::shared_ptr<int64_t> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
