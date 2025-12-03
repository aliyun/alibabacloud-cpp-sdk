// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASEREQUESTTESTCASESTEPCONTENTINFOSTEPRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASEREQUESTTESTCASESTEPCONTENTINFOSTEPRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseRequestTestcaseStepContentInfoStepResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseRequestTestcaseStepContentInfoStepResultList& obj) { 
      DARABONBA_PTR_TO_JSON(expected, expected_);
      DARABONBA_PTR_TO_JSON(step, step_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseRequestTestcaseStepContentInfoStepResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(expected, expected_);
      DARABONBA_PTR_FROM_JSON(step, step_);
    };
    CreateTestCaseRequestTestcaseStepContentInfoStepResultList() = default ;
    CreateTestCaseRequestTestcaseStepContentInfoStepResultList(const CreateTestCaseRequestTestcaseStepContentInfoStepResultList &) = default ;
    CreateTestCaseRequestTestcaseStepContentInfoStepResultList(CreateTestCaseRequestTestcaseStepContentInfoStepResultList &&) = default ;
    CreateTestCaseRequestTestcaseStepContentInfoStepResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseRequestTestcaseStepContentInfoStepResultList() = default ;
    CreateTestCaseRequestTestcaseStepContentInfoStepResultList& operator=(const CreateTestCaseRequestTestcaseStepContentInfoStepResultList &) = default ;
    CreateTestCaseRequestTestcaseStepContentInfoStepResultList& operator=(CreateTestCaseRequestTestcaseStepContentInfoStepResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expected_ == nullptr
        && return this->step_ == nullptr; };
    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline string expected() const { DARABONBA_PTR_GET_DEFAULT(expected_, "") };
    inline CreateTestCaseRequestTestcaseStepContentInfoStepResultList& setExpected(string expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string step() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline CreateTestCaseRequestTestcaseStepContentInfoStepResultList& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    std::shared_ptr<string> expected_ = nullptr;
    std::shared_ptr<string> step_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
