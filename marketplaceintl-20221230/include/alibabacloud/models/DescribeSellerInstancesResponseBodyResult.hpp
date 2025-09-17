// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESELLERINSTANCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESELLERINSTANCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class DescribeSellerInstancesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSellerInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_TO_JSON(HostInfo, hostInfo_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSellerInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfo, appInfo_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreatedOn, createdOn_);
      DARABONBA_PTR_FROM_JSON(HostInfo, hostInfo_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeSellerInstancesResponseBodyResult() = default ;
    DescribeSellerInstancesResponseBodyResult(const DescribeSellerInstancesResponseBodyResult &) = default ;
    DescribeSellerInstancesResponseBodyResult(DescribeSellerInstancesResponseBodyResult &&) = default ;
    DescribeSellerInstancesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSellerInstancesResponseBodyResult() = default ;
    DescribeSellerInstancesResponseBodyResult& operator=(const DescribeSellerInstancesResponseBodyResult &) = default ;
    DescribeSellerInstancesResponseBodyResult& operator=(DescribeSellerInstancesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfo_ != nullptr
        && this->chargeType_ != nullptr && this->commodityCode_ != nullptr && this->createdOn_ != nullptr && this->hostInfo_ != nullptr && this->info_ != nullptr
        && this->instanceId_ != nullptr && this->instanceStatus_ != nullptr && this->userId_ != nullptr; };
    // appInfo Field Functions 
    bool hasAppInfo() const { return this->appInfo_ != nullptr;};
    void deleteAppInfo() { this->appInfo_ = nullptr;};
    inline string appInfo() const { DARABONBA_PTR_GET_DEFAULT(appInfo_, "") };
    inline DescribeSellerInstancesResponseBodyResult& setAppInfo(string appInfo) { DARABONBA_PTR_SET_VALUE(appInfo_, appInfo) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline int32_t chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, 0) };
    inline DescribeSellerInstancesResponseBodyResult& setChargeType(int32_t chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeSellerInstancesResponseBodyResult& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createdOn Field Functions 
    bool hasCreatedOn() const { return this->createdOn_ != nullptr;};
    void deleteCreatedOn() { this->createdOn_ = nullptr;};
    inline int64_t createdOn() const { DARABONBA_PTR_GET_DEFAULT(createdOn_, 0L) };
    inline DescribeSellerInstancesResponseBodyResult& setCreatedOn(int64_t createdOn) { DARABONBA_PTR_SET_VALUE(createdOn_, createdOn) };


    // hostInfo Field Functions 
    bool hasHostInfo() const { return this->hostInfo_ != nullptr;};
    void deleteHostInfo() { this->hostInfo_ = nullptr;};
    inline string hostInfo() const { DARABONBA_PTR_GET_DEFAULT(hostInfo_, "") };
    inline DescribeSellerInstancesResponseBodyResult& setHostInfo(string hostInfo) { DARABONBA_PTR_SET_VALUE(hostInfo_, hostInfo) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline DescribeSellerInstancesResponseBodyResult& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeSellerInstancesResponseBodyResult& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeSellerInstancesResponseBodyResult& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeSellerInstancesResponseBodyResult& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appInfo_ = nullptr;
    std::shared_ptr<int32_t> chargeType_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<int64_t> createdOn_ = nullptr;
    std::shared_ptr<string> hostInfo_ = nullptr;
    std::shared_ptr<string> info_ = nullptr;
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
