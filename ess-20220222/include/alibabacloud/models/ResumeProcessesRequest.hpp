// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEPROCESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEPROCESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ResumeProcessesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeProcessesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeProcessesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    ResumeProcessesRequest() = default ;
    ResumeProcessesRequest(const ResumeProcessesRequest &) = default ;
    ResumeProcessesRequest(ResumeProcessesRequest &&) = default ;
    ResumeProcessesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeProcessesRequest() = default ;
    ResumeProcessesRequest& operator=(const ResumeProcessesRequest &) = default ;
    ResumeProcessesRequest& operator=(ResumeProcessesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->ownerId_ != nullptr && this->processes_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ResumeProcessesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ResumeProcessesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const vector<string> & processes() const { DARABONBA_PTR_GET_CONST(processes_, vector<string>) };
    inline vector<string> processes() { DARABONBA_PTR_GET(processes_, vector<string>) };
    inline ResumeProcessesRequest& setProcesses(const vector<string> & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline ResumeProcessesRequest& setProcesses(vector<string> && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResumeProcessesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ResumeProcessesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline ResumeProcessesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests.
    // 
    // The token can only contain ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Details of the processes that you want to resume.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> processes_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
