// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceGroupInspectReportDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceGroupInspectReportDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ReportDetail, reportDetail_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceGroupInspectReportDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportDetail, reportDetail_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    GetInstanceGroupInspectReportDetailResponseBodyData() = default ;
    GetInstanceGroupInspectReportDetailResponseBodyData(const GetInstanceGroupInspectReportDetailResponseBodyData &) = default ;
    GetInstanceGroupInspectReportDetailResponseBodyData(GetInstanceGroupInspectReportDetailResponseBodyData &&) = default ;
    GetInstanceGroupInspectReportDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceGroupInspectReportDetailResponseBodyData() = default ;
    GetInstanceGroupInspectReportDetailResponseBodyData& operator=(const GetInstanceGroupInspectReportDetailResponseBodyData &) = default ;
    GetInstanceGroupInspectReportDetailResponseBodyData& operator=(GetInstanceGroupInspectReportDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reportDetail_ == nullptr
        && return this->reportId_ == nullptr; };
    // reportDetail Field Functions 
    bool hasReportDetail() const { return this->reportDetail_ != nullptr;};
    void deleteReportDetail() { this->reportDetail_ = nullptr;};
    inline string reportDetail() const { DARABONBA_PTR_GET_DEFAULT(reportDetail_, "") };
    inline GetInstanceGroupInspectReportDetailResponseBodyData& setReportDetail(string reportDetail) { DARABONBA_PTR_SET_VALUE(reportDetail_, reportDetail) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetInstanceGroupInspectReportDetailResponseBodyData& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    std::shared_ptr<string> reportDetail_ = nullptr;
    std::shared_ptr<string> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
