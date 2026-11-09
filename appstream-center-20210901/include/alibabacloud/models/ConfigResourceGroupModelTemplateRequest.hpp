// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGRESOURCEGROUPMODELTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGRESOURCEGROUPMODELTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ConfigResourceGroupModelTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigResourceGroupModelTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigResourceGroupModelTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ConfigResourceGroupModelTemplateRequest() = default ;
    ConfigResourceGroupModelTemplateRequest(const ConfigResourceGroupModelTemplateRequest &) = default ;
    ConfigResourceGroupModelTemplateRequest(ConfigResourceGroupModelTemplateRequest &&) = default ;
    ConfigResourceGroupModelTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigResourceGroupModelTemplateRequest() = default ;
    ConfigResourceGroupModelTemplateRequest& operator=(const ConfigResourceGroupModelTemplateRequest &) = default ;
    ConfigResourceGroupModelTemplateRequest& operator=(ConfigResourceGroupModelTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelTemplateId_ == nullptr
        && this->resourceGroupId_ == nullptr; };
    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline ConfigResourceGroupModelTemplateRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigResourceGroupModelTemplateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The model group ID.
    // 
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
    // The WUYING resource group ID, which starts with rg-. This resource group is managed by the WUYING Enterprise Edition management and control service, and its automatic creation is performed by the system after the deployment of agent runtimes such as JVS Computer, OpenClaw, and Hermes Agent. You can obtain it from the ResourceGroup[].ResourceGroupId field in the response of the DescribeResourceGroups operation of WUYING Workspace eds-user (API version 2021-03-08), or from the Data.ResourceGroupId field in the response of the GetRuntimeModelConfig operation of this service.
    // 
    // > Other IDs such as the account-level resource group ID and node pool ID in Alibaba Cloud Resource Manager cannot be passed as this parameter. Only WUYING resource group IDs are valid.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
