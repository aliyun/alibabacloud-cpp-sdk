// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPARTMENTSAVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPARTMENTSAVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DepartmentSaveRequestDepartList.hpp>
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
    virtual bool empty() const override { this->departList_ != nullptr; };
    // departList Field Functions 
    bool hasDepartList() const { return this->departList_ != nullptr;};
    void deleteDepartList() { this->departList_ = nullptr;};
    inline const vector<DepartmentSaveRequestDepartList> & departList() const { DARABONBA_PTR_GET_CONST(departList_, vector<DepartmentSaveRequestDepartList>) };
    inline vector<DepartmentSaveRequestDepartList> departList() { DARABONBA_PTR_GET(departList_, vector<DepartmentSaveRequestDepartList>) };
    inline DepartmentSaveRequest& setDepartList(const vector<DepartmentSaveRequestDepartList> & departList) { DARABONBA_PTR_SET_VALUE(departList_, departList) };
    inline DepartmentSaveRequest& setDepartList(vector<DepartmentSaveRequestDepartList> && departList) { DARABONBA_PTR_SET_RVALUE(departList_, departList) };


  protected:
    std::shared_ptr<vector<DepartmentSaveRequestDepartList>> departList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
