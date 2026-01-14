// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESPAREIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESPAREIPSREQUEST_HPP_
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
  class CreateSpareIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSpareIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpareIps, spareIps_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSpareIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpareIps, spareIps_);
    };
    CreateSpareIpsRequest() = default ;
    CreateSpareIpsRequest(const CreateSpareIpsRequest &) = default ;
    CreateSpareIpsRequest(CreateSpareIpsRequest &&) = default ;
    CreateSpareIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSpareIpsRequest() = default ;
    CreateSpareIpsRequest& operator=(const CreateSpareIpsRequest &) = default ;
    CreateSpareIpsRequest& operator=(CreateSpareIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->spareIps_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateSpareIpsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSpareIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSpareIpsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSpareIpsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spareIps Field Functions 
    bool hasSpareIps() const { return this->spareIps_ != nullptr;};
    void deleteSpareIps() { this->spareIps_ = nullptr;};
    inline const vector<string> & getSpareIps() const { DARABONBA_PTR_GET_CONST(spareIps_, vector<string>) };
    inline vector<string> getSpareIps() { DARABONBA_PTR_GET(spareIps_, vector<string>) };
    inline CreateSpareIpsRequest& setSpareIps(const vector<string> & spareIps) { DARABONBA_PTR_SET_VALUE(spareIps_, spareIps) };
    inline CreateSpareIpsRequest& setSpareIps(vector<string> && spareIps) { DARABONBA_PTR_SET_RVALUE(spareIps_, spareIps) };


  protected:
    // The GA instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true:** performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (defalut): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The secondary IP addresses to be created for the CNAME. If an acceleration area of the GA instance becomes unavailable, access traffic is redirected to the secondary IP addresses.
    // 
    // You can specify up to two secondary IP addresses.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> spareIps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
