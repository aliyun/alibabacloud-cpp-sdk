// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLENETWORKINTERFACEQOSREQUESTQOS_HPP_
#define ALIBABACLOUD_MODELS_ENABLENETWORKINTERFACEQOSREQUESTQOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class EnableNetworkInterfaceQoSRequestQoS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableNetworkInterfaceQoSRequestQoS& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthRx, bandwidthRx_);
      DARABONBA_PTR_TO_JSON(BandwidthTx, bandwidthTx_);
      DARABONBA_PTR_TO_JSON(ConcurrentConnections, concurrentConnections_);
      DARABONBA_PTR_TO_JSON(PpsRx, ppsRx_);
      DARABONBA_PTR_TO_JSON(PpsTx, ppsTx_);
    };
    friend void from_json(const Darabonba::Json& j, EnableNetworkInterfaceQoSRequestQoS& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthRx, bandwidthRx_);
      DARABONBA_PTR_FROM_JSON(BandwidthTx, bandwidthTx_);
      DARABONBA_PTR_FROM_JSON(ConcurrentConnections, concurrentConnections_);
      DARABONBA_PTR_FROM_JSON(PpsRx, ppsRx_);
      DARABONBA_PTR_FROM_JSON(PpsTx, ppsTx_);
    };
    EnableNetworkInterfaceQoSRequestQoS() = default ;
    EnableNetworkInterfaceQoSRequestQoS(const EnableNetworkInterfaceQoSRequestQoS &) = default ;
    EnableNetworkInterfaceQoSRequestQoS(EnableNetworkInterfaceQoSRequestQoS &&) = default ;
    EnableNetworkInterfaceQoSRequestQoS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableNetworkInterfaceQoSRequestQoS() = default ;
    EnableNetworkInterfaceQoSRequestQoS& operator=(const EnableNetworkInterfaceQoSRequestQoS &) = default ;
    EnableNetworkInterfaceQoSRequestQoS& operator=(EnableNetworkInterfaceQoSRequestQoS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidthRx_ == nullptr
        && return this->bandwidthTx_ == nullptr && return this->concurrentConnections_ == nullptr && return this->ppsRx_ == nullptr && return this->ppsTx_ == nullptr; };
    // bandwidthRx Field Functions 
    bool hasBandwidthRx() const { return this->bandwidthRx_ != nullptr;};
    void deleteBandwidthRx() { this->bandwidthRx_ = nullptr;};
    inline int64_t bandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(bandwidthRx_, 0L) };
    inline EnableNetworkInterfaceQoSRequestQoS& setBandwidthRx(int64_t bandwidthRx) { DARABONBA_PTR_SET_VALUE(bandwidthRx_, bandwidthRx) };


    // bandwidthTx Field Functions 
    bool hasBandwidthTx() const { return this->bandwidthTx_ != nullptr;};
    void deleteBandwidthTx() { this->bandwidthTx_ = nullptr;};
    inline int64_t bandwidthTx() const { DARABONBA_PTR_GET_DEFAULT(bandwidthTx_, 0L) };
    inline EnableNetworkInterfaceQoSRequestQoS& setBandwidthTx(int64_t bandwidthTx) { DARABONBA_PTR_SET_VALUE(bandwidthTx_, bandwidthTx) };


    // concurrentConnections Field Functions 
    bool hasConcurrentConnections() const { return this->concurrentConnections_ != nullptr;};
    void deleteConcurrentConnections() { this->concurrentConnections_ = nullptr;};
    inline int64_t concurrentConnections() const { DARABONBA_PTR_GET_DEFAULT(concurrentConnections_, 0L) };
    inline EnableNetworkInterfaceQoSRequestQoS& setConcurrentConnections(int64_t concurrentConnections) { DARABONBA_PTR_SET_VALUE(concurrentConnections_, concurrentConnections) };


    // ppsRx Field Functions 
    bool hasPpsRx() const { return this->ppsRx_ != nullptr;};
    void deletePpsRx() { this->ppsRx_ = nullptr;};
    inline int64_t ppsRx() const { DARABONBA_PTR_GET_DEFAULT(ppsRx_, 0L) };
    inline EnableNetworkInterfaceQoSRequestQoS& setPpsRx(int64_t ppsRx) { DARABONBA_PTR_SET_VALUE(ppsRx_, ppsRx) };


    // ppsTx Field Functions 
    bool hasPpsTx() const { return this->ppsTx_ != nullptr;};
    void deletePpsTx() { this->ppsTx_ = nullptr;};
    inline int64_t ppsTx() const { DARABONBA_PTR_GET_DEFAULT(ppsTx_, 0L) };
    inline EnableNetworkInterfaceQoSRequestQoS& setPpsTx(int64_t ppsTx) { DARABONBA_PTR_SET_VALUE(ppsTx_, ppsTx) };


  protected:
    std::shared_ptr<int64_t> bandwidthRx_ = nullptr;
    std::shared_ptr<int64_t> bandwidthTx_ = nullptr;
    std::shared_ptr<int64_t> concurrentConnections_ = nullptr;
    std::shared_ptr<int64_t> ppsRx_ = nullptr;
    std::shared_ptr<int64_t> ppsTx_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
