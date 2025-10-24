// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPipelineListResponseBodyPipelineListPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryPipelineListResponseBodyPipelineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineListResponseBodyPipelineList& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineListResponseBodyPipelineList& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
    };
    QueryPipelineListResponseBodyPipelineList() = default ;
    QueryPipelineListResponseBodyPipelineList(const QueryPipelineListResponseBodyPipelineList &) = default ;
    QueryPipelineListResponseBodyPipelineList(QueryPipelineListResponseBodyPipelineList &&) = default ;
    QueryPipelineListResponseBodyPipelineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineListResponseBodyPipelineList() = default ;
    QueryPipelineListResponseBodyPipelineList& operator=(const QueryPipelineListResponseBodyPipelineList &) = default ;
    QueryPipelineListResponseBodyPipelineList& operator=(QueryPipelineListResponseBodyPipelineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipeline_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const vector<Models::QueryPipelineListResponseBodyPipelineListPipeline> & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, vector<Models::QueryPipelineListResponseBodyPipelineListPipeline>) };
    inline vector<Models::QueryPipelineListResponseBodyPipelineListPipeline> pipeline() { DARABONBA_PTR_GET(pipeline_, vector<Models::QueryPipelineListResponseBodyPipelineListPipeline>) };
    inline QueryPipelineListResponseBodyPipelineList& setPipeline(const vector<Models::QueryPipelineListResponseBodyPipelineListPipeline> & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline QueryPipelineListResponseBodyPipelineList& setPipeline(vector<Models::QueryPipelineListResponseBodyPipelineListPipeline> && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


  protected:
    std::shared_ptr<vector<Models::QueryPipelineListResponseBodyPipelineListPipeline>> pipeline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
