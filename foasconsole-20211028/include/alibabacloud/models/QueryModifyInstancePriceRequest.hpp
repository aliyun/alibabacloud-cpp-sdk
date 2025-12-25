// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMODIFYINSTANCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryModifyInstancePriceRequestHaResourceSpec.hpp>
#include <vector>
#include <alibabacloud/models/QueryModifyInstancePriceRequestResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryModifyInstancePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryModifyInstancePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(UsePromotionCode, usePromotionCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryModifyInstancePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(UsePromotionCode, usePromotionCode_);
    };
    QueryModifyInstancePriceRequest() = default ;
    QueryModifyInstancePriceRequest(const QueryModifyInstancePriceRequest &) = default ;
    QueryModifyInstancePriceRequest(QueryModifyInstancePriceRequest &&) = default ;
    QueryModifyInstancePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryModifyInstancePriceRequest() = default ;
    QueryModifyInstancePriceRequest& operator=(const QueryModifyInstancePriceRequest &) = default ;
    QueryModifyInstancePriceRequest& operator=(QueryModifyInstancePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ha_ == nullptr
        && return this->haResourceSpec_ == nullptr && return this->haVSwitchIds_ == nullptr && return this->instanceId_ == nullptr && return this->promotionCode_ == nullptr && return this->region_ == nullptr
        && return this->resourceSpec_ == nullptr && return this->usePromotionCode_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline QueryModifyInstancePriceRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpec Field Functions 
    bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
    void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
    inline const QueryModifyInstancePriceRequestHaResourceSpec & haResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, QueryModifyInstancePriceRequestHaResourceSpec) };
    inline QueryModifyInstancePriceRequestHaResourceSpec haResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, QueryModifyInstancePriceRequestHaResourceSpec) };
    inline QueryModifyInstancePriceRequest& setHaResourceSpec(const QueryModifyInstancePriceRequestHaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
    inline QueryModifyInstancePriceRequest& setHaResourceSpec(QueryModifyInstancePriceRequestHaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


    // haVSwitchIds Field Functions 
    bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
    void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
    inline const vector<string> & haVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
    inline vector<string> haVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
    inline QueryModifyInstancePriceRequest& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
    inline QueryModifyInstancePriceRequest& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryModifyInstancePriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline QueryModifyInstancePriceRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryModifyInstancePriceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const QueryModifyInstancePriceRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, QueryModifyInstancePriceRequestResourceSpec) };
    inline QueryModifyInstancePriceRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, QueryModifyInstancePriceRequestResourceSpec) };
    inline QueryModifyInstancePriceRequest& setResourceSpec(const QueryModifyInstancePriceRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline QueryModifyInstancePriceRequest& setResourceSpec(QueryModifyInstancePriceRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // usePromotionCode Field Functions 
    bool hasUsePromotionCode() const { return this->usePromotionCode_ != nullptr;};
    void deleteUsePromotionCode() { this->usePromotionCode_ = nullptr;};
    inline bool usePromotionCode() const { DARABONBA_PTR_GET_DEFAULT(usePromotionCode_, false) };
    inline QueryModifyInstancePriceRequest& setUsePromotionCode(bool usePromotionCode) { DARABONBA_PTR_SET_VALUE(usePromotionCode_, usePromotionCode) };


  protected:
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<QueryModifyInstancePriceRequestHaResourceSpec> haResourceSpec_ = nullptr;
    std::shared_ptr<vector<string>> haVSwitchIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> promotionCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is required.
    std::shared_ptr<QueryModifyInstancePriceRequestResourceSpec> resourceSpec_ = nullptr;
    std::shared_ptr<bool> usePromotionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
