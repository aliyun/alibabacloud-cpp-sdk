// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBANDWIDTHPACKAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DescribeBandwidthPackageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(BillingType, billingType_);
      DARABONBA_PTR_TO_JSON(CbnGeographicRegionIdA, cbnGeographicRegionIdA_);
      DARABONBA_PTR_TO_JSON(CbnGeographicRegionIdB, cbnGeographicRegionIdB_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBandwidthPackageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accelerators, accelerators_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
      DARABONBA_PTR_FROM_JSON(CbnGeographicRegionIdA, cbnGeographicRegionIdA_);
      DARABONBA_PTR_FROM_JSON(CbnGeographicRegionIdB, cbnGeographicRegionIdB_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeBandwidthPackageResponseBody() = default ;
    DescribeBandwidthPackageResponseBody(const DescribeBandwidthPackageResponseBody &) = default ;
    DescribeBandwidthPackageResponseBody(DescribeBandwidthPackageResponseBody &&) = default ;
    DescribeBandwidthPackageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBandwidthPackageResponseBody() = default ;
    DescribeBandwidthPackageResponseBody& operator=(const DescribeBandwidthPackageResponseBody &) = default ;
    DescribeBandwidthPackageResponseBody& operator=(DescribeBandwidthPackageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N that is added to the bandwidth plan.
      shared_ptr<string> key_ {};
      // The value of tag N that is added to the bandwidth plan.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accelerators_ == nullptr
        && this->bandwidth_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthType_ == nullptr && this->billingType_ == nullptr && this->cbnGeographicRegionIdA_ == nullptr
        && this->cbnGeographicRegionIdB_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr
        && this->name_ == nullptr && this->ratio_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->state_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
    // accelerators Field Functions 
    bool hasAccelerators() const { return this->accelerators_ != nullptr;};
    void deleteAccelerators() { this->accelerators_ = nullptr;};
    inline const vector<string> & getAccelerators() const { DARABONBA_PTR_GET_CONST(accelerators_, vector<string>) };
    inline vector<string> getAccelerators() { DARABONBA_PTR_GET(accelerators_, vector<string>) };
    inline DescribeBandwidthPackageResponseBody& setAccelerators(const vector<string> & accelerators) { DARABONBA_PTR_SET_VALUE(accelerators_, accelerators) };
    inline DescribeBandwidthPackageResponseBody& setAccelerators(vector<string> && accelerators) { DARABONBA_PTR_SET_RVALUE(accelerators_, accelerators) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeBandwidthPackageResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeBandwidthPackageResponseBody& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline DescribeBandwidthPackageResponseBody& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline DescribeBandwidthPackageResponseBody& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // cbnGeographicRegionIdA Field Functions 
    bool hasCbnGeographicRegionIdA() const { return this->cbnGeographicRegionIdA_ != nullptr;};
    void deleteCbnGeographicRegionIdA() { this->cbnGeographicRegionIdA_ = nullptr;};
    inline string getCbnGeographicRegionIdA() const { DARABONBA_PTR_GET_DEFAULT(cbnGeographicRegionIdA_, "") };
    inline DescribeBandwidthPackageResponseBody& setCbnGeographicRegionIdA(string cbnGeographicRegionIdA) { DARABONBA_PTR_SET_VALUE(cbnGeographicRegionIdA_, cbnGeographicRegionIdA) };


    // cbnGeographicRegionIdB Field Functions 
    bool hasCbnGeographicRegionIdB() const { return this->cbnGeographicRegionIdB_ != nullptr;};
    void deleteCbnGeographicRegionIdB() { this->cbnGeographicRegionIdB_ = nullptr;};
    inline string getCbnGeographicRegionIdB() const { DARABONBA_PTR_GET_DEFAULT(cbnGeographicRegionIdB_, "") };
    inline DescribeBandwidthPackageResponseBody& setCbnGeographicRegionIdB(string cbnGeographicRegionIdB) { DARABONBA_PTR_SET_VALUE(cbnGeographicRegionIdB_, cbnGeographicRegionIdB) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeBandwidthPackageResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeBandwidthPackageResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBandwidthPackageResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeBandwidthPackageResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBandwidthPackageResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline int32_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
    inline DescribeBandwidthPackageResponseBody& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBandwidthPackageResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBandwidthPackageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeBandwidthPackageResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeBandwidthPackageResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeBandwidthPackageResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeBandwidthPackageResponseBody::Tags>) };
    inline vector<DescribeBandwidthPackageResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeBandwidthPackageResponseBody::Tags>) };
    inline DescribeBandwidthPackageResponseBody& setTags(const vector<DescribeBandwidthPackageResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeBandwidthPackageResponseBody& setTags(vector<DescribeBandwidthPackageResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeBandwidthPackageResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the GA instance that is associated with the bandwidth plan.
    shared_ptr<vector<string>> accelerators_ {};
    // The bandwidth value of the bandwidth plan. Unit: Mbit/s.
    shared_ptr<int32_t> bandwidth_ {};
    // The ID of the bandwidth plan.
    shared_ptr<string> bandwidthPackageId_ {};
    // The type of the bandwidth. Valid values:
    // 
    // *   **Basic**: basic bandwidth
    // *   **Enhanced**: enhanced bandwidth
    // *   **Advanced**: premium bandwidth
    shared_ptr<string> bandwidthType_ {};
    // The metering method that is used when you use the pay-as-you-go billing method. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-data-transfer
    // *   **PayBY95**: pay-by-95th-percentile
    shared_ptr<string> billingType_ {};
    // Area A specified in the cross-region acceleration bandwidth plan. Only **China-mainland** (the Chinese mainland) is returned.
    // 
    // This parameter is returned only if you call this operation on the International site (alibabacloud.com).
    shared_ptr<string> cbnGeographicRegionIdA_ {};
    // Area B specified in the cross-region acceleration bandwidth plan. Only **Global** (global) is returned.
    // 
    // This parameter is returned only if you call this operation on the International site (alibabacloud.com).
    shared_ptr<string> cbnGeographicRegionIdB_ {};
    // The billing method of the bandwidth plan.
    // 
    // *   **PREPAY**: subscription. This is the default value.
    // *   **POSTPAY**: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The timestamp that indicates when the bandwidth plan was created.
    shared_ptr<string> createTime_ {};
    // The description of the bandwidth plan.
    shared_ptr<string> description_ {};
    // The timestamp that indicates when the bandwidth plan expires.
    shared_ptr<string> expiredTime_ {};
    // The name of the bandwidth plan.
    shared_ptr<string> name_ {};
    // The percentage of the minimum bandwidth guaranteed if the pay-by-95th-percentile-bandwidth metering method is used. Valid values: **30** to **100**.
    shared_ptr<int32_t> ratio_ {};
    // The ID of the region where GA instance is deployed. **cn-hangzhou** is returned.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The state of the bandwidth plan. Valid values:
    // 
    // *   **init**: The bandwidth plan is being initialized.
    // *   **active**: The bandwidth plan is available.
    // *   **binded**: The bandwidth plan is associated with a GA instance.
    // *   **binding**: The bandwidth plan is being associated.
    // *   **unbinding**: The bandwidth plan is being disassociated.
    // *   **updating**: The bandwidth plan is being updated.
    // *   **finacialLocked**: The bandwidth plan is locked due to overdue payments.
    // *   **Locked**: The bandwidth plan is locked.
    shared_ptr<string> state_ {};
    // Tag objects.
    shared_ptr<vector<DescribeBandwidthPackageResponseBody::Tags>> tags_ {};
    // The type of the bandwidth plan. Valid values:
    // 
    // *   **Basic**: a basic bandwidth plan
    // *   **CrossDomain**: a cross-region acceleration bandwidth plan
    // 
    // If you call this operation on the Alibaba Cloud China Site (aliyun.com), only **Basic** is returned.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
