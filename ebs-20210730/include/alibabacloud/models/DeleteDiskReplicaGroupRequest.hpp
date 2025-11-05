// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDISKREPLICAGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDISKREPLICAGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DeleteDiskReplicaGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDiskReplicaGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaGroupId, replicaGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDiskReplicaGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroupId, replicaGroupId_);
    };
    DeleteDiskReplicaGroupRequest() = default ;
    DeleteDiskReplicaGroupRequest(const DeleteDiskReplicaGroupRequest &) = default ;
    DeleteDiskReplicaGroupRequest(DeleteDiskReplicaGroupRequest &&) = default ;
    DeleteDiskReplicaGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDiskReplicaGroupRequest() = default ;
    DeleteDiskReplicaGroupRequest& operator=(const DeleteDiskReplicaGroupRequest &) = default ;
    DeleteDiskReplicaGroupRequest& operator=(DeleteDiskReplicaGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->regionId_ == nullptr && return this->replicaGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteDiskReplicaGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDiskReplicaGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaGroupId Field Functions 
    bool hasReplicaGroupId() const { return this->replicaGroupId_ != nullptr;};
    void deleteReplicaGroupId() { this->replicaGroupId_ = nullptr;};
    inline string replicaGroupId() const { DARABONBA_PTR_GET_DEFAULT(replicaGroupId_, "") };
    inline DeleteDiskReplicaGroupRequest& setReplicaGroupId(string replicaGroupId) { DARABONBA_PTR_SET_VALUE(replicaGroupId_, replicaGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID of the replication pair-consistent group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the replication pair-consistent group. You can call the [DescribeDiskReplicaGroups](https://help.aliyun.com/document_detail/426614.html) operation to query the IDs of replication pair-consistent groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicaGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
