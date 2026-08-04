// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEIDBYIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEIDBYIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceIdByIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceIdByIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(IdentityId, identityId_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceIdByIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(IdentityId, identityId_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    GetDeviceIdByIdentityRequest() = default ;
    GetDeviceIdByIdentityRequest(const GetDeviceIdByIdentityRequest &) = default ;
    GetDeviceIdByIdentityRequest(GetDeviceIdByIdentityRequest &&) = default ;
    GetDeviceIdByIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceIdByIdentityRequest() = default ;
    GetDeviceIdByIdentityRequest& operator=(const GetDeviceIdByIdentityRequest &) = default ;
    GetDeviceIdByIdentityRequest& operator=(GetDeviceIdByIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->identityId_ == nullptr && this->identityType_ == nullptr && this->productKey_ == nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline GetDeviceIdByIdentityRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline GetDeviceIdByIdentityRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // identityId Field Functions 
    bool hasIdentityId() const { return this->identityId_ != nullptr;};
    void deleteIdentityId() { this->identityId_ = nullptr;};
    inline string getIdentityId() const { DARABONBA_PTR_GET_DEFAULT(identityId_, "") };
    inline GetDeviceIdByIdentityRequest& setIdentityId(string identityId) { DARABONBA_PTR_SET_VALUE(identityId_, identityId) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline GetDeviceIdByIdentityRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline GetDeviceIdByIdentityRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The value corresponding to the encoding type. Enter the Project ID of the project to which this product belongs. You can view it in the Tmall Genie AI platform console.
    // 
    // This parameter is required.
    shared_ptr<string> encodeKey_ {};
    // Encoding type. Enter **PROJECT_ID** here.
    // 
    // This parameter is required.
    shared_ptr<string> encodeType_ {};
    // Authentication identifier. Enter the MAC address or the SN value.
    // 
    // This parameter is required.
    shared_ptr<string> identityId_ {};
    // Device authentication type. Enter **MAC**, **SN**, or **CTEI**.
    // 
    // This parameter is required.
    shared_ptr<string> identityType_ {};
    // The unique product identifier ProductKey, which is a globally unique identity issued by the platform when the product is created in the Tmall Genie AI platform. This parameter is optional when IdentityType is **CTEI**.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
