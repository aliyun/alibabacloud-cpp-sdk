// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHIMAGETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHIMAGETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchImageTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchImageTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_TO_JSON(TaskIdList, taskIdList_);
    };
    friend void from_json(const Darabonba::Json& j, FetchImageTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_FROM_JSON(TaskIdList, taskIdList_);
    };
    FetchImageTaskRequest() = default ;
    FetchImageTaskRequest(const FetchImageTaskRequest &) = default ;
    FetchImageTaskRequest(FetchImageTaskRequest &&) = default ;
    FetchImageTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchImageTaskRequest() = default ;
    FetchImageTaskRequest& operator=(const FetchImageTaskRequest &) = default ;
    FetchImageTaskRequest& operator=(FetchImageTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->articleTaskId_ == nullptr && this->taskIdList_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline FetchImageTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // articleTaskId Field Functions 
    bool hasArticleTaskId() const { return this->articleTaskId_ != nullptr;};
    void deleteArticleTaskId() { this->articleTaskId_ = nullptr;};
    inline string getArticleTaskId() const { DARABONBA_PTR_GET_DEFAULT(articleTaskId_, "") };
    inline FetchImageTaskRequest& setArticleTaskId(string articleTaskId) { DARABONBA_PTR_SET_VALUE(articleTaskId_, articleTaskId) };


    // taskIdList Field Functions 
    bool hasTaskIdList() const { return this->taskIdList_ != nullptr;};
    void deleteTaskIdList() { this->taskIdList_ = nullptr;};
    inline const vector<string> & getTaskIdList() const { DARABONBA_PTR_GET_CONST(taskIdList_, vector<string>) };
    inline vector<string> getTaskIdList() { DARABONBA_PTR_GET(taskIdList_, vector<string>) };
    inline FetchImageTaskRequest& setTaskIdList(const vector<string> & taskIdList) { DARABONBA_PTR_SET_VALUE(taskIdList_, taskIdList) };
    inline FetchImageTaskRequest& setTaskIdList(vector<string> && taskIdList) { DARABONBA_PTR_SET_RVALUE(taskIdList_, taskIdList) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> articleTaskId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> taskIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
