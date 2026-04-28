// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTOPTIMIZATIONOVERVIEWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTOPTIMIZATIONOVERVIEWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostOptimizationOverviewShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostOptimizationOverviewShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_TO_JSON(AssumeAliyunIdList, assumeAliyunIdListShrink_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostOptimizationOverviewShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_FROM_JSON(AssumeAliyunIdList, assumeAliyunIdListShrink_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeCostOptimizationOverviewShrinkRequest() = default ;
    DescribeCostOptimizationOverviewShrinkRequest(const DescribeCostOptimizationOverviewShrinkRequest &) = default ;
    DescribeCostOptimizationOverviewShrinkRequest(DescribeCostOptimizationOverviewShrinkRequest &&) = default ;
    DescribeCostOptimizationOverviewShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostOptimizationOverviewShrinkRequest() = default ;
    DescribeCostOptimizationOverviewShrinkRequest& operator=(const DescribeCostOptimizationOverviewShrinkRequest &) = default ;
    DescribeCostOptimizationOverviewShrinkRequest& operator=(DescribeCostOptimizationOverviewShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunId_ == nullptr
        && this->assumeAliyunIdListShrink_ == nullptr && this->checkPlanId_ == nullptr && this->token_ == nullptr; };
    // assumeAliyunId Field Functions 
    bool hasAssumeAliyunId() const { return this->assumeAliyunId_ != nullptr;};
    void deleteAssumeAliyunId() { this->assumeAliyunId_ = nullptr;};
    inline int64_t getAssumeAliyunId() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunId_, 0L) };
    inline DescribeCostOptimizationOverviewShrinkRequest& setAssumeAliyunId(int64_t assumeAliyunId) { DARABONBA_PTR_SET_VALUE(assumeAliyunId_, assumeAliyunId) };


    // assumeAliyunIdListShrink Field Functions 
    bool hasAssumeAliyunIdListShrink() const { return this->assumeAliyunIdListShrink_ != nullptr;};
    void deleteAssumeAliyunIdListShrink() { this->assumeAliyunIdListShrink_ = nullptr;};
    inline string getAssumeAliyunIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunIdListShrink_, "") };
    inline DescribeCostOptimizationOverviewShrinkRequest& setAssumeAliyunIdListShrink(string assumeAliyunIdListShrink) { DARABONBA_PTR_SET_VALUE(assumeAliyunIdListShrink_, assumeAliyunIdListShrink) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline DescribeCostOptimizationOverviewShrinkRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeCostOptimizationOverviewShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<int64_t> assumeAliyunId_ {};
    shared_ptr<string> assumeAliyunIdListShrink_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
