// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVERESOURCEGROUPMODELTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVERESOURCEGROUPMODELTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RemoveResourceGroupModelTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveResourceGroupModelTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveResourceGroupModelTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    RemoveResourceGroupModelTemplateRequest() = default ;
    RemoveResourceGroupModelTemplateRequest(const RemoveResourceGroupModelTemplateRequest &) = default ;
    RemoveResourceGroupModelTemplateRequest(RemoveResourceGroupModelTemplateRequest &&) = default ;
    RemoveResourceGroupModelTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveResourceGroupModelTemplateRequest() = default ;
    RemoveResourceGroupModelTemplateRequest& operator=(const RemoveResourceGroupModelTemplateRequest &) = default ;
    RemoveResourceGroupModelTemplateRequest& operator=(RemoveResourceGroupModelTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelTemplateId_ == nullptr
        && this->resourceGroupIds_ == nullptr; };
    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline RemoveResourceGroupModelTemplateRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & getResourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> getResourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline RemoveResourceGroupModelTemplateRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline RemoveResourceGroupModelTemplateRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> modelTemplateId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> resourceGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
