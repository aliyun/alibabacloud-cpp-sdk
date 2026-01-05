// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSAPPICPRECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSAPPICPRECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsAppIcpRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsAppIcpRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIcpRecordIdList, appIcpRecordIdListShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsAppIcpRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIcpRecordIdList, appIcpRecordIdListShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QuerySmsAppIcpRecordShrinkRequest() = default ;
    QuerySmsAppIcpRecordShrinkRequest(const QuerySmsAppIcpRecordShrinkRequest &) = default ;
    QuerySmsAppIcpRecordShrinkRequest(QuerySmsAppIcpRecordShrinkRequest &&) = default ;
    QuerySmsAppIcpRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsAppIcpRecordShrinkRequest() = default ;
    QuerySmsAppIcpRecordShrinkRequest& operator=(const QuerySmsAppIcpRecordShrinkRequest &) = default ;
    QuerySmsAppIcpRecordShrinkRequest& operator=(QuerySmsAppIcpRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIcpRecordIdListShrink_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // appIcpRecordIdListShrink Field Functions 
    bool hasAppIcpRecordIdListShrink() const { return this->appIcpRecordIdListShrink_ != nullptr;};
    void deleteAppIcpRecordIdListShrink() { this->appIcpRecordIdListShrink_ = nullptr;};
    inline string getAppIcpRecordIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordIdListShrink_, "") };
    inline QuerySmsAppIcpRecordShrinkRequest& setAppIcpRecordIdListShrink(string appIcpRecordIdListShrink) { DARABONBA_PTR_SET_VALUE(appIcpRecordIdListShrink_, appIcpRecordIdListShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySmsAppIcpRecordShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySmsAppIcpRecordShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySmsAppIcpRecordShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // app-icp备案实体id列表
    // 
    // This parameter is required.
    shared_ptr<string> appIcpRecordIdListShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
