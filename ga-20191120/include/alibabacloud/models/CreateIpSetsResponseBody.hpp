// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPSETSRESPONSEBODY_HPP_
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
  class CreateIpSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(IpSets, ipSets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(IpSets, ipSets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIpSetsResponseBody() = default ;
    CreateIpSetsResponseBody(const CreateIpSetsResponseBody &) = default ;
    CreateIpSetsResponseBody(CreateIpSetsResponseBody &&) = default ;
    CreateIpSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpSetsResponseBody() = default ;
    CreateIpSetsResponseBody& operator=(const CreateIpSetsResponseBody &) = default ;
    CreateIpSetsResponseBody& operator=(CreateIpSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSets& obj) { 
        DARABONBA_PTR_TO_JSON(AccelerateRegionId, accelerateRegionId_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
        DARABONBA_PTR_TO_JSON(IspType, ispType_);
      };
      friend void from_json(const Darabonba::Json& j, IpSets& obj) { 
        DARABONBA_PTR_FROM_JSON(AccelerateRegionId, accelerateRegionId_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
        DARABONBA_PTR_FROM_JSON(IspType, ispType_);
      };
      IpSets() = default ;
      IpSets(const IpSets &) = default ;
      IpSets(IpSets &&) = default ;
      IpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSets() = default ;
      IpSets& operator=(const IpSets &) = default ;
      IpSets& operator=(IpSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accelerateRegionId_ == nullptr
        && this->bandwidth_ == nullptr && this->ipSetId_ == nullptr && this->ispType_ == nullptr; };
      // accelerateRegionId Field Functions 
      bool hasAccelerateRegionId() const { return this->accelerateRegionId_ != nullptr;};
      void deleteAccelerateRegionId() { this->accelerateRegionId_ = nullptr;};
      inline string getAccelerateRegionId() const { DARABONBA_PTR_GET_DEFAULT(accelerateRegionId_, "") };
      inline IpSets& setAccelerateRegionId(string accelerateRegionId) { DARABONBA_PTR_SET_VALUE(accelerateRegionId_, accelerateRegionId) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline IpSets& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // ipSetId Field Functions 
      bool hasIpSetId() const { return this->ipSetId_ != nullptr;};
      void deleteIpSetId() { this->ipSetId_ = nullptr;};
      inline string getIpSetId() const { DARABONBA_PTR_GET_DEFAULT(ipSetId_, "") };
      inline IpSets& setIpSetId(string ipSetId) { DARABONBA_PTR_SET_VALUE(ipSetId_, ipSetId) };


      // ispType Field Functions 
      bool hasIspType() const { return this->ispType_ != nullptr;};
      void deleteIspType() { this->ispType_ = nullptr;};
      inline string getIspType() const { DARABONBA_PTR_GET_DEFAULT(ispType_, "") };
      inline IpSets& setIspType(string ispType) { DARABONBA_PTR_SET_VALUE(ispType_, ispType) };


    protected:
      // The acceleration region ID.
      shared_ptr<string> accelerateRegionId_ {};
      // The bandwidth allocated to the acceleration region. Unit: **Mbit/s**.
      shared_ptr<int32_t> bandwidth_ {};
      // The acceleration region ID.
      shared_ptr<string> ipSetId_ {};
      // The line type of the EIP in the acceleration region.
      shared_ptr<string> ispType_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->ipSets_ == nullptr && this->requestId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateIpSetsResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // ipSets Field Functions 
    bool hasIpSets() const { return this->ipSets_ != nullptr;};
    void deleteIpSets() { this->ipSets_ = nullptr;};
    inline const vector<CreateIpSetsResponseBody::IpSets> & getIpSets() const { DARABONBA_PTR_GET_CONST(ipSets_, vector<CreateIpSetsResponseBody::IpSets>) };
    inline vector<CreateIpSetsResponseBody::IpSets> getIpSets() { DARABONBA_PTR_GET(ipSets_, vector<CreateIpSetsResponseBody::IpSets>) };
    inline CreateIpSetsResponseBody& setIpSets(const vector<CreateIpSetsResponseBody::IpSets> & ipSets) { DARABONBA_PTR_SET_VALUE(ipSets_, ipSets) };
    inline CreateIpSetsResponseBody& setIpSets(vector<CreateIpSetsResponseBody::IpSets> && ipSets) { DARABONBA_PTR_SET_RVALUE(ipSets_, ipSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIpSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The GA instance ID.
    shared_ptr<string> acceleratorId_ {};
    // The details about the acceleration regions.
    shared_ptr<vector<CreateIpSetsResponseBody::IpSets>> ipSets_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
