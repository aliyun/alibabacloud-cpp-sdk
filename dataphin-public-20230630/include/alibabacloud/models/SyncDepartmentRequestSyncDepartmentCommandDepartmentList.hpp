// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUESTSYNCDEPARTMENTCOMMANDDEPARTMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUESTSYNCDEPARTMENTCOMMANDDEPARTMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentRequestSyncDepartmentCommandDepartmentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentRequestSyncDepartmentCommandDepartmentList& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_TO_JSON(ParentDepartmentId, parentDepartmentId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentRequestSyncDepartmentCommandDepartmentList& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_FROM_JSON(ParentDepartmentId, parentDepartmentId_);
    };
    SyncDepartmentRequestSyncDepartmentCommandDepartmentList() = default ;
    SyncDepartmentRequestSyncDepartmentCommandDepartmentList(const SyncDepartmentRequestSyncDepartmentCommandDepartmentList &) = default ;
    SyncDepartmentRequestSyncDepartmentCommandDepartmentList(SyncDepartmentRequestSyncDepartmentCommandDepartmentList &&) = default ;
    SyncDepartmentRequestSyncDepartmentCommandDepartmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentRequestSyncDepartmentCommandDepartmentList() = default ;
    SyncDepartmentRequestSyncDepartmentCommandDepartmentList& operator=(const SyncDepartmentRequestSyncDepartmentCommandDepartmentList &) = default ;
    SyncDepartmentRequestSyncDepartmentCommandDepartmentList& operator=(SyncDepartmentRequestSyncDepartmentCommandDepartmentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentId_ == nullptr
        && return this->departmentName_ == nullptr && return this->parentDepartmentId_ == nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline SyncDepartmentRequestSyncDepartmentCommandDepartmentList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline SyncDepartmentRequestSyncDepartmentCommandDepartmentList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // parentDepartmentId Field Functions 
    bool hasParentDepartmentId() const { return this->parentDepartmentId_ != nullptr;};
    void deleteParentDepartmentId() { this->parentDepartmentId_ = nullptr;};
    inline string parentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(parentDepartmentId_, "") };
    inline SyncDepartmentRequestSyncDepartmentCommandDepartmentList& setParentDepartmentId(string parentDepartmentId) { DARABONBA_PTR_SET_VALUE(parentDepartmentId_, parentDepartmentId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> departmentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departmentName_ = nullptr;
    std::shared_ptr<string> parentDepartmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
