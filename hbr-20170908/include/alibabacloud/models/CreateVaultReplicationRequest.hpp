// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVAULTREPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVAULTREPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateVaultReplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVaultReplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_TO_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_TO_JSON(ReplicationTargetVaultId, replicationTargetVaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVaultReplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_FROM_JSON(ReplicationTargetVaultId, replicationTargetVaultId_);
    };
    CreateVaultReplicationRequest() = default ;
    CreateVaultReplicationRequest(const CreateVaultReplicationRequest &) = default ;
    CreateVaultReplicationRequest(CreateVaultReplicationRequest &&) = default ;
    CreateVaultReplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVaultReplicationRequest() = default ;
    CreateVaultReplicationRequest& operator=(const CreateVaultReplicationRequest &) = default ;
    CreateVaultReplicationRequest& operator=(CreateVaultReplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->replicationSourceRegionId_ == nullptr
        && return this->replicationSourceVaultId_ == nullptr && return this->replicationTargetVaultId_ == nullptr; };
    // replicationSourceRegionId Field Functions 
    bool hasReplicationSourceRegionId() const { return this->replicationSourceRegionId_ != nullptr;};
    void deleteReplicationSourceRegionId() { this->replicationSourceRegionId_ = nullptr;};
    inline string replicationSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceRegionId_, "") };
    inline CreateVaultReplicationRequest& setReplicationSourceRegionId(string replicationSourceRegionId) { DARABONBA_PTR_SET_VALUE(replicationSourceRegionId_, replicationSourceRegionId) };


    // replicationSourceVaultId Field Functions 
    bool hasReplicationSourceVaultId() const { return this->replicationSourceVaultId_ != nullptr;};
    void deleteReplicationSourceVaultId() { this->replicationSourceVaultId_ = nullptr;};
    inline string replicationSourceVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVaultId_, "") };
    inline CreateVaultReplicationRequest& setReplicationSourceVaultId(string replicationSourceVaultId) { DARABONBA_PTR_SET_VALUE(replicationSourceVaultId_, replicationSourceVaultId) };


    // replicationTargetVaultId Field Functions 
    bool hasReplicationTargetVaultId() const { return this->replicationTargetVaultId_ != nullptr;};
    void deleteReplicationTargetVaultId() { this->replicationTargetVaultId_ = nullptr;};
    inline string replicationTargetVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationTargetVaultId_, "") };
    inline CreateVaultReplicationRequest& setReplicationTargetVaultId(string replicationTargetVaultId) { DARABONBA_PTR_SET_VALUE(replicationTargetVaultId_, replicationTargetVaultId) };


  protected:
    std::shared_ptr<string> replicationSourceRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> replicationSourceVaultId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> replicationTargetVaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
