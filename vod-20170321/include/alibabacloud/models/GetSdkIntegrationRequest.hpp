// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSDKINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSDKINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetSdkIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSdkIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(SdkCodeId, sdkCodeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSdkIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(SdkCodeId, sdkCodeId_);
    };
    GetSdkIntegrationRequest() = default ;
    GetSdkIntegrationRequest(const GetSdkIntegrationRequest &) = default ;
    GetSdkIntegrationRequest(GetSdkIntegrationRequest &&) = default ;
    GetSdkIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSdkIntegrationRequest() = default ;
    GetSdkIntegrationRequest& operator=(const GetSdkIntegrationRequest &) = default ;
    GetSdkIntegrationRequest& operator=(GetSdkIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessType_ != nullptr
        && this->integrationType_ != nullptr && this->platform_ != nullptr && this->product_ != nullptr && this->sdkCodeId_ != nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetSdkIntegrationRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline GetSdkIntegrationRequest& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetSdkIntegrationRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetSdkIntegrationRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // sdkCodeId Field Functions 
    bool hasSdkCodeId() const { return this->sdkCodeId_ != nullptr;};
    void deleteSdkCodeId() { this->sdkCodeId_ = nullptr;};
    inline int32_t sdkCodeId() const { DARABONBA_PTR_GET_DEFAULT(sdkCodeId_, 0) };
    inline GetSdkIntegrationRequest& setSdkCodeId(int32_t sdkCodeId) { DARABONBA_PTR_SET_VALUE(sdkCodeId_, sdkCodeId) };


  protected:
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> integrationType_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<int32_t> sdkCodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
