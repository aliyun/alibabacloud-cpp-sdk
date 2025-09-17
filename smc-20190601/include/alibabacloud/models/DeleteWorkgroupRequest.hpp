// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DeleteWorkgroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkgroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkgroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    DeleteWorkgroupRequest() = default ;
    DeleteWorkgroupRequest(const DeleteWorkgroupRequest &) = default ;
    DeleteWorkgroupRequest(DeleteWorkgroupRequest &&) = default ;
    DeleteWorkgroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkgroupRequest() = default ;
    DeleteWorkgroupRequest& operator=(const DeleteWorkgroupRequest &) = default ;
    DeleteWorkgroupRequest& operator=(DeleteWorkgroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->workgroupId_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteWorkgroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteWorkgroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline DeleteWorkgroupRequest& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the workgroup.
    // 
    // This parameter is required.
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
