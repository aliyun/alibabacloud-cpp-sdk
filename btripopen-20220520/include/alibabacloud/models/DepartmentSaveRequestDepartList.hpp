// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPARTMENTSAVEREQUESTDEPARTLIST_HPP_
#define ALIBABACLOUD_MODELS_DEPARTMENTSAVEREQUESTDEPARTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DepartmentSaveRequestDepartList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DepartmentSaveRequestDepartList& obj) { 
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(depart_pid, departPid_);
      DARABONBA_PTR_TO_JSON(manager_ids, managerIds_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(third_depart_id, thirdDepartId_);
      DARABONBA_PTR_TO_JSON(third_depart_pid, thirdDepartPid_);
    };
    friend void from_json(const Darabonba::Json& j, DepartmentSaveRequestDepartList& obj) { 
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(depart_pid, departPid_);
      DARABONBA_PTR_FROM_JSON(manager_ids, managerIds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(third_depart_id, thirdDepartId_);
      DARABONBA_PTR_FROM_JSON(third_depart_pid, thirdDepartPid_);
    };
    DepartmentSaveRequestDepartList() = default ;
    DepartmentSaveRequestDepartList(const DepartmentSaveRequestDepartList &) = default ;
    DepartmentSaveRequestDepartList(DepartmentSaveRequestDepartList &&) = default ;
    DepartmentSaveRequestDepartList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DepartmentSaveRequestDepartList() = default ;
    DepartmentSaveRequestDepartList& operator=(const DepartmentSaveRequestDepartList &) = default ;
    DepartmentSaveRequestDepartList& operator=(DepartmentSaveRequestDepartList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departId_ != nullptr
        && this->departName_ != nullptr && this->departPid_ != nullptr && this->managerIds_ != nullptr && this->status_ != nullptr && this->thirdDepartId_ != nullptr
        && this->thirdDepartPid_ != nullptr; };
    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline int64_t departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, 0L) };
    inline DepartmentSaveRequestDepartList& setDepartId(int64_t departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline DepartmentSaveRequestDepartList& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // departPid Field Functions 
    bool hasDepartPid() const { return this->departPid_ != nullptr;};
    void deleteDepartPid() { this->departPid_ = nullptr;};
    inline int64_t departPid() const { DARABONBA_PTR_GET_DEFAULT(departPid_, 0L) };
    inline DepartmentSaveRequestDepartList& setDepartPid(int64_t departPid) { DARABONBA_PTR_SET_VALUE(departPid_, departPid) };


    // managerIds Field Functions 
    bool hasManagerIds() const { return this->managerIds_ != nullptr;};
    void deleteManagerIds() { this->managerIds_ = nullptr;};
    inline string managerIds() const { DARABONBA_PTR_GET_DEFAULT(managerIds_, "") };
    inline DepartmentSaveRequestDepartList& setManagerIds(string managerIds) { DARABONBA_PTR_SET_VALUE(managerIds_, managerIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DepartmentSaveRequestDepartList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thirdDepartId Field Functions 
    bool hasThirdDepartId() const { return this->thirdDepartId_ != nullptr;};
    void deleteThirdDepartId() { this->thirdDepartId_ = nullptr;};
    inline string thirdDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartId_, "") };
    inline DepartmentSaveRequestDepartList& setThirdDepartId(string thirdDepartId) { DARABONBA_PTR_SET_VALUE(thirdDepartId_, thirdDepartId) };


    // thirdDepartPid Field Functions 
    bool hasThirdDepartPid() const { return this->thirdDepartPid_ != nullptr;};
    void deleteThirdDepartPid() { this->thirdDepartPid_ = nullptr;};
    inline string thirdDepartPid() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartPid_, "") };
    inline DepartmentSaveRequestDepartList& setThirdDepartPid(string thirdDepartPid) { DARABONBA_PTR_SET_VALUE(thirdDepartPid_, thirdDepartPid) };


  protected:
    std::shared_ptr<int64_t> departId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<int64_t> departPid_ = nullptr;
    std::shared_ptr<string> managerIds_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> thirdDepartId_ = nullptr;
    std::shared_ptr<string> thirdDepartPid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
