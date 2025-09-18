// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORREPORTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORREPORTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDoctorReportsResponseBodyDataSummaryReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorReportsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorReportsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentTypes, componentTypes_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(SummaryReport, summaryReport_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorReportsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentTypes, componentTypes_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(SummaryReport, summaryReport_);
    };
    ListDoctorReportsResponseBodyData() = default ;
    ListDoctorReportsResponseBodyData(const ListDoctorReportsResponseBodyData &) = default ;
    ListDoctorReportsResponseBodyData(ListDoctorReportsResponseBodyData &&) = default ;
    ListDoctorReportsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorReportsResponseBodyData() = default ;
    ListDoctorReportsResponseBodyData& operator=(const ListDoctorReportsResponseBodyData &) = default ;
    ListDoctorReportsResponseBodyData& operator=(ListDoctorReportsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentTypes_ != nullptr
        && this->dateTime_ != nullptr && this->summaryReport_ != nullptr; };
    // componentTypes Field Functions 
    bool hasComponentTypes() const { return this->componentTypes_ != nullptr;};
    void deleteComponentTypes() { this->componentTypes_ = nullptr;};
    inline const vector<string> & componentTypes() const { DARABONBA_PTR_GET_CONST(componentTypes_, vector<string>) };
    inline vector<string> componentTypes() { DARABONBA_PTR_GET(componentTypes_, vector<string>) };
    inline ListDoctorReportsResponseBodyData& setComponentTypes(const vector<string> & componentTypes) { DARABONBA_PTR_SET_VALUE(componentTypes_, componentTypes) };
    inline ListDoctorReportsResponseBodyData& setComponentTypes(vector<string> && componentTypes) { DARABONBA_PTR_SET_RVALUE(componentTypes_, componentTypes) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListDoctorReportsResponseBodyData& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // summaryReport Field Functions 
    bool hasSummaryReport() const { return this->summaryReport_ != nullptr;};
    void deleteSummaryReport() { this->summaryReport_ = nullptr;};
    inline const Models::ListDoctorReportsResponseBodyDataSummaryReport & summaryReport() const { DARABONBA_PTR_GET_CONST(summaryReport_, Models::ListDoctorReportsResponseBodyDataSummaryReport) };
    inline Models::ListDoctorReportsResponseBodyDataSummaryReport summaryReport() { DARABONBA_PTR_GET(summaryReport_, Models::ListDoctorReportsResponseBodyDataSummaryReport) };
    inline ListDoctorReportsResponseBodyData& setSummaryReport(const Models::ListDoctorReportsResponseBodyDataSummaryReport & summaryReport) { DARABONBA_PTR_SET_VALUE(summaryReport_, summaryReport) };
    inline ListDoctorReportsResponseBodyData& setSummaryReport(Models::ListDoctorReportsResponseBodyDataSummaryReport && summaryReport) { DARABONBA_PTR_SET_RVALUE(summaryReport_, summaryReport) };


  protected:
    // The component types.
    // 
    // Valid values:
    // 
    // *   compute
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   hive
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   hdfs
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   yarn
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   oss
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   hbase
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<vector<string>> componentTypes_ = nullptr;
    // The date on which the report was generated.
    std::shared_ptr<string> dateTime_ = nullptr;
    // The summary of the report.
    std::shared_ptr<Models::ListDoctorReportsResponseBodyDataSummaryReport> summaryReport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
