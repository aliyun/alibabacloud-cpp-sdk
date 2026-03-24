// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFAQREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFAQREQUEST_HPP_
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
  class UpdateFaqRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFaqRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TagIdList, tagIdList_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFaqRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TagIdList, tagIdList_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateFaqRequest() = default ;
    UpdateFaqRequest(const UpdateFaqRequest &) = default ;
    UpdateFaqRequest(UpdateFaqRequest &&) = default ;
    UpdateFaqRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFaqRequest() = default ;
    UpdateFaqRequest& operator=(const UpdateFaqRequest &) = default ;
    UpdateFaqRequest& operator=(UpdateFaqRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->categoryId_ == nullptr && this->endDate_ == nullptr && this->knowledgeId_ == nullptr && this->startDate_ == nullptr && this->tagIdList_ == nullptr
        && this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateFaqRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateFaqRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateFaqRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline UpdateFaqRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateFaqRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tagIdList Field Functions 
    bool hasTagIdList() const { return this->tagIdList_ != nullptr;};
    void deleteTagIdList() { this->tagIdList_ = nullptr;};
    inline const vector<int64_t> & getTagIdList() const { DARABONBA_PTR_GET_CONST(tagIdList_, vector<int64_t>) };
    inline vector<int64_t> getTagIdList() { DARABONBA_PTR_GET(tagIdList_, vector<int64_t>) };
    inline UpdateFaqRequest& setTagIdList(const vector<int64_t> & tagIdList) { DARABONBA_PTR_SET_VALUE(tagIdList_, tagIdList) };
    inline UpdateFaqRequest& setTagIdList(vector<int64_t> && tagIdList) { DARABONBA_PTR_SET_RVALUE(tagIdList_, tagIdList) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateFaqRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<int64_t> categoryId_ {};
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<int64_t> knowledgeId_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<vector<int64_t>> tagIdList_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
