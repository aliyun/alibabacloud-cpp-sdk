// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTABMETRICGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPORTABMETRICGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ExperimentReportValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ReportABMetricGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportABMetricGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentReport, experimentReport_);
      DARABONBA_PTR_TO_JSON(GroupDimension, groupDimension_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReportABMetricGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentReport, experimentReport_);
      DARABONBA_PTR_FROM_JSON(GroupDimension, groupDimension_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ReportABMetricGroupResponseBody() = default ;
    ReportABMetricGroupResponseBody(const ReportABMetricGroupResponseBody &) = default ;
    ReportABMetricGroupResponseBody(ReportABMetricGroupResponseBody &&) = default ;
    ReportABMetricGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportABMetricGroupResponseBody() = default ;
    ReportABMetricGroupResponseBody& operator=(const ReportABMetricGroupResponseBody &) = default ;
    ReportABMetricGroupResponseBody& operator=(ReportABMetricGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->experimentReport_ != nullptr
        && this->groupDimension_ != nullptr && this->requestId_ != nullptr; };
    // experimentReport Field Functions 
    bool hasExperimentReport() const { return this->experimentReport_ != nullptr;};
    void deleteExperimentReport() { this->experimentReport_ = nullptr;};
    inline const map<string, ExperimentReportValue> & experimentReport() const { DARABONBA_PTR_GET_CONST(experimentReport_, map<string, ExperimentReportValue>) };
    inline map<string, ExperimentReportValue> experimentReport() { DARABONBA_PTR_GET(experimentReport_, map<string, ExperimentReportValue>) };
    inline ReportABMetricGroupResponseBody& setExperimentReport(const map<string, ExperimentReportValue> & experimentReport) { DARABONBA_PTR_SET_VALUE(experimentReport_, experimentReport) };
    inline ReportABMetricGroupResponseBody& setExperimentReport(map<string, ExperimentReportValue> && experimentReport) { DARABONBA_PTR_SET_RVALUE(experimentReport_, experimentReport) };


    // groupDimension Field Functions 
    bool hasGroupDimension() const { return this->groupDimension_ != nullptr;};
    void deleteGroupDimension() { this->groupDimension_ = nullptr;};
    inline const vector<string> & groupDimension() const { DARABONBA_PTR_GET_CONST(groupDimension_, vector<string>) };
    inline vector<string> groupDimension() { DARABONBA_PTR_GET(groupDimension_, vector<string>) };
    inline ReportABMetricGroupResponseBody& setGroupDimension(const vector<string> & groupDimension) { DARABONBA_PTR_SET_VALUE(groupDimension_, groupDimension) };
    inline ReportABMetricGroupResponseBody& setGroupDimension(vector<string> && groupDimension) { DARABONBA_PTR_SET_RVALUE(groupDimension_, groupDimension) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReportABMetricGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<map<string, ExperimentReportValue>> experimentReport_ = nullptr;
    std::shared_ptr<vector<string>> groupDimension_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
