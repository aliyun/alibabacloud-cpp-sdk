// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ModifyAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
    };
    ModifyAppRequest() = default ;
    ModifyAppRequest(const ModifyAppRequest &) = default ;
    ModifyAppRequest(ModifyAppRequest &&) = default ;
    ModifyAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRequest() = default ;
    ModifyAppRequest& operator=(const ModifyAppRequest &) = default ;
    ModifyAppRequest& operator=(ModifyAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->bundleId_ != nullptr && this->encodedIcon_ != nullptr && this->industryId_ != nullptr && this->name_ != nullptr && this->packageName_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline ModifyAppRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline ModifyAppRequest& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // encodedIcon Field Functions 
    bool hasEncodedIcon() const { return this->encodedIcon_ != nullptr;};
    void deleteEncodedIcon() { this->encodedIcon_ = nullptr;};
    inline string encodedIcon() const { DARABONBA_PTR_GET_DEFAULT(encodedIcon_, "") };
    inline ModifyAppRequest& setEncodedIcon(string encodedIcon) { DARABONBA_PTR_SET_VALUE(encodedIcon_, encodedIcon) };


    // industryId Field Functions 
    bool hasIndustryId() const { return this->industryId_ != nullptr;};
    void deleteIndustryId() { this->industryId_ = nullptr;};
    inline int32_t industryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0) };
    inline ModifyAppRequest& setIndustryId(int32_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAppRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline ModifyAppRequest& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> bundleId_ = nullptr;
    std::shared_ptr<string> encodedIcon_ = nullptr;
    std::shared_ptr<int32_t> industryId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
