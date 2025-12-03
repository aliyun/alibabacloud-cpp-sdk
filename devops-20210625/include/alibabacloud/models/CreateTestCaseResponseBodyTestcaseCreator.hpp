// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASECREATOR_HPP_
#define ALIBABACLOUD_MODELS_CREATETESTCASERESPONSEBODYTESTCASECREATOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateTestCaseResponseBodyTestcaseCreator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTestCaseResponseBodyTestcaseCreator& obj) { 
      DARABONBA_PTR_TO_JSON(createIdentifier, createIdentifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTestCaseResponseBodyTestcaseCreator& obj) { 
      DARABONBA_PTR_FROM_JSON(createIdentifier, createIdentifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateTestCaseResponseBodyTestcaseCreator() = default ;
    CreateTestCaseResponseBodyTestcaseCreator(const CreateTestCaseResponseBodyTestcaseCreator &) = default ;
    CreateTestCaseResponseBodyTestcaseCreator(CreateTestCaseResponseBodyTestcaseCreator &&) = default ;
    CreateTestCaseResponseBodyTestcaseCreator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTestCaseResponseBodyTestcaseCreator() = default ;
    CreateTestCaseResponseBodyTestcaseCreator& operator=(const CreateTestCaseResponseBodyTestcaseCreator &) = default ;
    CreateTestCaseResponseBodyTestcaseCreator& operator=(CreateTestCaseResponseBodyTestcaseCreator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createIdentifier_ == nullptr
        && return this->name_ == nullptr; };
    // createIdentifier Field Functions 
    bool hasCreateIdentifier() const { return this->createIdentifier_ != nullptr;};
    void deleteCreateIdentifier() { this->createIdentifier_ = nullptr;};
    inline string createIdentifier() const { DARABONBA_PTR_GET_DEFAULT(createIdentifier_, "") };
    inline CreateTestCaseResponseBodyTestcaseCreator& setCreateIdentifier(string createIdentifier) { DARABONBA_PTR_SET_VALUE(createIdentifier_, createIdentifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTestCaseResponseBodyTestcaseCreator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> createIdentifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
