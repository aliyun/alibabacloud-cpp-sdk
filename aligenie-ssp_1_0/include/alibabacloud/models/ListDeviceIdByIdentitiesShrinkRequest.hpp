// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEIDBYIDENTITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEIDBYIDENTITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceIdByIdentitiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceIdByIdentitiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(IdentityIds, identityIdsShrink_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceIdByIdentitiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(IdentityIds, identityIdsShrink_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    ListDeviceIdByIdentitiesShrinkRequest() = default ;
    ListDeviceIdByIdentitiesShrinkRequest(const ListDeviceIdByIdentitiesShrinkRequest &) = default ;
    ListDeviceIdByIdentitiesShrinkRequest(ListDeviceIdByIdentitiesShrinkRequest &&) = default ;
    ListDeviceIdByIdentitiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceIdByIdentitiesShrinkRequest() = default ;
    ListDeviceIdByIdentitiesShrinkRequest& operator=(const ListDeviceIdByIdentitiesShrinkRequest &) = default ;
    ListDeviceIdByIdentitiesShrinkRequest& operator=(ListDeviceIdByIdentitiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->identityIdsShrink_ != nullptr && this->identityType_ != nullptr && this->productKey_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline ListDeviceIdByIdentitiesShrinkRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline ListDeviceIdByIdentitiesShrinkRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // identityIdsShrink Field Functions 
    bool hasIdentityIdsShrink() const { return this->identityIdsShrink_ != nullptr;};
    void deleteIdentityIdsShrink() { this->identityIdsShrink_ = nullptr;};
    inline string identityIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(identityIdsShrink_, "") };
    inline ListDeviceIdByIdentitiesShrinkRequest& setIdentityIdsShrink(string identityIdsShrink) { DARABONBA_PTR_SET_VALUE(identityIdsShrink_, identityIdsShrink) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string identityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline ListDeviceIdByIdentitiesShrinkRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ListDeviceIdByIdentitiesShrinkRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    std::shared_ptr<string> identityIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> identityType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
