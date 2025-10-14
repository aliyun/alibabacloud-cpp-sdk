// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMENTLISTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMMENTLISTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CommentListReportResponseBodyComments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CommentListReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommentListReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(comments, comments_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CommentListReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(comments, comments_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CommentListReportResponseBody() = default ;
    CommentListReportResponseBody(const CommentListReportResponseBody &) = default ;
    CommentListReportResponseBody(CommentListReportResponseBody &&) = default ;
    CommentListReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommentListReportResponseBody() = default ;
    CommentListReportResponseBody& operator=(const CommentListReportResponseBody &) = default ;
    CommentListReportResponseBody& operator=(CommentListReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comments_ == nullptr
        && return this->hasMore_ == nullptr && return this->nextCursor_ == nullptr && return this->requestId_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<CommentListReportResponseBodyComments> & comments() const { DARABONBA_PTR_GET_CONST(comments_, vector<CommentListReportResponseBodyComments>) };
    inline vector<CommentListReportResponseBodyComments> comments() { DARABONBA_PTR_GET(comments_, vector<CommentListReportResponseBodyComments>) };
    inline CommentListReportResponseBody& setComments(const vector<CommentListReportResponseBodyComments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline CommentListReportResponseBody& setComments(vector<CommentListReportResponseBodyComments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline CommentListReportResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t nextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline CommentListReportResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CommentListReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<CommentListReportResponseBodyComments>> comments_ = nullptr;
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<int64_t> nextCursor_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
