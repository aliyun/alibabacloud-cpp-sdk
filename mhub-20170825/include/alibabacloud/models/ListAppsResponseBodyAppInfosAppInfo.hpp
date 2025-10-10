// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYAPPINFOSAPPINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYAPPINFOSAPPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListAppsResponseBodyAppInfosAppInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBodyAppInfosAppInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(Readonly, readonly_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBodyAppInfosAppInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(Readonly, readonly_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAppsResponseBodyAppInfosAppInfo() = default ;
    ListAppsResponseBodyAppInfosAppInfo(const ListAppsResponseBodyAppInfosAppInfo &) = default ;
    ListAppsResponseBodyAppInfosAppInfo(ListAppsResponseBodyAppInfosAppInfo &&) = default ;
    ListAppsResponseBodyAppInfosAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBodyAppInfosAppInfo() = default ;
    ListAppsResponseBodyAppInfosAppInfo& operator=(const ListAppsResponseBodyAppInfosAppInfo &) = default ;
    ListAppsResponseBodyAppInfosAppInfo& operator=(ListAppsResponseBodyAppInfosAppInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->appName_ != nullptr && this->bundleId_ != nullptr && this->encodedIcon_ != nullptr && this->industryId_ != nullptr && this->name_ != nullptr
        && this->packageName_ != nullptr && this->readonly_ != nullptr && this->type_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ListAppsResponseBodyAppInfosAppInfo& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppsResponseBodyAppInfosAppInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline ListAppsResponseBodyAppInfosAppInfo& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // encodedIcon Field Functions 
    bool hasEncodedIcon() const { return this->encodedIcon_ != nullptr;};
    void deleteEncodedIcon() { this->encodedIcon_ = nullptr;};
    inline string encodedIcon() const { DARABONBA_PTR_GET_DEFAULT(encodedIcon_, "") };
    inline ListAppsResponseBodyAppInfosAppInfo& setEncodedIcon(string encodedIcon) { DARABONBA_PTR_SET_VALUE(encodedIcon_, encodedIcon) };


    // industryId Field Functions 
    bool hasIndustryId() const { return this->industryId_ != nullptr;};
    void deleteIndustryId() { this->industryId_ = nullptr;};
    inline int32_t industryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0) };
    inline ListAppsResponseBodyAppInfosAppInfo& setIndustryId(int32_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAppsResponseBodyAppInfosAppInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline ListAppsResponseBodyAppInfosAppInfo& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // readonly Field Functions 
    bool hasReadonly() const { return this->readonly_ != nullptr;};
    void deleteReadonly() { this->readonly_ = nullptr;};
    inline bool readonly() const { DARABONBA_PTR_GET_DEFAULT(readonly_, false) };
    inline ListAppsResponseBodyAppInfosAppInfo& setReadonly(bool readonly) { DARABONBA_PTR_SET_VALUE(readonly_, readonly) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListAppsResponseBodyAppInfosAppInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bundleId_ = nullptr;
    std::shared_ptr<string> encodedIcon_ = nullptr;
    std::shared_ptr<int32_t> industryId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
    std::shared_ptr<bool> readonly_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
