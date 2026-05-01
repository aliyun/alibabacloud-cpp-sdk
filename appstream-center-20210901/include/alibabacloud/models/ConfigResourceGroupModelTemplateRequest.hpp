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
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
