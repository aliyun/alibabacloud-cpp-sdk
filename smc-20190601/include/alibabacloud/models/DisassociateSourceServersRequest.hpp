// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATESOURCESERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATESOURCESERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DisassociateSourceServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateSourceServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateSourceServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DisassociateSourceServersRequest() = default ;
    DisassociateSourceServersRequest(const DisassociateSourceServersRequest &) = default ;
    DisassociateSourceServersRequest(DisassociateSourceServersRequest &&) = default ;
    DisassociateSourceServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateSourceServersRequest() = default ;
    DisassociateSourceServersRequest& operator=(const DisassociateSourceServersRequest &) = default ;
    DisassociateSourceServersRequest& operator=(DisassociateSourceServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->sourceId_ != nullptr && this->workgroupId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DisassociateSourceServersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DisassociateSourceServersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline const vector<string> & sourceId() const { DARABONBA_PTR_GET_CONST(sourceId_, vector<string>) };
    inline vector<string> sourceId() { DARABONBA_PTR_GET(sourceId_, vector<string>) };
    inline DisassociateSourceServersRequest& setSourceId(const vector<string> & sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };
    inline DisassociateSourceServersRequest& setSourceId(vector<string> && sourceId) { DARABONBA_PTR_SET_RVALUE(sourceId_, sourceId) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline DisassociateSourceServersRequest& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The IDs of migration sources that you want to disassociate from the workgroup. You can specify up to 50 migration sources.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> sourceId_ = nullptr;
    // The ID of the workgroup.
    // 
    // This parameter is required.
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
