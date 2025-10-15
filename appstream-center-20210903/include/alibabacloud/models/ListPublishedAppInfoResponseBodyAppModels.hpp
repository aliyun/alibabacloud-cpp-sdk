// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINFORESPONSEBODYAPPMODELS_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINFORESPONSEBODYAPPMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class ListPublishedAppInfoResponseBodyAppModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAppInfoResponseBodyAppModels& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppThemeColor, appThemeColor_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AppVersionName, appVersionName_);
      DARABONBA_PTR_TO_JSON(AuthTime, authTime_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_TO_JSON(UsedInSession, usedInSession_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAppInfoResponseBodyAppModels& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppThemeColor, appThemeColor_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AppVersionName, appVersionName_);
      DARABONBA_PTR_FROM_JSON(AuthTime, authTime_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(IsAuth, isAuth_);
      DARABONBA_PTR_FROM_JSON(UsedInSession, usedInSession_);
    };
    ListPublishedAppInfoResponseBodyAppModels() = default ;
    ListPublishedAppInfoResponseBodyAppModels(const ListPublishedAppInfoResponseBodyAppModels &) = default ;
    ListPublishedAppInfoResponseBodyAppModels(ListPublishedAppInfoResponseBodyAppModels &&) = default ;
    ListPublishedAppInfoResponseBodyAppModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAppInfoResponseBodyAppModels() = default ;
    ListPublishedAppInfoResponseBodyAppModels& operator=(const ListPublishedAppInfoResponseBodyAppModels &) = default ;
    ListPublishedAppInfoResponseBodyAppModels& operator=(ListPublishedAppInfoResponseBodyAppModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->appThemeColor_ == nullptr && return this->appVersion_ == nullptr && return this->appVersionName_ == nullptr
        && return this->authTime_ == nullptr && return this->categoryId_ == nullptr && return this->categoryType_ == nullptr && return this->iconUrl_ == nullptr && return this->isAuth_ == nullptr
        && return this->usedInSession_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appThemeColor Field Functions 
    bool hasAppThemeColor() const { return this->appThemeColor_ != nullptr;};
    void deleteAppThemeColor() { this->appThemeColor_ = nullptr;};
    inline string appThemeColor() const { DARABONBA_PTR_GET_DEFAULT(appThemeColor_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAppThemeColor(string appThemeColor) { DARABONBA_PTR_SET_VALUE(appThemeColor_, appThemeColor) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // appVersionName Field Functions 
    bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
    void deleteAppVersionName() { this->appVersionName_ = nullptr;};
    inline string appVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


    // authTime Field Functions 
    bool hasAuthTime() const { return this->authTime_ != nullptr;};
    void deleteAuthTime() { this->authTime_ = nullptr;};
    inline string authTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setAuthTime(string authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline ListPublishedAppInfoResponseBodyAppModels& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline int64_t categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0L) };
    inline ListPublishedAppInfoResponseBodyAppModels& setCategoryType(int64_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline ListPublishedAppInfoResponseBodyAppModels& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // isAuth Field Functions 
    bool hasIsAuth() const { return this->isAuth_ != nullptr;};
    void deleteIsAuth() { this->isAuth_ = nullptr;};
    inline bool isAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, false) };
    inline ListPublishedAppInfoResponseBodyAppModels& setIsAuth(bool isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


    // usedInSession Field Functions 
    bool hasUsedInSession() const { return this->usedInSession_ != nullptr;};
    void deleteUsedInSession() { this->usedInSession_ = nullptr;};
    inline bool usedInSession() const { DARABONBA_PTR_GET_DEFAULT(usedInSession_, false) };
    inline ListPublishedAppInfoResponseBodyAppModels& setUsedInSession(bool usedInSession) { DARABONBA_PTR_SET_VALUE(usedInSession_, usedInSession) };


  protected:
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> appThemeColor_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> appVersionName_ = nullptr;
    std::shared_ptr<string> authTime_ = nullptr;
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<int64_t> categoryType_ = nullptr;
    std::shared_ptr<string> iconUrl_ = nullptr;
    std::shared_ptr<bool> isAuth_ = nullptr;
    std::shared_ptr<bool> usedInSession_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
