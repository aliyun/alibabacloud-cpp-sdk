// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYGRANTRULESGRANTRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRANTRULESTOCENRESPONSEBODYGRANTRULESGRANTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceId, childInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceOwnerId, childInstanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRegionId, childInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceType, childInstanceType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
    };
    DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule() = default ;
    DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule(const DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule &) = default ;
    DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule(DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule &&) = default ;
    DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule() = default ;
    DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& operator=(const DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule &) = default ;
    DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& operator=(DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->cenOwnerId_ != nullptr && this->childInstanceId_ != nullptr && this->childInstanceOwnerId_ != nullptr && this->childInstanceRegionId_ != nullptr && this->childInstanceType_ != nullptr
        && this->createTime_ != nullptr && this->orderType_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // childInstanceId Field Functions 
    bool hasChildInstanceId() const { return this->childInstanceId_ != nullptr;};
    void deleteChildInstanceId() { this->childInstanceId_ = nullptr;};
    inline string childInstanceId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceId_, "") };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setChildInstanceId(string childInstanceId) { DARABONBA_PTR_SET_VALUE(childInstanceId_, childInstanceId) };


    // childInstanceOwnerId Field Functions 
    bool hasChildInstanceOwnerId() const { return this->childInstanceOwnerId_ != nullptr;};
    void deleteChildInstanceOwnerId() { this->childInstanceOwnerId_ = nullptr;};
    inline int64_t childInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceOwnerId_, 0L) };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setChildInstanceOwnerId(int64_t childInstanceOwnerId) { DARABONBA_PTR_SET_VALUE(childInstanceOwnerId_, childInstanceOwnerId) };


    // childInstanceRegionId Field Functions 
    bool hasChildInstanceRegionId() const { return this->childInstanceRegionId_ != nullptr;};
    void deleteChildInstanceRegionId() { this->childInstanceRegionId_ = nullptr;};
    inline string childInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRegionId_, "") };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setChildInstanceRegionId(string childInstanceRegionId) { DARABONBA_PTR_SET_VALUE(childInstanceRegionId_, childInstanceRegionId) };


    // childInstanceType Field Functions 
    bool hasChildInstanceType() const { return this->childInstanceType_ != nullptr;};
    void deleteChildInstanceType() { this->childInstanceType_ = nullptr;};
    inline string childInstanceType() const { DARABONBA_PTR_GET_DEFAULT(childInstanceType_, "") };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setChildInstanceType(string childInstanceType) { DARABONBA_PTR_SET_VALUE(childInstanceType_, childInstanceType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeGrantRulesToCenResponseBodyGrantRulesGrantRule& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the CEN instance belongs.
    std::shared_ptr<int64_t> cenOwnerId_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> childInstanceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the network instance belongs.
    std::shared_ptr<int64_t> childInstanceOwnerId_ = nullptr;
    // The region ID of the network instance.
    std::shared_ptr<string> childInstanceRegionId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **CCN**: CCN instance
    // *   **VPN**: IPsec-VPN connection
    std::shared_ptr<string> childInstanceType_ = nullptr;
    // The time when the permissions were granted to the CEN instance.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The entity that pays the fees of the network instance. Valid values:
    // 
    // *   **PayByCenOwner**: The fees of the connections and data forwarding on the transit router are paid by the Alibaba Cloud account to which the CEN instance belongs.
    // *   **PayByResourceOwner**: The fees of the connections and data forwarding on the transit router are paid by the Alibaba Cloud account to which the network instance belongs.
    std::shared_ptr<string> orderType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
