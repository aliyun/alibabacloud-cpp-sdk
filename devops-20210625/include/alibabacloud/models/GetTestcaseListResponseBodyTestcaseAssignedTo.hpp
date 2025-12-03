// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASEASSIGNEDTO_HPP_
#define ALIBABACLOUD_MODELS_GETTESTCASELISTRESPONSEBODYTESTCASEASSIGNEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetTestcaseListResponseBodyTestcaseAssignedTo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTestcaseListResponseBodyTestcaseAssignedTo& obj) { 
      DARABONBA_PTR_TO_JSON(assignedToIdenttifier, assignedToIdenttifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetTestcaseListResponseBodyTestcaseAssignedTo& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedToIdenttifier, assignedToIdenttifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetTestcaseListResponseBodyTestcaseAssignedTo() = default ;
    GetTestcaseListResponseBodyTestcaseAssignedTo(const GetTestcaseListResponseBodyTestcaseAssignedTo &) = default ;
    GetTestcaseListResponseBodyTestcaseAssignedTo(GetTestcaseListResponseBodyTestcaseAssignedTo &&) = default ;
    GetTestcaseListResponseBodyTestcaseAssignedTo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTestcaseListResponseBodyTestcaseAssignedTo() = default ;
    GetTestcaseListResponseBodyTestcaseAssignedTo& operator=(const GetTestcaseListResponseBodyTestcaseAssignedTo &) = default ;
    GetTestcaseListResponseBodyTestcaseAssignedTo& operator=(GetTestcaseListResponseBodyTestcaseAssignedTo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedToIdenttifier_ == nullptr
        && return this->name_ == nullptr; };
    // assignedToIdenttifier Field Functions 
    bool hasAssignedToIdenttifier() const { return this->assignedToIdenttifier_ != nullptr;};
    void deleteAssignedToIdenttifier() { this->assignedToIdenttifier_ = nullptr;};
    inline string assignedToIdenttifier() const { DARABONBA_PTR_GET_DEFAULT(assignedToIdenttifier_, "") };
    inline GetTestcaseListResponseBodyTestcaseAssignedTo& setAssignedToIdenttifier(string assignedToIdenttifier) { DARABONBA_PTR_SET_VALUE(assignedToIdenttifier_, assignedToIdenttifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTestcaseListResponseBodyTestcaseAssignedTo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> assignedToIdenttifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
