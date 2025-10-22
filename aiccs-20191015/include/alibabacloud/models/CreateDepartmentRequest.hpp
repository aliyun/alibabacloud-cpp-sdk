// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateDepartmentRequest() = default ;
    CreateDepartmentRequest(const CreateDepartmentRequest &) = default ;
    CreateDepartmentRequest(CreateDepartmentRequest &&) = default ;
    CreateDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDepartmentRequest() = default ;
    CreateDepartmentRequest& operator=(const CreateDepartmentRequest &) = default ;
    CreateDepartmentRequest& operator=(CreateDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentName_ == nullptr
        && return this->instanceId_ == nullptr; };
    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline CreateDepartmentRequest& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDepartmentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> departmentName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
