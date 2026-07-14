// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeNetworkPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackages, networkPackages_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackages, networkPackages_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkPackagesResponseBody() = default ;
    DescribeNetworkPackagesResponseBody(const DescribeNetworkPackagesResponseBody &) = default ;
    DescribeNetworkPackagesResponseBody(DescribeNetworkPackagesResponseBody &&) = default ;
    DescribeNetworkPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPackagesResponseBody() = default ;
    DescribeNetworkPackagesResponseBody& operator=(const DescribeNetworkPackagesResponseBody &) = default ;
    DescribeNetworkPackagesResponseBody& operator=(DescribeNetworkPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkPackages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkPackages& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
        DARABONBA_PTR_TO_JSON(NetworkPackageStatus, networkPackageStatus_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteVpcType, officeSiteVpcType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(ReservationActiveTime, reservationActiveTime_);
        DARABONBA_PTR_TO_JSON(ReservationBandwidth, reservationBandwidth_);
        DARABONBA_PTR_TO_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkPackages& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
        DARABONBA_PTR_FROM_JSON(NetworkPackageStatus, networkPackageStatus_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteVpcType, officeSiteVpcType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(ReservationActiveTime, reservationActiveTime_);
        DARABONBA_PTR_FROM_JSON(ReservationBandwidth, reservationBandwidth_);
        DARABONBA_PTR_FROM_JSON(ReservationInternetChargeType, reservationInternetChargeType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      NetworkPackages() = default ;
      NetworkPackages(const NetworkPackages &) = default ;
      NetworkPackages(NetworkPackages &&) = default ;
      NetworkPackages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkPackages() = default ;
      NetworkPackages& operator=(const NetworkPackages &) = default ;
      NetworkPackages& operator=(NetworkPackages &&) = default ;
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
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->businessStatus_ == nullptr && this->createTime_ == nullptr && this->eipAddresses_ == nullptr && this->expiredTime_ == nullptr && this->internetChargeType_ == nullptr
        && this->networkPackageId_ == nullptr && this->networkPackageStatus_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->officeSiteVpcType_ == nullptr
        && this->payType_ == nullptr && this->reservationActiveTime_ == nullptr && this->reservationBandwidth_ == nullptr && this->reservationInternetChargeType_ == nullptr && this->tags_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline NetworkPackages& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // businessStatus Field Functions 
      bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
      void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
      inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
      inline NetworkPackages& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline NetworkPackages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // eipAddresses Field Functions 
      bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
      void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
      inline const vector<string> & getEipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, vector<string>) };
      inline vector<string> getEipAddresses() { DARABONBA_PTR_GET(eipAddresses_, vector<string>) };
      inline NetworkPackages& setEipAddresses(const vector<string> & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
      inline NetworkPackages& setEipAddresses(vector<string> && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline NetworkPackages& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline NetworkPackages& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // networkPackageId Field Functions 
      bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
      void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
      inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
      inline NetworkPackages& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


      // networkPackageStatus Field Functions 
      bool hasNetworkPackageStatus() const { return this->networkPackageStatus_ != nullptr;};
      void deleteNetworkPackageStatus() { this->networkPackageStatus_ = nullptr;};
      inline string getNetworkPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(networkPackageStatus_, "") };
      inline NetworkPackages& setNetworkPackageStatus(string networkPackageStatus) { DARABONBA_PTR_SET_VALUE(networkPackageStatus_, networkPackageStatus) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline NetworkPackages& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline NetworkPackages& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteVpcType Field Functions 
      bool hasOfficeSiteVpcType() const { return this->officeSiteVpcType_ != nullptr;};
      void deleteOfficeSiteVpcType() { this->officeSiteVpcType_ = nullptr;};
      inline string getOfficeSiteVpcType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteVpcType_, "") };
      inline NetworkPackages& setOfficeSiteVpcType(string officeSiteVpcType) { DARABONBA_PTR_SET_VALUE(officeSiteVpcType_, officeSiteVpcType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline NetworkPackages& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // reservationActiveTime Field Functions 
      bool hasReservationActiveTime() const { return this->reservationActiveTime_ != nullptr;};
      void deleteReservationActiveTime() { this->reservationActiveTime_ = nullptr;};
      inline string getReservationActiveTime() const { DARABONBA_PTR_GET_DEFAULT(reservationActiveTime_, "") };
      inline NetworkPackages& setReservationActiveTime(string reservationActiveTime) { DARABONBA_PTR_SET_VALUE(reservationActiveTime_, reservationActiveTime) };


      // reservationBandwidth Field Functions 
      bool hasReservationBandwidth() const { return this->reservationBandwidth_ != nullptr;};
      void deleteReservationBandwidth() { this->reservationBandwidth_ = nullptr;};
      inline int32_t getReservationBandwidth() const { DARABONBA_PTR_GET_DEFAULT(reservationBandwidth_, 0) };
      inline NetworkPackages& setReservationBandwidth(int32_t reservationBandwidth) { DARABONBA_PTR_SET_VALUE(reservationBandwidth_, reservationBandwidth) };


      // reservationInternetChargeType Field Functions 
      bool hasReservationInternetChargeType() const { return this->reservationInternetChargeType_ != nullptr;};
      void deleteReservationInternetChargeType() { this->reservationInternetChargeType_ = nullptr;};
      inline string getReservationInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(reservationInternetChargeType_, "") };
      inline NetworkPackages& setReservationInternetChargeType(string reservationInternetChargeType) { DARABONBA_PTR_SET_VALUE(reservationInternetChargeType_, reservationInternetChargeType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<NetworkPackages::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<NetworkPackages::Tags>) };
      inline vector<NetworkPackages::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<NetworkPackages::Tags>) };
      inline NetworkPackages& setTags(const vector<NetworkPackages::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline NetworkPackages& setTags(vector<NetworkPackages::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The bandwidth of the premium Internet bandwidth plan. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The business status.
      shared_ptr<string> businessStatus_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The public egress IP address of the premium Internet bandwidth plan.
      shared_ptr<vector<string>> eipAddresses_ {};
      // The expiration time of the premium Internet bandwidth plan.
      // 
      // - If the plan uses the subscription billing method, the actual expiration time is returned.
      // - If the plan uses the pay-as-you-go billing method, `2099-12-31T15:59:59Z` is returned.
      shared_ptr<string> expiredTime_ {};
      // The billing method of the premium Internet bandwidth plan.
      // 
      // - If the parameter `PayType` is set to `PrePaid`, valid values:
      //     - PayByBandwidth: pay-by-bandwidth.
      // - If the parameter `PayType` is set to `PostPaid`, valid values:
      //     - PayByTraffic: pay-by-data-transfer.
      //     - PayByBandwidth: pay-by-bandwidth.
      shared_ptr<string> internetChargeType_ {};
      // The ID of the premium Internet bandwidth plan.
      shared_ptr<string> networkPackageId_ {};
      // The status of the premium Internet bandwidth plan.
      shared_ptr<string> networkPackageStatus_ {};
      // The office network ID.
      shared_ptr<string> officeSiteId_ {};
      // The office network name.
      shared_ptr<string> officeSiteName_ {};
      // The office network type.
      shared_ptr<string> officeSiteVpcType_ {};
      // The billing method.
      shared_ptr<string> payType_ {};
      // The effective period of the reserved network bandwidth.
      shared_ptr<string> reservationActiveTime_ {};
      // The peak reserved network bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> reservationBandwidth_ {};
      // The billing method of the reserved network bandwidth.
      shared_ptr<string> reservationInternetChargeType_ {};
      shared_ptr<vector<NetworkPackages::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->networkPackages_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // networkPackages Field Functions 
    bool hasNetworkPackages() const { return this->networkPackages_ != nullptr;};
    void deleteNetworkPackages() { this->networkPackages_ = nullptr;};
    inline const vector<DescribeNetworkPackagesResponseBody::NetworkPackages> & getNetworkPackages() const { DARABONBA_PTR_GET_CONST(networkPackages_, vector<DescribeNetworkPackagesResponseBody::NetworkPackages>) };
    inline vector<DescribeNetworkPackagesResponseBody::NetworkPackages> getNetworkPackages() { DARABONBA_PTR_GET(networkPackages_, vector<DescribeNetworkPackagesResponseBody::NetworkPackages>) };
    inline DescribeNetworkPackagesResponseBody& setNetworkPackages(const vector<DescribeNetworkPackagesResponseBody::NetworkPackages> & networkPackages) { DARABONBA_PTR_SET_VALUE(networkPackages_, networkPackages) };
    inline DescribeNetworkPackagesResponseBody& setNetworkPackages(vector<DescribeNetworkPackagesResponseBody::NetworkPackages> && networkPackages) { DARABONBA_PTR_SET_RVALUE(networkPackages_, networkPackages) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNetworkPackagesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkPackagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of premium Internet bandwidth plans.
    shared_ptr<vector<DescribeNetworkPackagesResponseBody::NetworkPackages>> networkPackages_ {};
    // The token for the next query. If NextToken is empty, no more results exist.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
