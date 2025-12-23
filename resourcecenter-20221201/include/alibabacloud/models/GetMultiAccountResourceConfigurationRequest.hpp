// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIACCOUNTRESOURCECONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetMultiAccountResourceConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiAccountResourceConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiAccountResourceConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetMultiAccountResourceConfigurationRequest() = default ;
    GetMultiAccountResourceConfigurationRequest(const GetMultiAccountResourceConfigurationRequest &) = default ;
    GetMultiAccountResourceConfigurationRequest(GetMultiAccountResourceConfigurationRequest &&) = default ;
    GetMultiAccountResourceConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiAccountResourceConfigurationRequest() = default ;
    GetMultiAccountResourceConfigurationRequest& operator=(const GetMultiAccountResourceConfigurationRequest &) = default ;
    GetMultiAccountResourceConfigurationRequest& operator=(GetMultiAccountResourceConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceRegionId_ == nullptr && return this->resourceType_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetMultiAccountResourceConfigurationRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetMultiAccountResourceConfigurationRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string resourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline GetMultiAccountResourceConfigurationRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetMultiAccountResourceConfigurationRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the management account or member of the resource directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The region ID of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceRegionId_ = nullptr;
    // The type of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
