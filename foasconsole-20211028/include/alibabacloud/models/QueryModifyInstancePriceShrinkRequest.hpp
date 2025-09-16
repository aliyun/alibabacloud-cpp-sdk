// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryModifyInstancePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyInstancePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpecShrink_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyInstancePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpecShrink_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
    };
    QueryModifyInstancePriceShrinkRequest() = default ;
    QueryModifyInstancePriceShrinkRequest(const QueryModifyInstancePriceShrinkRequest &) = default ;
    QueryModifyInstancePriceShrinkRequest(QueryModifyInstancePriceShrinkRequest &&) = default ;
    QueryModifyInstancePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyInstancePriceShrinkRequest() = default ;
    QueryModifyInstancePriceShrinkRequest& operator=(const QueryModifyInstancePriceShrinkRequest &) = default ;
    QueryModifyInstancePriceShrinkRequest& operator=(QueryModifyInstancePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ha_ != nullptr
        && this->haResourceSpecShrink_ != nullptr && this->haVSwitchIdsShrink_ != nullptr && this->instanceId_ != nullptr && this->promotionCode_ != nullptr && this->region_ != nullptr
        && this->resourceSpecShrink_ != nullptr && this->usePromotionCode_ != nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline QueryModifyInstancePriceShrinkRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpecShrink Field Functions 
    bool hasHaResourceSpecShrink() const { return this->haResourceSpecShrink_ != nullptr;};
    void deleteHaResourceSpecShrink() { this->haResourceSpecShrink_ = nullptr;};
    inline string haResourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(haResourceSpecShrink_, "") };
    inline QueryModifyInstancePriceShrinkRequest& setHaResourceSpecShrink(string haResourceSpecShrink) { DARABONBA_PTR_SET_VALUE(haResourceSpecShrink_, haResourceSpecShrink) };


    // haVSwitchIdsShrink Field Functions 
    bool hasHaVSwitchIdsShrink() const { return this->haVSwitchIdsShrink_ != nullptr;};
    void deleteHaVSwitchIdsShrink() { this->haVSwitchIdsShrink_ = nullptr;};
    inline string haVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(haVSwitchIdsShrink_, "") };
    inline QueryModifyInstancePriceShrinkRequest& setHaVSwitchIdsShrink(string haVSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(haVSwitchIdsShrink_, haVSwitchIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryModifyInstancePriceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline QueryModifyInstancePriceShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryModifyInstancePriceShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpecShrink Field Functions 
    bool hasResourceSpecShrink() const { return this->resourceSpecShrink_ != nullptr;};
    void deleteResourceSpecShrink() { this->resourceSpecShrink_ = nullptr;};
    inline string resourceSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceSpecShrink_, "") };
    inline QueryModifyInstancePriceShrinkRequest& setResourceSpecShrink(string resourceSpecShrink) { DARABONBA_PTR_SET_VALUE(resourceSpecShrink_, resourceSpecShrink) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline QueryModifyInstancePriceShrinkRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


  protected:
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<string> haResourceSpecShrink_ = nullptr;
    std::shared_ptr<string> haVSwitchIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceSpecShrink_ = nullptr;
    std::shared_ptr<bool> usePromotionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
