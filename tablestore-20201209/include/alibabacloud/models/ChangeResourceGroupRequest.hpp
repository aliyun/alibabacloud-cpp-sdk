// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ChangeResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    ChangeResourceGroupRequest() = default ;
    ChangeResourceGroupRequest(const ChangeResourceGroupRequest &) = default ;
    ChangeResourceGroupRequest(ChangeResourceGroupRequest &&) = default ;
    ChangeResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceGroupRequest() = default ;
    ChangeResourceGroupRequest& operator=(const ChangeResourceGroupRequest &) = default ;
    ChangeResourceGroupRequest& operator=(ChangeResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newResourceGroupId_ == nullptr
        && this->resourceId_ == nullptr; };
    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string getNewResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline ChangeResourceGroupRequest& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ChangeResourceGroupRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The ID of the new resource group.
    // 
    // This parameter is required.
    shared_ptr<string> newResourceGroupId_ {};
    // The resource ID, which is the instance name.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
