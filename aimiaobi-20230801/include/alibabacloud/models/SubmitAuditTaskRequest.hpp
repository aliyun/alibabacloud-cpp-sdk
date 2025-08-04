// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAUDITTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAUDITTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitAuditTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAuditTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArticleId, articleId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAuditTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArticleId, articleId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(HtmlContent, htmlContent_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitAuditTaskRequest() = default ;
    SubmitAuditTaskRequest(const SubmitAuditTaskRequest &) = default ;
    SubmitAuditTaskRequest(SubmitAuditTaskRequest &&) = default ;
    SubmitAuditTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAuditTaskRequest() = default ;
    SubmitAuditTaskRequest& operator=(const SubmitAuditTaskRequest &) = default ;
    SubmitAuditTaskRequest& operator=(SubmitAuditTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->articleId_ != nullptr
        && this->content_ != nullptr && this->htmlContent_ != nullptr && this->title_ != nullptr && this->workspaceId_ != nullptr; };
    // articleId Field Functions 
    bool hasArticleId() const { return this->articleId_ != nullptr;};
    void deleteArticleId() { this->articleId_ = nullptr;};
    inline string articleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
    inline SubmitAuditTaskRequest& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitAuditTaskRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // htmlContent Field Functions 
    bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
    void deleteHtmlContent() { this->htmlContent_ = nullptr;};
    inline string htmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
    inline SubmitAuditTaskRequest& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitAuditTaskRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitAuditTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> articleId_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> htmlContent_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
