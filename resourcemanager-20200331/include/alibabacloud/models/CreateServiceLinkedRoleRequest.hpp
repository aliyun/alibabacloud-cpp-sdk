// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICELINKEDROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateServiceLinkedRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomSuffix, customSuffix_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceLinkedRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomSuffix, customSuffix_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CreateServiceLinkedRoleRequest() = default ;
    CreateServiceLinkedRoleRequest(const CreateServiceLinkedRoleRequest &) = default ;
    CreateServiceLinkedRoleRequest(CreateServiceLinkedRoleRequest &&) = default ;
    CreateServiceLinkedRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceLinkedRoleRequest() = default ;
    CreateServiceLinkedRoleRequest& operator=(const CreateServiceLinkedRoleRequest &) = default ;
    CreateServiceLinkedRoleRequest& operator=(CreateServiceLinkedRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customSuffix_ == nullptr
        && return this->description_ == nullptr && return this->serviceName_ == nullptr; };
    // customSuffix Field Functions 
    bool hasCustomSuffix() const { return this->customSuffix_ != nullptr;};
    void deleteCustomSuffix() { this->customSuffix_ = nullptr;};
    inline string customSuffix() const { DARABONBA_PTR_GET_DEFAULT(customSuffix_, "") };
    inline CreateServiceLinkedRoleRequest& setCustomSuffix(string customSuffix) { DARABONBA_PTR_SET_VALUE(customSuffix_, customSuffix) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateServiceLinkedRoleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateServiceLinkedRoleRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The suffix of the role name.
    // 
    // The role name (including its suffix) must be 1 to 64 characters in length and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // For example, if the suffix is `Example`, the role name is `ServiceLinkedRoleName_Example`.
    std::shared_ptr<string> customSuffix_ = nullptr;
    // The description of the service-linked role.
    // 
    // You must configure this parameter for service-linked roles that support custom suffixes. Otherwise, the preset value is used and cannot be modified.
    // 
    // The description must be 1 to 1,024 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The service name.
    // 
    // For more information about the service name, see [Alibaba Cloud services that support service-linked roles](https://help.aliyun.com/document_detail/461722.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
