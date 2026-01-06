// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVAULTREPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVAULTREPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteVaultReplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVaultReplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_TO_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_TO_JSON(ReplicationTargetVaultId, replicationTargetVaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVaultReplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReplicationSourceRegionId, replicationSourceRegionId_);
      DARABONBA_PTR_FROM_JSON(ReplicationSourceVaultId, replicationSourceVaultId_);
      DARABONBA_PTR_FROM_JSON(ReplicationTargetVaultId, replicationTargetVaultId_);
    };
    DeleteVaultReplicationRequest() = default ;
    DeleteVaultReplicationRequest(const DeleteVaultReplicationRequest &) = default ;
    DeleteVaultReplicationRequest(DeleteVaultReplicationRequest &&) = default ;
    DeleteVaultReplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVaultReplicationRequest() = default ;
    DeleteVaultReplicationRequest& operator=(const DeleteVaultReplicationRequest &) = default ;
    DeleteVaultReplicationRequest& operator=(DeleteVaultReplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->replicationSourceRegionId_ == nullptr
        && this->replicationSourceVaultId_ == nullptr && this->replicationTargetVaultId_ == nullptr; };
    // replicationSourceRegionId Field Functions 
    bool hasReplicationSourceRegionId() const { return this->replicationSourceRegionId_ != nullptr;};
    void deleteReplicationSourceRegionId() { this->replicationSourceRegionId_ = nullptr;};
    inline string getReplicationSourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceRegionId_, "") };
    inline DeleteVaultReplicationRequest& setReplicationSourceRegionId(string replicationSourceRegionId) { DARABONBA_PTR_SET_VALUE(replicationSourceRegionId_, replicationSourceRegionId) };


    // replicationSourceVaultId Field Functions 
    bool hasReplicationSourceVaultId() const { return this->replicationSourceVaultId_ != nullptr;};
    void deleteReplicationSourceVaultId() { this->replicationSourceVaultId_ = nullptr;};
    inline string getReplicationSourceVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationSourceVaultId_, "") };
    inline DeleteVaultReplicationRequest& setReplicationSourceVaultId(string replicationSourceVaultId) { DARABONBA_PTR_SET_VALUE(replicationSourceVaultId_, replicationSourceVaultId) };


    // replicationTargetVaultId Field Functions 
    bool hasReplicationTargetVaultId() const { return this->replicationTargetVaultId_ != nullptr;};
    void deleteReplicationTargetVaultId() { this->replicationTargetVaultId_ = nullptr;};
    inline string getReplicationTargetVaultId() const { DARABONBA_PTR_GET_DEFAULT(replicationTargetVaultId_, "") };
    inline DeleteVaultReplicationRequest& setReplicationTargetVaultId(string replicationTargetVaultId) { DARABONBA_PTR_SET_VALUE(replicationTargetVaultId_, replicationTargetVaultId) };


  protected:
    shared_ptr<string> replicationSourceRegionId_ {};
    // This parameter is required.
    shared_ptr<string> replicationSourceVaultId_ {};
    // This parameter is required.
    shared_ptr<string> replicationTargetVaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
