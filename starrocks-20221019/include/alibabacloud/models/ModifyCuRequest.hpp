// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifyCuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FastMode, fastMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FastMode, fastMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ModifyCuRequest() = default ;
    ModifyCuRequest(const ModifyCuRequest &) = default ;
    ModifyCuRequest(ModifyCuRequest &&) = default ;
    ModifyCuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCuRequest() = default ;
    ModifyCuRequest& operator=(const ModifyCuRequest &) = default ;
    ModifyCuRequest& operator=(ModifyCuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fastMode_ != nullptr
        && this->instanceId_ != nullptr && this->nodeGroupId_ != nullptr && this->promotionOptionNo_ != nullptr && this->target_ != nullptr; };
    // fastMode Field Functions 
    bool hasFastMode() const { return this->fastMode_ != nullptr;};
    void deleteFastMode() { this->fastMode_ = nullptr;};
    inline bool fastMode() const { DARABONBA_PTR_GET_DEFAULT(fastMode_, false) };
    inline ModifyCuRequest& setFastMode(bool fastMode) { DARABONBA_PTR_SET_VALUE(fastMode_, fastMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyCuRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifyCuRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string promotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline ModifyCuRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline int32_t target() const { DARABONBA_PTR_GET_DEFAULT(target_, 0) };
    inline ModifyCuRequest& setTarget(int32_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // Specifies whether to restart compute nodes in quick restart mode. Default value: false. Valid values:
    // 
    // *   true: Compute nodes are restarted in quick restart mode in multiple batches. The batches are executed in parallel, and the nodes in each batch are restarted at the same time.
    // *   false: Compute nodes are restarted in rolling restart mode.
    std::shared_ptr<bool> fastMode_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The warehouse ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<string> promotionOptionNo_ = nullptr;
    // The number of CUs to which you want to change.
    // 
    // Valid values:
    // 
    // *   4
    // *   8
    // *   16
    // *   32
    // *   64
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
