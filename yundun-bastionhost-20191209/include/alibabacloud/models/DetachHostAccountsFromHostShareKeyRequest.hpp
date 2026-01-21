// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMHOSTSHAREKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMHOSTSHAREKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostAccountsFromHostShareKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostAccountsFromHostShareKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostAccountsFromHostShareKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountIds, hostAccountIds_);
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DetachHostAccountsFromHostShareKeyRequest() = default ;
    DetachHostAccountsFromHostShareKeyRequest(const DetachHostAccountsFromHostShareKeyRequest &) = default ;
    DetachHostAccountsFromHostShareKeyRequest(DetachHostAccountsFromHostShareKeyRequest &&) = default ;
    DetachHostAccountsFromHostShareKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostAccountsFromHostShareKeyRequest() = default ;
    DetachHostAccountsFromHostShareKeyRequest& operator=(const DetachHostAccountsFromHostShareKeyRequest &) = default ;
    DetachHostAccountsFromHostShareKeyRequest& operator=(DetachHostAccountsFromHostShareKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountIds_ == nullptr
        && this->hostShareKeyId_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // hostAccountIds Field Functions 
    bool hasHostAccountIds() const { return this->hostAccountIds_ != nullptr;};
    void deleteHostAccountIds() { this->hostAccountIds_ = nullptr;};
    inline string getHostAccountIds() const { DARABONBA_PTR_GET_DEFAULT(hostAccountIds_, "") };
    inline DetachHostAccountsFromHostShareKeyRequest& setHostAccountIds(string hostAccountIds) { DARABONBA_PTR_SET_VALUE(hostAccountIds_, hostAccountIds) };


    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline string getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, "") };
    inline DetachHostAccountsFromHostShareKeyRequest& setHostShareKeyId(string hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DetachHostAccountsFromHostShareKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachHostAccountsFromHostShareKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The host account IDs.
    // 
    // >  You can call the [ListHostAccountsForHostShareKey](https://help.aliyun.com/document_detail/462975.html) operation to query the host account IDs.
    // 
    // This parameter is required.
    shared_ptr<string> hostAccountIds_ {};
    // The shared key ID.
    // 
    // >  You can call the [ListHostShareKeys](https://help.aliyun.com/document_detail/462973.html) operation to query the shared key ID.
    // 
    // This parameter is required.
    shared_ptr<string> hostShareKeyId_ {};
    // The bastion host ID.
    // 
    // >  You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
