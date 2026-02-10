// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCUSTOMBLOCKRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCUSTOMBLOCKRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCustomBlockRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCustomBlockRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ModifyCustomBlockRecordRequest() = default ;
    ModifyCustomBlockRecordRequest(const ModifyCustomBlockRecordRequest &) = default ;
    ModifyCustomBlockRecordRequest(ModifyCustomBlockRecordRequest &&) = default ;
    ModifyCustomBlockRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCustomBlockRecordRequest() = default ;
    ModifyCustomBlockRecordRequest& operator=(const ModifyCustomBlockRecordRequest &) = default ;
    ModifyCustomBlockRecordRequest& operator=(ModifyCustomBlockRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && this->bound_ == nullptr && this->expireTime_ == nullptr && this->resourceOwnerId_ == nullptr && this->uuids_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline ModifyCustomBlockRecordRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline ModifyCustomBlockRecordRequest& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline ModifyCustomBlockRecordRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCustomBlockRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline ModifyCustomBlockRecordRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The IP address that you want to specify in the policy.
    // 
    // This parameter is required.
    shared_ptr<string> blockIp_ {};
    // The traffic direction that you want to specify in the policy. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    // 
    // This parameter is required.
    shared_ptr<string> bound_ {};
    // The expiration time of the policy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expireTime_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
