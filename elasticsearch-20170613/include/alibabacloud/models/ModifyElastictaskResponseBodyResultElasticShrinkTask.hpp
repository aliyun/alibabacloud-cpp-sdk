// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICTASKRESPONSEBODYRESULTELASTICSHRINKTASK_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICTASKRESPONSEBODYRESULTELASTICSHRINKTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ModifyElastictaskResponseBodyResultElasticShrinkTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElastictaskResponseBodyResultElasticShrinkTask& obj) { 
      DARABONBA_PTR_TO_JSON(cronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(elasticNodeCount, elasticNodeCount_);
      DARABONBA_PTR_TO_JSON(replicaCount, replicaCount_);
      DARABONBA_PTR_TO_JSON(targetIndices, targetIndices_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElastictaskResponseBodyResultElasticShrinkTask& obj) { 
      DARABONBA_PTR_FROM_JSON(cronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(elasticNodeCount, elasticNodeCount_);
      DARABONBA_PTR_FROM_JSON(replicaCount, replicaCount_);
      DARABONBA_PTR_FROM_JSON(targetIndices, targetIndices_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
    };
    ModifyElastictaskResponseBodyResultElasticShrinkTask() = default ;
    ModifyElastictaskResponseBodyResultElasticShrinkTask(const ModifyElastictaskResponseBodyResultElasticShrinkTask &) = default ;
    ModifyElastictaskResponseBodyResultElasticShrinkTask(ModifyElastictaskResponseBodyResultElasticShrinkTask &&) = default ;
    ModifyElastictaskResponseBodyResultElasticShrinkTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElastictaskResponseBodyResultElasticShrinkTask() = default ;
    ModifyElastictaskResponseBodyResultElasticShrinkTask& operator=(const ModifyElastictaskResponseBodyResultElasticShrinkTask &) = default ;
    ModifyElastictaskResponseBodyResultElasticShrinkTask& operator=(ModifyElastictaskResponseBodyResultElasticShrinkTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cronExpression_ != nullptr
        && this->elasticNodeCount_ != nullptr && this->replicaCount_ != nullptr && this->targetIndices_ != nullptr && this->triggerType_ != nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyElastictaskResponseBodyResultElasticShrinkTask& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // elasticNodeCount Field Functions 
    bool hasElasticNodeCount() const { return this->elasticNodeCount_ != nullptr;};
    void deleteElasticNodeCount() { this->elasticNodeCount_ = nullptr;};
    inline int32_t elasticNodeCount() const { DARABONBA_PTR_GET_DEFAULT(elasticNodeCount_, 0) };
    inline ModifyElastictaskResponseBodyResultElasticShrinkTask& setElasticNodeCount(int32_t elasticNodeCount) { DARABONBA_PTR_SET_VALUE(elasticNodeCount_, elasticNodeCount) };


    // replicaCount Field Functions 
    bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
    void deleteReplicaCount() { this->replicaCount_ = nullptr;};
    inline int32_t replicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
    inline ModifyElastictaskResponseBodyResultElasticShrinkTask& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


    // targetIndices Field Functions 
    bool hasTargetIndices() const { return this->targetIndices_ != nullptr;};
    void deleteTargetIndices() { this->targetIndices_ = nullptr;};
    inline const vector<string> & targetIndices() const { DARABONBA_PTR_GET_CONST(targetIndices_, vector<string>) };
    inline vector<string> targetIndices() { DARABONBA_PTR_GET(targetIndices_, vector<string>) };
    inline ModifyElastictaskResponseBodyResultElasticShrinkTask& setTargetIndices(const vector<string> & targetIndices) { DARABONBA_PTR_SET_VALUE(targetIndices_, targetIndices) };
    inline ModifyElastictaskResponseBodyResultElasticShrinkTask& setTargetIndices(vector<string> && targetIndices) { DARABONBA_PTR_SET_RVALUE(targetIndices_, targetIndices) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ModifyElastictaskResponseBodyResultElasticShrinkTask& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<int32_t> elasticNodeCount_ = nullptr;
    std::shared_ptr<int32_t> replicaCount_ = nullptr;
    std::shared_ptr<vector<string>> targetIndices_ = nullptr;
    std::shared_ptr<string> triggerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
