// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERSSUBORDER_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUERESULTSUBORDERSSUBORDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CommodityValueResultSubOrdersSubOrderModuleInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValueResultSubOrdersSubOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValueResultSubOrdersSubOrder& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleInstance, moduleInstance_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValueResultSubOrdersSubOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleInstance, moduleInstance_);
    };
    CommodityValueResultSubOrdersSubOrder() = default ;
    CommodityValueResultSubOrdersSubOrder(const CommodityValueResultSubOrdersSubOrder &) = default ;
    CommodityValueResultSubOrdersSubOrder(CommodityValueResultSubOrdersSubOrder &&) = default ;
    CommodityValueResultSubOrdersSubOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValueResultSubOrdersSubOrder() = default ;
    CommodityValueResultSubOrdersSubOrder& operator=(const CommodityValueResultSubOrdersSubOrder &) = default ;
    CommodityValueResultSubOrdersSubOrder& operator=(CommodityValueResultSubOrdersSubOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleInstance_ != nullptr; };
    // moduleInstance Field Functions 
    bool hasModuleInstance() const { return this->moduleInstance_ != nullptr;};
    void deleteModuleInstance() { this->moduleInstance_ = nullptr;};
    inline const vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance> & moduleInstance() const { DARABONBA_PTR_GET_CONST(moduleInstance_, vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance>) };
    inline vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance> moduleInstance() { DARABONBA_PTR_GET(moduleInstance_, vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance>) };
    inline CommodityValueResultSubOrdersSubOrder& setModuleInstance(const vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance> & moduleInstance) { DARABONBA_PTR_SET_VALUE(moduleInstance_, moduleInstance) };
    inline CommodityValueResultSubOrdersSubOrder& setModuleInstance(vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance> && moduleInstance) { DARABONBA_PTR_SET_RVALUE(moduleInstance_, moduleInstance) };


  protected:
    // The information about the module (instance).
    std::shared_ptr<vector<Models::CommodityValueResultSubOrdersSubOrderModuleInstance>> moduleInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
