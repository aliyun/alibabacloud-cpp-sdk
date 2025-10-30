// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDPDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDPDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateIdpDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdpDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdpDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
      DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
    };
    CreateIdpDepartmentRequest() = default ;
    CreateIdpDepartmentRequest(const CreateIdpDepartmentRequest &) = default ;
    CreateIdpDepartmentRequest(CreateIdpDepartmentRequest &&) = default ;
    CreateIdpDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdpDepartmentRequest() = default ;
    CreateIdpDepartmentRequest& operator=(const CreateIdpDepartmentRequest &) = default ;
    CreateIdpDepartmentRequest& operator=(CreateIdpDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentName_ == nullptr
        && return this->idpConfigId_ == nullptr; };
    // departmentName Field Functions 
    bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
    void deleteDepartmentName() { this->departmentName_ = nullptr;};
    inline string departmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
    inline CreateIdpDepartmentRequest& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
    void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
    inline string idpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
    inline CreateIdpDepartmentRequest& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> departmentName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idpConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
