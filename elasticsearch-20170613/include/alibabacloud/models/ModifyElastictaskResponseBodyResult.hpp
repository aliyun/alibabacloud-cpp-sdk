// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICTASKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICTASKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyElastictaskResponseBodyResultElasticExpansionTask.hpp>
#include <alibabacloud/models/ModifyElastictaskResponseBodyResultElasticShrinkTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ModifyElastictaskResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElastictaskResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(elasticExpansionTask, elasticExpansionTask_);
      DARABONBA_PTR_TO_JSON(elasticShrinkTask, elasticShrinkTask_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElastictaskResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticExpansionTask, elasticExpansionTask_);
      DARABONBA_PTR_FROM_JSON(elasticShrinkTask, elasticShrinkTask_);
    };
    ModifyElastictaskResponseBodyResult() = default ;
    ModifyElastictaskResponseBodyResult(const ModifyElastictaskResponseBodyResult &) = default ;
    ModifyElastictaskResponseBodyResult(ModifyElastictaskResponseBodyResult &&) = default ;
    ModifyElastictaskResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElastictaskResponseBodyResult() = default ;
    ModifyElastictaskResponseBodyResult& operator=(const ModifyElastictaskResponseBodyResult &) = default ;
    ModifyElastictaskResponseBodyResult& operator=(ModifyElastictaskResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticExpansionTask_ != nullptr
        && this->elasticShrinkTask_ != nullptr; };
    // elasticExpansionTask Field Functions 
    bool hasElasticExpansionTask() const { return this->elasticExpansionTask_ != nullptr;};
    void deleteElasticExpansionTask() { this->elasticExpansionTask_ = nullptr;};
    inline const Models::ModifyElastictaskResponseBodyResultElasticExpansionTask & elasticExpansionTask() const { DARABONBA_PTR_GET_CONST(elasticExpansionTask_, Models::ModifyElastictaskResponseBodyResultElasticExpansionTask) };
    inline Models::ModifyElastictaskResponseBodyResultElasticExpansionTask elasticExpansionTask() { DARABONBA_PTR_GET(elasticExpansionTask_, Models::ModifyElastictaskResponseBodyResultElasticExpansionTask) };
    inline ModifyElastictaskResponseBodyResult& setElasticExpansionTask(const Models::ModifyElastictaskResponseBodyResultElasticExpansionTask & elasticExpansionTask) { DARABONBA_PTR_SET_VALUE(elasticExpansionTask_, elasticExpansionTask) };
    inline ModifyElastictaskResponseBodyResult& setElasticExpansionTask(Models::ModifyElastictaskResponseBodyResultElasticExpansionTask && elasticExpansionTask) { DARABONBA_PTR_SET_RVALUE(elasticExpansionTask_, elasticExpansionTask) };


    // elasticShrinkTask Field Functions 
    bool hasElasticShrinkTask() const { return this->elasticShrinkTask_ != nullptr;};
    void deleteElasticShrinkTask() { this->elasticShrinkTask_ = nullptr;};
    inline const Models::ModifyElastictaskResponseBodyResultElasticShrinkTask & elasticShrinkTask() const { DARABONBA_PTR_GET_CONST(elasticShrinkTask_, Models::ModifyElastictaskResponseBodyResultElasticShrinkTask) };
    inline Models::ModifyElastictaskResponseBodyResultElasticShrinkTask elasticShrinkTask() { DARABONBA_PTR_GET(elasticShrinkTask_, Models::ModifyElastictaskResponseBodyResultElasticShrinkTask) };
    inline ModifyElastictaskResponseBodyResult& setElasticShrinkTask(const Models::ModifyElastictaskResponseBodyResultElasticShrinkTask & elasticShrinkTask) { DARABONBA_PTR_SET_VALUE(elasticShrinkTask_, elasticShrinkTask) };
    inline ModifyElastictaskResponseBodyResult& setElasticShrinkTask(Models::ModifyElastictaskResponseBodyResultElasticShrinkTask && elasticShrinkTask) { DARABONBA_PTR_SET_RVALUE(elasticShrinkTask_, elasticShrinkTask) };


  protected:
    std::shared_ptr<Models::ModifyElastictaskResponseBodyResultElasticExpansionTask> elasticExpansionTask_ = nullptr;
    std::shared_ptr<Models::ModifyElastictaskResponseBodyResultElasticShrinkTask> elasticShrinkTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
