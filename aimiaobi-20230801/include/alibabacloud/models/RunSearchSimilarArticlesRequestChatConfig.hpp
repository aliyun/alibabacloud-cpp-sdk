// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUESTCHATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUESTCHATCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchSimilarArticlesRequestChatConfigSearchParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesRequestChatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesRequestChatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SearchParam, searchParam_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesRequestChatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchParam, searchParam_);
    };
    RunSearchSimilarArticlesRequestChatConfig() = default ;
    RunSearchSimilarArticlesRequestChatConfig(const RunSearchSimilarArticlesRequestChatConfig &) = default ;
    RunSearchSimilarArticlesRequestChatConfig(RunSearchSimilarArticlesRequestChatConfig &&) = default ;
    RunSearchSimilarArticlesRequestChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesRequestChatConfig() = default ;
    RunSearchSimilarArticlesRequestChatConfig& operator=(const RunSearchSimilarArticlesRequestChatConfig &) = default ;
    RunSearchSimilarArticlesRequestChatConfig& operator=(RunSearchSimilarArticlesRequestChatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchParam_ == nullptr; };
    // searchParam Field Functions 
    bool hasSearchParam() const { return this->searchParam_ != nullptr;};
    void deleteSearchParam() { this->searchParam_ = nullptr;};
    inline const Models::RunSearchSimilarArticlesRequestChatConfigSearchParam & searchParam() const { DARABONBA_PTR_GET_CONST(searchParam_, Models::RunSearchSimilarArticlesRequestChatConfigSearchParam) };
    inline Models::RunSearchSimilarArticlesRequestChatConfigSearchParam searchParam() { DARABONBA_PTR_GET(searchParam_, Models::RunSearchSimilarArticlesRequestChatConfigSearchParam) };
    inline RunSearchSimilarArticlesRequestChatConfig& setSearchParam(const Models::RunSearchSimilarArticlesRequestChatConfigSearchParam & searchParam) { DARABONBA_PTR_SET_VALUE(searchParam_, searchParam) };
    inline RunSearchSimilarArticlesRequestChatConfig& setSearchParam(Models::RunSearchSimilarArticlesRequestChatConfigSearchParam && searchParam) { DARABONBA_PTR_SET_RVALUE(searchParam_, searchParam) };


  protected:
    std::shared_ptr<Models::RunSearchSimilarArticlesRequestChatConfigSearchParam> searchParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
