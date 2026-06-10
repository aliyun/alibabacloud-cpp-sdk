// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOLUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOLUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSolutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSolutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSolutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
    };
    ListSolutionResponseBody() = default ;
    ListSolutionResponseBody(const ListSolutionResponseBody &) = default ;
    ListSolutionResponseBody(ListSolutionResponseBody &&) = default ;
    ListSolutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSolutionResponseBody() = default ;
    ListSolutionResponseBody& operator=(const ListSolutionResponseBody &) = default ;
    ListSolutionResponseBody& operator=(ListSolutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Solutions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Solutions& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(PerspectiveCodes, perspectiveCodes_);
        DARABONBA_PTR_TO_JSON(PlainText, plainText_);
        DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
        DARABONBA_PTR_TO_JSON(TagIdList, tagIdList_);
      };
      friend void from_json(const Darabonba::Json& j, Solutions& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(PerspectiveCodes, perspectiveCodes_);
        DARABONBA_PTR_FROM_JSON(PlainText, plainText_);
        DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
        DARABONBA_PTR_FROM_JSON(TagIdList, tagIdList_);
      };
      Solutions() = default ;
      Solutions(const Solutions &) = default ;
      Solutions(Solutions &&) = default ;
      Solutions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Solutions() = default ;
      Solutions& operator=(const Solutions &) = default ;
      Solutions& operator=(Solutions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->contentType_ == nullptr && this->createTime_ == nullptr && this->modifyTime_ == nullptr && this->perspectiveCodes_ == nullptr && this->plainText_ == nullptr
        && this->solutionId_ == nullptr && this->tagIdList_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Solutions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline int32_t getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, 0) };
      inline Solutions& setContentType(int32_t contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Solutions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Solutions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // perspectiveCodes Field Functions 
      bool hasPerspectiveCodes() const { return this->perspectiveCodes_ != nullptr;};
      void deletePerspectiveCodes() { this->perspectiveCodes_ = nullptr;};
      inline const vector<string> & getPerspectiveCodes() const { DARABONBA_PTR_GET_CONST(perspectiveCodes_, vector<string>) };
      inline vector<string> getPerspectiveCodes() { DARABONBA_PTR_GET(perspectiveCodes_, vector<string>) };
      inline Solutions& setPerspectiveCodes(const vector<string> & perspectiveCodes) { DARABONBA_PTR_SET_VALUE(perspectiveCodes_, perspectiveCodes) };
      inline Solutions& setPerspectiveCodes(vector<string> && perspectiveCodes) { DARABONBA_PTR_SET_RVALUE(perspectiveCodes_, perspectiveCodes) };


      // plainText Field Functions 
      bool hasPlainText() const { return this->plainText_ != nullptr;};
      void deletePlainText() { this->plainText_ = nullptr;};
      inline string getPlainText() const { DARABONBA_PTR_GET_DEFAULT(plainText_, "") };
      inline Solutions& setPlainText(string plainText) { DARABONBA_PTR_SET_VALUE(plainText_, plainText) };


      // solutionId Field Functions 
      bool hasSolutionId() const { return this->solutionId_ != nullptr;};
      void deleteSolutionId() { this->solutionId_ = nullptr;};
      inline int64_t getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, 0L) };
      inline Solutions& setSolutionId(int64_t solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


      // tagIdList Field Functions 
      bool hasTagIdList() const { return this->tagIdList_ != nullptr;};
      void deleteTagIdList() { this->tagIdList_ = nullptr;};
      inline const vector<int64_t> & getTagIdList() const { DARABONBA_PTR_GET_CONST(tagIdList_, vector<int64_t>) };
      inline vector<int64_t> getTagIdList() { DARABONBA_PTR_GET(tagIdList_, vector<int64_t>) };
      inline Solutions& setTagIdList(const vector<int64_t> & tagIdList) { DARABONBA_PTR_SET_VALUE(tagIdList_, tagIdList) };
      inline Solutions& setTagIdList(vector<int64_t> && tagIdList) { DARABONBA_PTR_SET_RVALUE(tagIdList_, tagIdList) };


    protected:
      // The content of the solution.
      shared_ptr<string> content_ {};
      // The type of the solution content. Valid values: `0` (plain text) and `1` (rich text).
      shared_ptr<int32_t> contentType_ {};
      // The time when the solution was created, in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the solution was last modified, in UTC.
      shared_ptr<string> modifyTime_ {};
      // A list of perspective codes.
      shared_ptr<vector<string>> perspectiveCodes_ {};
      // The content of the solution in plain text.
      shared_ptr<string> plainText_ {};
      // The solution ID.
      shared_ptr<int64_t> solutionId_ {};
      // A list of tag IDs.
      shared_ptr<vector<int64_t>> tagIdList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->solutions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSolutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<ListSolutionResponseBody::Solutions> & getSolutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<ListSolutionResponseBody::Solutions>) };
    inline vector<ListSolutionResponseBody::Solutions> getSolutions() { DARABONBA_PTR_GET(solutions_, vector<ListSolutionResponseBody::Solutions>) };
    inline ListSolutionResponseBody& setSolutions(const vector<ListSolutionResponseBody::Solutions> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline ListSolutionResponseBody& setSolutions(vector<ListSolutionResponseBody::Solutions> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of solutions.
    shared_ptr<vector<ListSolutionResponseBody::Solutions>> solutions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
