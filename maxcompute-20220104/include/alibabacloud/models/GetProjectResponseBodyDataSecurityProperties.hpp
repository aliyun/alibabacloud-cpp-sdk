// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATASECURITYPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATASECURITYPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataSecurityPropertiesProjectProtection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataSecurityProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataSecurityProperties& obj) { 
      DARABONBA_PTR_TO_JSON(enableDownloadPrivilege, enableDownloadPrivilege_);
      DARABONBA_PTR_TO_JSON(labelSecurity, labelSecurity_);
      DARABONBA_PTR_TO_JSON(objectCreatorHasAccessPermission, objectCreatorHasAccessPermission_);
      DARABONBA_PTR_TO_JSON(objectCreatorHasGrantPermission, objectCreatorHasGrantPermission_);
      DARABONBA_PTR_TO_JSON(projectProtection, projectProtection_);
      DARABONBA_PTR_TO_JSON(usingAcl, usingAcl_);
      DARABONBA_PTR_TO_JSON(usingPolicy, usingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataSecurityProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(enableDownloadPrivilege, enableDownloadPrivilege_);
      DARABONBA_PTR_FROM_JSON(labelSecurity, labelSecurity_);
      DARABONBA_PTR_FROM_JSON(objectCreatorHasAccessPermission, objectCreatorHasAccessPermission_);
      DARABONBA_PTR_FROM_JSON(objectCreatorHasGrantPermission, objectCreatorHasGrantPermission_);
      DARABONBA_PTR_FROM_JSON(projectProtection, projectProtection_);
      DARABONBA_PTR_FROM_JSON(usingAcl, usingAcl_);
      DARABONBA_PTR_FROM_JSON(usingPolicy, usingPolicy_);
    };
    GetProjectResponseBodyDataSecurityProperties() = default ;
    GetProjectResponseBodyDataSecurityProperties(const GetProjectResponseBodyDataSecurityProperties &) = default ;
    GetProjectResponseBodyDataSecurityProperties(GetProjectResponseBodyDataSecurityProperties &&) = default ;
    GetProjectResponseBodyDataSecurityProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataSecurityProperties() = default ;
    GetProjectResponseBodyDataSecurityProperties& operator=(const GetProjectResponseBodyDataSecurityProperties &) = default ;
    GetProjectResponseBodyDataSecurityProperties& operator=(GetProjectResponseBodyDataSecurityProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableDownloadPrivilege_ == nullptr
        && return this->labelSecurity_ == nullptr && return this->objectCreatorHasAccessPermission_ == nullptr && return this->objectCreatorHasGrantPermission_ == nullptr && return this->projectProtection_ == nullptr && return this->usingAcl_ == nullptr
        && return this->usingPolicy_ == nullptr; };
    // enableDownloadPrivilege Field Functions 
    bool hasEnableDownloadPrivilege() const { return this->enableDownloadPrivilege_ != nullptr;};
    void deleteEnableDownloadPrivilege() { this->enableDownloadPrivilege_ = nullptr;};
    inline bool enableDownloadPrivilege() const { DARABONBA_PTR_GET_DEFAULT(enableDownloadPrivilege_, false) };
    inline GetProjectResponseBodyDataSecurityProperties& setEnableDownloadPrivilege(bool enableDownloadPrivilege) { DARABONBA_PTR_SET_VALUE(enableDownloadPrivilege_, enableDownloadPrivilege) };


    // labelSecurity Field Functions 
    bool hasLabelSecurity() const { return this->labelSecurity_ != nullptr;};
    void deleteLabelSecurity() { this->labelSecurity_ = nullptr;};
    inline bool labelSecurity() const { DARABONBA_PTR_GET_DEFAULT(labelSecurity_, false) };
    inline GetProjectResponseBodyDataSecurityProperties& setLabelSecurity(bool labelSecurity) { DARABONBA_PTR_SET_VALUE(labelSecurity_, labelSecurity) };


    // objectCreatorHasAccessPermission Field Functions 
    bool hasObjectCreatorHasAccessPermission() const { return this->objectCreatorHasAccessPermission_ != nullptr;};
    void deleteObjectCreatorHasAccessPermission() { this->objectCreatorHasAccessPermission_ = nullptr;};
    inline bool objectCreatorHasAccessPermission() const { DARABONBA_PTR_GET_DEFAULT(objectCreatorHasAccessPermission_, false) };
    inline GetProjectResponseBodyDataSecurityProperties& setObjectCreatorHasAccessPermission(bool objectCreatorHasAccessPermission) { DARABONBA_PTR_SET_VALUE(objectCreatorHasAccessPermission_, objectCreatorHasAccessPermission) };


    // objectCreatorHasGrantPermission Field Functions 
    bool hasObjectCreatorHasGrantPermission() const { return this->objectCreatorHasGrantPermission_ != nullptr;};
    void deleteObjectCreatorHasGrantPermission() { this->objectCreatorHasGrantPermission_ = nullptr;};
    inline bool objectCreatorHasGrantPermission() const { DARABONBA_PTR_GET_DEFAULT(objectCreatorHasGrantPermission_, false) };
    inline GetProjectResponseBodyDataSecurityProperties& setObjectCreatorHasGrantPermission(bool objectCreatorHasGrantPermission) { DARABONBA_PTR_SET_VALUE(objectCreatorHasGrantPermission_, objectCreatorHasGrantPermission) };


    // projectProtection Field Functions 
    bool hasProjectProtection() const { return this->projectProtection_ != nullptr;};
    void deleteProjectProtection() { this->projectProtection_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection & projectProtection() const { DARABONBA_PTR_GET_CONST(projectProtection_, Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection) };
    inline Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection projectProtection() { DARABONBA_PTR_GET(projectProtection_, Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection) };
    inline GetProjectResponseBodyDataSecurityProperties& setProjectProtection(const Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection & projectProtection) { DARABONBA_PTR_SET_VALUE(projectProtection_, projectProtection) };
    inline GetProjectResponseBodyDataSecurityProperties& setProjectProtection(Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection && projectProtection) { DARABONBA_PTR_SET_RVALUE(projectProtection_, projectProtection) };


    // usingAcl Field Functions 
    bool hasUsingAcl() const { return this->usingAcl_ != nullptr;};
    void deleteUsingAcl() { this->usingAcl_ = nullptr;};
    inline bool usingAcl() const { DARABONBA_PTR_GET_DEFAULT(usingAcl_, false) };
    inline GetProjectResponseBodyDataSecurityProperties& setUsingAcl(bool usingAcl) { DARABONBA_PTR_SET_VALUE(usingAcl_, usingAcl) };


    // usingPolicy Field Functions 
    bool hasUsingPolicy() const { return this->usingPolicy_ != nullptr;};
    void deleteUsingPolicy() { this->usingPolicy_ = nullptr;};
    inline bool usingPolicy() const { DARABONBA_PTR_GET_DEFAULT(usingPolicy_, false) };
    inline GetProjectResponseBodyDataSecurityProperties& setUsingPolicy(bool usingPolicy) { DARABONBA_PTR_SET_VALUE(usingPolicy_, usingPolicy) };


  protected:
    // Indicates whether the [download control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/label-based-access-control) feature is enabled. By default, this feature is disabled.
    std::shared_ptr<bool> enableDownloadPrivilege_ = nullptr;
    // Indicates whether the [label-based access control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/label-based-access-control) feature is enabled. By default, this feature is disabled.
    std::shared_ptr<bool> labelSecurity_ = nullptr;
    // Indicates whether to allow the object creator to have the access permissions on the object. The default value is true, which indicates that the object creator has the access permissions on the object.
    std::shared_ptr<bool> objectCreatorHasAccessPermission_ = nullptr;
    // Indicates whether the object creator has the authorization permissions on the object. The default value is true, which indicates that the object creator has the authorization permissions on the object.
    std::shared_ptr<bool> objectCreatorHasGrantPermission_ = nullptr;
    // The properties of the [data protection mechanism](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/project-data-protection).
    std::shared_ptr<Models::GetProjectResponseBodyDataSecurityPropertiesProjectProtection> projectProtection_ = nullptr;
    // Indicates whether the [ACL-based access control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/acl-based-access-control) feature is enabled. By default, this feature is enabled.
    std::shared_ptr<bool> usingAcl_ = nullptr;
    // Indicates whether the [policy-based access control](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/policy-based-access-control-1) feature is enabled. By default, this feature is enabled.
    std::shared_ptr<bool> usingPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
