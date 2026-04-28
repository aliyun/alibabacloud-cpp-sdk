// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteCostRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostRuleId, costRuleId_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostRuleId, costRuleId_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteCostRuleRequest() = default ;
    DeleteCostRuleRequest(const DeleteCostRuleRequest &) = default ;
    DeleteCostRuleRequest(DeleteCostRuleRequest &&) = default ;
    DeleteCostRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostRuleRequest() = default ;
    DeleteCostRuleRequest& operator=(const DeleteCostRuleRequest &) = default ;
    DeleteCostRuleRequest& operator=(DeleteCostRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costRuleId_ == nullptr
        && this->gwClusterId_ == nullptr && this->regionId_ == nullptr; };
    // costRuleId Field Functions 
    bool hasCostRuleId() const { return this->costRuleId_ != nullptr;};
    void deleteCostRuleId() { this->costRuleId_ = nullptr;};
    inline string getCostRuleId() const { DARABONBA_PTR_GET_DEFAULT(costRuleId_, "") };
    inline DeleteCostRuleRequest& setCostRuleId(string costRuleId) { DARABONBA_PTR_SET_VALUE(costRuleId_, costRuleId) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DeleteCostRuleRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteCostRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> costRuleId_ {};
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
