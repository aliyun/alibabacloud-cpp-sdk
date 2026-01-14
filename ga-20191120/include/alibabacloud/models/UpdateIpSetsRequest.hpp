// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPSETSREQUEST_HPP_
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
  class UpdateIpSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpSets, ipSets_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpSets, ipSets_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateIpSetsRequest() = default ;
    UpdateIpSetsRequest(const UpdateIpSetsRequest &) = default ;
    UpdateIpSetsRequest(UpdateIpSetsRequest &&) = default ;
    UpdateIpSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpSetsRequest() = default ;
    UpdateIpSetsRequest& operator=(const UpdateIpSetsRequest &) = default ;
    UpdateIpSetsRequest& operator=(UpdateIpSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSets& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(IpSetId, ipSetId_);
      };
      friend void from_json(const Darabonba::Json& j, IpSets& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(IpSetId, ipSetId_);
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
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->ipSetId_ == nullptr; };
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


    protected:
      // The new bandwidth that you want to allocate to the acceleration regions. Unit: Mbit/s.
      // 
      // You must allocate at least 2 Mbit/s of bandwidth to each acceleration region. You can specify the bandwidth for up to 100 acceleration regions.
      // 
      // This parameter is required.
      shared_ptr<int32_t> bandwidth_ {};
      // The IDs of the acceleration regions that you want to modify.
      // 
      // You can specify the IDs of up to 100 acceleration regions.
      // 
      // This parameter is required.
      shared_ptr<string> ipSetId_ {};
    };

    virtual bool empty() const override { return this->ipSets_ == nullptr
        && this->regionId_ == nullptr; };
    // ipSets Field Functions 
    bool hasIpSets() const { return this->ipSets_ != nullptr;};
    void deleteIpSets() { this->ipSets_ = nullptr;};
    inline const vector<UpdateIpSetsRequest::IpSets> & getIpSets() const { DARABONBA_PTR_GET_CONST(ipSets_, vector<UpdateIpSetsRequest::IpSets>) };
    inline vector<UpdateIpSetsRequest::IpSets> getIpSets() { DARABONBA_PTR_GET(ipSets_, vector<UpdateIpSetsRequest::IpSets>) };
    inline UpdateIpSetsRequest& setIpSets(const vector<UpdateIpSetsRequest::IpSets> & ipSets) { DARABONBA_PTR_SET_VALUE(ipSets_, ipSets) };
    inline UpdateIpSetsRequest& setIpSets(vector<UpdateIpSetsRequest::IpSets> && ipSets) { DARABONBA_PTR_SET_RVALUE(ipSets_, ipSets) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The acceleration regions.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateIpSetsRequest::IpSets>> ipSets_ {};
    // The region ID of the Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
