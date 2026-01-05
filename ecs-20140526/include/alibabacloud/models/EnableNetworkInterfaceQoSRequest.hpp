// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLENETWORKINTERFACEQOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLENETWORKINTERFACEQOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class EnableNetworkInterfaceQoSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableNetworkInterfaceQoSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QoS, qoS_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableNetworkInterfaceQoSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QoS, qoS_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    EnableNetworkInterfaceQoSRequest() = default ;
    EnableNetworkInterfaceQoSRequest(const EnableNetworkInterfaceQoSRequest &) = default ;
    EnableNetworkInterfaceQoSRequest(EnableNetworkInterfaceQoSRequest &&) = default ;
    EnableNetworkInterfaceQoSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableNetworkInterfaceQoSRequest() = default ;
    EnableNetworkInterfaceQoSRequest& operator=(const EnableNetworkInterfaceQoSRequest &) = default ;
    EnableNetworkInterfaceQoSRequest& operator=(EnableNetworkInterfaceQoSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QoS : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QoS& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthRx, bandwidthRx_);
        DARABONBA_PTR_TO_JSON(BandwidthTx, bandwidthTx_);
        DARABONBA_PTR_TO_JSON(ConcurrentConnections, concurrentConnections_);
        DARABONBA_PTR_TO_JSON(PpsRx, ppsRx_);
        DARABONBA_PTR_TO_JSON(PpsTx, ppsTx_);
      };
      friend void from_json(const Darabonba::Json& j, QoS& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthRx, bandwidthRx_);
        DARABONBA_PTR_FROM_JSON(BandwidthTx, bandwidthTx_);
        DARABONBA_PTR_FROM_JSON(ConcurrentConnections, concurrentConnections_);
        DARABONBA_PTR_FROM_JSON(PpsRx, ppsRx_);
        DARABONBA_PTR_FROM_JSON(PpsTx, ppsTx_);
      };
      QoS() = default ;
      QoS(const QoS &) = default ;
      QoS(QoS &&) = default ;
      QoS(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QoS() = default ;
      QoS& operator=(const QoS &) = default ;
      QoS& operator=(QoS &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthRx_ == nullptr
        && this->bandwidthTx_ == nullptr && this->concurrentConnections_ == nullptr && this->ppsRx_ == nullptr && this->ppsTx_ == nullptr; };
      // bandwidthRx Field Functions 
      bool hasBandwidthRx() const { return this->bandwidthRx_ != nullptr;};
      void deleteBandwidthRx() { this->bandwidthRx_ = nullptr;};
      inline int64_t getBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(bandwidthRx_, 0L) };
      inline QoS& setBandwidthRx(int64_t bandwidthRx) { DARABONBA_PTR_SET_VALUE(bandwidthRx_, bandwidthRx) };


      // bandwidthTx Field Functions 
      bool hasBandwidthTx() const { return this->bandwidthTx_ != nullptr;};
      void deleteBandwidthTx() { this->bandwidthTx_ = nullptr;};
      inline int64_t getBandwidthTx() const { DARABONBA_PTR_GET_DEFAULT(bandwidthTx_, 0L) };
      inline QoS& setBandwidthTx(int64_t bandwidthTx) { DARABONBA_PTR_SET_VALUE(bandwidthTx_, bandwidthTx) };


      // concurrentConnections Field Functions 
      bool hasConcurrentConnections() const { return this->concurrentConnections_ != nullptr;};
      void deleteConcurrentConnections() { this->concurrentConnections_ = nullptr;};
      inline int64_t getConcurrentConnections() const { DARABONBA_PTR_GET_DEFAULT(concurrentConnections_, 0L) };
      inline QoS& setConcurrentConnections(int64_t concurrentConnections) { DARABONBA_PTR_SET_VALUE(concurrentConnections_, concurrentConnections) };


      // ppsRx Field Functions 
      bool hasPpsRx() const { return this->ppsRx_ != nullptr;};
      void deletePpsRx() { this->ppsRx_ = nullptr;};
      inline int64_t getPpsRx() const { DARABONBA_PTR_GET_DEFAULT(ppsRx_, 0L) };
      inline QoS& setPpsRx(int64_t ppsRx) { DARABONBA_PTR_SET_VALUE(ppsRx_, ppsRx) };


      // ppsTx Field Functions 
      bool hasPpsTx() const { return this->ppsTx_ != nullptr;};
      void deletePpsTx() { this->ppsTx_ = nullptr;};
      inline int64_t getPpsTx() const { DARABONBA_PTR_GET_DEFAULT(ppsTx_, 0L) };
      inline QoS& setPpsTx(int64_t ppsTx) { DARABONBA_PTR_SET_VALUE(ppsTx_, ppsTx) };


    protected:
      // The maximum inbound internal bandwidth.
      // 
      // Unit: kbit/s, step size: 1000 (1Mbps), value range: [50000, +♾️)
      shared_ptr<int64_t> bandwidthRx_ {};
      // The maximum outbound internal bandwidth.
      // 
      // Unit: kbit/s, step size: 1000 (1Mbps), value range: [50000, +♾️)
      shared_ptr<int64_t> bandwidthTx_ {};
      // Maximum Number of Sessions
      // 
      // Step size: 10000, value range: [10000, +♾️)
      shared_ptr<int64_t> concurrentConnections_ {};
      // The inbound packet forwarding rate over the internal network.
      // 
      // Unit: pps, step size: 10000, value range: [10000, +♾️)
      shared_ptr<int64_t> ppsRx_ {};
      // The outbound packet forwarding rate over the internal network.
      // 
      // Unit: pps, step size: 10000, value range: [10000, +♾️)
      shared_ptr<int64_t> ppsTx_ {};
    };

    virtual bool empty() const override { return this->networkInterfaceId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->qoS_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline EnableNetworkInterfaceQoSRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline EnableNetworkInterfaceQoSRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableNetworkInterfaceQoSRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qoS Field Functions 
    bool hasQoS() const { return this->qoS_ != nullptr;};
    void deleteQoS() { this->qoS_ = nullptr;};
    inline const EnableNetworkInterfaceQoSRequest::QoS & getQoS() const { DARABONBA_PTR_GET_CONST(qoS_, EnableNetworkInterfaceQoSRequest::QoS) };
    inline EnableNetworkInterfaceQoSRequest::QoS getQoS() { DARABONBA_PTR_GET(qoS_, EnableNetworkInterfaceQoSRequest::QoS) };
    inline EnableNetworkInterfaceQoSRequest& setQoS(const EnableNetworkInterfaceQoSRequest::QoS & qoS) { DARABONBA_PTR_SET_VALUE(qoS_, qoS) };
    inline EnableNetworkInterfaceQoSRequest& setQoS(EnableNetworkInterfaceQoSRequest::QoS && qoS) { DARABONBA_PTR_SET_RVALUE(qoS_, qoS) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableNetworkInterfaceQoSRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline EnableNetworkInterfaceQoSRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableNetworkInterfaceQoSRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> networkInterfaceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // QoS Speed Limit Settings
    shared_ptr<EnableNetworkInterfaceQoSRequest::QoS> qoS_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
