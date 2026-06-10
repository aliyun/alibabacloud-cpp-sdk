// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFAQRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFAQRESPONSEBODY_HPP_
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
  class SearchFaqResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaqResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaqHits, faqHits_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaqResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaqHits, faqHits_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SearchFaqResponseBody() = default ;
    SearchFaqResponseBody(const SearchFaqResponseBody &) = default ;
    SearchFaqResponseBody(SearchFaqResponseBody &&) = default ;
    SearchFaqResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaqResponseBody() = default ;
    SearchFaqResponseBody& operator=(const SearchFaqResponseBody &) = default ;
    SearchFaqResponseBody& operator=(SearchFaqResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FaqHits : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FaqHits& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_TO_JSON(HitSimilarTitles, hitSimilarTitles_);
        DARABONBA_PTR_TO_JSON(HitSolutions, hitSolutions_);
        DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, FaqHits& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(EffectStatus, effectStatus_);
        DARABONBA_PTR_FROM_JSON(HitSimilarTitles, hitSimilarTitles_);
        DARABONBA_PTR_FROM_JSON(HitSolutions, hitSolutions_);
        DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUserId, modifyUserId_);
        DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      FaqHits() = default ;
      FaqHits(const FaqHits &) = default ;
      FaqHits(FaqHits &&) = default ;
      FaqHits(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FaqHits() = default ;
      FaqHits& operator=(const FaqHits &) = default ;
      FaqHits& operator=(FaqHits &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->createTime_ == nullptr && this->createUserId_ == nullptr && this->createUserName_ == nullptr && this->effectStatus_ == nullptr && this->hitSimilarTitles_ == nullptr
        && this->hitSolutions_ == nullptr && this->knowledgeId_ == nullptr && this->modifyTime_ == nullptr && this->modifyUserId_ == nullptr && this->modifyUserName_ == nullptr
        && this->status_ == nullptr && this->title_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline FaqHits& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline FaqHits& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserId Field Functions 
      bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
      void deleteCreateUserId() { this->createUserId_ = nullptr;};
      inline int64_t getCreateUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
      inline FaqHits& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline FaqHits& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // effectStatus Field Functions 
      bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
      void deleteEffectStatus() { this->effectStatus_ = nullptr;};
      inline int32_t getEffectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
      inline FaqHits& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


      // hitSimilarTitles Field Functions 
      bool hasHitSimilarTitles() const { return this->hitSimilarTitles_ != nullptr;};
      void deleteHitSimilarTitles() { this->hitSimilarTitles_ = nullptr;};
      inline const vector<string> & getHitSimilarTitles() const { DARABONBA_PTR_GET_CONST(hitSimilarTitles_, vector<string>) };
      inline vector<string> getHitSimilarTitles() { DARABONBA_PTR_GET(hitSimilarTitles_, vector<string>) };
      inline FaqHits& setHitSimilarTitles(const vector<string> & hitSimilarTitles) { DARABONBA_PTR_SET_VALUE(hitSimilarTitles_, hitSimilarTitles) };
      inline FaqHits& setHitSimilarTitles(vector<string> && hitSimilarTitles) { DARABONBA_PTR_SET_RVALUE(hitSimilarTitles_, hitSimilarTitles) };


      // hitSolutions Field Functions 
      bool hasHitSolutions() const { return this->hitSolutions_ != nullptr;};
      void deleteHitSolutions() { this->hitSolutions_ = nullptr;};
      inline const vector<string> & getHitSolutions() const { DARABONBA_PTR_GET_CONST(hitSolutions_, vector<string>) };
      inline vector<string> getHitSolutions() { DARABONBA_PTR_GET(hitSolutions_, vector<string>) };
      inline FaqHits& setHitSolutions(const vector<string> & hitSolutions) { DARABONBA_PTR_SET_VALUE(hitSolutions_, hitSolutions) };
      inline FaqHits& setHitSolutions(vector<string> && hitSolutions) { DARABONBA_PTR_SET_RVALUE(hitSolutions_, hitSolutions) };


      // knowledgeId Field Functions 
      bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
      void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
      inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
      inline FaqHits& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline FaqHits& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // modifyUserId Field Functions 
      bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
      void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
      inline int64_t getModifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
      inline FaqHits& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


      // modifyUserName Field Functions 
      bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
      void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
      inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
      inline FaqHits& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline FaqHits& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline FaqHits& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The category ID.
      shared_ptr<int64_t> categoryId_ {};
      // The creation time (UTC).
      shared_ptr<string> createTime_ {};
      // The creator ID.
      shared_ptr<int64_t> createUserId_ {};
      // The creator\\"s username.
      shared_ptr<string> createUserName_ {};
      // The effective status of the FAQ. This status is determined by the StartDate and EndDate parameters.
      shared_ptr<int32_t> effectStatus_ {};
      // A list of matched similar titles.
      shared_ptr<vector<string>> hitSimilarTitles_ {};
      // A list of matched answers.
      shared_ptr<vector<string>> hitSolutions_ {};
      // The FAQ ID.
      shared_ptr<int64_t> knowledgeId_ {};
      // The modification time (UTC).
      shared_ptr<string> modifyTime_ {};
      // The modifier ID.
      shared_ptr<int64_t> modifyUserId_ {};
      // The modifier\\"s username.
      shared_ptr<string> modifyUserName_ {};
      // The FAQ status.
      shared_ptr<int32_t> status_ {};
      // The title of the FAQ.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->faqHits_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // faqHits Field Functions 
    bool hasFaqHits() const { return this->faqHits_ != nullptr;};
    void deleteFaqHits() { this->faqHits_ = nullptr;};
    inline const vector<SearchFaqResponseBody::FaqHits> & getFaqHits() const { DARABONBA_PTR_GET_CONST(faqHits_, vector<SearchFaqResponseBody::FaqHits>) };
    inline vector<SearchFaqResponseBody::FaqHits> getFaqHits() { DARABONBA_PTR_GET(faqHits_, vector<SearchFaqResponseBody::FaqHits>) };
    inline SearchFaqResponseBody& setFaqHits(const vector<SearchFaqResponseBody::FaqHits> & faqHits) { DARABONBA_PTR_SET_VALUE(faqHits_, faqHits) };
    inline SearchFaqResponseBody& setFaqHits(vector<SearchFaqResponseBody::FaqHits> && faqHits) { DARABONBA_PTR_SET_RVALUE(faqHits_, faqHits) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchFaqResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFaqResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchFaqResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline SearchFaqResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of matching FAQs.
    shared_ptr<vector<SearchFaqResponseBody::FaqHits>> faqHits_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of matched entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
