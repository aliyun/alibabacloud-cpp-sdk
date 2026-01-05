// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEPUBLICIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEPUBLICIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReleasePublicIpAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleasePublicIpAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleasePublicIpAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ReleasePublicIpAddressRequest() = default ;
    ReleasePublicIpAddressRequest(const ReleasePublicIpAddressRequest &) = default ;
    ReleasePublicIpAddressRequest(ReleasePublicIpAddressRequest &&) = default ;
    ReleasePublicIpAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleasePublicIpAddressRequest() = default ;
    ReleasePublicIpAddressRequest& operator=(const ReleasePublicIpAddressRequest &) = default ;
    ReleasePublicIpAddressRequest& operator=(ReleasePublicIpAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->instanceId_ == nullptr && this->publicIpAddress_ == nullptr && this->regionId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ReleasePublicIpAddressRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReleasePublicIpAddressRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicIpAddress Field Functions 
    bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
    void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
    inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
    inline ReleasePublicIpAddressRequest& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReleasePublicIpAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // > This parameter is unavailable.
    shared_ptr<bool> dryRun_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The public IP address of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> publicIpAddress_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
