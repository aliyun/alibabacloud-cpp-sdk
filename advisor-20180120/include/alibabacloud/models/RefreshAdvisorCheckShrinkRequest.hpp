// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHADVISORCHECKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHADVISORCHECKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class RefreshAdvisorCheckShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAdvisorCheckShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(ResourceDimensionList, resourceDimensionListShrink_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAdvisorCheckShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(ResourceDimensionList, resourceDimensionListShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    RefreshAdvisorCheckShrinkRequest() = default ;
    RefreshAdvisorCheckShrinkRequest(const RefreshAdvisorCheckShrinkRequest &) = default ;
    RefreshAdvisorCheckShrinkRequest(RefreshAdvisorCheckShrinkRequest &&) = default ;
    RefreshAdvisorCheckShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAdvisorCheckShrinkRequest() = default ;
    RefreshAdvisorCheckShrinkRequest& operator=(const RefreshAdvisorCheckShrinkRequest &) = default ;
    RefreshAdvisorCheckShrinkRequest& operator=(RefreshAdvisorCheckShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunId_ == nullptr
        && this->checkId_ == nullptr && this->checkPlanId_ == nullptr && this->language_ == nullptr && this->product_ == nullptr && this->resourceDimensionListShrink_ == nullptr
        && this->resourceId_ == nullptr && this->token_ == nullptr; };
    // assumeAliyunId Field Functions 
    bool hasAssumeAliyunId() const { return this->assumeAliyunId_ != nullptr;};
    void deleteAssumeAliyunId() { this->assumeAliyunId_ = nullptr;};
    inline int64_t getAssumeAliyunId() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunId_, 0L) };
    inline RefreshAdvisorCheckShrinkRequest& setAssumeAliyunId(int64_t assumeAliyunId) { DARABONBA_PTR_SET_VALUE(assumeAliyunId_, assumeAliyunId) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline RefreshAdvisorCheckShrinkRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline RefreshAdvisorCheckShrinkRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RefreshAdvisorCheckShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline RefreshAdvisorCheckShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resourceDimensionListShrink Field Functions 
    bool hasResourceDimensionListShrink() const { return this->resourceDimensionListShrink_ != nullptr;};
    void deleteResourceDimensionListShrink() { this->resourceDimensionListShrink_ = nullptr;};
    inline string getResourceDimensionListShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceDimensionListShrink_, "") };
    inline RefreshAdvisorCheckShrinkRequest& setResourceDimensionListShrink(string resourceDimensionListShrink) { DARABONBA_PTR_SET_VALUE(resourceDimensionListShrink_, resourceDimensionListShrink) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline RefreshAdvisorCheckShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RefreshAdvisorCheckShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<int64_t> assumeAliyunId_ {};
    shared_ptr<string> checkId_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> product_ {};
    shared_ptr<string> resourceDimensionListShrink_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
