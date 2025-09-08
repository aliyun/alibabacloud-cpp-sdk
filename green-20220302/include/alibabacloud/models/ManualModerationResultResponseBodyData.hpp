// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MANUALMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ManualModerationResultResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ManualModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ManualModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ManualModerationResultResponseBodyData() = default ;
    ManualModerationResultResponseBodyData(const ManualModerationResultResponseBodyData &) = default ;
    ManualModerationResultResponseBodyData(ManualModerationResultResponseBodyData &&) = default ;
    ManualModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualModerationResultResponseBodyData() = default ;
    ManualModerationResultResponseBodyData& operator=(const ManualModerationResultResponseBodyData &) = default ;
    ManualModerationResultResponseBodyData& operator=(ManualModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->result_ != nullptr && this->riskLevel_ != nullptr && this->taskId_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ManualModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ManualModerationResultResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ManualModerationResultResponseBodyDataResult>) };
    inline vector<Models::ManualModerationResultResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ManualModerationResultResponseBodyDataResult>) };
    inline ManualModerationResultResponseBodyData& setResult(const vector<Models::ManualModerationResultResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ManualModerationResultResponseBodyData& setResult(vector<Models::ManualModerationResultResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ManualModerationResultResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ManualModerationResultResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The value of dataId passed during the API request. This field will not be present if it was not provided during the request.
    std::shared_ptr<string> dataId_ = nullptr;
    // Detailed label results.
    std::shared_ptr<vector<Models::ManualModerationResultResponseBodyDataResult>> result_ = nullptr;
    // Risk level, returned based on the set high and low risk scores. Possible values include:
    // 
    // - high: High risk
    //  
    // - low: Low risk
    // 
    //  - none: No risk detected
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Task ID
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
