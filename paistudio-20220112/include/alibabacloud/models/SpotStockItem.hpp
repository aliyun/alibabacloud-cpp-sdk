// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTSTOCKITEM_HPP_
#define ALIBABACLOUD_MODELS_SPOTSTOCKITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SpotStockInternalInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SpotStockItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotStockItem& obj) { 
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(internalInfo, internalInfo_);
      DARABONBA_PTR_TO_JSON(stockStatus, stockStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SpotStockItem& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(internalInfo, internalInfo_);
      DARABONBA_PTR_FROM_JSON(stockStatus, stockStatus_);
    };
    SpotStockItem() = default ;
    SpotStockItem(const SpotStockItem &) = default ;
    SpotStockItem(SpotStockItem &&) = default ;
    SpotStockItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotStockItem() = default ;
    SpotStockItem& operator=(const SpotStockItem &) = default ;
    SpotStockItem& operator=(SpotStockItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->internalInfo_ == nullptr && this->stockStatus_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline SpotStockItem& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internalInfo Field Functions 
    bool hasInternalInfo() const { return this->internalInfo_ != nullptr;};
    void deleteInternalInfo() { this->internalInfo_ = nullptr;};
    inline const vector<SpotStockInternalInfo> & getInternalInfo() const { DARABONBA_PTR_GET_CONST(internalInfo_, vector<SpotStockInternalInfo>) };
    inline vector<SpotStockInternalInfo> getInternalInfo() { DARABONBA_PTR_GET(internalInfo_, vector<SpotStockInternalInfo>) };
    inline SpotStockItem& setInternalInfo(const vector<SpotStockInternalInfo> & internalInfo) { DARABONBA_PTR_SET_VALUE(internalInfo_, internalInfo) };
    inline SpotStockItem& setInternalInfo(vector<SpotStockInternalInfo> && internalInfo) { DARABONBA_PTR_SET_RVALUE(internalInfo_, internalInfo) };


    // stockStatus Field Functions 
    bool hasStockStatus() const { return this->stockStatus_ != nullptr;};
    void deleteStockStatus() { this->stockStatus_ = nullptr;};
    inline string getStockStatus() const { DARABONBA_PTR_GET_DEFAULT(stockStatus_, "") };
    inline SpotStockItem& setStockStatus(string stockStatus) { DARABONBA_PTR_SET_VALUE(stockStatus_, stockStatus) };


  protected:
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // Internal information about the stock of the spot instance type.
    shared_ptr<vector<SpotStockInternalInfo>> internalInfo_ {};
    // The stock status of the instance type. Valid values are `Available` and `SoldOut`.
    shared_ptr<string> stockStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
