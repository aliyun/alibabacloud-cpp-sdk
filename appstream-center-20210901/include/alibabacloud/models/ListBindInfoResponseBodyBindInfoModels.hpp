// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDINFORESPONSEBODYBINDINFOMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDINFORESPONSEBODYBINDINFOMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListBindInfoResponseBodyBindInfoModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindInfoResponseBodyBindInfoModels& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WyId, wyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindInfoResponseBodyBindInfoModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WyId, wyId_);
    };
    ListBindInfoResponseBodyBindInfoModels() = default ;
    ListBindInfoResponseBodyBindInfoModels(const ListBindInfoResponseBodyBindInfoModels &) = default ;
    ListBindInfoResponseBodyBindInfoModels(ListBindInfoResponseBodyBindInfoModels &&) = default ;
    ListBindInfoResponseBodyBindInfoModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindInfoResponseBodyBindInfoModels() = default ;
    ListBindInfoResponseBodyBindInfoModels& operator=(const ListBindInfoResponseBodyBindInfoModels &) = default ;
    ListBindInfoResponseBodyBindInfoModels& operator=(ListBindInfoResponseBodyBindInfoModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountType_ == nullptr
        && return this->appId_ == nullptr && return this->appInstanceGroupId_ == nullptr && return this->appInstanceId_ == nullptr && return this->appVersion_ == nullptr && return this->productType_ == nullptr
        && return this->regionId_ == nullptr && return this->userId_ == nullptr && return this->wyId_ == nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string appInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // wyId Field Functions 
    bool hasWyId() const { return this->wyId_ != nullptr;};
    void deleteWyId() { this->wyId_ = nullptr;};
    inline string wyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
    inline ListBindInfoResponseBodyBindInfoModels& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


  protected:
    // The account type.
    // 
    // Valid values:
    // 
    // *   ad: Active Directory (AD) account
    // *   simple: convenience account
    std::shared_ptr<string> accountType_ = nullptr;
    // The app ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The ID of the app instance.
    std::shared_ptr<string> appInstanceId_ = nullptr;
    // The app version.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The product type.
    // 
    // Valid values:
    // 
    // *   CloudApp: App Streaming
    // *   CloudBrowser: Cloud-based Browser
    // *   AndroidCloud: Cloud Phone
    std::shared_ptr<string> productType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The ID of the Alibaba Cloud Workspace user.
    std::shared_ptr<string> wyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
