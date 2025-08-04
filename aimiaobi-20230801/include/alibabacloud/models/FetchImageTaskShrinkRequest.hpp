// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHIMAGETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHIMAGETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchImageTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchImageTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_TO_JSON(TaskIdList, taskIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, FetchImageTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskIdList, taskIdListShrink_);
    };
    FetchImageTaskShrinkRequest() = default ;
    FetchImageTaskShrinkRequest(const FetchImageTaskShrinkRequest &) = default ;
    FetchImageTaskShrinkRequest(FetchImageTaskShrinkRequest &&) = default ;
    FetchImageTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchImageTaskShrinkRequest() = default ;
    FetchImageTaskShrinkRequest& operator=(const FetchImageTaskShrinkRequest &) = default ;
    FetchImageTaskShrinkRequest& operator=(FetchImageTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->articleTaskId_ != nullptr && this->taskIdListShrink_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline FetchImageTaskShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // articleTaskId Field Functions 
    bool hasArticleTaskId() const { return this->articleTaskId_ != nullptr;};
    void deleteArticleTaskId() { this->articleTaskId_ = nullptr;};
    inline string articleTaskId() const { DARABONBA_PTR_GET_DEFAULT(articleTaskId_, "") };
    inline FetchImageTaskShrinkRequest& setArticleTaskId(string articleTaskId) { DARABONBA_PTR_SET_VALUE(articleTaskId_, articleTaskId) };


    // taskIdListShrink Field Functions 
    bool hasTaskIdListShrink() const { return this->taskIdListShrink_ != nullptr;};
    void deleteTaskIdListShrink() { this->taskIdListShrink_ = nullptr;};
    inline string taskIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdListShrink_, "") };
    inline FetchImageTaskShrinkRequest& setTaskIdListShrink(string taskIdListShrink) { DARABONBA_PTR_SET_VALUE(taskIdListShrink_, taskIdListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> articleTaskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
