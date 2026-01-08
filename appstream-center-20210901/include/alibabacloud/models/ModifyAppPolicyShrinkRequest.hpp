// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicyShrink_);
    };
    ModifyAppPolicyShrinkRequest() = default ;
    ModifyAppPolicyShrinkRequest(const ModifyAppPolicyShrinkRequest &) = default ;
    ModifyAppPolicyShrinkRequest(ModifyAppPolicyShrinkRequest &&) = default ;
    ModifyAppPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppPolicyShrinkRequest() = default ;
    ModifyAppPolicyShrinkRequest& operator=(const ModifyAppPolicyShrinkRequest &) = default ;
    ModifyAppPolicyShrinkRequest& operator=(ModifyAppPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appPolicyId_ == nullptr
        && this->productType_ == nullptr && this->videoPolicyShrink_ == nullptr; };
    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string getAppPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline ModifyAppPolicyShrinkRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppPolicyShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // videoPolicyShrink Field Functions 
    bool hasVideoPolicyShrink() const { return this->videoPolicyShrink_ != nullptr;};
    void deleteVideoPolicyShrink() { this->videoPolicyShrink_ = nullptr;};
    inline string getVideoPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(videoPolicyShrink_, "") };
    inline ModifyAppPolicyShrinkRequest& setVideoPolicyShrink(string videoPolicyShrink) { DARABONBA_PTR_SET_VALUE(videoPolicyShrink_, videoPolicyShrink) };


  protected:
    // The policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> appPolicyId_ {};
    // The product type.
    // 
    // Enumerated values:
    // 
    // *   CloudApp: RDS Cloud App
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // Displays the policy.
    shared_ptr<string> videoPolicyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
