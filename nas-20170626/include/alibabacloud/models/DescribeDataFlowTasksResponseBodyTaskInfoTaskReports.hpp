// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFOTASKREPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFOTASKREPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowTasksResponseBodyTaskInfoTaskReports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksResponseBodyTaskInfoTaskReports& obj) { 
      DARABONBA_PTR_TO_JSON(Report, report_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksResponseBodyTaskInfoTaskReports& obj) { 
      DARABONBA_PTR_FROM_JSON(Report, report_);
    };
    DescribeDataFlowTasksResponseBodyTaskInfoTaskReports() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskReports(const DescribeDataFlowTasksResponseBodyTaskInfoTaskReports &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskReports(DescribeDataFlowTasksResponseBodyTaskInfoTaskReports &&) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskReports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTaskReports() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskReports& operator=(const DescribeDataFlowTasksResponseBodyTaskInfoTaskReports &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskReports& operator=(DescribeDataFlowTasksResponseBodyTaskInfoTaskReports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->report_ == nullptr; };
    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport> & report() const { DARABONBA_PTR_GET_CONST(report_, vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport>) };
    inline vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport> report() { DARABONBA_PTR_GET(report_, vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport>) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskReports& setReport(const vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport> & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskReports& setReport(vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport> && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


  protected:
    std::shared_ptr<vector<Models::DescribeDataFlowTasksResponseBodyTaskInfoTaskReportsReport>> report_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
