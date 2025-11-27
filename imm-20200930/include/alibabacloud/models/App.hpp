// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APP_HPP_
#define ALIBABACLOUD_MODELS_APP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class App : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const App& obj) { 
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppRegion, appRegion_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(EnglishName, englishName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
    };
    friend void from_json(const Darabonba::Json& j, App& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppRegion, appRegion_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(EnglishName, englishName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
    };
    App() = default ;
    App(const App &) = default ;
    App(App &&) = default ;
    App(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~App() = default ;
    App& operator=(const App &) = default ;
    App& operator=(App &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDescription_ == nullptr
        && return this->appId_ == nullptr && return this->appKey_ == nullptr && return this->appName_ == nullptr && return this->appRegion_ == nullptr && return this->appType_ == nullptr
        && return this->englishName_ == nullptr && return this->ownerId_ == nullptr && return this->packageName_ == nullptr; };
    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline App& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline App& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline App& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline App& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appRegion Field Functions 
    bool hasAppRegion() const { return this->appRegion_ != nullptr;};
    void deleteAppRegion() { this->appRegion_ = nullptr;};
    inline int64_t appRegion() const { DARABONBA_PTR_GET_DEFAULT(appRegion_, 0L) };
    inline App& setAppRegion(int64_t appRegion) { DARABONBA_PTR_SET_VALUE(appRegion_, appRegion) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int64_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0L) };
    inline App& setAppType(int64_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // englishName Field Functions 
    bool hasEnglishName() const { return this->englishName_ != nullptr;};
    void deleteEnglishName() { this->englishName_ = nullptr;};
    inline string englishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
    inline App& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline App& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline App& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


  protected:
    std::shared_ptr<string> appDescription_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int64_t> appRegion_ = nullptr;
    std::shared_ptr<int64_t> appType_ = nullptr;
    std::shared_ptr<string> englishName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
