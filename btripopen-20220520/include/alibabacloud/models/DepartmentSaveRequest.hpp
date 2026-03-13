// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPARTMENTSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPARTMENTSAVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DepartmentSaveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DepartmentSaveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(depart_list, departList_);
    };
    friend void from_json(const Darabonba::Json& j, DepartmentSaveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(depart_list, departList_);
    };
    DepartmentSaveRequest() = default ;
    DepartmentSaveRequest(const DepartmentSaveRequest &) = default ;
    DepartmentSaveRequest(DepartmentSaveRequest &&) = default ;
    DepartmentSaveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DepartmentSaveRequest() = default ;
    DepartmentSaveRequest& operator=(const DepartmentSaveRequest &) = default ;
    DepartmentSaveRequest& operator=(DepartmentSaveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DepartList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DepartList& obj) { 
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(depart_pid, departPid_);
        DARABONBA_PTR_TO_JSON(manager_ids, managerIds_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(third_depart_id, thirdDepartId_);
        DARABONBA_PTR_TO_JSON(third_depart_pid, thirdDepartPid_);
      };
      friend void from_json(const Darabonba::Json& j, DepartList& obj) { 
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(depart_pid, departPid_);
        DARABONBA_PTR_FROM_JSON(manager_ids, managerIds_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(third_depart_id, thirdDepartId_);
        DARABONBA_PTR_FROM_JSON(third_depart_pid, thirdDepartPid_);
      };
      DepartList() = default ;
      DepartList(const DepartList &) = default ;
      DepartList(DepartList &&) = default ;
      DepartList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DepartList() = default ;
      DepartList& operator=(const DepartList &) = default ;
      DepartList& operator=(DepartList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->departId_ == nullptr
        && this->departName_ == nullptr && this->departPid_ == nullptr && this->managerIds_ == nullptr && this->status_ == nullptr && this->thirdDepartId_ == nullptr
        && this->thirdDepartPid_ == nullptr; };
      // departId Field Functions 
      bool hasDepartId() const { return this->departId_ != nullptr;};
      void deleteDepartId() { this->departId_ = nullptr;};
      inline int64_t getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, 0L) };
      inline DepartList& setDepartId(int64_t departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


      // departName Field Functions 
      bool hasDepartName() const { return this->departName_ != nullptr;};
      void deleteDepartName() { this->departName_ = nullptr;};
      inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
      inline DepartList& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


      // departPid Field Functions 
      bool hasDepartPid() const { return this->departPid_ != nullptr;};
      void deleteDepartPid() { this->departPid_ = nullptr;};
      inline int64_t getDepartPid() const { DARABONBA_PTR_GET_DEFAULT(departPid_, 0L) };
      inline DepartList& setDepartPid(int64_t departPid) { DARABONBA_PTR_SET_VALUE(departPid_, departPid) };


      // managerIds Field Functions 
      bool hasManagerIds() const { return this->managerIds_ != nullptr;};
      void deleteManagerIds() { this->managerIds_ = nullptr;};
      inline string getManagerIds() const { DARABONBA_PTR_GET_DEFAULT(managerIds_, "") };
      inline DepartList& setManagerIds(string managerIds) { DARABONBA_PTR_SET_VALUE(managerIds_, managerIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DepartList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thirdDepartId Field Functions 
      bool hasThirdDepartId() const { return this->thirdDepartId_ != nullptr;};
      void deleteThirdDepartId() { this->thirdDepartId_ = nullptr;};
      inline string getThirdDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartId_, "") };
      inline DepartList& setThirdDepartId(string thirdDepartId) { DARABONBA_PTR_SET_VALUE(thirdDepartId_, thirdDepartId) };


      // thirdDepartPid Field Functions 
      bool hasThirdDepartPid() const { return this->thirdDepartPid_ != nullptr;};
      void deleteThirdDepartPid() { this->thirdDepartPid_ = nullptr;};
      inline string getThirdDepartPid() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartPid_, "") };
      inline DepartList& setThirdDepartPid(string thirdDepartPid) { DARABONBA_PTR_SET_VALUE(thirdDepartPid_, thirdDepartPid) };


    protected:
      shared_ptr<int64_t> departId_ {};
      // This parameter is required.
      shared_ptr<string> departName_ {};
      shared_ptr<int64_t> departPid_ {};
      shared_ptr<string> managerIds_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> thirdDepartId_ {};
      shared_ptr<string> thirdDepartPid_ {};
    };

    virtual bool empty() const override { return this->departList_ == nullptr; };
    // departList Field Functions 
    bool hasDepartList() const { return this->departList_ != nullptr;};
    void deleteDepartList() { this->departList_ = nullptr;};
    inline const vector<DepartmentSaveRequest::DepartList> & getDepartList() const { DARABONBA_PTR_GET_CONST(departList_, vector<DepartmentSaveRequest::DepartList>) };
    inline vector<DepartmentSaveRequest::DepartList> getDepartList() { DARABONBA_PTR_GET(departList_, vector<DepartmentSaveRequest::DepartList>) };
    inline DepartmentSaveRequest& setDepartList(const vector<DepartmentSaveRequest::DepartList> & departList) { DARABONBA_PTR_SET_VALUE(departList_, departList) };
    inline DepartmentSaveRequest& setDepartList(vector<DepartmentSaveRequest::DepartList> && departList) { DARABONBA_PTR_SET_RVALUE(departList_, departList) };


  protected:
    shared_ptr<vector<DepartmentSaveRequest::DepartList>> departList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
