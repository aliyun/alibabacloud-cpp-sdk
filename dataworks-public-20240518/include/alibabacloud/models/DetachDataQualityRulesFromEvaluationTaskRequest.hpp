// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATAQUALITYRULESFROMEVALUATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATAQUALITYRULESFROMEVALUATIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DetachDataQualityRulesFromEvaluationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDataQualityRulesFromEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_TO_JSON(DataQualityRuleIds, dataQualityRuleIds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDataQualityRulesFromEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_FROM_JSON(DataQualityRuleIds, dataQualityRuleIds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DetachDataQualityRulesFromEvaluationTaskRequest() = default ;
    DetachDataQualityRulesFromEvaluationTaskRequest(const DetachDataQualityRulesFromEvaluationTaskRequest &) = default ;
    DetachDataQualityRulesFromEvaluationTaskRequest(DetachDataQualityRulesFromEvaluationTaskRequest &&) = default ;
    DetachDataQualityRulesFromEvaluationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDataQualityRulesFromEvaluationTaskRequest() = default ;
    DetachDataQualityRulesFromEvaluationTaskRequest& operator=(const DetachDataQualityRulesFromEvaluationTaskRequest &) = default ;
    DetachDataQualityRulesFromEvaluationTaskRequest& operator=(DetachDataQualityRulesFromEvaluationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityEvaluationTaskId_ == nullptr
        && return this->dataQualityRuleIds_ == nullptr && return this->projectId_ == nullptr; };
    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t dataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline DetachDataQualityRulesFromEvaluationTaskRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // dataQualityRuleIds Field Functions 
    bool hasDataQualityRuleIds() const { return this->dataQualityRuleIds_ != nullptr;};
    void deleteDataQualityRuleIds() { this->dataQualityRuleIds_ = nullptr;};
    inline const vector<int64_t> & dataQualityRuleIds() const { DARABONBA_PTR_GET_CONST(dataQualityRuleIds_, vector<int64_t>) };
    inline vector<int64_t> dataQualityRuleIds() { DARABONBA_PTR_GET(dataQualityRuleIds_, vector<int64_t>) };
    inline DetachDataQualityRulesFromEvaluationTaskRequest& setDataQualityRuleIds(const vector<int64_t> & dataQualityRuleIds) { DARABONBA_PTR_SET_VALUE(dataQualityRuleIds_, dataQualityRuleIds) };
    inline DetachDataQualityRulesFromEvaluationTaskRequest& setDataQualityRuleIds(vector<int64_t> && dataQualityRuleIds) { DARABONBA_PTR_SET_RVALUE(dataQualityRuleIds_, dataQualityRuleIds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DetachDataQualityRulesFromEvaluationTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the data quality monitoring task that is associated with the rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataQualityEvaluationTaskId_ = nullptr;
    // The IDs of the monitoring rules.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> dataQualityRuleIds_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace configuration page to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
