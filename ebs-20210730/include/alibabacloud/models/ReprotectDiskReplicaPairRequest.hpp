// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPROTECTDISKREPLICAPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPROTECTDISKREPLICAPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class ReprotectDiskReplicaPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReprotectDiskReplicaPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReplicaPairId, replicaPairId_);
      DARABONBA_PTR_TO_JSON(ReverseReplicate, reverseReplicate_);
    };
    friend void from_json(const Darabonba::Json& j, ReprotectDiskReplicaPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReplicaPairId, replicaPairId_);
      DARABONBA_PTR_FROM_JSON(ReverseReplicate, reverseReplicate_);
    };
    ReprotectDiskReplicaPairRequest() = default ;
    ReprotectDiskReplicaPairRequest(const ReprotectDiskReplicaPairRequest &) = default ;
    ReprotectDiskReplicaPairRequest(ReprotectDiskReplicaPairRequest &&) = default ;
    ReprotectDiskReplicaPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReprotectDiskReplicaPairRequest() = default ;
    ReprotectDiskReplicaPairRequest& operator=(const ReprotectDiskReplicaPairRequest &) = default ;
    ReprotectDiskReplicaPairRequest& operator=(ReprotectDiskReplicaPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->regionId_ == nullptr && return this->replicaPairId_ == nullptr && return this->reverseReplicate_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReprotectDiskReplicaPairRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReprotectDiskReplicaPairRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // replicaPairId Field Functions 
    bool hasReplicaPairId() const { return this->replicaPairId_ != nullptr;};
    void deleteReplicaPairId() { this->replicaPairId_ = nullptr;};
    inline string replicaPairId() const { DARABONBA_PTR_GET_DEFAULT(replicaPairId_, "") };
    inline ReprotectDiskReplicaPairRequest& setReplicaPairId(string replicaPairId) { DARABONBA_PTR_SET_VALUE(replicaPairId_, replicaPairId) };


    // reverseReplicate Field Functions 
    bool hasReverseReplicate() const { return this->reverseReplicate_ != nullptr;};
    void deleteReverseReplicate() { this->reverseReplicate_ = nullptr;};
    inline bool reverseReplicate() const { DARABONBA_PTR_GET_DEFAULT(reverseReplicate_, false) };
    inline ReprotectDiskReplicaPairRequest& setReverseReplicate(bool reverseReplicate) { DARABONBA_PTR_SET_VALUE(reverseReplicate_, reverseReplicate) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The region ID of the secondary disk in the replication pair. You can call the [DescribeDiskReplicaPairs](https://help.aliyun.com/document_detail/354206.html) operation to query region IDs of secondary disks in replication pairs.
    // 
    // >  The reverse replication feature must be enabled from the region where the secondary disk is located.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the replication pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> replicaPairId_ = nullptr;
    // Specifies whether to enable the reverse replication sub-feature. Valid values: true and false. Default value: true.
    std::shared_ptr<bool> reverseReplicate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
