// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEDETAILINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEDETAILINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult.hpp>
#include <alibabacloud/models/UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition.hpp>
#include <alibabacloud/models/UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseResponseBodyTestcaseDetailInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseResponseBodyTestcaseDetailInfo& obj) { 
      DARABONBA_PTR_TO_JSON(expectedResult, expectedResult_);
      DARABONBA_PTR_TO_JSON(precondition, precondition_);
      DARABONBA_PTR_TO_JSON(stepContent, stepContent_);
      DARABONBA_PTR_TO_JSON(stepType, stepType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseResponseBodyTestcaseDetailInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(expectedResult, expectedResult_);
      DARABONBA_PTR_FROM_JSON(precondition, precondition_);
      DARABONBA_PTR_FROM_JSON(stepContent, stepContent_);
      DARABONBA_PTR_FROM_JSON(stepType, stepType_);
    };
    UpdateTestCaseResponseBodyTestcaseDetailInfo() = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfo(const UpdateTestCaseResponseBodyTestcaseDetailInfo &) = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfo(UpdateTestCaseResponseBodyTestcaseDetailInfo &&) = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseResponseBodyTestcaseDetailInfo() = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfo& operator=(const UpdateTestCaseResponseBodyTestcaseDetailInfo &) = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfo& operator=(UpdateTestCaseResponseBodyTestcaseDetailInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectedResult_ == nullptr
        && return this->precondition_ == nullptr && return this->stepContent_ == nullptr && return this->stepType_ == nullptr; };
    // expectedResult Field Functions 
    bool hasExpectedResult() const { return this->expectedResult_ != nullptr;};
    void deleteExpectedResult() { this->expectedResult_ = nullptr;};
    inline const Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult & expectedResult() const { DARABONBA_PTR_GET_CONST(expectedResult_, Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult) };
    inline Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult expectedResult() { DARABONBA_PTR_GET(expectedResult_, Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult) };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setExpectedResult(const Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult & expectedResult) { DARABONBA_PTR_SET_VALUE(expectedResult_, expectedResult) };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setExpectedResult(Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult && expectedResult) { DARABONBA_PTR_SET_RVALUE(expectedResult_, expectedResult) };


    // precondition Field Functions 
    bool hasPrecondition() const { return this->precondition_ != nullptr;};
    void deletePrecondition() { this->precondition_ = nullptr;};
    inline const Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition & precondition() const { DARABONBA_PTR_GET_CONST(precondition_, Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition) };
    inline Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition precondition() { DARABONBA_PTR_GET(precondition_, Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition) };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setPrecondition(const Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition & precondition) { DARABONBA_PTR_SET_VALUE(precondition_, precondition) };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setPrecondition(Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition && precondition) { DARABONBA_PTR_SET_RVALUE(precondition_, precondition) };


    // stepContent Field Functions 
    bool hasStepContent() const { return this->stepContent_ != nullptr;};
    void deleteStepContent() { this->stepContent_ = nullptr;};
    inline const Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent & stepContent() const { DARABONBA_PTR_GET_CONST(stepContent_, Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent) };
    inline Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent stepContent() { DARABONBA_PTR_GET(stepContent_, Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent) };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setStepContent(const Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent & stepContent) { DARABONBA_PTR_SET_VALUE(stepContent_, stepContent) };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setStepContent(Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent && stepContent) { DARABONBA_PTR_SET_RVALUE(stepContent_, stepContent) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfo& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


  protected:
    std::shared_ptr<Models::UpdateTestCaseResponseBodyTestcaseDetailInfoExpectedResult> expectedResult_ = nullptr;
    std::shared_ptr<Models::UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition> precondition_ = nullptr;
    std::shared_ptr<Models::UpdateTestCaseResponseBodyTestcaseDetailInfoStepContent> stepContent_ = nullptr;
    std::shared_ptr<string> stepType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
