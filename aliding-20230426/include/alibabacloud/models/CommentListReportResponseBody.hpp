// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMENTLISTREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COMMENTLISTREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Comments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Comments& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Userid, userid_);
      };
      friend void from_json(const Darabonba::Json& j, Comments& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Userid, userid_);
      };
      Comments() = default ;
      Comments(const Comments &) = default ;
      Comments(Comments &&) = default ;
      Comments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Comments() = default ;
      Comments& operator=(const Comments &) = default ;
      Comments& operator=(Comments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->userid_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Comments& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Comments& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // userid Field Functions 
      bool hasUserid() const { return this->userid_ != nullptr;};
      void deleteUserid() { this->userid_ = nullptr;};
      inline string getUserid() const { DARABONBA_PTR_GET_DEFAULT(userid_, "") };
      inline Comments& setUserid(string userid) { DARABONBA_PTR_SET_VALUE(userid_, userid) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> userid_ {};
    };

    virtual bool empty() const override { return this->comments_ == nullptr
        && this->hasMore_ == nullptr && this->nextCursor_ == nullptr && this->requestId_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<CommentListReportResponseBody::Comments> & getComments() const { DARABONBA_PTR_GET_CONST(comments_, vector<CommentListReportResponseBody::Comments>) };
    inline vector<CommentListReportResponseBody::Comments> getComments() { DARABONBA_PTR_GET(comments_, vector<CommentListReportResponseBody::Comments>) };
    inline CommentListReportResponseBody& setComments(const vector<CommentListReportResponseBody::Comments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline CommentListReportResponseBody& setComments(vector<CommentListReportResponseBody::Comments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline CommentListReportResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline CommentListReportResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CommentListReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<CommentListReportResponseBody::Comments>> comments_ {};
    shared_ptr<bool> hasMore_ {};
    shared_ptr<int64_t> nextCursor_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
