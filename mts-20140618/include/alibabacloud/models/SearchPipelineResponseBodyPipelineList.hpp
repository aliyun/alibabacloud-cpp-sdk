// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHPIPELINERESPONSEBODYPIPELINELIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHPIPELINERESPONSEBODYPIPELINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchPipelineResponseBodyPipelineListPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchPipelineResponseBodyPipelineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchPipelineResponseBodyPipelineList& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
    };
    friend void from_json(const Darabonba::Json& j, SearchPipelineResponseBodyPipelineList& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
    };
    SearchPipelineResponseBodyPipelineList() = default ;
    SearchPipelineResponseBodyPipelineList(const SearchPipelineResponseBodyPipelineList &) = default ;
    SearchPipelineResponseBodyPipelineList(SearchPipelineResponseBodyPipelineList &&) = default ;
    SearchPipelineResponseBodyPipelineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchPipelineResponseBodyPipelineList() = default ;
    SearchPipelineResponseBodyPipelineList& operator=(const SearchPipelineResponseBodyPipelineList &) = default ;
    SearchPipelineResponseBodyPipelineList& operator=(SearchPipelineResponseBodyPipelineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipeline_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const vector<Models::SearchPipelineResponseBodyPipelineListPipeline> & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, vector<Models::SearchPipelineResponseBodyPipelineListPipeline>) };
    inline vector<Models::SearchPipelineResponseBodyPipelineListPipeline> pipeline() { DARABONBA_PTR_GET(pipeline_, vector<Models::SearchPipelineResponseBodyPipelineListPipeline>) };
    inline SearchPipelineResponseBodyPipelineList& setPipeline(const vector<Models::SearchPipelineResponseBodyPipelineListPipeline> & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline SearchPipelineResponseBodyPipelineList& setPipeline(vector<Models::SearchPipelineResponseBodyPipelineListPipeline> && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


  protected:
    std::shared_ptr<vector<Models::SearchPipelineResponseBodyPipelineListPipeline>> pipeline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
