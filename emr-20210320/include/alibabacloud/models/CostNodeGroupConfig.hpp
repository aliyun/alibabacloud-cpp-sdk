// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTNODEGROUPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_COSTNODEGROUPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CostInstanceType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CostNodeGroupConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostNodeGroupConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(MaximalNodeCount, maximalNodeCount_);
      DARABONBA_PTR_TO_JSON(MinimalNodeCount, minimalNodeCount_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
    };
    friend void from_json(const Darabonba::Json& j, CostNodeGroupConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(MaximalNodeCount, maximalNodeCount_);
      DARABONBA_PTR_FROM_JSON(MinimalNodeCount, minimalNodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(NodeGroupType, nodeGroupType_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
    };
    CostNodeGroupConfig() = default ;
    CostNodeGroupConfig(const CostNodeGroupConfig &) = default ;
    CostNodeGroupConfig(CostNodeGroupConfig &&) = default ;
    CostNodeGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostNodeGroupConfig() = default ;
    CostNodeGroupConfig& operator=(const CostNodeGroupConfig &) = default ;
    CostNodeGroupConfig& operator=(CostNodeGroupConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceTypes_ != nullptr
        && this->maximalNodeCount_ != nullptr && this->minimalNodeCount_ != nullptr && this->nodeCount_ != nullptr && this->nodeGroupName_ != nullptr && this->nodeGroupType_ != nullptr
        && this->paymentType_ != nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<CostInstanceType> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<CostInstanceType>) };
    inline vector<CostInstanceType> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<CostInstanceType>) };
    inline CostNodeGroupConfig& setInstanceTypes(const vector<CostInstanceType> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CostNodeGroupConfig& setInstanceTypes(vector<CostInstanceType> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // maximalNodeCount Field Functions 
    bool hasMaximalNodeCount() const { return this->maximalNodeCount_ != nullptr;};
    void deleteMaximalNodeCount() { this->maximalNodeCount_ = nullptr;};
    inline int32_t maximalNodeCount() const { DARABONBA_PTR_GET_DEFAULT(maximalNodeCount_, 0) };
    inline CostNodeGroupConfig& setMaximalNodeCount(int32_t maximalNodeCount) { DARABONBA_PTR_SET_VALUE(maximalNodeCount_, maximalNodeCount) };


    // minimalNodeCount Field Functions 
    bool hasMinimalNodeCount() const { return this->minimalNodeCount_ != nullptr;};
    void deleteMinimalNodeCount() { this->minimalNodeCount_ = nullptr;};
    inline int32_t minimalNodeCount() const { DARABONBA_PTR_GET_DEFAULT(minimalNodeCount_, 0) };
    inline CostNodeGroupConfig& setMinimalNodeCount(int32_t minimalNodeCount) { DARABONBA_PTR_SET_VALUE(minimalNodeCount_, minimalNodeCount) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CostNodeGroupConfig& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline CostNodeGroupConfig& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // nodeGroupType Field Functions 
    bool hasNodeGroupType() const { return this->nodeGroupType_ != nullptr;};
    void deleteNodeGroupType() { this->nodeGroupType_ = nullptr;};
    inline string nodeGroupType() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupType_, "") };
    inline CostNodeGroupConfig& setNodeGroupType(string nodeGroupType) { DARABONBA_PTR_SET_VALUE(nodeGroupType_, nodeGroupType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CostNodeGroupConfig& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


  protected:
    // 实例类型列表。
    std::shared_ptr<vector<CostInstanceType>> instanceTypes_ = nullptr;
    // 最大节点数限制。
    std::shared_ptr<int32_t> maximalNodeCount_ = nullptr;
    // 最小节点数限制。
    std::shared_ptr<int32_t> minimalNodeCount_ = nullptr;
    // 节点数。
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    // 节点组类型。取值范围：
    // - MASTER：管理类型节点组。
    // - CORE：存储类型节点组。
    // - TASK：计算类型节点组。
    std::shared_ptr<string> nodeGroupType_ = nullptr;
    // 付费类型。
    std::shared_ptr<string> paymentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
