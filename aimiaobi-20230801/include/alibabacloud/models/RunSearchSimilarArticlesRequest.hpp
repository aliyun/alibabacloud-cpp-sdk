// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchSimilarArticlesRequestChatConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunSearchSimilarArticlesRequest() = default ;
    RunSearchSimilarArticlesRequest(const RunSearchSimilarArticlesRequest &) = default ;
    RunSearchSimilarArticlesRequest(RunSearchSimilarArticlesRequest &&) = default ;
    RunSearchSimilarArticlesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesRequest() = default ;
    RunSearchSimilarArticlesRequest& operator=(const RunSearchSimilarArticlesRequest &) = default ;
    RunSearchSimilarArticlesRequest& operator=(RunSearchSimilarArticlesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatConfig_ == nullptr
        && return this->docType_ == nullptr && return this->title_ == nullptr && return this->url_ == nullptr && return this->workspaceId_ == nullptr; };
    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline const RunSearchSimilarArticlesRequestChatConfig & chatConfig() const { DARABONBA_PTR_GET_CONST(chatConfig_, RunSearchSimilarArticlesRequestChatConfig) };
    inline RunSearchSimilarArticlesRequestChatConfig chatConfig() { DARABONBA_PTR_GET(chatConfig_, RunSearchSimilarArticlesRequestChatConfig) };
    inline RunSearchSimilarArticlesRequest& setChatConfig(const RunSearchSimilarArticlesRequestChatConfig & chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };
    inline RunSearchSimilarArticlesRequest& setChatConfig(RunSearchSimilarArticlesRequestChatConfig && chatConfig) { DARABONBA_PTR_SET_RVALUE(chatConfig_, chatConfig) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline RunSearchSimilarArticlesRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunSearchSimilarArticlesRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunSearchSimilarArticlesRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunSearchSimilarArticlesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<RunSearchSimilarArticlesRequestChatConfig> chatConfig_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
