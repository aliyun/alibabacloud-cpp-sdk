// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDSTRATEGYTARGETSRESPONSEBODYSTARTEGYTARGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDSTRATEGYTARGETSRESPONSEBODYSTARTEGYTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets() = default ;
    DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets(const DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets &) = default ;
    DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets(DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets &&) = default ;
    DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets() = default ;
    DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& operator=(const DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets &) = default ;
    DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& operator=(DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && return this->strategyId_ == nullptr && return this->strategyName_ == nullptr && return this->uuid_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCustomizedStrategyTargetsResponseBodyStartegyTargets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the server group.
    // 
    // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The name of the baseline check policy.
    std::shared_ptr<string> strategyName_ = nullptr;
    // The UUID of the server.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
