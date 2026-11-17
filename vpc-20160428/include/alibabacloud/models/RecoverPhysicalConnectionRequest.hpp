// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERPHYSICALCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOVERPHYSICALCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class RecoverPhysicalConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverPhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverPhysicalConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    RecoverPhysicalConnectionRequest() = default ;
    RecoverPhysicalConnectionRequest(const RecoverPhysicalConnectionRequest &) = default ;
    RecoverPhysicalConnectionRequest(RecoverPhysicalConnectionRequest &&) = default ;
    RecoverPhysicalConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverPhysicalConnectionRequest() = default ;
    RecoverPhysicalConnectionRequest& operator=(const RecoverPhysicalConnectionRequest &) = default ;
    RecoverPhysicalConnectionRequest& operator=(RecoverPhysicalConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->token_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RecoverPhysicalConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RecoverPhysicalConnectionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RecoverPhysicalConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RecoverPhysicalConnectionRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // Specifies whether to perform only a dry run on the request. Valid values:
    // 
    // - **true**: performs only a dry run and does not restore the connection of the Express Connect circuit. The system checks whether the required parameters are specified, the request format is valid, and the instance status is normal. If the request fails the dry run, an error message is returned. If the request passes the dry run, the request ID is returned.
    // - **false** (default): performs a dry run and restores the connection of the Express Connect circuit if the request passes the dry run.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect circuit to recover.
    // 
    // > Currently, only the connection of shared Express Connect circuits can be recovered.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
