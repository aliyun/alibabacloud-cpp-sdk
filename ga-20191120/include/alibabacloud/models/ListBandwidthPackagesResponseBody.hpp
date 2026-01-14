// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBANDWIDTHPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBANDWIDTHPACKAGESRESPONSEBODY_HPP_
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
  class ListBandwidthPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackages, bandwidthPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBandwidthPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackages, bandwidthPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBandwidthPackagesResponseBody() = default ;
    ListBandwidthPackagesResponseBody(const ListBandwidthPackagesResponseBody &) = default ;
    ListBandwidthPackagesResponseBody(ListBandwidthPackagesResponseBody &&) = default ;
    ListBandwidthPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBandwidthPackagesResponseBody() = default ;
    ListBandwidthPackagesResponseBody& operator=(const ListBandwidthPackagesResponseBody &) = default ;
    ListBandwidthPackagesResponseBody& operator=(ListBandwidthPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BandwidthPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BandwidthPackages& obj) { 
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
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, BandwidthPackages& obj) { 
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
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      BandwidthPackages() = default ;
      BandwidthPackages(const BandwidthPackages &) = default ;
      BandwidthPackages(BandwidthPackages &&) = default ;
      BandwidthPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BandwidthPackages() = default ;
      BandwidthPackages& operator=(const BandwidthPackages &) = default ;
      BandwidthPackages& operator=(BandwidthPackages &&) = default ;
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
        // The tag key of the bandwidth plan.
        shared_ptr<string> key_ {};
        // The tag value of the bandwidth plan.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->accelerators_ == nullptr
        && this->bandwidth_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthType_ == nullptr && this->billingType_ == nullptr && this->cbnGeographicRegionIdA_ == nullptr
        && this->cbnGeographicRegionIdB_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->expiredTime_ == nullptr
        && this->name_ == nullptr && this->ratio_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->state_ == nullptr
        && this->tags_ == nullptr && this->type_ == nullptr; };
      // accelerators Field Functions 
      bool hasAccelerators() const { return this->accelerators_ != nullptr;};
      void deleteAccelerators() { this->accelerators_ = nullptr;};
      inline const vector<string> & getAccelerators() const { DARABONBA_PTR_GET_CONST(accelerators_, vector<string>) };
      inline vector<string> getAccelerators() { DARABONBA_PTR_GET(accelerators_, vector<string>) };
      inline BandwidthPackages& setAccelerators(const vector<string> & accelerators) { DARABONBA_PTR_SET_VALUE(accelerators_, accelerators) };
      inline BandwidthPackages& setAccelerators(vector<string> && accelerators) { DARABONBA_PTR_SET_RVALUE(accelerators_, accelerators) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline BandwidthPackages& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline BandwidthPackages& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // bandwidthType Field Functions 
      bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
      void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
      inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
      inline BandwidthPackages& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


      // billingType Field Functions 
      bool hasBillingType() const { return this->billingType_ != nullptr;};
      void deleteBillingType() { this->billingType_ = nullptr;};
      inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
      inline BandwidthPackages& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


      // cbnGeographicRegionIdA Field Functions 
      bool hasCbnGeographicRegionIdA() const { return this->cbnGeographicRegionIdA_ != nullptr;};
      void deleteCbnGeographicRegionIdA() { this->cbnGeographicRegionIdA_ = nullptr;};
      inline string getCbnGeographicRegionIdA() const { DARABONBA_PTR_GET_DEFAULT(cbnGeographicRegionIdA_, "") };
      inline BandwidthPackages& setCbnGeographicRegionIdA(string cbnGeographicRegionIdA) { DARABONBA_PTR_SET_VALUE(cbnGeographicRegionIdA_, cbnGeographicRegionIdA) };


      // cbnGeographicRegionIdB Field Functions 
      bool hasCbnGeographicRegionIdB() const { return this->cbnGeographicRegionIdB_ != nullptr;};
      void deleteCbnGeographicRegionIdB() { this->cbnGeographicRegionIdB_ = nullptr;};
      inline string getCbnGeographicRegionIdB() const { DARABONBA_PTR_GET_DEFAULT(cbnGeographicRegionIdB_, "") };
      inline BandwidthPackages& setCbnGeographicRegionIdB(string cbnGeographicRegionIdB) { DARABONBA_PTR_SET_VALUE(cbnGeographicRegionIdB_, cbnGeographicRegionIdB) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline BandwidthPackages& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline BandwidthPackages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BandwidthPackages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline BandwidthPackages& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BandwidthPackages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline int32_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
      inline BandwidthPackages& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BandwidthPackages& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline BandwidthPackages& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline BandwidthPackages& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<BandwidthPackages::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<BandwidthPackages::Tags>) };
      inline vector<BandwidthPackages::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<BandwidthPackages::Tags>) };
      inline BandwidthPackages& setTags(const vector<BandwidthPackages::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline BandwidthPackages& setTags(vector<BandwidthPackages::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BandwidthPackages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The IDs of the GA instances that are associated with the bandwidth plans.
      shared_ptr<vector<string>> accelerators_ {};
      // The bandwidth value of the bandwidth plan. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The ID of the bandwidth plan.
      shared_ptr<string> bandwidthPackageId_ {};
      // The type of the bandwidth. Valid values:
      // 
      // *   **Basic**
      // *   **Enhanced**
      // *   **Advanced**
      shared_ptr<string> bandwidthType_ {};
      // The metering method that is used when you use the pay-as-you-go billing method.
      // 
      // *   **PayByTraffic**: pay-by-data-transfer.
      // *   **PayBY95**: pay-by-95th-percentile.
      shared_ptr<string> billingType_ {};
      // Area A of the cross-region acceleration bandwidth plan. **China-mainland** is returned.
      // 
      // This parameter is returned only if you call the operation on the international site (alibabacloud.com).
      shared_ptr<string> cbnGeographicRegionIdA_ {};
      // Area B of the cross-region acceleration bandwidth plan. **Global** is returned.
      // 
      // This parameter is returned only if you call the operation on the international site (alibabacloud.com).
      shared_ptr<string> cbnGeographicRegionIdB_ {};
      // The billing method of the bandwidth plan.
      // 
      // *   **PREPAY**: subscription. This is the default value.
      // *   **POSTPAY**: pay-as-you-go.
      shared_ptr<string> chargeType_ {};
      // The time when the bandwidth plan was created.
      shared_ptr<string> createTime_ {};
      // The description of the bandwidth plan.
      shared_ptr<string> description_ {};
      // The expiration time of the bandwidth plan.
      shared_ptr<string> expiredTime_ {};
      // The name of the bandwidth plan.
      shared_ptr<string> name_ {};
      // The percentage of the guaranteed minimum bandwidth if the pay-by-95th-percentile metering method is used.
      shared_ptr<int32_t> ratio_ {};
      // The ID of the region where the GA instance is deployed. **cn-hangzhou** is returned.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the bandwidth plan. Valid values:
      // 
      // *   **init:** The bandwidth plan is being initialized.
      // *   **active:** The bandwidth plan is available.
      // *   **binded:** The bandwidth plan is associated with a GA instance.
      // *   **binding:** The bandwidth plan is being associated with a GA instance.
      // *   **unbinding:** The bandwidth plan is being disassociated from a GA instance.
      // *   **updating:** The bandwidth plan is being updated.
      // *   **finacialLocked:** The bandwidth plan is locked due to overdue payments.
      // *   **locked**: The bandwidth plan is locked.
      shared_ptr<string> state_ {};
      // The tag of the bandwidth plan.
      shared_ptr<vector<BandwidthPackages::Tags>> tags_ {};
      // The type of the bandwidth plan. Valid values:
      // 
      // *   **Basic:** a basic bandwidth plan.
      // *   **CrossDomain:** a cross-region acceleration bandwidth plan.
      // 
      // If you call the operation on the China site (aliyun.com), **Basic** is returned.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->bandwidthPackages_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bandwidthPackages Field Functions 
    bool hasBandwidthPackages() const { return this->bandwidthPackages_ != nullptr;};
    void deleteBandwidthPackages() { this->bandwidthPackages_ = nullptr;};
    inline const vector<ListBandwidthPackagesResponseBody::BandwidthPackages> & getBandwidthPackages() const { DARABONBA_PTR_GET_CONST(bandwidthPackages_, vector<ListBandwidthPackagesResponseBody::BandwidthPackages>) };
    inline vector<ListBandwidthPackagesResponseBody::BandwidthPackages> getBandwidthPackages() { DARABONBA_PTR_GET(bandwidthPackages_, vector<ListBandwidthPackagesResponseBody::BandwidthPackages>) };
    inline ListBandwidthPackagesResponseBody& setBandwidthPackages(const vector<ListBandwidthPackagesResponseBody::BandwidthPackages> & bandwidthPackages) { DARABONBA_PTR_SET_VALUE(bandwidthPackages_, bandwidthPackages) };
    inline ListBandwidthPackagesResponseBody& setBandwidthPackages(vector<ListBandwidthPackagesResponseBody::BandwidthPackages> && bandwidthPackages) { DARABONBA_PTR_SET_RVALUE(bandwidthPackages_, bandwidthPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBandwidthPackagesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBandwidthPackagesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBandwidthPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBandwidthPackagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the bandwidth plans.
    shared_ptr<vector<ListBandwidthPackagesResponseBody::BandwidthPackages>> bandwidthPackages_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
