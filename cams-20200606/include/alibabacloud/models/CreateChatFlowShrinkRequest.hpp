// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class CreateChatFlowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatFlowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(BizExtend, bizExtendShrink_);
      DARABONBA_PTR_TO_JSON(CreateFromFlowCode, createFromFlowCode_);
      DARABONBA_PTR_TO_JSON(CreateFromFlowVersion, createFromFlowVersion_);
      DARABONBA_PTR_TO_JSON(FlowTriggerType, flowTriggerType_);
      DARABONBA_PTR_TO_JSON(LifeCycleExtendData, lifeCycleExtendDataShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatFlowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(BizExtend, bizExtendShrink_);
      DARABONBA_PTR_FROM_JSON(CreateFromFlowCode, createFromFlowCode_);
      DARABONBA_PTR_FROM_JSON(CreateFromFlowVersion, createFromFlowVersion_);
      DARABONBA_PTR_FROM_JSON(FlowTriggerType, flowTriggerType_);
      DARABONBA_PTR_FROM_JSON(LifeCycleExtendData, lifeCycleExtendDataShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateChatFlowShrinkRequest() = default ;
    CreateChatFlowShrinkRequest(const CreateChatFlowShrinkRequest &) = default ;
    CreateChatFlowShrinkRequest(CreateChatFlowShrinkRequest &&) = default ;
    CreateChatFlowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatFlowShrinkRequest() = default ;
    CreateChatFlowShrinkRequest& operator=(const CreateChatFlowShrinkRequest &) = default ;
    CreateChatFlowShrinkRequest& operator=(CreateChatFlowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && this->bizExtendShrink_ == nullptr && this->createFromFlowCode_ == nullptr && this->createFromFlowVersion_ == nullptr && this->flowTriggerType_ == nullptr && this->lifeCycleExtendDataShrink_ == nullptr
        && this->ownerId_ == nullptr && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->title_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string getBizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline CreateChatFlowShrinkRequest& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // bizExtendShrink Field Functions 
    bool hasBizExtendShrink() const { return this->bizExtendShrink_ != nullptr;};
    void deleteBizExtendShrink() { this->bizExtendShrink_ = nullptr;};
    inline string getBizExtendShrink() const { DARABONBA_PTR_GET_DEFAULT(bizExtendShrink_, "") };
    inline CreateChatFlowShrinkRequest& setBizExtendShrink(string bizExtendShrink) { DARABONBA_PTR_SET_VALUE(bizExtendShrink_, bizExtendShrink) };


    // createFromFlowCode Field Functions 
    bool hasCreateFromFlowCode() const { return this->createFromFlowCode_ != nullptr;};
    void deleteCreateFromFlowCode() { this->createFromFlowCode_ = nullptr;};
    inline string getCreateFromFlowCode() const { DARABONBA_PTR_GET_DEFAULT(createFromFlowCode_, "") };
    inline CreateChatFlowShrinkRequest& setCreateFromFlowCode(string createFromFlowCode) { DARABONBA_PTR_SET_VALUE(createFromFlowCode_, createFromFlowCode) };


    // createFromFlowVersion Field Functions 
    bool hasCreateFromFlowVersion() const { return this->createFromFlowVersion_ != nullptr;};
    void deleteCreateFromFlowVersion() { this->createFromFlowVersion_ = nullptr;};
    inline string getCreateFromFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(createFromFlowVersion_, "") };
    inline CreateChatFlowShrinkRequest& setCreateFromFlowVersion(string createFromFlowVersion) { DARABONBA_PTR_SET_VALUE(createFromFlowVersion_, createFromFlowVersion) };


    // flowTriggerType Field Functions 
    bool hasFlowTriggerType() const { return this->flowTriggerType_ != nullptr;};
    void deleteFlowTriggerType() { this->flowTriggerType_ = nullptr;};
    inline string getFlowTriggerType() const { DARABONBA_PTR_GET_DEFAULT(flowTriggerType_, "") };
    inline CreateChatFlowShrinkRequest& setFlowTriggerType(string flowTriggerType) { DARABONBA_PTR_SET_VALUE(flowTriggerType_, flowTriggerType) };


    // lifeCycleExtendDataShrink Field Functions 
    bool hasLifeCycleExtendDataShrink() const { return this->lifeCycleExtendDataShrink_ != nullptr;};
    void deleteLifeCycleExtendDataShrink() { this->lifeCycleExtendDataShrink_ = nullptr;};
    inline string getLifeCycleExtendDataShrink() const { DARABONBA_PTR_GET_DEFAULT(lifeCycleExtendDataShrink_, "") };
    inline CreateChatFlowShrinkRequest& setLifeCycleExtendDataShrink(string lifeCycleExtendDataShrink) { DARABONBA_PTR_SET_VALUE(lifeCycleExtendDataShrink_, lifeCycleExtendDataShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateChatFlowShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateChatFlowShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateChatFlowShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateChatFlowShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateChatFlowShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The business tenant code. Default value: ALICOM_OPAAS.
    shared_ptr<string> bizCode_ {};
    // The business extension information. Default value: an empty collection.
    shared_ptr<string> bizExtendShrink_ {};
    // The source flowCode for creation.
    shared_ptr<string> createFromFlowCode_ {};
    // The source flowVersion for creation.
    shared_ptr<string> createFromFlowVersion_ {};
    // The flow trigger type. Valid values:
    //  - TriggeredManually
    // - TriggeredByWhatsApp
    // - TriggeredByMessenger
    // - TriggeredByInstagram
    // - TriggeredByViber
    shared_ptr<string> flowTriggerType_ {};
    // The lifecycle extension input parameters.
    shared_ptr<string> lifeCycleExtendDataShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The flow remarks.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The flow title.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
