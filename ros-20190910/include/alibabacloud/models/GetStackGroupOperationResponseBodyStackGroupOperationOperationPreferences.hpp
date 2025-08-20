// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATIONOPERATIONPREFERENCES_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPOPERATIONRESPONSEBODYSTACKGROUPOPERATIONOPERATIONPREFERENCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& obj) { 
      DARABONBA_PTR_TO_JSON(FailureToleranceCount, failureToleranceCount_);
      DARABONBA_PTR_TO_JSON(FailureTolerancePercentage, failureTolerancePercentage_);
      DARABONBA_PTR_TO_JSON(MaxConcurrentCount, maxConcurrentCount_);
      DARABONBA_PTR_TO_JSON(MaxConcurrentPercentage, maxConcurrentPercentage_);
      DARABONBA_PTR_TO_JSON(RegionIdsOrder, regionIdsOrder_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureToleranceCount, failureToleranceCount_);
      DARABONBA_PTR_FROM_JSON(FailureTolerancePercentage, failureTolerancePercentage_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrentCount, maxConcurrentCount_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrentPercentage, maxConcurrentPercentage_);
      DARABONBA_PTR_FROM_JSON(RegionIdsOrder, regionIdsOrder_);
    };
    GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences(const GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences(GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences &&) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences() = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& operator=(const GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences &) = default ;
    GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& operator=(GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failureToleranceCount_ != nullptr
        && this->failureTolerancePercentage_ != nullptr && this->maxConcurrentCount_ != nullptr && this->maxConcurrentPercentage_ != nullptr && this->regionIdsOrder_ != nullptr; };
    // failureToleranceCount Field Functions 
    bool hasFailureToleranceCount() const { return this->failureToleranceCount_ != nullptr;};
    void deleteFailureToleranceCount() { this->failureToleranceCount_ = nullptr;};
    inline int32_t failureToleranceCount() const { DARABONBA_PTR_GET_DEFAULT(failureToleranceCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& setFailureToleranceCount(int32_t failureToleranceCount) { DARABONBA_PTR_SET_VALUE(failureToleranceCount_, failureToleranceCount) };


    // failureTolerancePercentage Field Functions 
    bool hasFailureTolerancePercentage() const { return this->failureTolerancePercentage_ != nullptr;};
    void deleteFailureTolerancePercentage() { this->failureTolerancePercentage_ = nullptr;};
    inline int32_t failureTolerancePercentage() const { DARABONBA_PTR_GET_DEFAULT(failureTolerancePercentage_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& setFailureTolerancePercentage(int32_t failureTolerancePercentage) { DARABONBA_PTR_SET_VALUE(failureTolerancePercentage_, failureTolerancePercentage) };


    // maxConcurrentCount Field Functions 
    bool hasMaxConcurrentCount() const { return this->maxConcurrentCount_ != nullptr;};
    void deleteMaxConcurrentCount() { this->maxConcurrentCount_ = nullptr;};
    inline int32_t maxConcurrentCount() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentCount_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& setMaxConcurrentCount(int32_t maxConcurrentCount) { DARABONBA_PTR_SET_VALUE(maxConcurrentCount_, maxConcurrentCount) };


    // maxConcurrentPercentage Field Functions 
    bool hasMaxConcurrentPercentage() const { return this->maxConcurrentPercentage_ != nullptr;};
    void deleteMaxConcurrentPercentage() { this->maxConcurrentPercentage_ = nullptr;};
    inline int32_t maxConcurrentPercentage() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrentPercentage_, 0) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& setMaxConcurrentPercentage(int32_t maxConcurrentPercentage) { DARABONBA_PTR_SET_VALUE(maxConcurrentPercentage_, maxConcurrentPercentage) };


    // regionIdsOrder Field Functions 
    bool hasRegionIdsOrder() const { return this->regionIdsOrder_ != nullptr;};
    void deleteRegionIdsOrder() { this->regionIdsOrder_ = nullptr;};
    inline const vector<string> & regionIdsOrder() const { DARABONBA_PTR_GET_CONST(regionIdsOrder_, vector<string>) };
    inline vector<string> regionIdsOrder() { DARABONBA_PTR_GET(regionIdsOrder_, vector<string>) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& setRegionIdsOrder(const vector<string> & regionIdsOrder) { DARABONBA_PTR_SET_VALUE(regionIdsOrder_, regionIdsOrder) };
    inline GetStackGroupOperationResponseBodyStackGroupOperationOperationPreferences& setRegionIdsOrder(vector<string> && regionIdsOrder) { DARABONBA_PTR_SET_RVALUE(regionIdsOrder_, regionIdsOrder) };


  protected:
    // The number of accounts within which stack operation failures are allowed to occur in each region. If the value of this parameter is exceeded in a region, Resource Orchestration Service (ROS) stops the operation in the region. If the operation is stopped in one region, the operation is no longer performed in other regions.
    // 
    // Valid values: 0 to 20.
    // 
    // > Only one of FailureToleranceCount and FailureTolerancePercentage can be returned.
    std::shared_ptr<int32_t> failureToleranceCount_ = nullptr;
    // The percentage of the number of accounts within which stack operation failures are allowed to occur to the total number of accounts in each region. If the value of this parameter is exceeded in a region, ROS stops the operation in the region.
    // 
    // Valid values: 0 to 100.
    // 
    // > Only one of FailureToleranceCount and FailureTolerancePercentage can be returned.
    std::shared_ptr<int32_t> failureTolerancePercentage_ = nullptr;
    // The maximum number of accounts within which stacks are deployed at the same time in each region.
    // 
    // Valid values: 1 to 20.
    // 
    // > Only one of MaxConcurrentCount and MaxConcurrentPercentage can be returned.
    std::shared_ptr<int32_t> maxConcurrentCount_ = nullptr;
    // The percentage of the maximum number of accounts within which stacks are deployed at the same time to the total number of accounts in each region.
    // 
    // Valid values: 1 to 100.
    // 
    // > Only one of MaxConcurrentCount and MaxConcurrentPercentage can be returned.
    std::shared_ptr<int32_t> maxConcurrentPercentage_ = nullptr;
    // The regions in the order of operation execution.
    std::shared_ptr<vector<string>> regionIdsOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
