// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFACEGUARDRISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFACEGUARDRISKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeFaceGuardRiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaceGuardRiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaceGuardRiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DeviceToken, deviceToken_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    DescribeFaceGuardRiskRequest() = default ;
    DescribeFaceGuardRiskRequest(const DescribeFaceGuardRiskRequest &) = default ;
    DescribeFaceGuardRiskRequest(DescribeFaceGuardRiskRequest &&) = default ;
    DescribeFaceGuardRiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaceGuardRiskRequest() = default ;
    DescribeFaceGuardRiskRequest& operator=(const DescribeFaceGuardRiskRequest &) = default ;
    DescribeFaceGuardRiskRequest& operator=(DescribeFaceGuardRiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->deviceToken_ != nullptr && this->outerOrderNo_ != nullptr && this->productCode_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline DescribeFaceGuardRiskRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deviceToken Field Functions 
    bool hasDeviceToken() const { return this->deviceToken_ != nullptr;};
    void deleteDeviceToken() { this->deviceToken_ = nullptr;};
    inline string deviceToken() const { DARABONBA_PTR_GET_DEFAULT(deviceToken_, "") };
    inline DescribeFaceGuardRiskRequest& setDeviceToken(string deviceToken) { DARABONBA_PTR_SET_VALUE(deviceToken_, deviceToken) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string outerOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline DescribeFaceGuardRiskRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeFaceGuardRiskRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Authentication ID
    std::shared_ptr<string> bizId_ = nullptr;
    // Risk identification - device token.
    std::shared_ptr<string> deviceToken_ = nullptr;
    // This identifier is used for subsequent troubleshooting, and you need to ensure that this value is unique in your business.
    // 
    // Supports the use of English letters (including uppercase and lowercase) and numbers, with a maximum length of 32 characters.
    std::shared_ptr<string> outerOrderNo_ = nullptr;
    // Product code, fixed value: FACE_GUARD
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
