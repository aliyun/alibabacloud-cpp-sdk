// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAPPINFOREQUESTPLATFORMS_HPP_
#define ALIBABACLOUD_MODELS_EDITAPPINFOREQUESTPLATFORMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class EditAppInfoRequestPlatforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditAppInfoRequestPlatforms& obj) { 
      DARABONBA_PTR_TO_JSON(PkgName, pkgName_);
      DARABONBA_PTR_TO_JSON(PkgSignature, pkgSignature_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
    };
    friend void from_json(const Darabonba::Json& j, EditAppInfoRequestPlatforms& obj) { 
      DARABONBA_PTR_FROM_JSON(PkgName, pkgName_);
      DARABONBA_PTR_FROM_JSON(PkgSignature, pkgSignature_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
    };
    EditAppInfoRequestPlatforms() = default ;
    EditAppInfoRequestPlatforms(const EditAppInfoRequestPlatforms &) = default ;
    EditAppInfoRequestPlatforms(EditAppInfoRequestPlatforms &&) = default ;
    EditAppInfoRequestPlatforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditAppInfoRequestPlatforms() = default ;
    EditAppInfoRequestPlatforms& operator=(const EditAppInfoRequestPlatforms &) = default ;
    EditAppInfoRequestPlatforms& operator=(EditAppInfoRequestPlatforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pkgName_ != nullptr
        && this->pkgSignature_ != nullptr && this->platformType_ != nullptr; };
    // pkgName Field Functions 
    bool hasPkgName() const { return this->pkgName_ != nullptr;};
    void deletePkgName() { this->pkgName_ = nullptr;};
    inline string pkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
    inline EditAppInfoRequestPlatforms& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


    // pkgSignature Field Functions 
    bool hasPkgSignature() const { return this->pkgSignature_ != nullptr;};
    void deletePkgSignature() { this->pkgSignature_ = nullptr;};
    inline string pkgSignature() const { DARABONBA_PTR_GET_DEFAULT(pkgSignature_, "") };
    inline EditAppInfoRequestPlatforms& setPkgSignature(string pkgSignature) { DARABONBA_PTR_SET_VALUE(pkgSignature_, pkgSignature) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline int64_t platformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, 0L) };
    inline EditAppInfoRequestPlatforms& setPlatformType(int64_t platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


  protected:
    std::shared_ptr<string> pkgName_ = nullptr;
    std::shared_ptr<string> pkgSignature_ = nullptr;
    std::shared_ptr<int64_t> platformType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
