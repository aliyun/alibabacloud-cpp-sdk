// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyDiskTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(TargetDiskType, targetDiskType_);
      DARABONBA_PTR_TO_JSON(TargetPerformanceLevel, targetPerformanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(TargetDiskType, targetDiskType_);
      DARABONBA_PTR_FROM_JSON(TargetPerformanceLevel, targetPerformanceLevel_);
    };
    ModifyDiskTypeRequest() = default ;
    ModifyDiskTypeRequest(const ModifyDiskTypeRequest &) = default ;
    ModifyDiskTypeRequest(ModifyDiskTypeRequest &&) = default ;
    ModifyDiskTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskTypeRequest() = default ;
    ModifyDiskTypeRequest& operator=(const ModifyDiskTypeRequest &) = default ;
    ModifyDiskTypeRequest& operator=(ModifyDiskTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeGroupId_ == nullptr && this->promotionOptionNo_ == nullptr && this->targetDiskType_ == nullptr && this->targetPerformanceLevel_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDiskTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifyDiskTypeRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline ModifyDiskTypeRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // targetDiskType Field Functions 
    bool hasTargetDiskType() const { return this->targetDiskType_ != nullptr;};
    void deleteTargetDiskType() { this->targetDiskType_ = nullptr;};
    inline string getTargetDiskType() const { DARABONBA_PTR_GET_DEFAULT(targetDiskType_, "") };
    inline ModifyDiskTypeRequest& setTargetDiskType(string targetDiskType) { DARABONBA_PTR_SET_VALUE(targetDiskType_, targetDiskType) };


    // targetPerformanceLevel Field Functions 
    bool hasTargetPerformanceLevel() const { return this->targetPerformanceLevel_ != nullptr;};
    void deleteTargetPerformanceLevel() { this->targetPerformanceLevel_ = nullptr;};
    inline string getTargetPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(targetPerformanceLevel_, "") };
    inline ModifyDiskTypeRequest& setTargetPerformanceLevel(string targetPerformanceLevel) { DARABONBA_PTR_SET_VALUE(targetPerformanceLevel_, targetPerformanceLevel) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    shared_ptr<string> promotionOptionNo_ {};
    // This parameter is required.
    shared_ptr<string> targetDiskType_ {};
    // This parameter is required.
    shared_ptr<string> targetPerformanceLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
