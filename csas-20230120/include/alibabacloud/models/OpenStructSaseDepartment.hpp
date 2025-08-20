// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTSASEDEPARTMENT_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTSASEDEPARTMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructSaseDepartment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructSaseDepartment& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(FullDn, fullDn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentDepartmentId, parentDepartmentId_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructSaseDepartment& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(FullDn, fullDn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentDepartmentId, parentDepartmentId_);
    };
    OpenStructSaseDepartment() = default ;
    OpenStructSaseDepartment(const OpenStructSaseDepartment &) = default ;
    OpenStructSaseDepartment(OpenStructSaseDepartment &&) = default ;
    OpenStructSaseDepartment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructSaseDepartment() = default ;
    OpenStructSaseDepartment& operator=(const OpenStructSaseDepartment &) = default ;
    OpenStructSaseDepartment& operator=(OpenStructSaseDepartment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departmentId_ != nullptr
        && this->fullDn_ != nullptr && this->name_ != nullptr && this->parentDepartmentId_ != nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline OpenStructSaseDepartment& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // fullDn Field Functions 
    bool hasFullDn() const { return this->fullDn_ != nullptr;};
    void deleteFullDn() { this->fullDn_ = nullptr;};
    inline string fullDn() const { DARABONBA_PTR_GET_DEFAULT(fullDn_, "") };
    inline OpenStructSaseDepartment& setFullDn(string fullDn) { DARABONBA_PTR_SET_VALUE(fullDn_, fullDn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OpenStructSaseDepartment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentDepartmentId Field Functions 
    bool hasParentDepartmentId() const { return this->parentDepartmentId_ != nullptr;};
    void deleteParentDepartmentId() { this->parentDepartmentId_ = nullptr;};
    inline string parentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(parentDepartmentId_, "") };
    inline OpenStructSaseDepartment& setParentDepartmentId(string parentDepartmentId) { DARABONBA_PTR_SET_VALUE(parentDepartmentId_, parentDepartmentId) };


  protected:
    std::shared_ptr<string> departmentId_ = nullptr;
    std::shared_ptr<string> fullDn_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentDepartmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
