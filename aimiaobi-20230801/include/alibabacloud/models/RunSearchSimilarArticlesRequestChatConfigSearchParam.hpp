// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUESTCHATCONFIGSEARCHPARAM_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUESTCHATCONFIGSEARCHPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesRequestChatConfigSearchParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesRequestChatConfigSearchParam& obj) { 
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesRequestChatConfigSearchParam& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
    };
    RunSearchSimilarArticlesRequestChatConfigSearchParam() = default ;
    RunSearchSimilarArticlesRequestChatConfigSearchParam(const RunSearchSimilarArticlesRequestChatConfigSearchParam &) = default ;
    RunSearchSimilarArticlesRequestChatConfigSearchParam(RunSearchSimilarArticlesRequestChatConfigSearchParam &&) = default ;
    RunSearchSimilarArticlesRequestChatConfigSearchParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesRequestChatConfigSearchParam() = default ;
    RunSearchSimilarArticlesRequestChatConfigSearchParam& operator=(const RunSearchSimilarArticlesRequestChatConfigSearchParam &) = default ;
    RunSearchSimilarArticlesRequestChatConfigSearchParam& operator=(RunSearchSimilarArticlesRequestChatConfigSearchParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchSources_ == nullptr; };
    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources>) };
    inline vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources>) };
    inline RunSearchSimilarArticlesRequestChatConfigSearchParam& setSearchSources(const vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline RunSearchSimilarArticlesRequestChatConfigSearchParam& setSearchSources(vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


  protected:
    std::shared_ptr<vector<Models::RunSearchSimilarArticlesRequestChatConfigSearchParamSearchSources>> searchSources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
