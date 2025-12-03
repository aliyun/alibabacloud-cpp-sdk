// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEDETAILINFOPRECONDITION_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEDETAILINFOPRECONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& obj) { 
      DARABONBA_PTR_TO_JSON(preContent, preContent_);
      DARABONBA_PTR_TO_JSON(preContentType, preContentType_);
      DARABONBA_PTR_TO_JSON(preIdentifier, preIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& obj) { 
      DARABONBA_PTR_FROM_JSON(preContent, preContent_);
      DARABONBA_PTR_FROM_JSON(preContentType, preContentType_);
      DARABONBA_PTR_FROM_JSON(preIdentifier, preIdentifier_);
    };
    UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition() = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition(const UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition &) = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition(UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition &&) = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition() = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& operator=(const UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition &) = default ;
    UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& operator=(UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preContent_ == nullptr
        && return this->preContentType_ == nullptr && return this->preIdentifier_ == nullptr; };
    // preContent Field Functions 
    bool hasPreContent() const { return this->preContent_ != nullptr;};
    void deletePreContent() { this->preContent_ = nullptr;};
    inline string preContent() const { DARABONBA_PTR_GET_DEFAULT(preContent_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& setPreContent(string preContent) { DARABONBA_PTR_SET_VALUE(preContent_, preContent) };


    // preContentType Field Functions 
    bool hasPreContentType() const { return this->preContentType_ != nullptr;};
    void deletePreContentType() { this->preContentType_ = nullptr;};
    inline string preContentType() const { DARABONBA_PTR_GET_DEFAULT(preContentType_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& setPreContentType(string preContentType) { DARABONBA_PTR_SET_VALUE(preContentType_, preContentType) };


    // preIdentifier Field Functions 
    bool hasPreIdentifier() const { return this->preIdentifier_ != nullptr;};
    void deletePreIdentifier() { this->preIdentifier_ = nullptr;};
    inline string preIdentifier() const { DARABONBA_PTR_GET_DEFAULT(preIdentifier_, "") };
    inline UpdateTestCaseResponseBodyTestcaseDetailInfoPrecondition& setPreIdentifier(string preIdentifier) { DARABONBA_PTR_SET_VALUE(preIdentifier_, preIdentifier) };


  protected:
    std::shared_ptr<string> preContent_ = nullptr;
    std::shared_ptr<string> preContentType_ = nullptr;
    std::shared_ptr<string> preIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
