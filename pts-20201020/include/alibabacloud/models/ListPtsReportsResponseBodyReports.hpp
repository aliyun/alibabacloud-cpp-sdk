// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPTSREPORTSRESPONSEBODYREPORTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPTSREPORTSRESPONSEBODYREPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListPtsReportsResponseBodyReports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPtsReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportName, reportName_);
      DARABONBA_PTR_TO_JSON(Vum, vum_);
    };
    friend void from_json(const Darabonba::Json& j, ListPtsReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportName, reportName_);
      DARABONBA_PTR_FROM_JSON(Vum, vum_);
    };
    ListPtsReportsResponseBodyReports() = default ;
    ListPtsReportsResponseBodyReports(const ListPtsReportsResponseBodyReports &) = default ;
    ListPtsReportsResponseBodyReports(ListPtsReportsResponseBodyReports &&) = default ;
    ListPtsReportsResponseBodyReports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPtsReportsResponseBodyReports() = default ;
    ListPtsReportsResponseBodyReports& operator=(const ListPtsReportsResponseBodyReports &) = default ;
    ListPtsReportsResponseBodyReports& operator=(ListPtsReportsResponseBodyReports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualStartTime_ == nullptr
        && return this->duration_ == nullptr && return this->reportId_ == nullptr && return this->reportName_ == nullptr && return this->vum_ == nullptr; };
    // actualStartTime Field Functions 
    bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
    void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
    inline int64_t actualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, 0L) };
    inline ListPtsReportsResponseBodyReports& setActualStartTime(int64_t actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListPtsReportsResponseBodyReports& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline ListPtsReportsResponseBodyReports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportName Field Functions 
    bool hasReportName() const { return this->reportName_ != nullptr;};
    void deleteReportName() { this->reportName_ = nullptr;};
    inline string reportName() const { DARABONBA_PTR_GET_DEFAULT(reportName_, "") };
    inline ListPtsReportsResponseBodyReports& setReportName(string reportName) { DARABONBA_PTR_SET_VALUE(reportName_, reportName) };


    // vum Field Functions 
    bool hasVum() const { return this->vum_ != nullptr;};
    void deleteVum() { this->vum_ = nullptr;};
    inline int64_t vum() const { DARABONBA_PTR_GET_DEFAULT(vum_, 0L) };
    inline ListPtsReportsResponseBodyReports& setVum(int64_t vum) { DARABONBA_PTR_SET_VALUE(vum_, vum) };


  protected:
    // The timestamp when the stress testing starts. Unit: ms.
    std::shared_ptr<int64_t> actualStartTime_ = nullptr;
    // The stress testing duration.
    std::shared_ptr<string> duration_ = nullptr;
    // The report ID.
    std::shared_ptr<string> reportId_ = nullptr;
    // The report name.
    std::shared_ptr<string> reportName_ = nullptr;
    // The consumed Virtual User Minutes (VUM).
    std::shared_ptr<int64_t> vum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
