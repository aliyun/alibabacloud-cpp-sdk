// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISSOCIATESMARTAGFROMAPPLICATIONBANDWIDTHPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISSOCIATESMARTAGFROMAPPLICATIONBANDWIDTHPACKAGEREQUEST_HPP_
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
  class DissociateSmartAGFromApplicationBandwidthPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DissociateSmartAGFromApplicationBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(SmartAGIdList, smartAGIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DissociateSmartAGFromApplicationBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationBandwidthPackageId, applicationBandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(SmartAGIdList, smartAGIdList_);
    };
    DissociateSmartAGFromApplicationBandwidthPackageRequest() = default ;
    DissociateSmartAGFromApplicationBandwidthPackageRequest(const DissociateSmartAGFromApplicationBandwidthPackageRequest &) = default ;
    DissociateSmartAGFromApplicationBandwidthPackageRequest(DissociateSmartAGFromApplicationBandwidthPackageRequest &&) = default ;
    DissociateSmartAGFromApplicationBandwidthPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DissociateSmartAGFromApplicationBandwidthPackageRequest() = default ;
    DissociateSmartAGFromApplicationBandwidthPackageRequest& operator=(const DissociateSmartAGFromApplicationBandwidthPackageRequest &) = default ;
    DissociateSmartAGFromApplicationBandwidthPackageRequest& operator=(DissociateSmartAGFromApplicationBandwidthPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationBandwidthPackageId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->smartAGId_ == nullptr && this->smartAGIdList_ == nullptr; };
    // applicationBandwidthPackageId Field Functions 
    bool hasApplicationBandwidthPackageId() const { return this->applicationBandwidthPackageId_ != nullptr;};
    void deleteApplicationBandwidthPackageId() { this->applicationBandwidthPackageId_ = nullptr;};
    inline string getApplicationBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(applicationBandwidthPackageId_, "") };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setApplicationBandwidthPackageId(string applicationBandwidthPackageId) { DARABONBA_PTR_SET_VALUE(applicationBandwidthPackageId_, applicationBandwidthPackageId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // smartAGIdList Field Functions 
    bool hasSmartAGIdList() const { return this->smartAGIdList_ != nullptr;};
    void deleteSmartAGIdList() { this->smartAGIdList_ = nullptr;};
    inline const vector<string> & getSmartAGIdList() const { DARABONBA_PTR_GET_CONST(smartAGIdList_, vector<string>) };
    inline vector<string> getSmartAGIdList() { DARABONBA_PTR_GET(smartAGIdList_, vector<string>) };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setSmartAGIdList(const vector<string> & smartAGIdList) { DARABONBA_PTR_SET_VALUE(smartAGIdList_, smartAGIdList) };
    inline DissociateSmartAGFromApplicationBandwidthPackageRequest& setSmartAGIdList(vector<string> && smartAGIdList) { DARABONBA_PTR_SET_RVALUE(smartAGIdList_, smartAGIdList) };


  protected:
    // The ID of the bandwidth plan for application acceleration.
    // 
    // This parameter is required.
    shared_ptr<string> applicationBandwidthPackageId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, ClientToken is set to the value of RequestId. The value of RequestId for each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to precheck the request. Check items include permissions and the status of the specified cloud resources. Valid values:
    // 
    // *   **false** (default): sends the request. After the request passes the check, the SAG instance is disassociated from the bandwidth plan for application acceleration.
    // *   **true**: prechecks the request but does not disassociate the SAG instance from the bandwidth plan for application acceleration. If you use this value, the system checks the required parameters and the request syntax. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the bandwidth plan for application acceleration.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the SAG instance.
    shared_ptr<string> smartAGId_ {};
    // The list of the SAG instance id.
    shared_ptr<vector<string>> smartAGIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
