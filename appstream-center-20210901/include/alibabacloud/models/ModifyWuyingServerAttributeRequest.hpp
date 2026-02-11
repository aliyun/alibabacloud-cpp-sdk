// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWUYINGSERVERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWUYINGSERVERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyWuyingServerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWuyingServerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
      DARABONBA_PTR_TO_JSON(WuyingServerName, wuyingServerName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWuyingServerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
      DARABONBA_PTR_FROM_JSON(WuyingServerName, wuyingServerName_);
    };
    ModifyWuyingServerAttributeRequest() = default ;
    ModifyWuyingServerAttributeRequest(const ModifyWuyingServerAttributeRequest &) = default ;
    ModifyWuyingServerAttributeRequest(ModifyWuyingServerAttributeRequest &&) = default ;
    ModifyWuyingServerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWuyingServerAttributeRequest() = default ;
    ModifyWuyingServerAttributeRequest& operator=(const ModifyWuyingServerAttributeRequest &) = default ;
    ModifyWuyingServerAttributeRequest& operator=(ModifyWuyingServerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && this->productType_ == nullptr && this->wuyingServerId_ == nullptr && this->wuyingServerName_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyWuyingServerAttributeRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyWuyingServerAttributeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline ModifyWuyingServerAttributeRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


    // wuyingServerName Field Functions 
    bool hasWuyingServerName() const { return this->wuyingServerName_ != nullptr;};
    void deleteWuyingServerName() { this->wuyingServerName_ = nullptr;};
    inline string getWuyingServerName() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerName_, "") };
    inline ModifyWuyingServerAttributeRequest& setWuyingServerName(string wuyingServerName) { DARABONBA_PTR_SET_VALUE(wuyingServerName_, wuyingServerName) };


  protected:
    // Workstation login password.
    shared_ptr<string> password_ {};
    shared_ptr<string> productType_ {};
    // The ID of the workstation.
    shared_ptr<string> wuyingServerId_ {};
    // The name.
    shared_ptr<string> wuyingServerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
