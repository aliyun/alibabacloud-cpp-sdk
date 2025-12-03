// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEASSIGNEDTO_HPP_
#define ALIBABACLOUD_MODELS_UPDATETESTCASERESPONSEBODYTESTCASEASSIGNEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateTestCaseResponseBodyTestcaseAssignedTo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTestCaseResponseBodyTestcaseAssignedTo& obj) { 
      DARABONBA_PTR_TO_JSON(assignIdentifier, assignIdentifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tbRoleId, tbRoleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTestCaseResponseBodyTestcaseAssignedTo& obj) { 
      DARABONBA_PTR_FROM_JSON(assignIdentifier, assignIdentifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tbRoleId, tbRoleId_);
    };
    UpdateTestCaseResponseBodyTestcaseAssignedTo() = default ;
    UpdateTestCaseResponseBodyTestcaseAssignedTo(const UpdateTestCaseResponseBodyTestcaseAssignedTo &) = default ;
    UpdateTestCaseResponseBodyTestcaseAssignedTo(UpdateTestCaseResponseBodyTestcaseAssignedTo &&) = default ;
    UpdateTestCaseResponseBodyTestcaseAssignedTo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTestCaseResponseBodyTestcaseAssignedTo() = default ;
    UpdateTestCaseResponseBodyTestcaseAssignedTo& operator=(const UpdateTestCaseResponseBodyTestcaseAssignedTo &) = default ;
    UpdateTestCaseResponseBodyTestcaseAssignedTo& operator=(UpdateTestCaseResponseBodyTestcaseAssignedTo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignIdentifier_ == nullptr
        && return this->name_ == nullptr && return this->tbRoleId_ == nullptr; };
    // assignIdentifier Field Functions 
    bool hasAssignIdentifier() const { return this->assignIdentifier_ != nullptr;};
    void deleteAssignIdentifier() { this->assignIdentifier_ = nullptr;};
    inline string assignIdentifier() const { DARABONBA_PTR_GET_DEFAULT(assignIdentifier_, "") };
    inline UpdateTestCaseResponseBodyTestcaseAssignedTo& setAssignIdentifier(string assignIdentifier) { DARABONBA_PTR_SET_VALUE(assignIdentifier_, assignIdentifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTestCaseResponseBodyTestcaseAssignedTo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tbRoleId Field Functions 
    bool hasTbRoleId() const { return this->tbRoleId_ != nullptr;};
    void deleteTbRoleId() { this->tbRoleId_ = nullptr;};
    inline string tbRoleId() const { DARABONBA_PTR_GET_DEFAULT(tbRoleId_, "") };
    inline UpdateTestCaseResponseBodyTestcaseAssignedTo& setTbRoleId(string tbRoleId) { DARABONBA_PTR_SET_VALUE(tbRoleId_, tbRoleId) };


  protected:
    std::shared_ptr<string> assignIdentifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tbRoleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
