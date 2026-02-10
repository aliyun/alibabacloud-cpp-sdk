// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEBRUTEFORCERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEBRUTEFORCERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class EnableBruteForceRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableBruteForceRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, EnableBruteForceRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    EnableBruteForceRecordRequest() = default ;
    EnableBruteForceRecordRequest(const EnableBruteForceRecordRequest &) = default ;
    EnableBruteForceRecordRequest(EnableBruteForceRecordRequest &&) = default ;
    EnableBruteForceRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableBruteForceRecordRequest() = default ;
    EnableBruteForceRecordRequest& operator=(const EnableBruteForceRecordRequest &) = default ;
    EnableBruteForceRecordRequest& operator=(EnableBruteForceRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && this->bound_ == nullptr && this->id_ == nullptr && this->port_ == nullptr && this->resourceOwnerId_ == nullptr && this->uuid_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline EnableBruteForceRecordRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline EnableBruteForceRecordRequest& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline EnableBruteForceRecordRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline EnableBruteForceRecordRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline EnableBruteForceRecordRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline EnableBruteForceRecordRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The IP address that is specified in the policy.
    // 
    // This parameter is required.
    shared_ptr<string> blockIp_ {};
    // The traffic direction that is specified in the policy. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    shared_ptr<string> bound_ {};
    // The ID of the policy that you want to enable.
    // 
    // > You can call the [DescribeBruteForceRecords](~~DescribeBruteForceRecords~~) operation to query the IDs of policies.
    shared_ptr<int64_t> id_ {};
    // The port number.
    shared_ptr<string> port_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The UUID of the server.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
