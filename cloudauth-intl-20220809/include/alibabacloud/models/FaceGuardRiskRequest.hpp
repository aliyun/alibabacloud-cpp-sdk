// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEGUARDRISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACEGUARDRISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceGuardRiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceGuardRiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, FaceGuardRiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    FaceGuardRiskRequest() = default ;
    FaceGuardRiskRequest(const FaceGuardRiskRequest &) = default ;
    FaceGuardRiskRequest(FaceGuardRiskRequest &&) = default ;
    FaceGuardRiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceGuardRiskRequest() = default ;
    FaceGuardRiskRequest& operator=(const FaceGuardRiskRequest &) = default ;
    FaceGuardRiskRequest& operator=(FaceGuardRiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->deviceToken_ == nullptr && return this->merchantBizId_ == nullptr && return this->productCode_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline FaceGuardRiskRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string deviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline FaceGuardRiskRequest& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline FaceGuardRiskRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline FaceGuardRiskRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The unique ID of the current business authentication. It is used with FACE_GUARD for verification during queries.
    std::shared_ptr<string> bizId_ = nullptr;
    // The deviceToken obtained from the client SDK.
    std::shared_ptr<string> deviceToken_ = nullptr;
    // A custom unique business identifier. It is used to locate and troubleshoot issues. The identifier can be a combination of letters and digits up to 32 characters long. Ensure that it is unique.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // The product code. Set this to the static field **FACE_GUARD**.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
