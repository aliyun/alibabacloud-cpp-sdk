// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPAREIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSPAREIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetSpareIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpareIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpareIp, spareIp_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpareIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpareIp, spareIp_);
    };
    GetSpareIpRequest() = default ;
    GetSpareIpRequest(const GetSpareIpRequest &) = default ;
    GetSpareIpRequest(GetSpareIpRequest &&) = default ;
    GetSpareIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpareIpRequest() = default ;
    GetSpareIpRequest& operator=(const GetSpareIpRequest &) = default ;
    GetSpareIpRequest& operator=(GetSpareIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->regionId_ == nullptr && this->spareIp_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline GetSpareIpRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetSpareIpRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline GetSpareIpRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSpareIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spareIp Field Functions 
    bool hasSpareIp() const { return this->spareIp_ != nullptr;};
    void deleteSpareIp() { this->spareIp_ = nullptr;};
    inline string getSpareIp() const { DARABONBA_PTR_GET_DEFAULT(spareIp_, "") };
    inline GetSpareIpRequest& setSpareIp(string spareIp) { DARABONBA_PTR_SET_VALUE(spareIp_, spareIp) };


  protected:
    // The instance ID of the Alibaba Cloud Global Accelerator (GA) instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of a request.
    // 
    // Generate a unique value from your client to ensure that different requests have unique ClientToken values. ClientToken supports only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run without actually creating the resource. The system checks the required parameters, request syntax, and business limitations. If the check fails, the corresponding error is returned. If the check passes, the error code `DryRunOperation` is returned.
    // - **false** (default): performs a dry run and sends the request. If the check passes, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the Alibaba Cloud Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The CNAME spare IP address. When an acceleration area is abnormal, traffic is switched to this IP address.
    // 
    // This parameter is required.
    shared_ptr<string> spareIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
