// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCommentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(commentType, commentType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(draft, draft_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(fromPachSetBizId, fromPachSetBizId_);
      DARABONBA_PTR_TO_JSON(lineNumber, lineNumber_);
      DARABONBA_PTR_TO_JSON(parentCommentBizId, parentCommentBizId_);
      DARABONBA_PTR_TO_JSON(patchSetBizId, patchSetBizId_);
      DARABONBA_PTR_TO_JSON(resolved, resolved_);
      DARABONBA_PTR_TO_JSON(toPatchSetBizId, toPatchSetBizId_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(commentType, commentType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(draft, draft_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(fromPachSetBizId, fromPachSetBizId_);
      DARABONBA_PTR_FROM_JSON(lineNumber, lineNumber_);
      DARABONBA_PTR_FROM_JSON(parentCommentBizId, parentCommentBizId_);
      DARABONBA_PTR_FROM_JSON(patchSetBizId, patchSetBizId_);
      DARABONBA_PTR_FROM_JSON(resolved, resolved_);
      DARABONBA_PTR_FROM_JSON(toPatchSetBizId, toPatchSetBizId_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
    };
    CreateCommentRequest() = default ;
    CreateCommentRequest(const CreateCommentRequest &) = default ;
    CreateCommentRequest(CreateCommentRequest &&) = default ;
    CreateCommentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommentRequest() = default ;
    CreateCommentRequest& operator=(const CreateCommentRequest &) = default ;
    CreateCommentRequest& operator=(CreateCommentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->commentType_ == nullptr && return this->content_ == nullptr && return this->draft_ == nullptr && return this->filePath_ == nullptr && return this->fromPachSetBizId_ == nullptr
        && return this->lineNumber_ == nullptr && return this->parentCommentBizId_ == nullptr && return this->patchSetBizId_ == nullptr && return this->resolved_ == nullptr && return this->toPatchSetBizId_ == nullptr
        && return this->localId_ == nullptr && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateCommentRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // commentType Field Functions 
    bool hasCommentType() const { return this->commentType_ != nullptr;};
    void deleteCommentType() { this->commentType_ = nullptr;};
    inline string commentType() const { DARABONBA_PTR_GET_DEFAULT(commentType_, "") };
    inline CreateCommentRequest& setCommentType(string commentType) { DARABONBA_PTR_SET_VALUE(commentType_, commentType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateCommentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // draft Field Functions 
    bool hasDraft() const { return this->draft_ != nullptr;};
    void deleteDraft() { this->draft_ = nullptr;};
    inline bool draft() const { DARABONBA_PTR_GET_DEFAULT(draft_, false) };
    inline CreateCommentRequest& setDraft(bool draft) { DARABONBA_PTR_SET_VALUE(draft_, draft) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateCommentRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // fromPachSetBizId Field Functions 
    bool hasFromPachSetBizId() const { return this->fromPachSetBizId_ != nullptr;};
    void deleteFromPachSetBizId() { this->fromPachSetBizId_ = nullptr;};
    inline string fromPachSetBizId() const { DARABONBA_PTR_GET_DEFAULT(fromPachSetBizId_, "") };
    inline CreateCommentRequest& setFromPachSetBizId(string fromPachSetBizId) { DARABONBA_PTR_SET_VALUE(fromPachSetBizId_, fromPachSetBizId) };


    // lineNumber Field Functions 
    bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
    void deleteLineNumber() { this->lineNumber_ = nullptr;};
    inline int32_t lineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, 0) };
    inline CreateCommentRequest& setLineNumber(int32_t lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


    // parentCommentBizId Field Functions 
    bool hasParentCommentBizId() const { return this->parentCommentBizId_ != nullptr;};
    void deleteParentCommentBizId() { this->parentCommentBizId_ = nullptr;};
    inline string parentCommentBizId() const { DARABONBA_PTR_GET_DEFAULT(parentCommentBizId_, "") };
    inline CreateCommentRequest& setParentCommentBizId(string parentCommentBizId) { DARABONBA_PTR_SET_VALUE(parentCommentBizId_, parentCommentBizId) };


    // patchSetBizId Field Functions 
    bool hasPatchSetBizId() const { return this->patchSetBizId_ != nullptr;};
    void deletePatchSetBizId() { this->patchSetBizId_ = nullptr;};
    inline string patchSetBizId() const { DARABONBA_PTR_GET_DEFAULT(patchSetBizId_, "") };
    inline CreateCommentRequest& setPatchSetBizId(string patchSetBizId) { DARABONBA_PTR_SET_VALUE(patchSetBizId_, patchSetBizId) };


    // resolved Field Functions 
    bool hasResolved() const { return this->resolved_ != nullptr;};
    void deleteResolved() { this->resolved_ = nullptr;};
    inline bool resolved() const { DARABONBA_PTR_GET_DEFAULT(resolved_, false) };
    inline CreateCommentRequest& setResolved(bool resolved) { DARABONBA_PTR_SET_VALUE(resolved_, resolved) };


    // toPatchSetBizId Field Functions 
    bool hasToPatchSetBizId() const { return this->toPatchSetBizId_ != nullptr;};
    void deleteToPatchSetBizId() { this->toPatchSetBizId_ = nullptr;};
    inline string toPatchSetBizId() const { DARABONBA_PTR_GET_DEFAULT(toPatchSetBizId_, "") };
    inline CreateCommentRequest& setToPatchSetBizId(string toPatchSetBizId) { DARABONBA_PTR_SET_VALUE(toPatchSetBizId_, toPatchSetBizId) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline CreateCommentRequest& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateCommentRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline CreateCommentRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commentType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> draft_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> fromPachSetBizId_ = nullptr;
    std::shared_ptr<int32_t> lineNumber_ = nullptr;
    std::shared_ptr<string> parentCommentBizId_ = nullptr;
    std::shared_ptr<string> patchSetBizId_ = nullptr;
    std::shared_ptr<bool> resolved_ = nullptr;
    std::shared_ptr<string> toPatchSetBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> localId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
