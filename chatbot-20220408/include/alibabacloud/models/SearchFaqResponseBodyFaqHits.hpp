// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFAQRESPONSEBODYFAQHITS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFAQRESPONSEBODYFAQHITS_HPP_
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
  class SearchFaqResponseBodyFaqHits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaqResponseBodyFaqHits& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchFaqResponseBodyFaqHits& obj) { 
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
    SearchFaqResponseBodyFaqHits() = default ;
    SearchFaqResponseBodyFaqHits(const SearchFaqResponseBodyFaqHits &) = default ;
    SearchFaqResponseBodyFaqHits(SearchFaqResponseBodyFaqHits &&) = default ;
    SearchFaqResponseBodyFaqHits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaqResponseBodyFaqHits() = default ;
    SearchFaqResponseBodyFaqHits& operator=(const SearchFaqResponseBodyFaqHits &) = default ;
    SearchFaqResponseBodyFaqHits& operator=(SearchFaqResponseBodyFaqHits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->createTime_ == nullptr && return this->createUserId_ == nullptr && return this->createUserName_ == nullptr && return this->effectStatus_ == nullptr && return this->hitSimilarTitles_ == nullptr
        && return this->hitSolutions_ == nullptr && return this->knowledgeId_ == nullptr && return this->modifyTime_ == nullptr && return this->modifyUserId_ == nullptr && return this->modifyUserName_ == nullptr
        && return this->status_ == nullptr && return this->title_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline SearchFaqResponseBodyFaqHits& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchFaqResponseBodyFaqHits& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline int64_t createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, 0L) };
    inline SearchFaqResponseBodyFaqHits& setCreateUserId(int64_t createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline SearchFaqResponseBodyFaqHits& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // effectStatus Field Functions 
    bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
    void deleteEffectStatus() { this->effectStatus_ = nullptr;};
    inline int32_t effectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
    inline SearchFaqResponseBodyFaqHits& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


    // hitSimilarTitles Field Functions 
    bool hasHitSimilarTitles() const { return this->hitSimilarTitles_ != nullptr;};
    void deleteHitSimilarTitles() { this->hitSimilarTitles_ = nullptr;};
    inline const vector<string> & hitSimilarTitles() const { DARABONBA_PTR_GET_CONST(hitSimilarTitles_, vector<string>) };
    inline vector<string> hitSimilarTitles() { DARABONBA_PTR_GET(hitSimilarTitles_, vector<string>) };
    inline SearchFaqResponseBodyFaqHits& setHitSimilarTitles(const vector<string> & hitSimilarTitles) { DARABONBA_PTR_SET_VALUE(hitSimilarTitles_, hitSimilarTitles) };
    inline SearchFaqResponseBodyFaqHits& setHitSimilarTitles(vector<string> && hitSimilarTitles) { DARABONBA_PTR_SET_RVALUE(hitSimilarTitles_, hitSimilarTitles) };


    // hitSolutions Field Functions 
    bool hasHitSolutions() const { return this->hitSolutions_ != nullptr;};
    void deleteHitSolutions() { this->hitSolutions_ = nullptr;};
    inline const vector<string> & hitSolutions() const { DARABONBA_PTR_GET_CONST(hitSolutions_, vector<string>) };
    inline vector<string> hitSolutions() { DARABONBA_PTR_GET(hitSolutions_, vector<string>) };
    inline SearchFaqResponseBodyFaqHits& setHitSolutions(const vector<string> & hitSolutions) { DARABONBA_PTR_SET_VALUE(hitSolutions_, hitSolutions) };
    inline SearchFaqResponseBodyFaqHits& setHitSolutions(vector<string> && hitSolutions) { DARABONBA_PTR_SET_RVALUE(hitSolutions_, hitSolutions) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline SearchFaqResponseBodyFaqHits& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline SearchFaqResponseBodyFaqHits& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserId Field Functions 
    bool hasModifyUserId() const { return this->modifyUserId_ != nullptr;};
    void deleteModifyUserId() { this->modifyUserId_ = nullptr;};
    inline int64_t modifyUserId() const { DARABONBA_PTR_GET_DEFAULT(modifyUserId_, 0L) };
    inline SearchFaqResponseBodyFaqHits& setModifyUserId(int64_t modifyUserId) { DARABONBA_PTR_SET_VALUE(modifyUserId_, modifyUserId) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline SearchFaqResponseBodyFaqHits& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SearchFaqResponseBodyFaqHits& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchFaqResponseBodyFaqHits& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createUserId_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<int32_t> effectStatus_ = nullptr;
    std::shared_ptr<vector<string>> hitSimilarTitles_ = nullptr;
    std::shared_ptr<vector<string>> hitSolutions_ = nullptr;
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<int64_t> modifyUserId_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
