// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEIDBYIDENTITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEIDBYIDENTITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceIdByIdentitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceIdByIdentitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(IdentityIds, identityIds_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceIdByIdentitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(IdentityIds, identityIds_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    ListDeviceIdByIdentitiesRequest() = default ;
    ListDeviceIdByIdentitiesRequest(const ListDeviceIdByIdentitiesRequest &) = default ;
    ListDeviceIdByIdentitiesRequest(ListDeviceIdByIdentitiesRequest &&) = default ;
    ListDeviceIdByIdentitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceIdByIdentitiesRequest() = default ;
    ListDeviceIdByIdentitiesRequest& operator=(const ListDeviceIdByIdentitiesRequest &) = default ;
    ListDeviceIdByIdentitiesRequest& operator=(ListDeviceIdByIdentitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->identityIds_ == nullptr && this->identityType_ == nullptr && this->productKey_ == nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline ListDeviceIdByIdentitiesRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline ListDeviceIdByIdentitiesRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // identityIds Field Functions 
    bool hasIdentityIds() const { return this->identityIds_ != nullptr;};
    void deleteIdentityIds() { this->identityIds_ = nullptr;};
    inline const vector<string> & getIdentityIds() const { DARABONBA_PTR_GET_CONST(identityIds_, vector<string>) };
    inline vector<string> getIdentityIds() { DARABONBA_PTR_GET(identityIds_, vector<string>) };
    inline ListDeviceIdByIdentitiesRequest& setIdentityIds(const vector<string> & identityIds) { DARABONBA_PTR_SET_VALUE(identityIds_, identityIds) };
    inline ListDeviceIdByIdentitiesRequest& setIdentityIds(vector<string> && identityIds) { DARABONBA_PTR_SET_RVALUE(identityIds_, identityIds) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline ListDeviceIdByIdentitiesRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ListDeviceIdByIdentitiesRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The value corresponding to the encoding type. Enter the Project ID of the project to which this product belongs. You can view it in the Tmall Genie AI platform console.
    // 
    // This parameter is required.
    shared_ptr<string> encodeKey_ {};
    // Encoding type. Enter **PROJECT_ID** here.
    // 
    // This parameter is required.
    shared_ptr<string> encodeType_ {};
    // List of device authentication identifiers.
    shared_ptr<vector<string>> identityIds_ {};
    // Device authentication type. Enter **MAC** or **SN**.
    // 
    // This parameter is required.
    shared_ptr<string> identityType_ {};
    // The unique product identifier ProductKey, which is a globally unique identity issued by the platform when creating a product in the Tmall Genie AI platform.
    // 
    // This parameter is required.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
