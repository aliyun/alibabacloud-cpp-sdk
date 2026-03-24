// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFAQREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFAQREQUEST_HPP_
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
  class CreateFaqRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFaqRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(SolutionContent, solutionContent_);
      DARABONBA_PTR_TO_JSON(SolutionType, solutionType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TagIdList, tagIdList_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFaqRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(SolutionContent, solutionContent_);
      DARABONBA_PTR_FROM_JSON(SolutionType, solutionType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TagIdList, tagIdList_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateFaqRequest() = default ;
    CreateFaqRequest(const CreateFaqRequest &) = default ;
    CreateFaqRequest(CreateFaqRequest &&) = default ;
    CreateFaqRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFaqRequest() = default ;
    CreateFaqRequest& operator=(const CreateFaqRequest &) = default ;
    CreateFaqRequest& operator=(CreateFaqRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->categoryId_ == nullptr && this->endDate_ == nullptr && this->solutionContent_ == nullptr && this->solutionType_ == nullptr && this->startDate_ == nullptr
        && this->tagIdList_ == nullptr && this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateFaqRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline CreateFaqRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline CreateFaqRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // solutionContent Field Functions 
    bool hasSolutionContent() const { return this->solutionContent_ != nullptr;};
    void deleteSolutionContent() { this->solutionContent_ = nullptr;};
    inline string getSolutionContent() const { DARABONBA_PTR_GET_DEFAULT(solutionContent_, "") };
    inline CreateFaqRequest& setSolutionContent(string solutionContent) { DARABONBA_PTR_SET_VALUE(solutionContent_, solutionContent) };


    // solutionType Field Functions 
    bool hasSolutionType() const { return this->solutionType_ != nullptr;};
    void deleteSolutionType() { this->solutionType_ = nullptr;};
    inline int32_t getSolutionType() const { DARABONBA_PTR_GET_DEFAULT(solutionType_, 0) };
    inline CreateFaqRequest& setSolutionType(int32_t solutionType) { DARABONBA_PTR_SET_VALUE(solutionType_, solutionType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline CreateFaqRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tagIdList Field Functions 
    bool hasTagIdList() const { return this->tagIdList_ != nullptr;};
    void deleteTagIdList() { this->tagIdList_ = nullptr;};
    inline const vector<int64_t> & getTagIdList() const { DARABONBA_PTR_GET_CONST(tagIdList_, vector<int64_t>) };
    inline vector<int64_t> getTagIdList() { DARABONBA_PTR_GET(tagIdList_, vector<int64_t>) };
    inline CreateFaqRequest& setTagIdList(const vector<int64_t> & tagIdList) { DARABONBA_PTR_SET_VALUE(tagIdList_, tagIdList) };
    inline CreateFaqRequest& setTagIdList(vector<int64_t> && tagIdList) { DARABONBA_PTR_SET_RVALUE(tagIdList_, tagIdList) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateFaqRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<int64_t> categoryId_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> solutionContent_ {};
    shared_ptr<int32_t> solutionType_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<vector<int64_t>> tagIdList_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
