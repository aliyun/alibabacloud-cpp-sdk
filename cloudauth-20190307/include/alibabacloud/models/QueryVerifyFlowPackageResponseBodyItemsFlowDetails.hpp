// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODYITEMSFLOWDETAILS_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYFLOWPACKAGERESPONSEBODYITEMSFLOWDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyFlowPackageResponseBodyItemsFlowDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyFlowPackageResponseBodyItemsFlowDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_TO_JSON(CurrProportion, currProportion_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TakeEffectDate, takeEffectDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyFlowPackageResponseBodyItemsFlowDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(CurrCapacity, currCapacity_);
      DARABONBA_PTR_FROM_JSON(CurrProportion, currProportion_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TakeEffectDate, takeEffectDate_);
    };
    QueryVerifyFlowPackageResponseBodyItemsFlowDetails() = default ;
    QueryVerifyFlowPackageResponseBodyItemsFlowDetails(const QueryVerifyFlowPackageResponseBodyItemsFlowDetails &) = default ;
    QueryVerifyFlowPackageResponseBodyItemsFlowDetails(QueryVerifyFlowPackageResponseBodyItemsFlowDetails &&) = default ;
    QueryVerifyFlowPackageResponseBodyItemsFlowDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyFlowPackageResponseBodyItemsFlowDetails() = default ;
    QueryVerifyFlowPackageResponseBodyItemsFlowDetails& operator=(const QueryVerifyFlowPackageResponseBodyItemsFlowDetails &) = default ;
    QueryVerifyFlowPackageResponseBodyItemsFlowDetails& operator=(QueryVerifyFlowPackageResponseBodyItemsFlowDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->commodityName_ == nullptr && return this->currCapacity_ == nullptr && return this->currProportion_ == nullptr && return this->expireDate_ == nullptr && return this->instanceName_ == nullptr
        && return this->status_ == nullptr && return this->takeEffectDate_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline double capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0.0) };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setCapacity(double capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // currCapacity Field Functions 
    bool hasCurrCapacity() const { return this->currCapacity_ != nullptr;};
    void deleteCurrCapacity() { this->currCapacity_ = nullptr;};
    inline double currCapacity() const { DARABONBA_PTR_GET_DEFAULT(currCapacity_, 0.0) };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setCurrCapacity(double currCapacity) { DARABONBA_PTR_SET_VALUE(currCapacity_, currCapacity) };


    // currProportion Field Functions 
    bool hasCurrProportion() const { return this->currProportion_ != nullptr;};
    void deleteCurrProportion() { this->currProportion_ = nullptr;};
    inline string currProportion() const { DARABONBA_PTR_GET_DEFAULT(currProportion_, "") };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setCurrProportion(string currProportion) { DARABONBA_PTR_SET_VALUE(currProportion_, currProportion) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // takeEffectDate Field Functions 
    bool hasTakeEffectDate() const { return this->takeEffectDate_ != nullptr;};
    void deleteTakeEffectDate() { this->takeEffectDate_ = nullptr;};
    inline string takeEffectDate() const { DARABONBA_PTR_GET_DEFAULT(takeEffectDate_, "") };
    inline QueryVerifyFlowPackageResponseBodyItemsFlowDetails& setTakeEffectDate(string takeEffectDate) { DARABONBA_PTR_SET_VALUE(takeEffectDate_, takeEffectDate) };


  protected:
    // Total amount.
    std::shared_ptr<double> capacity_ = nullptr;
    // Name of the flow package.
    std::shared_ptr<string> commodityName_ = nullptr;
    // Remaining amount.
    std::shared_ptr<double> currCapacity_ = nullptr;
    // Proportion of remaining amount.
    std::shared_ptr<string> currProportion_ = nullptr;
    // Expiration date.
    std::shared_ptr<string> expireDate_ = nullptr;
    // Instance name
    std::shared_ptr<string> instanceName_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Effective date.
    std::shared_ptr<string> takeEffectDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
