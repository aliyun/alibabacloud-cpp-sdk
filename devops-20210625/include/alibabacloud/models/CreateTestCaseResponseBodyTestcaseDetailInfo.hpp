// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition.hpp>
#include <alibabacloud/models/CreateTestCaseResponseBodyTestcaseDetailInfoStepContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBodyTestcaseDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBodyTestcaseDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(expectedResult, expectedResult_);
      DARABONBA_PTR_TO_JSON(precondition, precondition_);
      DARABONBA_PTR_TO_JSON(stepContent, stepContent_);
      DARABONBA_PTR_TO_JSON(stepType, stepType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBodyTestcaseDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(expectedResult, expectedResult_);
      DARABONBA_PTR_FROM_JSON(precondition, precondition_);
      DARABONBA_PTR_FROM_JSON(stepContent, stepContent_);
      DARABONBA_PTR_FROM_JSON(stepType, stepType_);
    };
    CreateTestCaseResponseBodyTestcaseDetailInfo() = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfo(const CreateTestCaseResponseBodyTestcaseDetailInfo &) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfo(CreateTestCaseResponseBodyTestcaseDetailInfo &&) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBodyTestcaseDetailInfo() = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfo& operator=(const CreateTestCaseResponseBodyTestcaseDetailInfo &) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfo& operator=(CreateTestCaseResponseBodyTestcaseDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectedResult_ == nullptr
        && return this->precondition_ == nullptr && return this->stepContent_ == nullptr && return this->stepType_ == nullptr; };
    // expectedResult Field Functions 
    bool hasExpectedResult() const { return this->expectedResult_ != nullptr;};
    void deleteExpectedResult() { this->expectedResult_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult & expectedResult() const { DARABONBA_PTR_GET_CONST(expectedResult_, Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult) };
    inline Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult expectedResult() { DARABONBA_PTR_GET(expectedResult_, Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult) };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setExpectedResult(const Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult & expectedResult) { DARABONBA_PTR_SET_VALUE(expectedResult_, expectedResult) };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setExpectedResult(Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult && expectedResult) { DARABONBA_PTR_SET_RVALUE(expectedResult_, expectedResult) };


    // precondition Field Functions 
    bool hasPrecondition() const { return this->precondition_ != nullptr;};
    void deletePrecondition() { this->precondition_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition & precondition() const { DARABONBA_PTR_GET_CONST(precondition_, Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition) };
    inline Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition precondition() { DARABONBA_PTR_GET(precondition_, Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition) };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setPrecondition(const Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition & precondition) { DARABONBA_PTR_SET_VALUE(precondition_, precondition) };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setPrecondition(Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition && precondition) { DARABONBA_PTR_SET_RVALUE(precondition_, precondition) };


    // stepContent Field Functions 
    bool hasStepContent() const { return this->stepContent_ != nullptr;};
    void deleteStepContent() { this->stepContent_ = nullptr;};
    inline const Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent & stepContent() const { DARABONBA_PTR_GET_CONST(stepContent_, Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent) };
    inline Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent stepContent() { DARABONBA_PTR_GET(stepContent_, Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent) };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setStepContent(const Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent & stepContent) { DARABONBA_PTR_SET_VALUE(stepContent_, stepContent) };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setStepContent(Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent && stepContent) { DARABONBA_PTR_SET_RVALUE(stepContent_, stepContent) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfo& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


  protected:
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult> expectedResult_ = nullptr;
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseDetailInfoPrecondition> precondition_ = nullptr;
    std::shared_ptr<Models::CreateTestCaseResponseBodyTestcaseDetailInfoStepContent> stepContent_ = nullptr;
    std::shared_ptr<string> stepType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
