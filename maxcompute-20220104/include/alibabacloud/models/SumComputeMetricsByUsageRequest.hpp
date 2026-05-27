// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYUSAGEREQUEST_HPP_
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
  class SumComputeMetricsByUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumComputeMetricsByUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(usageType, usageType_);
    };
    friend void from_json(const Darabonba::Json& j, SumComputeMetricsByUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(usageType, usageType_);
    };
    SumComputeMetricsByUsageRequest() = default ;
    SumComputeMetricsByUsageRequest(const SumComputeMetricsByUsageRequest &) = default ;
    SumComputeMetricsByUsageRequest(SumComputeMetricsByUsageRequest &&) = default ;
    SumComputeMetricsByUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumComputeMetricsByUsageRequest() = default ;
    SumComputeMetricsByUsageRequest& operator=(const SumComputeMetricsByUsageRequest &) = default ;
    SumComputeMetricsByUsageRequest& operator=(SumComputeMetricsByUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->projectNames_ == nullptr && this->startDate_ == nullptr && this->usageType_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline SumComputeMetricsByUsageRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline SumComputeMetricsByUsageRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline SumComputeMetricsByUsageRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline SumComputeMetricsByUsageRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline SumComputeMetricsByUsageRequest& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


  protected:
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<vector<string>> projectNames_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> usageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
