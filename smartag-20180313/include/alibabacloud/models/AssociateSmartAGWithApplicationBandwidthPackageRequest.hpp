// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATESMARTAGWITHAPPLICATIONBANDWIDTHPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATESMARTAGWITHAPPLICATIONBANDWIDTHPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class AssociateSmartAGWithApplicationBandwidthPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateSmartAGWithApplicationBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(AssociateConfigs, associateConfigs_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateSmartAGWithApplicationBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(AssociateConfigs, associateConfigs_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AssociateSmartAGWithApplicationBandwidthPackageRequest() = default ;
    AssociateSmartAGWithApplicationBandwidthPackageRequest(const AssociateSmartAGWithApplicationBandwidthPackageRequest &) = default ;
    AssociateSmartAGWithApplicationBandwidthPackageRequest(AssociateSmartAGWithApplicationBandwidthPackageRequest &&) = default ;
    AssociateSmartAGWithApplicationBandwidthPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateSmartAGWithApplicationBandwidthPackageRequest() = default ;
    AssociateSmartAGWithApplicationBandwidthPackageRequest& operator=(const AssociateSmartAGWithApplicationBandwidthPackageRequest &) = default ;
    AssociateSmartAGWithApplicationBandwidthPackageRequest& operator=(AssociateSmartAGWithApplicationBandwidthPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssociateConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociateConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      };
      friend void from_json(const Darabonba::Json& j, AssociateConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      };
      AssociateConfigs() = default ;
      AssociateConfigs(const AssociateConfigs &) = default ;
      AssociateConfigs(AssociateConfigs &&) = default ;
      AssociateConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociateConfigs() = default ;
      AssociateConfigs& operator=(const AssociateConfigs &) = default ;
      AssociateConfigs& operator=(AssociateConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->smartAGId_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline AssociateConfigs& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // smartAGId Field Functions 
      bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
      void deleteSmartAGId() { this->smartAGId_ = nullptr;};
      inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
      inline AssociateConfigs& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    protected:
      // The maximum bandwidth value for application acceleration. Unit: Mbit/s.
      // 
      // >  The maximum bandwidth value of each SAG instance cannot exceed that of the associated bandwidth plan for application acceleration.
      // 
      // This parameter is required.
      shared_ptr<int32_t> bandwidth_ {};
      // The ID of the SAG instance.
      // 
      // This parameter is required.
      shared_ptr<string> smartAGId_ {};
    };

    virtual bool empty() const override { return this->applicationBandwidthPackageId_ == nullptr
        && this->associateConfigs_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr; };
    // applicationBandwidthPackageId Field Functions 
    bool hasApplicationBandwidthPackageId() const { return this->applicationBandwidthPackageId_ != nullptr;};
    void deleteApplicationBandwidthPackageId() { this->applicationBandwidthPackageId_ = nullptr;};
    inline string getApplicationBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(applicationBandwidthPackageId_, "") };
    inline AssociateSmartAGWithApplicationBandwidthPackageRequest& setApplicationBandwidthPackageId(string applicationBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageId_, applicationBandwidthPackageId) };


    // associateConfigs Field Functions 
    bool hasAssociateConfigs() const { return this->associateConfigs_ != nullptr;};
    void deleteAssociateConfigs() { this->associateConfigs_ = nullptr;};
    inline const vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs> & getAssociateConfigs() const { DARABONBA_PTR_GET_CONST(associateConfigs_, vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs>) };
    inline vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs> getAssociateConfigs() { DARABONBA_PTR_GET(associateConfigs_, vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs>) };
    inline AssociateSmartAGWithApplicationBandwidthPackageRequest& setAssociateConfigs(const vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs> & associateConfigs) { DARABONBA_PTR_SET_VALUE(associateConfigs_, associateConfigs) };
    inline AssociateSmartAGWithApplicationBandwidthPackageRequest& setAssociateConfigs(vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs> && associateConfigs) { DARABONBA_PTR_SET_RVALUE(associateConfigs_, associateConfigs) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AssociateSmartAGWithApplicationBandwidthPackageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AssociateSmartAGWithApplicationBandwidthPackageRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AssociateSmartAGWithApplicationBandwidthPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the bandwidth plan for application acceleration.
    // 
    // This parameter is required.
    shared_ptr<string> applicationBandwidthPackageId_ {};
    // The configuration of application acceleration.
    // 
    // This parameter is required.
    shared_ptr<vector<AssociateSmartAGWithApplicationBandwidthPackageRequest::AssociateConfigs>> associateConfigs_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, ClientToken is set to the value of RequestId. The value of RequestId for each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to precheck the request. Check items include permissions and the status of the specified cloud resources. Valid values:
    // 
    // *   **false** (default): sends the request. After the request passes the check, the bandwidth plan for application acceleration is associated with the SAG instance.
    // *   **true**: prechecks the request but does not associate the bandwidth plan for application acceleration with the SAG instance. If you use this value, the system checks the required parameters and the request syntax. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the bandwidth plan for application acceleration.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
