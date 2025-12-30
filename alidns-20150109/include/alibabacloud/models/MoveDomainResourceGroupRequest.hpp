// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEDOMAINRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEDOMAINRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class MoveDomainResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveDomainResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveDomainResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    MoveDomainResourceGroupRequest() = default ;
    MoveDomainResourceGroupRequest(const MoveDomainResourceGroupRequest &) = default ;
    MoveDomainResourceGroupRequest(MoveDomainResourceGroupRequest &&) = default ;
    MoveDomainResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveDomainResourceGroupRequest() = default ;
    MoveDomainResourceGroupRequest& operator=(const MoveDomainResourceGroupRequest &) = default ;
    MoveDomainResourceGroupRequest& operator=(MoveDomainResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->newResourceGroupId_ == nullptr && this->resourceId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MoveDomainResourceGroupRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string getNewResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline MoveDomainResourceGroupRequest& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline MoveDomainResourceGroupRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // The language of the values of specific response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The ID of the new resource group.
    // 
    // You can view the resource group ID in the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups?).
    // 
    // This parameter is required.
    shared_ptr<string> newResourceGroupId_ {};
    // The domain name.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
