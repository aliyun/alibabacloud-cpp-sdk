// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAUDITTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELAUDITTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CancelAuditTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAuditTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArticleId, articleId_);
      DARABONBA_PTR_TO_JSON(ContentAuditTaskId, contentAuditTaskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAuditTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArticleId, articleId_);
      DARABONBA_PTR_FROM_JSON(ContentAuditTaskId, contentAuditTaskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CancelAuditTaskRequest() = default ;
    CancelAuditTaskRequest(const CancelAuditTaskRequest &) = default ;
    CancelAuditTaskRequest(CancelAuditTaskRequest &&) = default ;
    CancelAuditTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAuditTaskRequest() = default ;
    CancelAuditTaskRequest& operator=(const CancelAuditTaskRequest &) = default ;
    CancelAuditTaskRequest& operator=(CancelAuditTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articleId_ == nullptr
        && return this->contentAuditTaskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // articleId Field Functions 
    bool hasArticleId() const { return this->articleId_ != nullptr;};
    void deleteArticleId() { this->articleId_ = nullptr;};
    inline string articleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
    inline CancelAuditTaskRequest& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


    // contentAuditTaskId Field Functions 
    bool hasContentAuditTaskId() const { return this->contentAuditTaskId_ != nullptr;};
    void deleteContentAuditTaskId() { this->contentAuditTaskId_ = nullptr;};
    inline string contentAuditTaskId() const { DARABONBA_PTR_GET_DEFAULT(contentAuditTaskId_, "") };
    inline CancelAuditTaskRequest& setContentAuditTaskId(string contentAuditTaskId) { DARABONBA_PTR_SET_VALUE(contentAuditTaskId_, contentAuditTaskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CancelAuditTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> articleId_ = nullptr;
    std::shared_ptr<string> contentAuditTaskId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
