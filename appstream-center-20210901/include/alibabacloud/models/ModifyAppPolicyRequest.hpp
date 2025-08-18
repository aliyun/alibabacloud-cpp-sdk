// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppPolicyRequestVideoPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(VideoPolicy, videoPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(VideoPolicy, videoPolicy_);
    };
    ModifyAppPolicyRequest() = default ;
    ModifyAppPolicyRequest(const ModifyAppPolicyRequest &) = default ;
    ModifyAppPolicyRequest(ModifyAppPolicyRequest &&) = default ;
    ModifyAppPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppPolicyRequest() = default ;
    ModifyAppPolicyRequest& operator=(const ModifyAppPolicyRequest &) = default ;
    ModifyAppPolicyRequest& operator=(ModifyAppPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPolicyId_ != nullptr
        && this->productType_ != nullptr && this->videoPolicy_ != nullptr; };
    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string appPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline ModifyAppPolicyRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppPolicyRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // videoPolicy Field Functions 
    bool hasVideoPolicy() const { return this->videoPolicy_ != nullptr;};
    void deleteVideoPolicy() { this->videoPolicy_ = nullptr;};
    inline const ModifyAppPolicyRequestVideoPolicy & videoPolicy() const { DARABONBA_PTR_GET_CONST(videoPolicy_, ModifyAppPolicyRequestVideoPolicy) };
    inline ModifyAppPolicyRequestVideoPolicy videoPolicy() { DARABONBA_PTR_GET(videoPolicy_, ModifyAppPolicyRequestVideoPolicy) };
    inline ModifyAppPolicyRequest& setVideoPolicy(const ModifyAppPolicyRequestVideoPolicy & videoPolicy) { DARABONBA_PTR_SET_VALUE(videoPolicy_, videoPolicy) };
    inline ModifyAppPolicyRequest& setVideoPolicy(ModifyAppPolicyRequestVideoPolicy && videoPolicy) { DARABONBA_PTR_SET_RVALUE(videoPolicy_, videoPolicy) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appPolicyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<ModifyAppPolicyRequestVideoPolicy> videoPolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
