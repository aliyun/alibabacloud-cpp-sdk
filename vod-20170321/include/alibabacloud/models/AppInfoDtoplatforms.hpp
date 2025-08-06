// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPINFODTOPLATFORMS_HPP_
#define ALIBABACLOUD_MODELS_APPINFODTOPLATFORMS_HPP_
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
  class AppInfoDTOPlatforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppInfoDTOPlatforms& obj) { 
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(LicenseItemIds, licenseItemIds_);
      DARABONBA_PTR_TO_JSON(PkgName, pkgName_);
      DARABONBA_PTR_TO_JSON(PkgSignature, pkgSignature_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AppInfoDTOPlatforms& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(LicenseItemIds, licenseItemIds_);
      DARABONBA_PTR_FROM_JSON(PkgName, pkgName_);
      DARABONBA_PTR_FROM_JSON(PkgSignature, pkgSignature_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AppInfoDTOPlatforms() = default ;
    AppInfoDTOPlatforms(const AppInfoDTOPlatforms &) = default ;
    AppInfoDTOPlatforms(AppInfoDTOPlatforms &&) = default ;
    AppInfoDTOPlatforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppInfoDTOPlatforms() = default ;
    AppInfoDTOPlatforms& operator=(const AppInfoDTOPlatforms &) = default ;
    AppInfoDTOPlatforms& operator=(AppInfoDTOPlatforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemId_ != nullptr
        && this->licenseItemIds_ != nullptr && this->pkgName_ != nullptr && this->pkgSignature_ != nullptr && this->platformType_ != nullptr && this->type_ != nullptr; };
    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline AppInfoDTOPlatforms& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // licenseItemIds Field Functions 
    bool hasLicenseItemIds() const { return this->licenseItemIds_ != nullptr;};
    void deleteLicenseItemIds() { this->licenseItemIds_ = nullptr;};
    inline const vector<string> & licenseItemIds() const { DARABONBA_PTR_GET_CONST(licenseItemIds_, vector<string>) };
    inline vector<string> licenseItemIds() { DARABONBA_PTR_GET(licenseItemIds_, vector<string>) };
    inline AppInfoDTOPlatforms& setLicenseItemIds(const vector<string> & licenseItemIds) { DARABONBA_PTR_SET_VALUE(licenseItemIds_, licenseItemIds) };
    inline AppInfoDTOPlatforms& setLicenseItemIds(vector<string> && licenseItemIds) { DARABONBA_PTR_SET_RVALUE(licenseItemIds_, licenseItemIds) };


    // pkgName Field Functions 
    bool hasPkgName() const { return this->pkgName_ != nullptr;};
    void deletePkgName() { this->pkgName_ = nullptr;};
    inline string pkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
    inline AppInfoDTOPlatforms& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


    // pkgSignature Field Functions 
    bool hasPkgSignature() const { return this->pkgSignature_ != nullptr;};
    void deletePkgSignature() { this->pkgSignature_ = nullptr;};
    inline string pkgSignature() const { DARABONBA_PTR_GET_DEFAULT(pkgSignature_, "") };
    inline AppInfoDTOPlatforms& setPkgSignature(string pkgSignature) { DARABONBA_PTR_SET_VALUE(pkgSignature_, pkgSignature) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline int64_t platformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, 0L) };
    inline AppInfoDTOPlatforms& setPlatformType(int64_t platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline AppInfoDTOPlatforms& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<vector<string>> licenseItemIds_ = nullptr;
    std::shared_ptr<string> pkgName_ = nullptr;
    std::shared_ptr<string> pkgSignature_ = nullptr;
    std::shared_ptr<int64_t> platformType_ = nullptr;
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
