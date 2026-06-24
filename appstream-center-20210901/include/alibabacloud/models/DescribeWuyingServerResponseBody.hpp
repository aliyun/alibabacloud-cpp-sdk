// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeWuyingServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWuyingServerResponseBody() = default ;
    DescribeWuyingServerResponseBody(const DescribeWuyingServerResponseBody &) = default ;
    DescribeWuyingServerResponseBody(DescribeWuyingServerResponseBody &&) = default ;
    DescribeWuyingServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWuyingServerResponseBody() = default ;
    DescribeWuyingServerResponseBody& operator=(const DescribeWuyingServerResponseBody &) = default ;
    DescribeWuyingServerResponseBody& operator=(DescribeWuyingServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(OsType, osType_);
        DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
        DARABONBA_PTR_TO_JSON(WuyingServerName, wuyingServerName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(OsType, osType_);
        DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
        DARABONBA_PTR_FROM_JSON(WuyingServerName, wuyingServerName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivateIpSets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
          DARABONBA_PTR_TO_JSON(Primary, primary_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        };
        PrivateIpSets() = default ;
        PrivateIpSets(const PrivateIpSets &) = default ;
        PrivateIpSets(PrivateIpSets &&) = default ;
        PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateIpSets() = default ;
        PrivateIpSets& operator=(const PrivateIpSets &) = default ;
        PrivateIpSets& operator=(PrivateIpSets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->primary_ == nullptr
        && this->privateIpAddress_ == nullptr; };
        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
        inline PrivateIpSets& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline PrivateIpSets& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      protected:
        shared_ptr<bool> primary_ {};
        shared_ptr<string> privateIpAddress_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->eniPrivateIpAddressQuantity_ == nullptr && this->expiredTime_ == nullptr
        && this->imageId_ == nullptr && this->imageName_ == nullptr && this->networkInterfaceIp_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr
        && this->officeSiteType_ == nullptr && this->osType_ == nullptr && this->privateIpSets_ == nullptr && this->status_ == nullptr && this->systemDiskCategory_ == nullptr
        && this->systemDiskSize_ == nullptr && this->wuyingServerId_ == nullptr && this->wuyingServerName_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline Data& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bizRegionId Field Functions 
      bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
      void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
      inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
      inline Data& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // eniPrivateIpAddressQuantity Field Functions 
      bool hasEniPrivateIpAddressQuantity() const { return this->eniPrivateIpAddressQuantity_ != nullptr;};
      void deleteEniPrivateIpAddressQuantity() { this->eniPrivateIpAddressQuantity_ = nullptr;};
      inline int32_t getEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddressQuantity_, 0) };
      inline Data& setEniPrivateIpAddressQuantity(int32_t eniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddressQuantity_, eniPrivateIpAddressQuantity) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Data& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Data& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // networkInterfaceIp Field Functions 
      bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
      void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
      inline string getNetworkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
      inline Data& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline Data& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteName Field Functions 
      bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
      void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
      inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
      inline Data& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline Data& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // osType Field Functions 
      bool hasOsType() const { return this->osType_ != nullptr;};
      void deleteOsType() { this->osType_ = nullptr;};
      inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
      inline Data& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


      // privateIpSets Field Functions 
      bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
      void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
      inline const vector<Data::PrivateIpSets> & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, vector<Data::PrivateIpSets>) };
      inline vector<Data::PrivateIpSets> getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, vector<Data::PrivateIpSets>) };
      inline Data& setPrivateIpSets(const vector<Data::PrivateIpSets> & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
      inline Data& setPrivateIpSets(vector<Data::PrivateIpSets> && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline Data& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Data& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // wuyingServerId Field Functions 
      bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
      void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
      inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
      inline Data& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


      // wuyingServerName Field Functions 
      bool hasWuyingServerName() const { return this->wuyingServerName_ != nullptr;};
      void deleteWuyingServerName() { this->wuyingServerName_ = nullptr;};
      inline string getWuyingServerName() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerName_, "") };
      inline Data& setWuyingServerName(string wuyingServerName) { DARABONBA_PTR_SET_VALUE(wuyingServerName_, wuyingServerName) };


    protected:
      shared_ptr<int32_t> bandwidth_ {};
      shared_ptr<string> bizRegionId_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> eniPrivateIpAddressQuantity_ {};
      shared_ptr<string> expiredTime_ {};
      shared_ptr<string> imageId_ {};
      shared_ptr<string> imageName_ {};
      shared_ptr<string> networkInterfaceIp_ {};
      shared_ptr<string> officeSiteId_ {};
      shared_ptr<string> officeSiteName_ {};
      shared_ptr<string> officeSiteType_ {};
      shared_ptr<string> osType_ {};
      shared_ptr<vector<Data::PrivateIpSets>> privateIpSets_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> systemDiskCategory_ {};
      shared_ptr<int32_t> systemDiskSize_ {};
      shared_ptr<string> wuyingServerId_ {};
      shared_ptr<string> wuyingServerName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeWuyingServerResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeWuyingServerResponseBody::Data) };
    inline DescribeWuyingServerResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeWuyingServerResponseBody::Data) };
    inline DescribeWuyingServerResponseBody& setData(const DescribeWuyingServerResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeWuyingServerResponseBody& setData(DescribeWuyingServerResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWuyingServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeWuyingServerResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
