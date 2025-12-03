// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMergeRequestCommentsResponseBodyResultAuthor.hpp>
#include <vector>
#include <alibabacloud/models/ListMergeRequestCommentsResponseBodyResultChildComments.hpp>
#include <alibabacloud/models/ListMergeRequestCommentsResponseBodyResultRelatedPatchSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestCommentsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestCommentsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(author, author_);
      DARABONBA_PTR_TO_JSON(childComments, childComments_);
      DARABONBA_PTR_TO_JSON(commentBizId, commentBizId_);
      DARABONBA_PTR_TO_JSON(commentTime, commentTime_);
      DARABONBA_PTR_TO_JSON(commentType, commentType_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(deleted, deleted_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(lastEditTime, lastEditTime_);
      DARABONBA_PTR_TO_JSON(lineNumber, lineNumber_);
      DARABONBA_PTR_TO_JSON(parentCommentBizId, parentCommentBizId_);
      DARABONBA_PTR_TO_JSON(relatedPatchSet, relatedPatchSet_);
      DARABONBA_PTR_TO_JSON(resolved, resolved_);
      DARABONBA_PTR_TO_JSON(rootCommentBizId, rootCommentBizId_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestCommentsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(author, author_);
      DARABONBA_PTR_FROM_JSON(childComments, childComments_);
      DARABONBA_PTR_FROM_JSON(commentBizId, commentBizId_);
      DARABONBA_PTR_FROM_JSON(commentTime, commentTime_);
      DARABONBA_PTR_FROM_JSON(commentType, commentType_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(deleted, deleted_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(lastEditTime, lastEditTime_);
      DARABONBA_PTR_FROM_JSON(lineNumber, lineNumber_);
      DARABONBA_PTR_FROM_JSON(parentCommentBizId, parentCommentBizId_);
      DARABONBA_PTR_FROM_JSON(relatedPatchSet, relatedPatchSet_);
      DARABONBA_PTR_FROM_JSON(resolved, resolved_);
      DARABONBA_PTR_FROM_JSON(rootCommentBizId, rootCommentBizId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    ListMergeRequestCommentsResponseBodyResult() = default ;
    ListMergeRequestCommentsResponseBodyResult(const ListMergeRequestCommentsResponseBodyResult &) = default ;
    ListMergeRequestCommentsResponseBodyResult(ListMergeRequestCommentsResponseBodyResult &&) = default ;
    ListMergeRequestCommentsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestCommentsResponseBodyResult() = default ;
    ListMergeRequestCommentsResponseBodyResult& operator=(const ListMergeRequestCommentsResponseBodyResult &) = default ;
    ListMergeRequestCommentsResponseBodyResult& operator=(ListMergeRequestCommentsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->author_ == nullptr
        && return this->childComments_ == nullptr && return this->commentBizId_ == nullptr && return this->commentTime_ == nullptr && return this->commentType_ == nullptr && return this->content_ == nullptr
        && return this->deleted_ == nullptr && return this->filePath_ == nullptr && return this->lastEditTime_ == nullptr && return this->lineNumber_ == nullptr && return this->parentCommentBizId_ == nullptr
        && return this->relatedPatchSet_ == nullptr && return this->resolved_ == nullptr && return this->rootCommentBizId_ == nullptr && return this->state_ == nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline const Models::ListMergeRequestCommentsResponseBodyResultAuthor & author() const { DARABONBA_PTR_GET_CONST(author_, Models::ListMergeRequestCommentsResponseBodyResultAuthor) };
    inline Models::ListMergeRequestCommentsResponseBodyResultAuthor author() { DARABONBA_PTR_GET(author_, Models::ListMergeRequestCommentsResponseBodyResultAuthor) };
    inline ListMergeRequestCommentsResponseBodyResult& setAuthor(const Models::ListMergeRequestCommentsResponseBodyResultAuthor & author) { DARABONBA_PTR_SET_VALUE(author_, author) };
    inline ListMergeRequestCommentsResponseBodyResult& setAuthor(Models::ListMergeRequestCommentsResponseBodyResultAuthor && author) { DARABONBA_PTR_SET_RVALUE(author_, author) };


    // childComments Field Functions 
    bool hasChildComments() const { return this->childComments_ != nullptr;};
    void deleteChildComments() { this->childComments_ = nullptr;};
    inline const vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments> & childComments() const { DARABONBA_PTR_GET_CONST(childComments_, vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments>) };
    inline vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments> childComments() { DARABONBA_PTR_GET(childComments_, vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments>) };
    inline ListMergeRequestCommentsResponseBodyResult& setChildComments(const vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments> & childComments) { DARABONBA_PTR_SET_VALUE(childComments_, childComments) };
    inline ListMergeRequestCommentsResponseBodyResult& setChildComments(vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments> && childComments) { DARABONBA_PTR_SET_RVALUE(childComments_, childComments) };


    // commentBizId Field Functions 
    bool hasCommentBizId() const { return this->commentBizId_ != nullptr;};
    void deleteCommentBizId() { this->commentBizId_ = nullptr;};
    inline string commentBizId() const { DARABONBA_PTR_GET_DEFAULT(commentBizId_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setCommentBizId(string commentBizId) { DARABONBA_PTR_SET_VALUE(commentBizId_, commentBizId) };


    // commentTime Field Functions 
    bool hasCommentTime() const { return this->commentTime_ != nullptr;};
    void deleteCommentTime() { this->commentTime_ = nullptr;};
    inline string commentTime() const { DARABONBA_PTR_GET_DEFAULT(commentTime_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setCommentTime(string commentTime) { DARABONBA_PTR_SET_VALUE(commentTime_, commentTime) };


    // commentType Field Functions 
    bool hasCommentType() const { return this->commentType_ != nullptr;};
    void deleteCommentType() { this->commentType_ = nullptr;};
    inline string commentType() const { DARABONBA_PTR_GET_DEFAULT(commentType_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setCommentType(string commentType) { DARABONBA_PTR_SET_VALUE(commentType_, commentType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline bool deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
    inline ListMergeRequestCommentsResponseBodyResult& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // lastEditTime Field Functions 
    bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
    void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
    inline string lastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setLastEditTime(string lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


    // lineNumber Field Functions 
    bool hasLineNumber() const { return this->lineNumber_ != nullptr;};
    void deleteLineNumber() { this->lineNumber_ = nullptr;};
    inline string lineNumber() const { DARABONBA_PTR_GET_DEFAULT(lineNumber_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setLineNumber(string lineNumber) { DARABONBA_PTR_SET_VALUE(lineNumber_, lineNumber) };


    // parentCommentBizId Field Functions 
    bool hasParentCommentBizId() const { return this->parentCommentBizId_ != nullptr;};
    void deleteParentCommentBizId() { this->parentCommentBizId_ = nullptr;};
    inline string parentCommentBizId() const { DARABONBA_PTR_GET_DEFAULT(parentCommentBizId_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setParentCommentBizId(string parentCommentBizId) { DARABONBA_PTR_SET_VALUE(parentCommentBizId_, parentCommentBizId) };


    // relatedPatchSet Field Functions 
    bool hasRelatedPatchSet() const { return this->relatedPatchSet_ != nullptr;};
    void deleteRelatedPatchSet() { this->relatedPatchSet_ = nullptr;};
    inline const Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet & relatedPatchSet() const { DARABONBA_PTR_GET_CONST(relatedPatchSet_, Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet) };
    inline Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet relatedPatchSet() { DARABONBA_PTR_GET(relatedPatchSet_, Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet) };
    inline ListMergeRequestCommentsResponseBodyResult& setRelatedPatchSet(const Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet & relatedPatchSet) { DARABONBA_PTR_SET_VALUE(relatedPatchSet_, relatedPatchSet) };
    inline ListMergeRequestCommentsResponseBodyResult& setRelatedPatchSet(Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet && relatedPatchSet) { DARABONBA_PTR_SET_RVALUE(relatedPatchSet_, relatedPatchSet) };


    // resolved Field Functions 
    bool hasResolved() const { return this->resolved_ != nullptr;};
    void deleteResolved() { this->resolved_ = nullptr;};
    inline bool resolved() const { DARABONBA_PTR_GET_DEFAULT(resolved_, false) };
    inline ListMergeRequestCommentsResponseBodyResult& setResolved(bool resolved) { DARABONBA_PTR_SET_VALUE(resolved_, resolved) };


    // rootCommentBizId Field Functions 
    bool hasRootCommentBizId() const { return this->rootCommentBizId_ != nullptr;};
    void deleteRootCommentBizId() { this->rootCommentBizId_ = nullptr;};
    inline string rootCommentBizId() const { DARABONBA_PTR_GET_DEFAULT(rootCommentBizId_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setRootCommentBizId(string rootCommentBizId) { DARABONBA_PTR_SET_VALUE(rootCommentBizId_, rootCommentBizId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListMergeRequestCommentsResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<Models::ListMergeRequestCommentsResponseBodyResultAuthor> author_ = nullptr;
    std::shared_ptr<vector<Models::ListMergeRequestCommentsResponseBodyResultChildComments>> childComments_ = nullptr;
    std::shared_ptr<string> commentBizId_ = nullptr;
    std::shared_ptr<string> commentTime_ = nullptr;
    std::shared_ptr<string> commentType_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> deleted_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> lastEditTime_ = nullptr;
    std::shared_ptr<string> lineNumber_ = nullptr;
    std::shared_ptr<string> parentCommentBizId_ = nullptr;
    std::shared_ptr<Models::ListMergeRequestCommentsResponseBodyResultRelatedPatchSet> relatedPatchSet_ = nullptr;
    std::shared_ptr<bool> resolved_ = nullptr;
    std::shared_ptr<string> rootCommentBizId_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
