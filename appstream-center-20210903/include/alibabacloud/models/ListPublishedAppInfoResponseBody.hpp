// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAPPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class ListPublishedAppInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAppInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppModels, appModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAppInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppModels, appModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPublishedAppInfoResponseBody() = default ;
    ListPublishedAppInfoResponseBody(const ListPublishedAppInfoResponseBody &) = default ;
    ListPublishedAppInfoResponseBody(ListPublishedAppInfoResponseBody &&) = default ;
    ListPublishedAppInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAppInfoResponseBody() = default ;
    ListPublishedAppInfoResponseBody& operator=(const ListPublishedAppInfoResponseBody &) = default ;
    ListPublishedAppInfoResponseBody& operator=(ListPublishedAppInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppModels& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AppModels& obj) { 
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
      AppModels() = default ;
      AppModels(const AppModels &) = default ;
      AppModels(AppModels &&) = default ;
      AppModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppModels() = default ;
      AppModels& operator=(const AppModels &) = default ;
      AppModels& operator=(AppModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->appThemeColor_ == nullptr && this->appVersion_ == nullptr && this->appVersionName_ == nullptr
        && this->authTime_ == nullptr && this->categoryId_ == nullptr && this->categoryType_ == nullptr && this->iconUrl_ == nullptr && this->isAuth_ == nullptr
        && this->usedInSession_ == nullptr; };
      // appCenterImageId Field Functions 
      bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
      void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
      inline string getAppCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
      inline AppModels& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppModels& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AppModels& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appThemeColor Field Functions 
      bool hasAppThemeColor() const { return this->appThemeColor_ != nullptr;};
      void deleteAppThemeColor() { this->appThemeColor_ = nullptr;};
      inline string getAppThemeColor() const { DARABONBA_PTR_GET_DEFAULT(appThemeColor_, "") };
      inline AppModels& setAppThemeColor(string appThemeColor) { DARABONBA_PTR_SET_VALUE(appThemeColor_, appThemeColor) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline AppModels& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // appVersionName Field Functions 
      bool hasAppVersionName() const { return this->appVersionName_ != nullptr;};
      void deleteAppVersionName() { this->appVersionName_ = nullptr;};
      inline string getAppVersionName() const { DARABONBA_PTR_GET_DEFAULT(appVersionName_, "") };
      inline AppModels& setAppVersionName(string appVersionName) { DARABONBA_PTR_SET_VALUE(appVersionName_, appVersionName) };


      // authTime Field Functions 
      bool hasAuthTime() const { return this->authTime_ != nullptr;};
      void deleteAuthTime() { this->authTime_ = nullptr;};
      inline string getAuthTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, "") };
      inline AppModels& setAuthTime(string authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline AppModels& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryType Field Functions 
      bool hasCategoryType() const { return this->categoryType_ != nullptr;};
      void deleteCategoryType() { this->categoryType_ = nullptr;};
      inline int64_t getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0L) };
      inline AppModels& setCategoryType(int64_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline AppModels& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // isAuth Field Functions 
      bool hasIsAuth() const { return this->isAuth_ != nullptr;};
      void deleteIsAuth() { this->isAuth_ = nullptr;};
      inline bool getIsAuth() const { DARABONBA_PTR_GET_DEFAULT(isAuth_, false) };
      inline AppModels& setIsAuth(bool isAuth) { DARABONBA_PTR_SET_VALUE(isAuth_, isAuth) };


      // usedInSession Field Functions 
      bool hasUsedInSession() const { return this->usedInSession_ != nullptr;};
      void deleteUsedInSession() { this->usedInSession_ = nullptr;};
      inline bool getUsedInSession() const { DARABONBA_PTR_GET_DEFAULT(usedInSession_, false) };
      inline AppModels& setUsedInSession(bool usedInSession) { DARABONBA_PTR_SET_VALUE(usedInSession_, usedInSession) };


    protected:
      shared_ptr<string> appCenterImageId_ {};
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> appThemeColor_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> appVersionName_ {};
      shared_ptr<string> authTime_ {};
      shared_ptr<int64_t> categoryId_ {};
      shared_ptr<int64_t> categoryType_ {};
      shared_ptr<string> iconUrl_ {};
      shared_ptr<bool> isAuth_ {};
      shared_ptr<bool> usedInSession_ {};
    };

    virtual bool empty() const override { return this->appModels_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // appModels Field Functions 
    bool hasAppModels() const { return this->appModels_ != nullptr;};
    void deleteAppModels() { this->appModels_ = nullptr;};
    inline const vector<ListPublishedAppInfoResponseBody::AppModels> & getAppModels() const { DARABONBA_PTR_GET_CONST(appModels_, vector<ListPublishedAppInfoResponseBody::AppModels>) };
    inline vector<ListPublishedAppInfoResponseBody::AppModels> getAppModels() { DARABONBA_PTR_GET(appModels_, vector<ListPublishedAppInfoResponseBody::AppModels>) };
    inline ListPublishedAppInfoResponseBody& setAppModels(const vector<ListPublishedAppInfoResponseBody::AppModels> & appModels) { DARABONBA_PTR_SET_VALUE(appModels_, appModels) };
    inline ListPublishedAppInfoResponseBody& setAppModels(vector<ListPublishedAppInfoResponseBody::AppModels> && appModels) { DARABONBA_PTR_SET_RVALUE(appModels_, appModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPublishedAppInfoResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedAppInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // appModels
    shared_ptr<vector<ListPublishedAppInfoResponseBody::AppModels>> appModels_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
