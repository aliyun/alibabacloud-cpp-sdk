// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAQRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFaqResponseBodyOutlines.hpp>
#include <alibabacloud/models/DescribeFaqResponseBodySimQuestions.hpp>
#include <alibabacloud/models/DescribeFaqResponseBodySolutions.hpp>
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
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->createTime_ != nullptr && this->createUserName_ != nullptr && this->effectStatus_ != nullptr && this->endDate_ != nullptr && this->knowledgeId_ != nullptr
        && this->modifyTime_ != nullptr && this->modifyUserName_ != nullptr && this->outlines_ != nullptr && this->requestId_ != nullptr && this->simQuestions_ != nullptr
        && this->solutions_ != nullptr && this->startDate_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DescribeFaqResponseBody& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeFaqResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline DescribeFaqResponseBody& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // effectStatus Field Functions 
    bool hasEffectStatus() const { return this->effectStatus_ != nullptr;};
    void deleteEffectStatus() { this->effectStatus_ = nullptr;};
    inline int32_t effectStatus() const { DARABONBA_PTR_GET_DEFAULT(effectStatus_, 0) };
    inline DescribeFaqResponseBody& setEffectStatus(int32_t effectStatus) { DARABONBA_PTR_SET_VALUE(effectStatus_, effectStatus) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeFaqResponseBody& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline DescribeFaqResponseBody& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeFaqResponseBody& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline DescribeFaqResponseBody& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<DescribeFaqResponseBodyOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<DescribeFaqResponseBodyOutlines>) };
    inline vector<DescribeFaqResponseBodyOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<DescribeFaqResponseBodyOutlines>) };
    inline DescribeFaqResponseBody& setOutlines(const vector<DescribeFaqResponseBodyOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline DescribeFaqResponseBody& setOutlines(vector<DescribeFaqResponseBodyOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaqResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // simQuestions Field Functions 
    bool hasSimQuestions() const { return this->simQuestions_ != nullptr;};
    void deleteSimQuestions() { this->simQuestions_ = nullptr;};
    inline const vector<DescribeFaqResponseBodySimQuestions> & simQuestions() const { DARABONBA_PTR_GET_CONST(simQuestions_, vector<DescribeFaqResponseBodySimQuestions>) };
    inline vector<DescribeFaqResponseBodySimQuestions> simQuestions() { DARABONBA_PTR_GET(simQuestions_, vector<DescribeFaqResponseBodySimQuestions>) };
    inline DescribeFaqResponseBody& setSimQuestions(const vector<DescribeFaqResponseBodySimQuestions> & simQuestions) { DARABONBA_PTR_SET_VALUE(simQuestions_, simQuestions) };
    inline DescribeFaqResponseBody& setSimQuestions(vector<DescribeFaqResponseBodySimQuestions> && simQuestions) { DARABONBA_PTR_SET_RVALUE(simQuestions_, simQuestions) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<DescribeFaqResponseBodySolutions> & solutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<DescribeFaqResponseBodySolutions>) };
    inline vector<DescribeFaqResponseBodySolutions> solutions() { DARABONBA_PTR_GET(solutions_, vector<DescribeFaqResponseBodySolutions>) };
    inline DescribeFaqResponseBody& setSolutions(const vector<DescribeFaqResponseBodySolutions> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline DescribeFaqResponseBody& setSolutions(vector<DescribeFaqResponseBodySolutions> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeFaqResponseBody& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeFaqResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeFaqResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<int32_t> effectStatus_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
    std::shared_ptr<vector<DescribeFaqResponseBodyOutlines>> outlines_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeFaqResponseBodySimQuestions>> simQuestions_ = nullptr;
    std::shared_ptr<vector<DescribeFaqResponseBodySolutions>> solutions_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
