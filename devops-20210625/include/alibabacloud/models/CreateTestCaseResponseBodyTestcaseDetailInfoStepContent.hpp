// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEDETAILINFOSTEPCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEDETAILINFOSTEPCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBodyTestcaseDetailInfoStepContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& obj) { 
      DARABONBA_PTR_TO_JSON(stepContent, stepContent_);
      DARABONBA_PTR_TO_JSON(stepContentType, stepContentType_);
      DARABONBA_PTR_TO_JSON(stepIdentifier, stepIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& obj) { 
      DARABONBA_PTR_FROM_JSON(stepContent, stepContent_);
      DARABONBA_PTR_FROM_JSON(stepContentType, stepContentType_);
      DARABONBA_PTR_FROM_JSON(stepIdentifier, stepIdentifier_);
    };
    CreateTestCaseResponseBodyTestcaseDetailInfoStepContent() = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoStepContent(const CreateTestCaseResponseBodyTestcaseDetailInfoStepContent &) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoStepContent(CreateTestCaseResponseBodyTestcaseDetailInfoStepContent &&) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoStepContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBodyTestcaseDetailInfoStepContent() = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& operator=(const CreateTestCaseResponseBodyTestcaseDetailInfoStepContent &) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& operator=(CreateTestCaseResponseBodyTestcaseDetailInfoStepContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stepContent_ == nullptr
        && return this->stepContentType_ == nullptr && return this->stepIdentifier_ == nullptr; };
    // stepContent Field Functions 
    bool hasStepContent() const { return this->stepContent_ != nullptr;};
    void deleteStepContent() { this->stepContent_ = nullptr;};
    inline string stepContent() const { DARABONBA_PTR_GET_DEFAULT(stepContent_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& setStepContent(string stepContent) { DARABONBA_PTR_SET_VALUE(stepContent_, stepContent) };


    // stepContentType Field Functions 
    bool hasStepContentType() const { return this->stepContentType_ != nullptr;};
    void deleteStepContentType() { this->stepContentType_ = nullptr;};
    inline string stepContentType() const { DARABONBA_PTR_GET_DEFAULT(stepContentType_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& setStepContentType(string stepContentType) { DARABONBA_PTR_SET_VALUE(stepContentType_, stepContentType) };


    // stepIdentifier Field Functions 
    bool hasStepIdentifier() const { return this->stepIdentifier_ != nullptr;};
    void deleteStepIdentifier() { this->stepIdentifier_ = nullptr;};
    inline string stepIdentifier() const { DARABONBA_PTR_GET_DEFAULT(stepIdentifier_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfoStepContent& setStepIdentifier(string stepIdentifier) { DARABONBA_PTR_SET_VALUE(stepIdentifier_, stepIdentifier) };


  protected:
    std::shared_ptr<string> stepContent_ = nullptr;
    std::shared_ptr<string> stepContentType_ = nullptr;
    std::shared_ptr<string> stepIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
