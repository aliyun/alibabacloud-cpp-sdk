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
      DARABONBA_PTR_TO_JSON(FullDepartmentIdPath, fullDepartmentIdPath_);
      DARABONBA_PTR_TO_JSON(FullDn, fullDn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentDepartmentId, parentDepartmentId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructSaseUserSimpleDepartments& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(FullDepartmentIdPath, fullDepartmentIdPath_);
      DARABONBA_PTR_FROM_JSON(FullDn, fullDn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentDepartmentId, parentDepartmentId_);
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
        && this->fullDepartmentIdPath_ != nullptr && this->fullDn_ != nullptr && this->name_ != nullptr && this->parentDepartmentId_ != nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline OpenStructSaseUserSimpleDepartments& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // fullDepartmentIdPath Field Functions 
    bool hasFullDepartmentIdPath() const { return this->fullDepartmentIdPath_ != nullptr;};
    void deleteFullDepartmentIdPath() { this->fullDepartmentIdPath_ = nullptr;};
    inline string fullDepartmentIdPath() const { DARABONBA_PTR_GET_DEFAULT(fullDepartmentIdPath_, "") };
    inline OpenStructSaseUserSimpleDepartments& setFullDepartmentIdPath(string fullDepartmentIdPath) { DARABONBA_PTR_SET_VALUE(fullDepartmentIdPath_, fullDepartmentIdPath) };


    // fullDn Field Functions 
    bool hasFullDn() const { return this->fullDn_ != nullptr;};
    void deleteFullDn() { this->fullDn_ = nullptr;};
    inline string fullDn() const { DARABONBA_PTR_GET_DEFAULT(fullDn_, "") };
    inline OpenStructSaseUserSimpleDepartments& setFullDn(string fullDn) { DARABONBA_PTR_SET_VALUE(fullDn_, fullDn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OpenStructSaseUserSimpleDepartments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDepartmentId Field Functions 
    bool hasParentDepartmentId() const { return this->parentDepartmentId_ != nullptr;};
    void deleteParentDepartmentId() { this->parentDepartmentId_ = nullptr;};
    inline string parentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(parentDepartmentId_, "") };
    inline OpenStructSaseUserSimpleDepartments& setParentDepartmentId(string parentDepartmentId) { DARABONBA_PTR_SET_VALUE(parentDepartmentId_, parentDepartmentId) };


  protected:
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> fullDepartmentIdPath_ = nullptr;
    std::shared_ptr<string> fullDn_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentDepartmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
