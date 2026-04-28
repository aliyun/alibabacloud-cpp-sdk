// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHADVISORCOSTCHECKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHADVISORCOSTCHECKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class RefreshAdvisorCostCheckShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAdvisorCostCheckShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunIdList, assumeAliyunIdListShrink_);
      DARABONBA_PTR_TO_JSON(CheckIds, checkIdsShrink_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RefreshResource, refreshResource_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAdvisorCostCheckShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunIdList, assumeAliyunIdListShrink_);
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIdsShrink_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RefreshResource, refreshResource_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIdsShrink_);
    };
    RefreshAdvisorCostCheckShrinkRequest() = default ;
    RefreshAdvisorCostCheckShrinkRequest(const RefreshAdvisorCostCheckShrinkRequest &) = default ;
    RefreshAdvisorCostCheckShrinkRequest(RefreshAdvisorCostCheckShrinkRequest &&) = default ;
    RefreshAdvisorCostCheckShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAdvisorCostCheckShrinkRequest() = default ;
    RefreshAdvisorCostCheckShrinkRequest& operator=(const RefreshAdvisorCostCheckShrinkRequest &) = default ;
    RefreshAdvisorCostCheckShrinkRequest& operator=(RefreshAdvisorCostCheckShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunIdListShrink_ == nullptr
        && this->checkIdsShrink_ == nullptr && this->checkPlanId_ == nullptr && this->product_ == nullptr && this->refreshResource_ == nullptr && this->resourceIdsShrink_ == nullptr; };
    // assumeAliyunIdListShrink Field Functions 
    bool hasAssumeAliyunIdListShrink() const { return this->assumeAliyunIdListShrink_ != nullptr;};
    void deleteAssumeAliyunIdListShrink() { this->assumeAliyunIdListShrink_ = nullptr;};
    inline string getAssumeAliyunIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunIdListShrink_, "") };
    inline RefreshAdvisorCostCheckShrinkRequest& setAssumeAliyunIdListShrink(string assumeAliyunIdListShrink) { DARABONBA_PTR_SET_VALUE(assumeAliyunIdListShrink_, assumeAliyunIdListShrink) };


    // checkIdsShrink Field Functions 
    bool hasCheckIdsShrink() const { return this->checkIdsShrink_ != nullptr;};
    void deleteCheckIdsShrink() { this->checkIdsShrink_ = nullptr;};
    inline string getCheckIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(checkIdsShrink_, "") };
    inline RefreshAdvisorCostCheckShrinkRequest& setCheckIdsShrink(string checkIdsShrink) { DARABONBA_PTR_SET_VALUE(checkIdsShrink_, checkIdsShrink) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline RefreshAdvisorCostCheckShrinkRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline RefreshAdvisorCostCheckShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // refreshResource Field Functions 
    bool hasRefreshResource() const { return this->refreshResource_ != nullptr;};
    void deleteRefreshResource() { this->refreshResource_ = nullptr;};
    inline bool getRefreshResource() const { DARABONBA_PTR_GET_DEFAULT(refreshResource_, false) };
    inline RefreshAdvisorCostCheckShrinkRequest& setRefreshResource(bool refreshResource) { DARABONBA_PTR_SET_VALUE(refreshResource_, refreshResource) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string getResourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline RefreshAdvisorCostCheckShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


  protected:
    shared_ptr<string> assumeAliyunIdListShrink_ {};
    shared_ptr<string> checkIdsShrink_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> product_ {};
    shared_ptr<bool> refreshResource_ {};
    shared_ptr<string> resourceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
