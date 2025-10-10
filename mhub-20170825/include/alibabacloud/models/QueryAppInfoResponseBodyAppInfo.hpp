// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPINFORESPONSEBODYAPPINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPINFORESPONSEBODYAPPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryAppInfoResponseBodyAppInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppInfoResponseBodyAppInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(CertDevelopAvail, certDevelopAvail_);
      DARABONBA_PTR_TO_JSON(CertDevelopExpiration, certDevelopExpiration_);
      DARABONBA_PTR_TO_JSON(CertProductAvail, certProductAvail_);
      DARABONBA_PTR_TO_JSON(CertProductExpiration, certProductExpiration_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_TO_JSON(IndustryId, industryId_);
      DARABONBA_PTR_TO_JSON(PackageName, packageName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Readonly, readonly_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppInfoResponseBodyAppInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(CertDevelopAvail, certDevelopAvail_);
      DARABONBA_PTR_FROM_JSON(CertDevelopExpiration, certDevelopExpiration_);
      DARABONBA_PTR_FROM_JSON(CertProductAvail, certProductAvail_);
      DARABONBA_PTR_FROM_JSON(CertProductExpiration, certProductExpiration_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EncodedIcon, encodedIcon_);
      DARABONBA_PTR_FROM_JSON(IndustryId, industryId_);
      DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Readonly, readonly_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryAppInfoResponseBodyAppInfo() = default ;
    QueryAppInfoResponseBodyAppInfo(const QueryAppInfoResponseBodyAppInfo &) = default ;
    QueryAppInfoResponseBodyAppInfo(QueryAppInfoResponseBodyAppInfo &&) = default ;
    QueryAppInfoResponseBodyAppInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppInfoResponseBodyAppInfo() = default ;
    QueryAppInfoResponseBodyAppInfo& operator=(const QueryAppInfoResponseBodyAppInfo &) = default ;
    QueryAppInfoResponseBodyAppInfo& operator=(QueryAppInfoResponseBodyAppInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->appName_ != nullptr && this->bundleId_ != nullptr && this->certDevelopAvail_ != nullptr && this->certDevelopExpiration_ != nullptr && this->certProductAvail_ != nullptr
        && this->certProductExpiration_ != nullptr && this->createTime_ != nullptr && this->encodedIcon_ != nullptr && this->industryId_ != nullptr && this->packageName_ != nullptr
        && this->productId_ != nullptr && this->readonly_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // certDevelopAvail Field Functions 
    bool hasCertDevelopAvail() const { return this->certDevelopAvail_ != nullptr;};
    void deleteCertDevelopAvail() { this->certDevelopAvail_ = nullptr;};
    inline bool certDevelopAvail() const { DARABONBA_PTR_GET_DEFAULT(certDevelopAvail_, false) };
    inline QueryAppInfoResponseBodyAppInfo& setCertDevelopAvail(bool certDevelopAvail) { DARABONBA_PTR_SET_VALUE(certDevelopAvail_, certDevelopAvail) };


    // certDevelopExpiration Field Functions 
    bool hasCertDevelopExpiration() const { return this->certDevelopExpiration_ != nullptr;};
    void deleteCertDevelopExpiration() { this->certDevelopExpiration_ = nullptr;};
    inline string certDevelopExpiration() const { DARABONBA_PTR_GET_DEFAULT(certDevelopExpiration_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setCertDevelopExpiration(string certDevelopExpiration) { DARABONBA_PTR_SET_VALUE(certDevelopExpiration_, certDevelopExpiration) };


    // certProductAvail Field Functions 
    bool hasCertProductAvail() const { return this->certProductAvail_ != nullptr;};
    void deleteCertProductAvail() { this->certProductAvail_ = nullptr;};
    inline bool certProductAvail() const { DARABONBA_PTR_GET_DEFAULT(certProductAvail_, false) };
    inline QueryAppInfoResponseBodyAppInfo& setCertProductAvail(bool certProductAvail) { DARABONBA_PTR_SET_VALUE(certProductAvail_, certProductAvail) };


    // certProductExpiration Field Functions 
    bool hasCertProductExpiration() const { return this->certProductExpiration_ != nullptr;};
    void deleteCertProductExpiration() { this->certProductExpiration_ = nullptr;};
    inline string certProductExpiration() const { DARABONBA_PTR_GET_DEFAULT(certProductExpiration_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setCertProductExpiration(string certProductExpiration) { DARABONBA_PTR_SET_VALUE(certProductExpiration_, certProductExpiration) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // encodedIcon Field Functions 
    bool hasEncodedIcon() const { return this->encodedIcon_ != nullptr;};
    void deleteEncodedIcon() { this->encodedIcon_ = nullptr;};
    inline string encodedIcon() const { DARABONBA_PTR_GET_DEFAULT(encodedIcon_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setEncodedIcon(string encodedIcon) { DARABONBA_PTR_SET_VALUE(encodedIcon_, encodedIcon) };


    // industryId Field Functions 
    bool hasIndustryId() const { return this->industryId_ != nullptr;};
    void deleteIndustryId() { this->industryId_ = nullptr;};
    inline int32_t industryId() const { DARABONBA_PTR_GET_DEFAULT(industryId_, 0) };
    inline QueryAppInfoResponseBodyAppInfo& setIndustryId(int32_t industryId) { DARABONBA_PTR_SET_VALUE(industryId_, industryId) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string packageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline QueryAppInfoResponseBodyAppInfo& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline QueryAppInfoResponseBodyAppInfo& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // readonly Field Functions 
    bool hasReadonly() const { return this->readonly_ != nullptr;};
    void deleteReadonly() { this->readonly_ = nullptr;};
    inline bool readonly() const { DARABONBA_PTR_GET_DEFAULT(readonly_, false) };
    inline QueryAppInfoResponseBodyAppInfo& setReadonly(bool readonly) { DARABONBA_PTR_SET_VALUE(readonly_, readonly) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryAppInfoResponseBodyAppInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryAppInfoResponseBodyAppInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bundleId_ = nullptr;
    std::shared_ptr<bool> certDevelopAvail_ = nullptr;
    std::shared_ptr<string> certDevelopExpiration_ = nullptr;
    std::shared_ptr<bool> certProductAvail_ = nullptr;
    std::shared_ptr<string> certProductExpiration_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> encodedIcon_ = nullptr;
    std::shared_ptr<int32_t> industryId_ = nullptr;
    std::shared_ptr<string> packageName_ = nullptr;
    std::shared_ptr<int64_t> productId_ = nullptr;
    std::shared_ptr<bool> readonly_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
