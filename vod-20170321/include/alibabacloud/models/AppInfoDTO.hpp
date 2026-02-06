// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPINFODTO_HPP_
#define ALIBABACLOUD_MODELS_APPINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AppInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AppInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AppInfoDTO() = default ;
    AppInfoDTO(const AppInfoDTO &) = default ;
    AppInfoDTO(AppInfoDTO &&) = default ;
    AppInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppInfoDTO() = default ;
    AppInfoDTO& operator=(const AppInfoDTO &) = default ;
    AppInfoDTO& operator=(AppInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Platforms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Platforms& obj) { 
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(LicenseItemIds, licenseItemIds_);
        DARABONBA_PTR_TO_JSON(PkgName, pkgName_);
        DARABONBA_PTR_TO_JSON(PkgSignature, pkgSignature_);
        DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Platforms& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(LicenseItemIds, licenseItemIds_);
        DARABONBA_PTR_FROM_JSON(PkgName, pkgName_);
        DARABONBA_PTR_FROM_JSON(PkgSignature, pkgSignature_);
        DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Platforms() = default ;
      Platforms(const Platforms &) = default ;
      Platforms(Platforms &&) = default ;
      Platforms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Platforms() = default ;
      Platforms& operator=(const Platforms &) = default ;
      Platforms& operator=(Platforms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->itemId_ == nullptr
        && this->licenseItemIds_ == nullptr && this->pkgName_ == nullptr && this->pkgSignature_ == nullptr && this->platformType_ == nullptr && this->type_ == nullptr; };
      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Platforms& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // licenseItemIds Field Functions 
      bool hasLicenseItemIds() const { return this->licenseItemIds_ != nullptr;};
      void deleteLicenseItemIds() { this->licenseItemIds_ = nullptr;};
      inline const vector<string> & getLicenseItemIds() const { DARABONBA_PTR_GET_CONST(licenseItemIds_, vector<string>) };
      inline vector<string> getLicenseItemIds() { DARABONBA_PTR_GET(licenseItemIds_, vector<string>) };
      inline Platforms& setLicenseItemIds(const vector<string> & licenseItemIds) { DARABONBA_PTR_SET_VALUE(licenseItemIds_, licenseItemIds) };
      inline Platforms& setLicenseItemIds(vector<string> && licenseItemIds) { DARABONBA_PTR_SET_RVALUE(licenseItemIds_, licenseItemIds) };


      // pkgName Field Functions 
      bool hasPkgName() const { return this->pkgName_ != nullptr;};
      void deletePkgName() { this->pkgName_ = nullptr;};
      inline string getPkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
      inline Platforms& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


      // pkgSignature Field Functions 
      bool hasPkgSignature() const { return this->pkgSignature_ != nullptr;};
      void deletePkgSignature() { this->pkgSignature_ = nullptr;};
      inline string getPkgSignature() const { DARABONBA_PTR_GET_DEFAULT(pkgSignature_, "") };
      inline Platforms& setPkgSignature(string pkgSignature) { DARABONBA_PTR_SET_VALUE(pkgSignature_, pkgSignature) };


      // platformType Field Functions 
      bool hasPlatformType() const { return this->platformType_ != nullptr;};
      void deletePlatformType() { this->platformType_ = nullptr;};
      inline int64_t getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, 0L) };
      inline Platforms& setPlatformType(int64_t platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
      inline Platforms& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> itemId_ {};
      shared_ptr<vector<string>> licenseItemIds_ {};
      shared_ptr<string> pkgName_ {};
      shared_ptr<string> pkgSignature_ {};
      shared_ptr<int64_t> platformType_ {};
      shared_ptr<int64_t> type_ {};
    };

    virtual bool empty() const override { return this->appName_ == nullptr
        && this->appType_ == nullptr && this->creationTime_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->itemId_ == nullptr
        && this->modificationTime_ == nullptr && this->platforms_ == nullptr && this->userId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AppInfoDTO& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline AppInfoDTO& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline AppInfoDTO& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AppInfoDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AppInfoDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline AppInfoDTO& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline AppInfoDTO& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline const vector<AppInfoDTO::Platforms> & getPlatforms() const { DARABONBA_PTR_GET_CONST(platforms_, vector<AppInfoDTO::Platforms>) };
    inline vector<AppInfoDTO::Platforms> getPlatforms() { DARABONBA_PTR_GET(platforms_, vector<AppInfoDTO::Platforms>) };
    inline AppInfoDTO& setPlatforms(const vector<AppInfoDTO::Platforms> & platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };
    inline AppInfoDTO& setPlatforms(vector<AppInfoDTO::Platforms> && platforms) { DARABONBA_PTR_SET_RVALUE(platforms_, platforms) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline AppInfoDTO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> appName_ {};
    shared_ptr<int32_t> appType_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<string> modificationTime_ {};
    shared_ptr<vector<AppInfoDTO::Platforms>> platforms_ {};
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
