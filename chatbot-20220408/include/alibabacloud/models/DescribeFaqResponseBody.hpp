// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODY_HPP_
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
  class DescribeFaqResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaqResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SimQuestions, simQuestions_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIdList, tagIdList_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaqResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SimQuestions, simQuestions_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIdList, tagIdList_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeFaqResponseBody() = default ;
    DescribeFaqResponseBody(const DescribeFaqResponseBody &) = default ;
    DescribeFaqResponseBody(DescribeFaqResponseBody &&) = default ;
    DescribeFaqResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaqResponseBody() = default ;
    DescribeFaqResponseBody& operator=(const DescribeFaqResponseBody &) = default ;
    DescribeFaqResponseBody& operator=(DescribeFaqResponseBody &&) = default ;
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
      // The solution content.
      shared_ptr<string> content_ {};
      // The solution content type. Valid values: `0` (plain text) and `1` (rich text).
      shared_ptr<int32_t> contentType_ {};
      // The time the solution was created, in UTC.
      shared_ptr<string> createTime_ {};
      // The time the solution was last modified, in UTC.
      shared_ptr<string> modifyTime_ {};
      // A list of perspective codes.
      shared_ptr<vector<string>> perspectiveCodes_ {};
      // The plain text content of the solution.
      shared_ptr<string> plainText_ {};
      // The solution ID.
      shared_ptr<int64_t> solutionId_ {};
      // A list of tag IDs.
      shared_ptr<vector<int64_t>> tagIdList_ {};
    };

    class SimQuestions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SimQuestions& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(SimQuestionId, simQuestionId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, SimQuestions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(SimQuestionId, simQuestionId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      SimQuestions() = default ;
      SimQuestions(const SimQuestions &) = default ;
      SimQuestions(SimQuestions &&) = default ;
      SimQuestions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SimQuestions() = default ;
      SimQuestions& operator=(const SimQuestions &) = default ;
      SimQuestions& operator=(SimQuestions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifyTime_ == nullptr && this->simQuestionId_ == nullptr && this->title_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SimQuestions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline SimQuestions& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // simQuestionId Field Functions 
      bool hasSimQuestionId() const { return this->simQuestionId_ != nullptr;};
      void deleteSimQuestionId() { this->simQuestionId_ = nullptr;};
      inline int64_t getSimQuestionId() const { DARABONBA_PTR_GET_DEFAULT(simQuestionId_, 0L) };
      inline SimQuestions& setSimQuestionId(int64_t simQuestionId) { DARABONBA_PTR_SET_VALUE(simQuestionId_, simQuestionId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline SimQuestions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The time the similar question was created, in UTC.
      shared_ptr<string> createTime_ {};
      // The time the similar question was last modified, in UTC.
      shared_ptr<string> modifyTime_ {};
      // The similar question ID.
      shared_ptr<int64_t> simQuestionId_ {};
      // The similar question title.
      shared_ptr<string> title_ {};
    };

    class Outlines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
        DARABONBA_PTR_TO_JSON(ConnQuestionId, connQuestionId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(OutlineId, outlineId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnQuestionId, connQuestionId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(OutlineId, outlineId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Outlines() = default ;
      Outlines(const Outlines &) = default ;
      Outlines(Outlines &&) = default ;
      Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Outlines() = default ;
      Outlines& operator=(const Outlines &) = default ;
      Outlines& operator=(Outlines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connQuestionId_ == nullptr
        && this->createTime_ == nullptr && this->modifyTime_ == nullptr && this->outlineId_ == nullptr && this->title_ == nullptr; };
      // connQuestionId Field Functions 
      bool hasConnQuestionId() const { return this->connQuestionId_ != nullptr;};
      void deleteConnQuestionId() { this->connQuestionId_ = nullptr;};
      inline int64_t getConnQuestionId() const { DARABONBA_PTR_GET_DEFAULT(connQuestionId_, 0L) };
      inline Outlines& setConnQuestionId(int64_t connQuestionId) { DARABONBA_PTR_SET_VALUE(connQuestionId_, connQuestionId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Outlines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Outlines& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // outlineId Field Functions 
      bool hasOutlineId() const { return this->outlineId_ != nullptr;};
      void deleteOutlineId() { this->outlineId_ = nullptr;};
      inline int64_t getOutlineId() const { DARABONBA_PTR_GET_DEFAULT(outlineId_, 0L) };
      inline Outlines& setOutlineId(int64_t outlineId) { DARABONBA_PTR_SET_VALUE(outlineId_, outlineId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Outlines& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The related knowledge ID.
      shared_ptr<int64_t> connQuestionId_ {};
      // The time the related question was created, in UTC.
      shared_ptr<string> createTime_ {};
      // The time the related question was last modified, in UTC.
      shared_ptr<string> modifyTime_ {};
      // The relationship ID.
      shared_ptr<int64_t> outlineId_ {};
      // The related knowledge title.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->createTime_ == nullptr && this->createUserName_ == nullptr && this->effectStatus_ == nullptr && this->endDate_ == nullptr && this->knowledgeId_ == nullptr
        && this->modifyTime_ == nullptr && this->modifyUserName_ == nullptr && this->outlines_ == nullptr && this->requestId_ == nullptr && this->simQuestions_ == nullptr
        && this->solutions_ == nullptr && this->startDate_ == nullptr && this->status_ == nullptr && this->tagIdList_ == nullptr && this->title_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DescribeFaqResponseBody& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFaqResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeFaqResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // effectStatus Field Functions 
    bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
    void deleteEffectStatus() { this->effectStatus_ = nullptr;};
    inline int32_t getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
    inline DescribeFaqResponseBody& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeFaqResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline DescribeFaqResponseBody& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeFaqResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeFaqResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<DescribeFaqResponseBody::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<DescribeFaqResponseBody::Outlines>) };
    inline vector<DescribeFaqResponseBody::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<DescribeFaqResponseBody::Outlines>) };
    inline DescribeFaqResponseBody& setOutlines(const vector<DescribeFaqResponseBody::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline DescribeFaqResponseBody& setOutlines(vector<DescribeFaqResponseBody::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaqResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // simQuestions Field Functions 
    bool hasSimQuestions() const { return this->simQuestions_ != nullptr;};
    void deleteSimQuestions() { this->simQuestions_ = nullptr;};
    inline const vector<DescribeFaqResponseBody::SimQuestions> & getSimQuestions() const { DARABONBA_PTR_GET_CONST(simQuestions_, vector<DescribeFaqResponseBody::SimQuestions>) };
    inline vector<DescribeFaqResponseBody::SimQuestions> getSimQuestions() { DARABONBA_PTR_GET(simQuestions_, vector<DescribeFaqResponseBody::SimQuestions>) };
    inline DescribeFaqResponseBody& setSimQuestions(const vector<DescribeFaqResponseBody::SimQuestions> & simQuestions) { DARABONBA_PTR_SET_VALUE(simQuestions_, simQuestions) };
    inline DescribeFaqResponseBody& setSimQuestions(vector<DescribeFaqResponseBody::SimQuestions> && simQuestions) { DARABONBA_PTR_SET_RVALUE(simQuestions_, simQuestions) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<DescribeFaqResponseBody::Solutions> & getSolutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<DescribeFaqResponseBody::Solutions>) };
    inline vector<DescribeFaqResponseBody::Solutions> getSolutions() { DARABONBA_PTR_GET(solutions_, vector<DescribeFaqResponseBody::Solutions>) };
    inline DescribeFaqResponseBody& setSolutions(const vector<DescribeFaqResponseBody::Solutions> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline DescribeFaqResponseBody& setSolutions(vector<DescribeFaqResponseBody::Solutions> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeFaqResponseBody& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeFaqResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIdList Field Functions 
    bool hasTagIdList() const { return this->tagIdList_ != nullptr;};
    void deleteTagIdList() { this->tagIdList_ = nullptr;};
    inline const vector<int64_t> & getTagIdList() const { DARABONBA_PTR_GET_CONST(tagIdList_, vector<int64_t>) };
    inline vector<int64_t> getTagIdList() { DARABONBA_PTR_GET(tagIdList_, vector<int64_t>) };
    inline DescribeFaqResponseBody& setTagIdList(const vector<int64_t> & tagIdList) { DARABONBA_PTR_SET_VALUE(tagIdList_, tagIdList) };
    inline DescribeFaqResponseBody& setTagIdList(vector<int64_t> && tagIdList) { DARABONBA_PTR_SET_RVALUE(tagIdList_, tagIdList) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeFaqResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The category ID.
    shared_ptr<int64_t> categoryId_ {};
    // The time the knowledge was created, in UTC.
    shared_ptr<string> createTime_ {};
    // The creator of the knowledge.
    shared_ptr<string> createUserName_ {};
    // The validity status of the knowledge, calculated based on `StartDate` and `EndDate`. Valid values: `20` (Active), `21` (Expired), and `22` (Pending).
    shared_ptr<int32_t> effectStatus_ {};
    // The expiration time of the knowledge, in UTC.
    shared_ptr<string> endDate_ {};
    // The knowledge ID.
    shared_ptr<int64_t> knowledgeId_ {};
    // The time the knowledge was last modified, in UTC.
    shared_ptr<string> modifyTime_ {};
    // The user who last modified the knowledge.
    shared_ptr<string> modifyUserName_ {};
    // A list of related questions.
    shared_ptr<vector<DescribeFaqResponseBody::Outlines>> outlines_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // A list of similar questions.
    shared_ptr<vector<DescribeFaqResponseBody::SimQuestions>> simQuestions_ {};
    // A list of solutions.
    shared_ptr<vector<DescribeFaqResponseBody::Solutions>> solutions_ {};
    // The effective start time of the knowledge, in UTC.
    shared_ptr<string> startDate_ {};
    // The knowledge status. Valid values: `-1` (Deleted and unpublished), `1` (Unpublished), `2` (Published), and `3` (Updated and unpublished).
    shared_ptr<int32_t> status_ {};
    // A list of tag IDs associated with the knowledge.
    shared_ptr<vector<int64_t>> tagIdList_ {};
    // The knowledge title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
