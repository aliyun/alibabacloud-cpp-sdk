// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumComputeMetricsByRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumComputeMetricsByRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, SumComputeMetricsByRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    SumComputeMetricsByRecordRequest() = default ;
    SumComputeMetricsByRecordRequest(const SumComputeMetricsByRecordRequest &) = default ;
    SumComputeMetricsByRecordRequest(SumComputeMetricsByRecordRequest &&) = default ;
    SumComputeMetricsByRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumComputeMetricsByRecordRequest() = default ;
    SumComputeMetricsByRecordRequest& operator=(const SumComputeMetricsByRecordRequest &) = default ;
    SumComputeMetricsByRecordRequest& operator=(SumComputeMetricsByRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->projectNames_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline SumComputeMetricsByRecordRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline SumComputeMetricsByRecordRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline SumComputeMetricsByRecordRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline SumComputeMetricsByRecordRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<vector<string>> projectNames_ {};
    shared_ptr<int64_t> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
