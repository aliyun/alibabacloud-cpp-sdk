// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READCHATFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READCHATFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ReadChatFlowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadChatFlowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(BizExtend, bizExtendShrink_);
      DARABONBA_PTR_TO_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ReadChatFlowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(BizExtend, bizExtendShrink_);
      DARABONBA_PTR_FROM_JSON(FlowCode, flowCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ReadChatFlowShrinkRequest() = default ;
    ReadChatFlowShrinkRequest(const ReadChatFlowShrinkRequest &) = default ;
    ReadChatFlowShrinkRequest(ReadChatFlowShrinkRequest &&) = default ;
    ReadChatFlowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadChatFlowShrinkRequest() = default ;
    ReadChatFlowShrinkRequest& operator=(const ReadChatFlowShrinkRequest &) = default ;
    ReadChatFlowShrinkRequest& operator=(ReadChatFlowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->bizExtendShrink_ == nullptr && this->flowCode_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline ReadChatFlowShrinkRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtendShrink Field Functions 
    bool hasBizExtendShrink() const { return this->bizExtendShrink_ != nullptr;};
    void deleteBizExtendShrink() { this->bizExtendShrink_ = nullptr;};
    inline string getBizExtendShrink() const { DARABONBA_PTR_GET_DEFAULT(bizExtendShrink_, "") };
    inline ReadChatFlowShrinkRequest& setBizExtendShrink(string bizExtendShrink) { DARABONBA_PTR_SET_VALUE(bizExtendShrink_, bizExtendShrink) };


    // flowCode Field Functions 
    bool hasFlowCode() const { return this->flowCode_ != nullptr;};
    void deleteFlowCode() { this->flowCode_ = nullptr;};
    inline string getFlowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
    inline ReadChatFlowShrinkRequest& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ReadChatFlowShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ReadChatFlowShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ReadChatFlowShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Business tenant code, default is “ALICOM_OPAAS”.
    shared_ptr<string> bizCode_ {};
    // Business extension information, default is “{}”.
    shared_ptr<string> bizExtendShrink_ {};
    // Flow code.
    shared_ptr<string> flowCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
