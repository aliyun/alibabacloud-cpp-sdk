// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
    };
    UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest(UpdateWorkspaceRequest &&) = default ;
    UpdateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest& operator=(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest& operator=(UpdateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->resourceGroupId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkspaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateWorkspaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The description.
    shared_ptr<string> description_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
