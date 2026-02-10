// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDSTRATEGYTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZEDSTRATEGYTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomizedStrategyTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizedStrategyTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartegyTargets, startegyTargets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizedStrategyTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartegyTargets, startegyTargets_);
    };
    DescribeCustomizedStrategyTargetsResponseBody() = default ;
    DescribeCustomizedStrategyTargetsResponseBody(const DescribeCustomizedStrategyTargetsResponseBody &) = default ;
    DescribeCustomizedStrategyTargetsResponseBody(DescribeCustomizedStrategyTargetsResponseBody &&) = default ;
    DescribeCustomizedStrategyTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizedStrategyTargetsResponseBody() = default ;
    DescribeCustomizedStrategyTargetsResponseBody& operator=(const DescribeCustomizedStrategyTargetsResponseBody &) = default ;
    DescribeCustomizedStrategyTargetsResponseBody& operator=(DescribeCustomizedStrategyTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StartegyTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StartegyTargets& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, StartegyTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      StartegyTargets() = default ;
      StartegyTargets(const StartegyTargets &) = default ;
      StartegyTargets(StartegyTargets &&) = default ;
      StartegyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StartegyTargets() = default ;
      StartegyTargets& operator=(const StartegyTargets &) = default ;
      StartegyTargets& operator=(StartegyTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->uuid_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline StartegyTargets& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
      inline StartegyTargets& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline StartegyTargets& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline StartegyTargets& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the server group.
      // 
      // >  You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of server groups.
      shared_ptr<int64_t> groupId_ {};
      // The ID of the baseline check policy.
      shared_ptr<int64_t> strategyId_ {};
      // The name of the baseline check policy.
      shared_ptr<string> strategyName_ {};
      // The UUID of the server.
      // 
      // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->startegyTargets_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizedStrategyTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startegyTargets Field Functions 
    bool hasStartegyTargets() const { return this->startegyTargets_ != nullptr;};
    void deleteStartegyTargets() { this->startegyTargets_ = nullptr;};
    inline const vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets> & getStartegyTargets() const { DARABONBA_PTR_GET_CONST(startegyTargets_, vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets>) };
    inline vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets> getStartegyTargets() { DARABONBA_PTR_GET(startegyTargets_, vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets>) };
    inline DescribeCustomizedStrategyTargetsResponseBody& setStartegyTargets(const vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets> & startegyTargets) { DARABONBA_PTR_SET_VALUE(startegyTargets_, startegyTargets) };
    inline DescribeCustomizedStrategyTargetsResponseBody& setStartegyTargets(vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets> && startegyTargets) { DARABONBA_PTR_SET_RVALUE(startegyTargets_, startegyTargets) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the servers to which custom policies are applied.
    shared_ptr<vector<DescribeCustomizedStrategyTargetsResponseBody::StartegyTargets>> startegyTargets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
