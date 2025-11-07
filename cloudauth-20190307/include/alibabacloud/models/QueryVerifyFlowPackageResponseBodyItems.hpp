// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryVerifyFlowPackageResponseBodyItemsFlowDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyFlowPackageResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyFlowPackageResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_TO_JSON(CurrProportion, currProportion_);
      DARABONBA_PTR_TO_JSON(FlowDetails, flowDetails_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyFlowPackageResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_FROM_JSON(CurrProportion, currProportion_);
      DARABONBA_PTR_FROM_JSON(FlowDetails, flowDetails_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
    };
    QueryVerifyFlowPackageResponseBodyItems() = default ;
    QueryVerifyFlowPackageResponseBodyItems(const QueryVerifyFlowPackageResponseBodyItems &) = default ;
    QueryVerifyFlowPackageResponseBodyItems(QueryVerifyFlowPackageResponseBodyItems &&) = default ;
    QueryVerifyFlowPackageResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyFlowPackageResponseBodyItems() = default ;
    QueryVerifyFlowPackageResponseBodyItems& operator=(const QueryVerifyFlowPackageResponseBodyItems &) = default ;
    QueryVerifyFlowPackageResponseBodyItems& operator=(QueryVerifyFlowPackageResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityName_ == nullptr
        && return this->currCapacity_ == nullptr && return this->currProportion_ == nullptr && return this->flowDetails_ == nullptr && return this->totalCapacity_ == nullptr && return this->usedCapacity_ == nullptr; };
    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline QueryVerifyFlowPackageResponseBodyItems& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // currCapacity Field Functions 
    bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
    void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
    inline double currCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, 0.0) };
    inline QueryVerifyFlowPackageResponseBodyItems& setCurrCapacity(double currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


    // currProportion Field Functions 
    bool hasCurrProportion() const { return this->currProportion_ != nullptr;};
    void deleteCurrProportion() { this->currProportion_ = nullptr;};
    inline string currProportion() const { DARABONBA_PTR_GET_DEFAULT(currProportion_, "") };
    inline QueryVerifyFlowPackageResponseBodyItems& setCurrProportion(string currProportion) { DARABONBA_PTR_SET_VALUE(currProportion_, currProportion) };


    // flowDetails Field Functions 
    bool hasFlowDetails() const { return this->flowDetails_ != nullptr;};
    void deleteFlowDetails() { this->flowDetails_ = nullptr;};
    inline const vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails> & flowDetails() const { DARABONBA_PTR_GET_CONST(flowDetails_, vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails>) };
    inline vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails> flowDetails() { DARABONBA_PTR_GET(flowDetails_, vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails>) };
    inline QueryVerifyFlowPackageResponseBodyItems& setFlowDetails(const vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails> & flowDetails) { DARABONBA_PTR_SET_VALUE(flowDetails_, flowDetails) };
    inline QueryVerifyFlowPackageResponseBodyItems& setFlowDetails(vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails> && flowDetails) { DARABONBA_PTR_SET_RVALUE(flowDetails_, flowDetails) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline double totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0.0) };
    inline QueryVerifyFlowPackageResponseBodyItems& setTotalCapacity(double totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline double usedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
    inline QueryVerifyFlowPackageResponseBodyItems& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


  protected:
    // Name of the resource package.
    std::shared_ptr<string> commodityName_ = nullptr;
    // Current available capacity.
    std::shared_ptr<double> currCapacity_ = nullptr;
    // Proportion of current remaining capacity to total capacity.
    std::shared_ptr<string> currProportion_ = nullptr;
    // Details of the flow package.
    std::shared_ptr<vector<Models::QueryVerifyFlowPackageResponseBodyItemsFlowDetails>> flowDetails_ = nullptr;
    // Total quota.
    std::shared_ptr<double> totalCapacity_ = nullptr;
    // Used capacity.
    std::shared_ptr<double> usedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
