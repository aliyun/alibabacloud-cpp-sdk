// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTestCaseRequestFieldValueList.hpp>
#include <alibabacloud/models/CreateTestCaseRequestTestcaseStepContentInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(directoryIdentifier, directoryIdentifier_);
      DARABONBA_PTR_TO_JSON(fieldValueList, fieldValueList_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(testcaseStepContentInfo, testcaseStepContentInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(directoryIdentifier, directoryIdentifier_);
      DARABONBA_PTR_FROM_JSON(fieldValueList, fieldValueList_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(testcaseStepContentInfo, testcaseStepContentInfo_);
    };
    CreateTestCaseRequest() = default ;
    CreateTestCaseRequest(const CreateTestCaseRequest &) = default ;
    CreateTestCaseRequest(CreateTestCaseRequest &&) = default ;
    CreateTestCaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseRequest() = default ;
    CreateTestCaseRequest& operator=(const CreateTestCaseRequest &) = default ;
    CreateTestCaseRequest& operator=(CreateTestCaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->directoryIdentifier_ == nullptr && return this->fieldValueList_ == nullptr && return this->priority_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->subject_ == nullptr
        && return this->tags_ == nullptr && return this->testcaseStepContentInfo_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline string assignedTo() const { DARABONBA_PTR_GET_DEFAULT(assignedTo_, "") };
    inline CreateTestCaseRequest& setAssignedTo(string assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };


    // directoryIdentifier Field Functions 
    bool hasDirectoryIdentifier() const { return this->directoryIdentifier_ != nullptr;};
    void deleteDirectoryIdentifier() { this->directoryIdentifier_ = nullptr;};
    inline string directoryIdentifier() const { DARABONBA_PTR_GET_DEFAULT(directoryIdentifier_, "") };
    inline CreateTestCaseRequest& setDirectoryIdentifier(string directoryIdentifier) { DARABONBA_PTR_SET_VALUE(directoryIdentifier_, directoryIdentifier) };


    // fieldValueList Field Functions 
    bool hasFieldValueList() const { return this->fieldValueList_ != nullptr;};
    void deleteFieldValueList() { this->fieldValueList_ = nullptr;};
    inline const vector<CreateTestCaseRequestFieldValueList> & fieldValueList() const { DARABONBA_PTR_GET_CONST(fieldValueList_, vector<CreateTestCaseRequestFieldValueList>) };
    inline vector<CreateTestCaseRequestFieldValueList> fieldValueList() { DARABONBA_PTR_GET(fieldValueList_, vector<CreateTestCaseRequestFieldValueList>) };
    inline CreateTestCaseRequest& setFieldValueList(const vector<CreateTestCaseRequestFieldValueList> & fieldValueList) { DARABONBA_PTR_SET_VALUE(fieldValueList_, fieldValueList) };
    inline CreateTestCaseRequest& setFieldValueList(vector<CreateTestCaseRequestFieldValueList> && fieldValueList) { DARABONBA_PTR_SET_RVALUE(fieldValueList_, fieldValueList) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateTestCaseRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline CreateTestCaseRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTestCaseRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline CreateTestCaseRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTestCaseRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // testcaseStepContentInfo Field Functions 
    bool hasTestcaseStepContentInfo() const { return this->testcaseStepContentInfo_ != nullptr;};
    void deleteTestcaseStepContentInfo() { this->testcaseStepContentInfo_ = nullptr;};
    inline const CreateTestCaseRequestTestcaseStepContentInfo & testcaseStepContentInfo() const { DARABONBA_PTR_GET_CONST(testcaseStepContentInfo_, CreateTestCaseRequestTestcaseStepContentInfo) };
    inline CreateTestCaseRequestTestcaseStepContentInfo testcaseStepContentInfo() { DARABONBA_PTR_GET(testcaseStepContentInfo_, CreateTestCaseRequestTestcaseStepContentInfo) };
    inline CreateTestCaseRequest& setTestcaseStepContentInfo(const CreateTestCaseRequestTestcaseStepContentInfo & testcaseStepContentInfo) { DARABONBA_PTR_SET_VALUE(testcaseStepContentInfo_, testcaseStepContentInfo) };
    inline CreateTestCaseRequest& setTestcaseStepContentInfo(CreateTestCaseRequestTestcaseStepContentInfo && testcaseStepContentInfo) { DARABONBA_PTR_SET_RVALUE(testcaseStepContentInfo_, testcaseStepContentInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assignedTo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> directoryIdentifier_ = nullptr;
    std::shared_ptr<vector<CreateTestCaseRequestFieldValueList>> fieldValueList_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<CreateTestCaseRequestTestcaseStepContentInfo> testcaseStepContentInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
