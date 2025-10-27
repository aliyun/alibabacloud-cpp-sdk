// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMBLOCKRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMBLOCKRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateCustomBlockRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    CreateCustomBlockRecordRequest() = default ;
    CreateCustomBlockRecordRequest(const CreateCustomBlockRecordRequest &) = default ;
    CreateCustomBlockRecordRequest(CreateCustomBlockRecordRequest &&) = default ;
    CreateCustomBlockRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomBlockRecordRequest() = default ;
    CreateCustomBlockRecordRequest& operator=(const CreateCustomBlockRecordRequest &) = default ;
    CreateCustomBlockRecordRequest& operator=(CreateCustomBlockRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && return this->bound_ == nullptr && return this->expireTime_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->uuids_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string blockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline CreateCustomBlockRecordRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string bound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline CreateCustomBlockRecordRequest& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline CreateCustomBlockRecordRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCustomBlockRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline CreateCustomBlockRecordRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The IP address that you want to specify in the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> blockIp_ = nullptr;
    // The traffic direction that you want to specify in the policy. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    // 
    // This parameter is required.
    std::shared_ptr<string> bound_ = nullptr;
    // The expiration time of the policy.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The UUIDs of the servers. Separate multiple UUIDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
