// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELASTICTASKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETELASTICTASKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetElastictaskResponseBodyResultElasticExpansionTask.hpp>
#include <alibabacloud/models/GetElastictaskResponseBodyResultElasticShrinkTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetElastictaskResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElastictaskResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(elasticExpansionTask, elasticExpansionTask_);
      DARABONBA_PTR_TO_JSON(elasticShrinkTask, elasticShrinkTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetElastictaskResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticExpansionTask, elasticExpansionTask_);
      DARABONBA_PTR_FROM_JSON(elasticShrinkTask, elasticShrinkTask_);
    };
    GetElastictaskResponseBodyResult() = default ;
    GetElastictaskResponseBodyResult(const GetElastictaskResponseBodyResult &) = default ;
    GetElastictaskResponseBodyResult(GetElastictaskResponseBodyResult &&) = default ;
    GetElastictaskResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElastictaskResponseBodyResult() = default ;
    GetElastictaskResponseBodyResult& operator=(const GetElastictaskResponseBodyResult &) = default ;
    GetElastictaskResponseBodyResult& operator=(GetElastictaskResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticExpansionTask_ != nullptr
        && this->elasticShrinkTask_ != nullptr; };
    // elasticExpansionTask Field Functions 
    bool hasElasticExpansionTask() const { return this->elasticExpansionTask_ != nullptr;};
    void deleteElasticExpansionTask() { this->elasticExpansionTask_ = nullptr;};
    inline const Models::GetElastictaskResponseBodyResultElasticExpansionTask & elasticExpansionTask() const { DARABONBA_PTR_GET_CONST(elasticExpansionTask_, Models::GetElastictaskResponseBodyResultElasticExpansionTask) };
    inline Models::GetElastictaskResponseBodyResultElasticExpansionTask elasticExpansionTask() { DARABONBA_PTR_GET(elasticExpansionTask_, Models::GetElastictaskResponseBodyResultElasticExpansionTask) };
    inline GetElastictaskResponseBodyResult& setElasticExpansionTask(const Models::GetElastictaskResponseBodyResultElasticExpansionTask & elasticExpansionTask) { DARABONBA_PTR_SET_VALUE(elasticExpansionTask_, elasticExpansionTask) };
    inline GetElastictaskResponseBodyResult& setElasticExpansionTask(Models::GetElastictaskResponseBodyResultElasticExpansionTask && elasticExpansionTask) { DARABONBA_PTR_SET_RVALUE(elasticExpansionTask_, elasticExpansionTask) };


    // elasticShrinkTask Field Functions 
    bool hasElasticShrinkTask() const { return this->elasticShrinkTask_ != nullptr;};
    void deleteElasticShrinkTask() { this->elasticShrinkTask_ = nullptr;};
    inline const Models::GetElastictaskResponseBodyResultElasticShrinkTask & elasticShrinkTask() const { DARABONBA_PTR_GET_CONST(elasticShrinkTask_, Models::GetElastictaskResponseBodyResultElasticShrinkTask) };
    inline Models::GetElastictaskResponseBodyResultElasticShrinkTask elasticShrinkTask() { DARABONBA_PTR_GET(elasticShrinkTask_, Models::GetElastictaskResponseBodyResultElasticShrinkTask) };
    inline GetElastictaskResponseBodyResult& setElasticShrinkTask(const Models::GetElastictaskResponseBodyResultElasticShrinkTask & elasticShrinkTask) { DARABONBA_PTR_SET_VALUE(elasticShrinkTask_, elasticShrinkTask) };
    inline GetElastictaskResponseBodyResult& setElasticShrinkTask(Models::GetElastictaskResponseBodyResultElasticShrinkTask && elasticShrinkTask) { DARABONBA_PTR_SET_RVALUE(elasticShrinkTask_, elasticShrinkTask) };


  protected:
    std::shared_ptr<Models::GetElastictaskResponseBodyResultElasticExpansionTask> elasticExpansionTask_ = nullptr;
    std::shared_ptr<Models::GetElastictaskResponseBodyResultElasticShrinkTask> elasticShrinkTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
