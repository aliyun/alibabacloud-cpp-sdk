// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTRESULTLISTRESPONSEBODYTESTRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTESTRESULTLISTRESPONSEBODYTESTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTestResultListResponseBodyTestResultAssignedTo.hpp>
#include <vector>
#include <alibabacloud/models/GetTestResultListResponseBodyTestResultCustomFields.hpp>
#include <alibabacloud/models/GetTestResultListResponseBodyTestResultTestResultExecutor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestResultListResponseBodyTestResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestResultListResponseBodyTestResult& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(bugCount, bugCount_);
      DARABONBA_PTR_TO_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_TO_JSON(customFields, customFields_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(testResultExecutor, testResultExecutor_);
      DARABONBA_PTR_TO_JSON(testResultGmtCreate, testResultGmtCreate_);
      DARABONBA_PTR_TO_JSON(testResultIdentifier, testResultIdentifier_);
      DARABONBA_PTR_TO_JSON(testResultStatus, testResultStatus_);
      DARABONBA_PTR_TO_JSON(testcaseIdentifier, testcaseIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestResultListResponseBodyTestResult& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(bugCount, bugCount_);
      DARABONBA_PTR_FROM_JSON(categoryIdentifier, categoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(customFields, customFields_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(testResultExecutor, testResultExecutor_);
      DARABONBA_PTR_FROM_JSON(testResultGmtCreate, testResultGmtCreate_);
      DARABONBA_PTR_FROM_JSON(testResultIdentifier, testResultIdentifier_);
      DARABONBA_PTR_FROM_JSON(testResultStatus, testResultStatus_);
      DARABONBA_PTR_FROM_JSON(testcaseIdentifier, testcaseIdentifier_);
    };
    GetTestResultListResponseBodyTestResult() = default ;
    GetTestResultListResponseBodyTestResult(const GetTestResultListResponseBodyTestResult &) = default ;
    GetTestResultListResponseBodyTestResult(GetTestResultListResponseBodyTestResult &&) = default ;
    GetTestResultListResponseBodyTestResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestResultListResponseBodyTestResult() = default ;
    GetTestResultListResponseBodyTestResult& operator=(const GetTestResultListResponseBodyTestResult &) = default ;
    GetTestResultListResponseBodyTestResult& operator=(GetTestResultListResponseBodyTestResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->bugCount_ == nullptr && return this->categoryIdentifier_ == nullptr && return this->customFields_ == nullptr && return this->gmtCreate_ == nullptr && return this->spaceIdentifier_ == nullptr
        && return this->subject_ == nullptr && return this->testResultExecutor_ == nullptr && return this->testResultGmtCreate_ == nullptr && return this->testResultIdentifier_ == nullptr && return this->testResultStatus_ == nullptr
        && return this->testcaseIdentifier_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline const Models::GetTestResultListResponseBodyTestResultAssignedTo & assignedTo() const { DARABONBA_PTR_GET_CONST(assignedTo_, Models::GetTestResultListResponseBodyTestResultAssignedTo) };
    inline Models::GetTestResultListResponseBodyTestResultAssignedTo assignedTo() { DARABONBA_PTR_GET(assignedTo_, Models::GetTestResultListResponseBodyTestResultAssignedTo) };
    inline GetTestResultListResponseBodyTestResult& setAssignedTo(const Models::GetTestResultListResponseBodyTestResultAssignedTo & assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };
    inline GetTestResultListResponseBodyTestResult& setAssignedTo(Models::GetTestResultListResponseBodyTestResultAssignedTo && assignedTo) { DARABONBA_PTR_SET_RVALUE(assignedTo_, assignedTo) };


    // bugCount Field Functions 
    bool hasBugCount() const { return this->bugCount_ != nullptr;};
    void deleteBugCount() { this->bugCount_ = nullptr;};
    inline int64_t bugCount() const { DARABONBA_PTR_GET_DEFAULT(bugCount_, 0L) };
    inline GetTestResultListResponseBodyTestResult& setBugCount(int64_t bugCount) { DARABONBA_PTR_SET_VALUE(bugCount_, bugCount) };


    // categoryIdentifier Field Functions 
    bool hasCategoryIdentifier() const { return this->categoryIdentifier_ != nullptr;};
    void deleteCategoryIdentifier() { this->categoryIdentifier_ = nullptr;};
    inline string categoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(categoryIdentifier_, "") };
    inline GetTestResultListResponseBodyTestResult& setCategoryIdentifier(string categoryIdentifier) { DARABONBA_PTR_SET_VALUE(categoryIdentifier_, categoryIdentifier) };


    // customFields Field Functions 
    bool hasCustomFields() const { return this->customFields_ != nullptr;};
    void deleteCustomFields() { this->customFields_ = nullptr;};
    inline const vector<Models::GetTestResultListResponseBodyTestResultCustomFields> & customFields() const { DARABONBA_PTR_GET_CONST(customFields_, vector<Models::GetTestResultListResponseBodyTestResultCustomFields>) };
    inline vector<Models::GetTestResultListResponseBodyTestResultCustomFields> customFields() { DARABONBA_PTR_GET(customFields_, vector<Models::GetTestResultListResponseBodyTestResultCustomFields>) };
    inline GetTestResultListResponseBodyTestResult& setCustomFields(const vector<Models::GetTestResultListResponseBodyTestResultCustomFields> & customFields) { DARABONBA_PTR_SET_VALUE(customFields_, customFields) };
    inline GetTestResultListResponseBodyTestResult& setCustomFields(vector<Models::GetTestResultListResponseBodyTestResultCustomFields> && customFields) { DARABONBA_PTR_SET_RVALUE(customFields_, customFields) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetTestResultListResponseBodyTestResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline GetTestResultListResponseBodyTestResult& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline GetTestResultListResponseBodyTestResult& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // testResultExecutor Field Functions 
    bool hasTestResultExecutor() const { return this->testResultExecutor_ != nullptr;};
    void deleteTestResultExecutor() { this->testResultExecutor_ = nullptr;};
    inline const Models::GetTestResultListResponseBodyTestResultTestResultExecutor & testResultExecutor() const { DARABONBA_PTR_GET_CONST(testResultExecutor_, Models::GetTestResultListResponseBodyTestResultTestResultExecutor) };
    inline Models::GetTestResultListResponseBodyTestResultTestResultExecutor testResultExecutor() { DARABONBA_PTR_GET(testResultExecutor_, Models::GetTestResultListResponseBodyTestResultTestResultExecutor) };
    inline GetTestResultListResponseBodyTestResult& setTestResultExecutor(const Models::GetTestResultListResponseBodyTestResultTestResultExecutor & testResultExecutor) { DARABONBA_PTR_SET_VALUE(testResultExecutor_, testResultExecutor) };
    inline GetTestResultListResponseBodyTestResult& setTestResultExecutor(Models::GetTestResultListResponseBodyTestResultTestResultExecutor && testResultExecutor) { DARABONBA_PTR_SET_RVALUE(testResultExecutor_, testResultExecutor) };


    // testResultGmtCreate Field Functions 
    bool hasTestResultGmtCreate() const { return this->testResultGmtCreate_ != nullptr;};
    void deleteTestResultGmtCreate() { this->testResultGmtCreate_ = nullptr;};
    inline int64_t testResultGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(testResultGmtCreate_, 0L) };
    inline GetTestResultListResponseBodyTestResult& setTestResultGmtCreate(int64_t testResultGmtCreate) { DARABONBA_PTR_SET_VALUE(testResultGmtCreate_, testResultGmtCreate) };


    // testResultIdentifier Field Functions 
    bool hasTestResultIdentifier() const { return this->testResultIdentifier_ != nullptr;};
    void deleteTestResultIdentifier() { this->testResultIdentifier_ = nullptr;};
    inline string testResultIdentifier() const { DARABONBA_PTR_GET_DEFAULT(testResultIdentifier_, "") };
    inline GetTestResultListResponseBodyTestResult& setTestResultIdentifier(string testResultIdentifier) { DARABONBA_PTR_SET_VALUE(testResultIdentifier_, testResultIdentifier) };


    // testResultStatus Field Functions 
    bool hasTestResultStatus() const { return this->testResultStatus_ != nullptr;};
    void deleteTestResultStatus() { this->testResultStatus_ = nullptr;};
    inline string testResultStatus() const { DARABONBA_PTR_GET_DEFAULT(testResultStatus_, "") };
    inline GetTestResultListResponseBodyTestResult& setTestResultStatus(string testResultStatus) { DARABONBA_PTR_SET_VALUE(testResultStatus_, testResultStatus) };


    // testcaseIdentifier Field Functions 
    bool hasTestcaseIdentifier() const { return this->testcaseIdentifier_ != nullptr;};
    void deleteTestcaseIdentifier() { this->testcaseIdentifier_ = nullptr;};
    inline string testcaseIdentifier() const { DARABONBA_PTR_GET_DEFAULT(testcaseIdentifier_, "") };
    inline GetTestResultListResponseBodyTestResult& setTestcaseIdentifier(string testcaseIdentifier) { DARABONBA_PTR_SET_VALUE(testcaseIdentifier_, testcaseIdentifier) };


  protected:
    std::shared_ptr<Models::GetTestResultListResponseBodyTestResultAssignedTo> assignedTo_ = nullptr;
    std::shared_ptr<int64_t> bugCount_ = nullptr;
    std::shared_ptr<string> categoryIdentifier_ = nullptr;
    std::shared_ptr<vector<Models::GetTestResultListResponseBodyTestResultCustomFields>> customFields_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<Models::GetTestResultListResponseBodyTestResultTestResultExecutor> testResultExecutor_ = nullptr;
    std::shared_ptr<int64_t> testResultGmtCreate_ = nullptr;
    std::shared_ptr<string> testResultIdentifier_ = nullptr;
    std::shared_ptr<string> testResultStatus_ = nullptr;
    std::shared_ptr<string> testcaseIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
