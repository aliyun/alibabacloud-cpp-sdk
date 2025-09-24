// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkspaceResourceRequestResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateWorkspaceResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    CreateWorkspaceResourceRequest() = default ;
    CreateWorkspaceResourceRequest(const CreateWorkspaceResourceRequest &) = default ;
    CreateWorkspaceResourceRequest(CreateWorkspaceResourceRequest &&) = default ;
    CreateWorkspaceResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceResourceRequest() = default ;
    CreateWorkspaceResourceRequest& operator=(const CreateWorkspaceResourceRequest &) = default ;
    CreateWorkspaceResourceRequest& operator=(CreateWorkspaceResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->option_ != nullptr
        && this->resources_ != nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline string option() const { DARABONBA_PTR_GET_DEFAULT(option_, "") };
    inline CreateWorkspaceResourceRequest& setOption(string option) { DARABONBA_PTR_SET_VALUE(option_, option) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CreateWorkspaceResourceRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CreateWorkspaceResourceRequestResources>) };
    inline vector<CreateWorkspaceResourceRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<CreateWorkspaceResourceRequestResources>) };
    inline CreateWorkspaceResourceRequest& setResources(const vector<CreateWorkspaceResourceRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateWorkspaceResourceRequest& setResources(vector<CreateWorkspaceResourceRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The operation to perform. Valid values:
    // 
    // *   CreateAndAttach: creates resources and associates the resources with a workspace.
    // *   Attach: associates resources with a workspace.
    // 
    // >  MaxCompute supports only the Attach operation.
    std::shared_ptr<string> option_ = nullptr;
    // The resources.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateWorkspaceResourceRequestResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
