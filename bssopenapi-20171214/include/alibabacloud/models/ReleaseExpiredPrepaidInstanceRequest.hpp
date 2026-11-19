// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEEXPIREDPREPAIDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEEXPIREDPREPAIDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ReleaseExpiredPrepaidInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseExpiredPrepaidInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseExpiredPrepaidInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    ReleaseExpiredPrepaidInstanceRequest() = default ;
    ReleaseExpiredPrepaidInstanceRequest(const ReleaseExpiredPrepaidInstanceRequest &) = default ;
    ReleaseExpiredPrepaidInstanceRequest(ReleaseExpiredPrepaidInstanceRequest &&) = default ;
    ReleaseExpiredPrepaidInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseExpiredPrepaidInstanceRequest() = default ;
    ReleaseExpiredPrepaidInstanceRequest& operator=(const ReleaseExpiredPrepaidInstanceRequest &) = default ;
    ReleaseExpiredPrepaidInstanceRequest& operator=(ReleaseExpiredPrepaidInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->productCode_ == nullptr && this->productType_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ReleaseExpiredPrepaidInstanceRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ReleaseExpiredPrepaidInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ReleaseExpiredPrepaidInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The instance IDs. Separate multiple IDs with commas. You can specify up to 20 IDs.
    // 
    // This parameter is required.
    shared_ptr<string> instanceIds_ {};
    // The product code. You can call the **QueryProductList** operation to query the product code.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The product type.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
