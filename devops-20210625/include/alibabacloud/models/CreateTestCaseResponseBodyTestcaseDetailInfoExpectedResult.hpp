// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEDETAILINFOEXPECTEDRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEDETAILINFOEXPECTEDRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& obj) { 
      DARABONBA_PTR_TO_JSON(expectContent, expectContent_);
      DARABONBA_PTR_TO_JSON(expectContentType, expectContentType_);
      DARABONBA_PTR_TO_JSON(expectIdentifier, expectIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& obj) { 
      DARABONBA_PTR_FROM_JSON(expectContent, expectContent_);
      DARABONBA_PTR_FROM_JSON(expectContentType, expectContentType_);
      DARABONBA_PTR_FROM_JSON(expectIdentifier, expectIdentifier_);
    };
    CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult() = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult(const CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult &) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult(CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult &&) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult() = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& operator=(const CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult &) = default ;
    CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& operator=(CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectContent_ == nullptr
        && return this->expectContentType_ == nullptr && return this->expectIdentifier_ == nullptr; };
    // expectContent Field Functions 
    bool hasExpectContent() const { return this->expectContent_ != nullptr;};
    void deleteExpectContent() { this->expectContent_ = nullptr;};
    inline string expectContent() const { DARABONBA_PTR_GET_DEFAULT(expectContent_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& setExpectContent(string expectContent) { DARABONBA_PTR_SET_VALUE(expectContent_, expectContent) };


    // expectContentType Field Functions 
    bool hasExpectContentType() const { return this->expectContentType_ != nullptr;};
    void deleteExpectContentType() { this->expectContentType_ = nullptr;};
    inline string expectContentType() const { DARABONBA_PTR_GET_DEFAULT(expectContentType_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& setExpectContentType(string expectContentType) { DARABONBA_PTR_SET_VALUE(expectContentType_, expectContentType) };


    // expectIdentifier Field Functions 
    bool hasExpectIdentifier() const { return this->expectIdentifier_ != nullptr;};
    void deleteExpectIdentifier() { this->expectIdentifier_ = nullptr;};
    inline string expectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(expectIdentifier_, "") };
    inline CreateTestCaseResponseBodyTestcaseDetailInfoExpectedResult& setExpectIdentifier(string expectIdentifier) { DARABONBA_PTR_SET_VALUE(expectIdentifier_, expectIdentifier) };


  protected:
    std::shared_ptr<string> expectContent_ = nullptr;
    std::shared_ptr<string> expectContentType_ = nullptr;
    std::shared_ptr<string> expectIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
