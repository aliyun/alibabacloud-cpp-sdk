// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLDEPARTMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALLDEPARTMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAllDepartmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllDepartmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllDepartmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
    };
    GetAllDepartmentResponseBodyData() = default ;
    GetAllDepartmentResponseBodyData(const GetAllDepartmentResponseBodyData &) = default ;
    GetAllDepartmentResponseBodyData(GetAllDepartmentResponseBodyData &&) = default ;
    GetAllDepartmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllDepartmentResponseBodyData() = default ;
    GetAllDepartmentResponseBodyData& operator=(const GetAllDepartmentResponseBodyData &) = default ;
    GetAllDepartmentResponseBodyData& operator=(GetAllDepartmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentId_ == nullptr
        && return this->departmentName_ == nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline int64_t departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
    inline GetAllDepartmentResponseBodyData& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline GetAllDepartmentResponseBodyData& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


  protected:
    std::shared_ptr<int64_t> departmentId_ = nullptr;
    std::shared_ptr<string> departmentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
