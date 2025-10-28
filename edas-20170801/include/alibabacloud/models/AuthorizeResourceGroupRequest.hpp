// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class AuthorizeResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    AuthorizeResourceGroupRequest() = default ;
    AuthorizeResourceGroupRequest(const AuthorizeResourceGroupRequest &) = default ;
    AuthorizeResourceGroupRequest(AuthorizeResourceGroupRequest &&) = default ;
    AuthorizeResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeResourceGroupRequest() = default ;
    AuthorizeResourceGroupRequest& operator=(const AuthorizeResourceGroupRequest &) = default ;
    AuthorizeResourceGroupRequest& operator=(AuthorizeResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceGroupIds_ == nullptr
        && return this->targetUserId_ == nullptr; };
    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline string resourceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIds_, "") };
    inline AuthorizeResourceGroupRequest& setResourceGroupIds(string resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline AuthorizeResourceGroupRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The ID of the resource group. You can call the ListResourceGroup operation to query the resource group ID. For more information, see [ListResourceGroup](https://help.aliyun.com/document_detail/62055.html).
    // 
    // You can specify multiple resource group IDs. Separate multiple resource group IDs with semicolons (;).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupIds_ = nullptr;
    // The ID of the RAM user to be authorized.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
