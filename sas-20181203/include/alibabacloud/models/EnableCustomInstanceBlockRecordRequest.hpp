// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECUSTOMINSTANCEBLOCKRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECUSTOMINSTANCEBLOCKRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class EnableCustomInstanceBlockRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCustomInstanceBlockRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCustomInstanceBlockRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    EnableCustomInstanceBlockRecordRequest() = default ;
    EnableCustomInstanceBlockRecordRequest(const EnableCustomInstanceBlockRecordRequest &) = default ;
    EnableCustomInstanceBlockRecordRequest(EnableCustomInstanceBlockRecordRequest &&) = default ;
    EnableCustomInstanceBlockRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCustomInstanceBlockRecordRequest() = default ;
    EnableCustomInstanceBlockRecordRequest& operator=(const EnableCustomInstanceBlockRecordRequest &) = default ;
    EnableCustomInstanceBlockRecordRequest& operator=(EnableCustomInstanceBlockRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && return this->bound_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->uuid_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string blockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline EnableCustomInstanceBlockRecordRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string bound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline EnableCustomInstanceBlockRecordRequest& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableCustomInstanceBlockRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline EnableCustomInstanceBlockRecordRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The IP address that you want to block.
    // 
    // This parameter is required.
    std::shared_ptr<string> blockIp_ = nullptr;
    // The traffic direction from the IP address that you want to block. Valid value:
    // 
    // *   **in**
    // *   **out**
    std::shared_ptr<string> bound_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The UUID of the server.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
