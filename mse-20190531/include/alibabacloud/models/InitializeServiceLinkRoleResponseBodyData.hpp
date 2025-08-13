// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZESERVICELINKROLERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZESERVICELINKROLERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class InitializeServiceLinkRoleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeServiceLinkRoleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RequiredPermission, requiredPermission_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeServiceLinkRoleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RequiredPermission, requiredPermission_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    InitializeServiceLinkRoleResponseBodyData() = default ;
    InitializeServiceLinkRoleResponseBodyData(const InitializeServiceLinkRoleResponseBodyData &) = default ;
    InitializeServiceLinkRoleResponseBodyData(InitializeServiceLinkRoleResponseBodyData &&) = default ;
    InitializeServiceLinkRoleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeServiceLinkRoleResponseBodyData() = default ;
    InitializeServiceLinkRoleResponseBodyData& operator=(const InitializeServiceLinkRoleResponseBodyData &) = default ;
    InitializeServiceLinkRoleResponseBodyData& operator=(InitializeServiceLinkRoleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requiredPermission_ != nullptr
        && this->roleName_ != nullptr && this->serviceName_ != nullptr; };
    // requiredPermission Field Functions 
    bool hasRequiredPermission() const { return this->requiredPermission_ != nullptr;};
    void deleteRequiredPermission() { this->requiredPermission_ = nullptr;};
    inline string requiredPermission() const { DARABONBA_PTR_GET_DEFAULT(requiredPermission_, "") };
    inline InitializeServiceLinkRoleResponseBodyData& setRequiredPermission(string requiredPermission) { DARABONBA_PTR_SET_VALUE(requiredPermission_, requiredPermission) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline InitializeServiceLinkRoleResponseBodyData& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline InitializeServiceLinkRoleResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<string> requiredPermission_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
