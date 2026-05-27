// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYTYPEREQUEST_HPP_
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
  class SumStorageMetricsByTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumStorageMetricsByTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(statsType, statsType_);
    };
    friend void from_json(const Darabonba::Json& j, SumStorageMetricsByTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(statsType, statsType_);
    };
    SumStorageMetricsByTypeRequest() = default ;
    SumStorageMetricsByTypeRequest(const SumStorageMetricsByTypeRequest &) = default ;
    SumStorageMetricsByTypeRequest(SumStorageMetricsByTypeRequest &&) = default ;
    SumStorageMetricsByTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumStorageMetricsByTypeRequest() = default ;
    SumStorageMetricsByTypeRequest& operator=(const SumStorageMetricsByTypeRequest &) = default ;
    SumStorageMetricsByTypeRequest& operator=(SumStorageMetricsByTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->projectNames_ == nullptr && this->startDate_ == nullptr && this->statsType_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline SumStorageMetricsByTypeRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline SumStorageMetricsByTypeRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline SumStorageMetricsByTypeRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline SumStorageMetricsByTypeRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statsType Field Functions 
    bool hasStatsType() const { return this->statsType_ != nullptr;};
    void deleteStatsType() { this->statsType_ = nullptr;};
    inline string getStatsType() const { DARABONBA_PTR_GET_DEFAULT(statsType_, "") };
    inline SumStorageMetricsByTypeRequest& setStatsType(string statsType) { DARABONBA_PTR_SET_VALUE(statsType_, statsType) };


  protected:
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<vector<string>> projectNames_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> statsType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
