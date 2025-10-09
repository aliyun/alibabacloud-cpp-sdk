// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATAQUALITYRULESTOEVALUATIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATAQUALITYRULESTOEVALUATIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class AttachDataQualityRulesToEvaluationTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDataQualityRulesToEvaluationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_TO_JSON(DataQualityRuleIds, dataQualityRuleIdsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDataQualityRulesToEvaluationTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskId, dataQualityEvaluationTaskId_);
      DARABONBA_PTR_FROM_JSON(DataQualityRuleIds, dataQualityRuleIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    AttachDataQualityRulesToEvaluationTaskShrinkRequest() = default ;
    AttachDataQualityRulesToEvaluationTaskShrinkRequest(const AttachDataQualityRulesToEvaluationTaskShrinkRequest &) = default ;
    AttachDataQualityRulesToEvaluationTaskShrinkRequest(AttachDataQualityRulesToEvaluationTaskShrinkRequest &&) = default ;
    AttachDataQualityRulesToEvaluationTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDataQualityRulesToEvaluationTaskShrinkRequest() = default ;
    AttachDataQualityRulesToEvaluationTaskShrinkRequest& operator=(const AttachDataQualityRulesToEvaluationTaskShrinkRequest &) = default ;
    AttachDataQualityRulesToEvaluationTaskShrinkRequest& operator=(AttachDataQualityRulesToEvaluationTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityEvaluationTaskId_ != nullptr
        && this->dataQualityRuleIdsShrink_ != nullptr && this->projectId_ != nullptr; };
    // dataQualityEvaluationTaskId Field Functions 
    bool hasDataQualityEvaluationTaskId() const { return this->dataQualityEvaluationTaskId_ != nullptr;};
    void deleteDataQualityEvaluationTaskId() { this->dataQualityEvaluationTaskId_ = nullptr;};
    inline int64_t dataQualityEvaluationTaskId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityEvaluationTaskId_, 0L) };
    inline AttachDataQualityRulesToEvaluationTaskShrinkRequest& setDataQualityEvaluationTaskId(int64_t dataQualityEvaluationTaskId) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskId_, dataQualityEvaluationTaskId) };


    // dataQualityRuleIdsShrink Field Functions 
    bool hasDataQualityRuleIdsShrink() const { return this->dataQualityRuleIdsShrink_ != nullptr;};
    void deleteDataQualityRuleIdsShrink() { this->dataQualityRuleIdsShrink_ = nullptr;};
    inline string dataQualityRuleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataQualityRuleIdsShrink_, "") };
    inline AttachDataQualityRulesToEvaluationTaskShrinkRequest& setDataQualityRuleIdsShrink(string dataQualityRuleIdsShrink) { DARABONBA_PTR_SET_VALUE(dataQualityRuleIdsShrink_, dataQualityRuleIdsShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AttachDataQualityRulesToEvaluationTaskShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the data quality monitoring task that is associated with the rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dataQualityEvaluationTaskId_ = nullptr;
    // The IDs of the monitoring rules.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataQualityRuleIdsShrink_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID. You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
