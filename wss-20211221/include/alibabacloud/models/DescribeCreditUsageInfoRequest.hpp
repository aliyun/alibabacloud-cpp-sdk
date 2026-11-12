// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITUSAGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITUSAGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeCreditUsageInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditUsageInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditUsageInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
    };
    DescribeCreditUsageInfoRequest() = default ;
    DescribeCreditUsageInfoRequest(const DescribeCreditUsageInfoRequest &) = default ;
    DescribeCreditUsageInfoRequest(DescribeCreditUsageInfoRequest &&) = default ;
    DescribeCreditUsageInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditUsageInfoRequest() = default ;
    DescribeCreditUsageInfoRequest& operator=(const DescribeCreditUsageInfoRequest &) = default ;
    DescribeCreditUsageInfoRequest& operator=(DescribeCreditUsageInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->instanceIds_ == nullptr && this->sceneType_ == nullptr && this->usageType_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeCreditUsageInfoRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeCreditUsageInfoRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeCreditUsageInfoRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline string getSceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, "") };
    inline DescribeCreditUsageInfoRequest& setSceneType(string sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline DescribeCreditUsageInfoRequest& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


  protected:
    // The business type.
    shared_ptr<string> bizType_ {};
    // The JSON string of the instance ID list. This parameter can be omitted when `UsageType=User`. Pass the credit package instance ID when `UsageType=CreditPackage`, and pass the `AgentId` when `UsageType=Agent`.
    shared_ptr<vector<string>> instanceIds_ {};
    // The scenarios for operator usage. Valid values:
    // - NaturalMonthlyOwn or not specified: Natural monthly exclusive.
    // - JzYearlyShare: Jz annual shared.
    // - JzYearlyOwn: Jz annual exclusive.
    shared_ptr<string> sceneType_ {};
    // The usage type. Valid values:
    // - User: Returns the used amount, remaining amount, and consumption trend of the user\\"s currently active credit packages.
    // - CreditPackage: Requires CreditPackageId. Returns the total amount and remaining amount of the specified credit package.
    // - Agent: Requires AgentId. Returns the cumulative credit usage, cumulative allocated quota, and the percentage of both.
    // - EndUser: Requires the Wuying ID. Returns the shared credit usage, pay-as-you-go credit usage, and total credit usage for the current period of the Wuying user.
    shared_ptr<string> usageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
