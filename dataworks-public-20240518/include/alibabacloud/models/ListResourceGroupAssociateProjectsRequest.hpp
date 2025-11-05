// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPASSOCIATEPROJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPASSOCIATEPROJECTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupAssociateProjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupAssociateProjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupAssociateProjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ListResourceGroupAssociateProjectsRequest() = default ;
    ListResourceGroupAssociateProjectsRequest(const ListResourceGroupAssociateProjectsRequest &) = default ;
    ListResourceGroupAssociateProjectsRequest(ListResourceGroupAssociateProjectsRequest &&) = default ;
    ListResourceGroupAssociateProjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupAssociateProjectsRequest() = default ;
    ListResourceGroupAssociateProjectsRequest& operator=(const ListResourceGroupAssociateProjectsRequest &) = default ;
    ListResourceGroupAssociateProjectsRequest& operator=(ListResourceGroupAssociateProjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupId_ == nullptr; };
    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceGroupAssociateProjectsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the serverless resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
