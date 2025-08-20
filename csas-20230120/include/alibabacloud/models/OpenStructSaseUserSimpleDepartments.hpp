// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSERSIMPLEDEPARTMENTS_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTSASEUSERSIMPLEDEPARTMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructSaseUserSimpleDepartments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructSaseUserSimpleDepartments& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructSaseUserSimpleDepartments& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    OpenStructSaseUserSimpleDepartments() = default ;
    OpenStructSaseUserSimpleDepartments(const OpenStructSaseUserSimpleDepartments &) = default ;
    OpenStructSaseUserSimpleDepartments(OpenStructSaseUserSimpleDepartments &&) = default ;
    OpenStructSaseUserSimpleDepartments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructSaseUserSimpleDepartments() = default ;
    OpenStructSaseUserSimpleDepartments& operator=(const OpenStructSaseUserSimpleDepartments &) = default ;
    OpenStructSaseUserSimpleDepartments& operator=(OpenStructSaseUserSimpleDepartments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departmentId_ != nullptr
        && this->name_ != nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline OpenStructSaseUserSimpleDepartments& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OpenStructSaseUserSimpleDepartments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
