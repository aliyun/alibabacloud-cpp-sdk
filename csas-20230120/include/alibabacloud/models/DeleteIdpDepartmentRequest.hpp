// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIDPDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIDPDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeleteIdpDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIdpDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIdpDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
    };
    DeleteIdpDepartmentRequest() = default ;
    DeleteIdpDepartmentRequest(const DeleteIdpDepartmentRequest &) = default ;
    DeleteIdpDepartmentRequest(DeleteIdpDepartmentRequest &&) = default ;
    DeleteIdpDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIdpDepartmentRequest() = default ;
    DeleteIdpDepartmentRequest& operator=(const DeleteIdpDepartmentRequest &) = default ;
    DeleteIdpDepartmentRequest& operator=(DeleteIdpDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentId_ == nullptr
        && return this->idpConfigId_ == nullptr; };
    // departmentId Field Functions 
    bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
    void deleteDepartmentId() { this->departmentId_ = nullptr;};
    inline string departmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
    inline DeleteIdpDepartmentRequest& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline DeleteIdpDepartmentRequest& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> departmentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idpConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
