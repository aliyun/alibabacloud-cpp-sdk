// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEMODIFIER_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASEMODIFIER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBodyTestcaseModifier : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBodyTestcaseModifier& obj) { 
      DARABONBA_PTR_TO_JSON(modifyIdentifier, modifyIdentifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBodyTestcaseModifier& obj) { 
      DARABONBA_PTR_FROM_JSON(modifyIdentifier, modifyIdentifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateTestCaseResponseBodyTestcaseModifier() = default ;
    CreateTestCaseResponseBodyTestcaseModifier(const CreateTestCaseResponseBodyTestcaseModifier &) = default ;
    CreateTestCaseResponseBodyTestcaseModifier(CreateTestCaseResponseBodyTestcaseModifier &&) = default ;
    CreateTestCaseResponseBodyTestcaseModifier(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBodyTestcaseModifier() = default ;
    CreateTestCaseResponseBodyTestcaseModifier& operator=(const CreateTestCaseResponseBodyTestcaseModifier &) = default ;
    CreateTestCaseResponseBodyTestcaseModifier& operator=(CreateTestCaseResponseBodyTestcaseModifier &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modifyIdentifier_ == nullptr
        && return this->name_ == nullptr; };
    // modifyIdentifier Field Functions 
    bool hasModifyIdentifier() const { return this->modifyIdentifier_ != nullptr;};
    void deleteModifyIdentifier() { this->modifyIdentifier_ = nullptr;};
    inline string modifyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(modifyIdentifier_, "") };
    inline CreateTestCaseResponseBodyTestcaseModifier& setModifyIdentifier(string modifyIdentifier) { DARABONBA_PTR_SET_VALUE(modifyIdentifier_, modifyIdentifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTestCaseResponseBodyTestcaseModifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> modifyIdentifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
