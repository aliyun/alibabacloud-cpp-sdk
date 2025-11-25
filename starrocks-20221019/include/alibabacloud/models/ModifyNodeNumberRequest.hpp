// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNODENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNODENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyNodeNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNodeNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNodeNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TerminationGracePeriodSeconds, terminationGracePeriodSeconds_);
    };
    ModifyNodeNumberRequest() = default ;
    ModifyNodeNumberRequest(const ModifyNodeNumberRequest &) = default ;
    ModifyNodeNumberRequest(ModifyNodeNumberRequest &&) = default ;
    ModifyNodeNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNodeNumberRequest() = default ;
    ModifyNodeNumberRequest& operator=(const ModifyNodeNumberRequest &) = default ;
    ModifyNodeNumberRequest& operator=(ModifyNodeNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->nodeGroupId_ == nullptr && return this->parallelism_ == nullptr && return this->promotionOptionNo_ == nullptr && return this->target_ == nullptr && return this->terminationGracePeriodSeconds_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNodeNumberRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifyNodeNumberRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline int32_t parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
    inline ModifyNodeNumberRequest& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline ModifyNodeNumberRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline ModifyNodeNumberRequest& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // terminationGracePeriodSeconds Field Functions 
    bool hasTerminationGracePeriodSeconds() const { return this->terminationGracePeriodSeconds_ != nullptr;};
    void deleteTerminationGracePeriodSeconds() { this->terminationGracePeriodSeconds_ = nullptr;};
    inline int32_t terminationGracePeriodSeconds() const { DARABONBA_PTR_GET_DEFAULT(terminationGracePeriodSeconds_, 0) };
    inline ModifyNodeNumberRequest& setTerminationGracePeriodSeconds(int32_t terminationGracePeriodSeconds) { DARABONBA_PTR_SET_VALUE(terminationGracePeriodSeconds_, terminationGracePeriodSeconds) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The warehouse ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<int32_t> parallelism_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    // The number of nodes to which you want to change to.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> target_ = nullptr;
    std::shared_ptr<int32_t> terminationGracePeriodSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
