// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTRECOVERCALLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AGENTRECOVERCALLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AgentRecoverCallShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentRecoverCallShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_TO_JSON(BeginImportTime, beginImportTime_);
      DARABONBA_PTR_TO_JSON(EndImportTime, endImportTime_);
      DARABONBA_PTR_TO_JSON(Numbers, numbersShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AgentRecoverCallShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentTag, agentTag_);
      DARABONBA_PTR_FROM_JSON(BeginImportTime, beginImportTime_);
      DARABONBA_PTR_FROM_JSON(EndImportTime, endImportTime_);
      DARABONBA_PTR_FROM_JSON(Numbers, numbersShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    AgentRecoverCallShrinkRequest() = default ;
    AgentRecoverCallShrinkRequest(const AgentRecoverCallShrinkRequest &) = default ;
    AgentRecoverCallShrinkRequest(AgentRecoverCallShrinkRequest &&) = default ;
    AgentRecoverCallShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentRecoverCallShrinkRequest() = default ;
    AgentRecoverCallShrinkRequest& operator=(const AgentRecoverCallShrinkRequest &) = default ;
    AgentRecoverCallShrinkRequest& operator=(AgentRecoverCallShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentTag_ == nullptr && this->beginImportTime_ == nullptr && this->endImportTime_ == nullptr && this->numbersShrink_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tagsShrink_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline AgentRecoverCallShrinkRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentTag Field Functions 
    bool hasAgentTag() const { return this->agentTag_ != nullptr;};
    void deleteAgentTag() { this->agentTag_ = nullptr;};
    inline string getAgentTag() const { DARABONBA_PTR_GET_DEFAULT(agentTag_, "") };
    inline AgentRecoverCallShrinkRequest& setAgentTag(string agentTag) { DARABONBA_PTR_SET_VALUE(agentTag_, agentTag) };


    // beginImportTime Field Functions 
    bool hasBeginImportTime() const { return this->beginImportTime_ != nullptr;};
    void deleteBeginImportTime() { this->beginImportTime_ = nullptr;};
    inline string getBeginImportTime() const { DARABONBA_PTR_GET_DEFAULT(beginImportTime_, "") };
    inline AgentRecoverCallShrinkRequest& setBeginImportTime(string beginImportTime) { DARABONBA_PTR_SET_VALUE(beginImportTime_, beginImportTime) };


    // endImportTime Field Functions 
    bool hasEndImportTime() const { return this->endImportTime_ != nullptr;};
    void deleteEndImportTime() { this->endImportTime_ = nullptr;};
    inline string getEndImportTime() const { DARABONBA_PTR_GET_DEFAULT(endImportTime_, "") };
    inline AgentRecoverCallShrinkRequest& setEndImportTime(string endImportTime) { DARABONBA_PTR_SET_VALUE(endImportTime_, endImportTime) };


    // numbersShrink Field Functions 
    bool hasNumbersShrink() const { return this->numbersShrink_ != nullptr;};
    void deleteNumbersShrink() { this->numbersShrink_ = nullptr;};
    inline string getNumbersShrink() const { DARABONBA_PTR_GET_DEFAULT(numbersShrink_, "") };
    inline AgentRecoverCallShrinkRequest& setNumbersShrink(string numbersShrink) { DARABONBA_PTR_SET_VALUE(numbersShrink_, numbersShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AgentRecoverCallShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AgentRecoverCallShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AgentRecoverCallShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline AgentRecoverCallShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // 坐席ID
    shared_ptr<int64_t> agentId_ {};
    // 坐席标签
    shared_ptr<string> agentTag_ {};
    // 查询开始导入时间
    shared_ptr<string> beginImportTime_ {};
    // 查询结束导入时间
    shared_ptr<string> endImportTime_ {};
    // 号码列表
    shared_ptr<string> numbersShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 用户自定义标签列表
    shared_ptr<string> tagsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
