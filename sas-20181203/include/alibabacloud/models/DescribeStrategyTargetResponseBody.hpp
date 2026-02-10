// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYTARGETRESPONSEBODY_HPP_
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
  class DescribeStrategyTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StrategyTargets, strategyTargets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StrategyTargets, strategyTargets_);
    };
    DescribeStrategyTargetResponseBody() = default ;
    DescribeStrategyTargetResponseBody(const DescribeStrategyTargetResponseBody &) = default ;
    DescribeStrategyTargetResponseBody(DescribeStrategyTargetResponseBody &&) = default ;
    DescribeStrategyTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyTargetResponseBody() = default ;
    DescribeStrategyTargetResponseBody& operator=(const DescribeStrategyTargetResponseBody &) = default ;
    DescribeStrategyTargetResponseBody& operator=(DescribeStrategyTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StrategyTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StrategyTargets& obj) { 
        DARABONBA_PTR_TO_JSON(BindUuidCount, bindUuidCount_);
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, StrategyTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(BindUuidCount, bindUuidCount_);
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      StrategyTargets() = default ;
      StrategyTargets(const StrategyTargets &) = default ;
      StrategyTargets(StrategyTargets &&) = default ;
      StrategyTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StrategyTargets() = default ;
      StrategyTargets& operator=(const StrategyTargets &) = default ;
      StrategyTargets& operator=(StrategyTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindUuidCount_ == nullptr
        && this->flag_ == nullptr && this->target_ == nullptr && this->targetType_ == nullptr; };
      // bindUuidCount Field Functions 
      bool hasBindUuidCount() const { return this->bindUuidCount_ != nullptr;};
      void deleteBindUuidCount() { this->bindUuidCount_ = nullptr;};
      inline int32_t getBindUuidCount() const { DARABONBA_PTR_GET_DEFAULT(bindUuidCount_, 0) };
      inline StrategyTargets& setBindUuidCount(int32_t bindUuidCount) { DARABONBA_PTR_SET_VALUE(bindUuidCount_, bindUuidCount) };


      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline StrategyTargets& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline StrategyTargets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline StrategyTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The number of the assets that belong to the asset group.
      shared_ptr<int32_t> bindUuidCount_ {};
      // Indicates whether the baseline check policy is applied to the asset group. Valid values:
      // 
      // *   **add**: The baseline check policy is applied to the asset group.
      // *   **del**: the baseline check policy is not applied to the asset group.
      shared_ptr<string> flag_ {};
      // The ID of the asset group to which the assets belong or the UUID of the asset.
      shared_ptr<string> target_ {};
      // The method that is used to add the assets to the baseline check policy. Valid values:
      // 
      // *   **groupId**: the ID of the asset group
      // *   **uuid**: the UUID of the asset
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategyTargets_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStrategyTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategyTargets Field Functions 
    bool hasStrategyTargets() const { return this->strategyTargets_ != nullptr;};
    void deleteStrategyTargets() { this->strategyTargets_ = nullptr;};
    inline const vector<DescribeStrategyTargetResponseBody::StrategyTargets> & getStrategyTargets() const { DARABONBA_PTR_GET_CONST(strategyTargets_, vector<DescribeStrategyTargetResponseBody::StrategyTargets>) };
    inline vector<DescribeStrategyTargetResponseBody::StrategyTargets> getStrategyTargets() { DARABONBA_PTR_GET(strategyTargets_, vector<DescribeStrategyTargetResponseBody::StrategyTargets>) };
    inline DescribeStrategyTargetResponseBody& setStrategyTargets(const vector<DescribeStrategyTargetResponseBody::StrategyTargets> & strategyTargets) { DARABONBA_PTR_SET_VALUE(strategyTargets_, strategyTargets) };
    inline DescribeStrategyTargetResponseBody& setStrategyTargets(vector<DescribeStrategyTargetResponseBody::StrategyTargets> && strategyTargets) { DARABONBA_PTR_SET_RVALUE(strategyTargets_, strategyTargets) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The information about the assets to which the baseline check policy is applied.
    shared_ptr<vector<DescribeStrategyTargetResponseBody::StrategyTargets>> strategyTargets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
