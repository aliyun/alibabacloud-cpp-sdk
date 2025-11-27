// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSRESOURCESETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRdsResourceSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsResourceSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceNiche, resourceNiche_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsResourceSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceNiche, resourceNiche_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeRdsResourceSettingsRequest() = default ;
    DescribeRdsResourceSettingsRequest(const DescribeRdsResourceSettingsRequest &) = default ;
    DescribeRdsResourceSettingsRequest(DescribeRdsResourceSettingsRequest &&) = default ;
    DescribeRdsResourceSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsResourceSettingsRequest() = default ;
    DescribeRdsResourceSettingsRequest& operator=(const DescribeRdsResourceSettingsRequest &) = default ;
    DescribeRdsResourceSettingsRequest& operator=(DescribeRdsResourceSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->resourceNiche_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRdsResourceSettingsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceNiche Field Functions 
    bool hasResourceNiche() const { return this->resourceNiche_ != nullptr;};
    void deleteResourceNiche() { this->resourceNiche_ = nullptr;};
    inline string resourceNiche() const { DARABONBA_PTR_GET_DEFAULT(resourceNiche_, "") };
    inline DescribeRdsResourceSettingsRequest& setResourceNiche(string resourceNiche) { DARABONBA_PTR_SET_VALUE(resourceNiche_, resourceNiche) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeRdsResourceSettingsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRdsResourceSettingsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The location of the notification.
    // 
    // *   noticeBar: notification bar
    // *   popUp: popup
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceNiche_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
