// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTTEMPLATEGROUPCONSOLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTTEMPLATEGROUPCONSOLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetDefaultTemplateGroupConsoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultTemplateGroupConsoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupSymbol, groupSymbol_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultTemplateGroupConsoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupSymbol, groupSymbol_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SetDefaultTemplateGroupConsoleRequest() = default ;
    SetDefaultTemplateGroupConsoleRequest(const SetDefaultTemplateGroupConsoleRequest &) = default ;
    SetDefaultTemplateGroupConsoleRequest(SetDefaultTemplateGroupConsoleRequest &&) = default ;
    SetDefaultTemplateGroupConsoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultTemplateGroupConsoleRequest() = default ;
    SetDefaultTemplateGroupConsoleRequest& operator=(const SetDefaultTemplateGroupConsoleRequest &) = default ;
    SetDefaultTemplateGroupConsoleRequest& operator=(SetDefaultTemplateGroupConsoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->groupSymbol_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetDefaultTemplateGroupConsoleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupSymbol Field Functions 
    bool hasGroupSymbol() const { return this->groupSymbol_ != nullptr;};
    void deleteGroupSymbol() { this->groupSymbol_ = nullptr;};
    inline string groupSymbol() const { DARABONBA_PTR_GET_DEFAULT(groupSymbol_, "") };
    inline SetDefaultTemplateGroupConsoleRequest& setGroupSymbol(string groupSymbol) { DARABONBA_PTR_SET_VALUE(groupSymbol_, groupSymbol) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetDefaultTemplateGroupConsoleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetDefaultTemplateGroupConsoleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetDefaultTemplateGroupConsoleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupSymbol_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
