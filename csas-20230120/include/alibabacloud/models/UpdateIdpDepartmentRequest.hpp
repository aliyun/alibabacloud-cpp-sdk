// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDPDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDPDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateIdpDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdpDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdpDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
    };
    UpdateIdpDepartmentRequest() = default ;
    UpdateIdpDepartmentRequest(const UpdateIdpDepartmentRequest &) = default ;
    UpdateIdpDepartmentRequest(UpdateIdpDepartmentRequest &&) = default ;
    UpdateIdpDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdpDepartmentRequest() = default ;
    UpdateIdpDepartmentRequest& operator=(const UpdateIdpDepartmentRequest &) = default ;
    UpdateIdpDepartmentRequest& operator=(UpdateIdpDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->departmentId_ != nullptr
        && this->departmentName_ != nullptr && this->idpConfigId_ != nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline UpdateIdpDepartmentRequest& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline UpdateIdpDepartmentRequest& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline UpdateIdpDepartmentRequest& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> departmentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> departmentName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idpConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
