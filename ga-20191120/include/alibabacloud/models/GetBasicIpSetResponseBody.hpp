// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICIPSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICIPSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetBasicIpSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicIpSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateRegionId, accelerateRegionId_);
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IspType, ispType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicIpSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateRegionId, accelerateRegionId_);
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IspType, ispType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    GetBasicIpSetResponseBody() = default ;
    GetBasicIpSetResponseBody(const GetBasicIpSetResponseBody &) = default ;
    GetBasicIpSetResponseBody(GetBasicIpSetResponseBody &&) = default ;
    GetBasicIpSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicIpSetResponseBody() = default ;
    GetBasicIpSetResponseBody& operator=(const GetBasicIpSetResponseBody &) = default ;
    GetBasicIpSetResponseBody& operator=(GetBasicIpSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateRegionId_ == nullptr
        && this->acceleratorId_ == nullptr && this->bandwidth_ == nullptr && this->ipAddress_ == nullptr && this->ipSetId_ == nullptr && this->ipVersion_ == nullptr
        && this->ispType_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr; };
    // accelerateRegionId Field Functions 
    bool hasAccelerateRegionId() const { return this->accelerateRegionId_ != nullptr;};
    void deleteAccelerateRegionId() { this->accelerateRegionId_ = nullptr;};
    inline string getAccelerateRegionId() const { DARABONBA_PTR_GET_DEFAULT(accelerateRegionId_, "") };
    inline GetBasicIpSetResponseBody& setAccelerateRegionId(string accelerateRegionId) { DARABONBA_PTR_SET_VALUE(accelerateRegionId_, accelerateRegionId) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetBasicIpSetResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline GetBasicIpSetResponseBody& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline GetBasicIpSetResponseBody& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // ipSetId Field Functions 
    bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
    void deleteIpSetId() { this->ipSetId_ = nullptr;};
    inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
    inline GetBasicIpSetResponseBody& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline GetBasicIpSetResponseBody& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ispType Field Functions 
    bool hasIspType() const { return this->ispType_ != nullptr;};
    void deleteIspType() { this->ispType_ = nullptr;};
    inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
    inline GetBasicIpSetResponseBody& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicIpSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetBasicIpSetResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the region where the basic GA instance is deployed.
    shared_ptr<string> accelerateRegionId_ {};
    // The ID of the basic GA instance.
    shared_ptr<string> acceleratorId_ {};
    // The bandwidth of the acceleration region of the basic GA instance. Unit: Mbit/s.
    shared_ptr<int64_t> bandwidth_ {};
    // The accelerated IP address.
    shared_ptr<string> ipAddress_ {};
    // The ID of the acceleration region of the basic GA instance.
    shared_ptr<string> ipSetId_ {};
    // The Internet protocol version. Only **IPv4** may be returned.
    shared_ptr<string> ipVersion_ {};
    // The line type of the elastic IP address (EIP) in the acceleration region. Valid values:
    // 
    // *   **BGP** (default): BGP (Multi-ISP) lines.
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro lines.
    // 
    // Valid values if you are allowed to use single-ISP bandwidth:
    // 
    // *   **ChinaTelecom**
    // *   **ChinaUnicom**
    // *   **ChinaMobile**
    // *   **ChinaTelecom_L2**
    // *   **ChinaUnicom_L2**
    // *   **ChinaMobile_L2**
    shared_ptr<string> ispType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The status of the acceleration region of the basic GA instance. Valid values:
    // 
    // *   **init**: The acceleration region is being initialized.
    // *   **active**: The acceleration region is in the running state.
    // *   **updating**: The acceleration region is being configured.
    // *   **Deleting**: The acceleration region is being deleted.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
