// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMBOTINFO_HPP_
#define ALIBABACLOUD_MODELS_IMBOTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IMBotMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class IMBotInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IMBotInfo& obj) { 
      DARABONBA_PTR_TO_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_TO_JSON(botBizId, botBizId_);
      DARABONBA_PTR_TO_JSON(botBizType, botBizType_);
      DARABONBA_PTR_TO_JSON(botMode, botMode_);
      DARABONBA_PTR_TO_JSON(botName, botName_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(currentInstances, currentInstances_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(imChannelServerResourceName, imChannelServerResourceName_);
      DARABONBA_PTR_TO_JSON(lastMessageTime, lastMessageTime_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, IMBotInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(agentRuntimeId, agentRuntimeId_);
      DARABONBA_PTR_FROM_JSON(botBizId, botBizId_);
      DARABONBA_PTR_FROM_JSON(botBizType, botBizType_);
      DARABONBA_PTR_FROM_JSON(botMode, botMode_);
      DARABONBA_PTR_FROM_JSON(botName, botName_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(currentInstances, currentInstances_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(imChannelServerResourceName, imChannelServerResourceName_);
      DARABONBA_PTR_FROM_JSON(lastMessageTime, lastMessageTime_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    IMBotInfo() = default ;
    IMBotInfo(const IMBotInfo &) = default ;
    IMBotInfo(IMBotInfo &&) = default ;
    IMBotInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IMBotInfo() = default ;
    IMBotInfo& operator=(const IMBotInfo &) = default ;
    IMBotInfo& operator=(IMBotInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentRuntimeId_ == nullptr
        && this->botBizId_ == nullptr && this->botBizType_ == nullptr && this->botMode_ == nullptr && this->botName_ == nullptr && this->createdAt_ == nullptr
        && this->currentInstances_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->imChannelServerResourceName_ == nullptr && this->lastMessageTime_ == nullptr
        && this->metadata_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->updatedAt_ == nullptr; };
    // agentRuntimeId Field Functions 
    bool hasAgentRuntimeId() const { return this->agentRuntimeId_ != nullptr;};
    void deleteAgentRuntimeId() { this->agentRuntimeId_ = nullptr;};
    inline string getAgentRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(agentRuntimeId_, "") };
    inline IMBotInfo& setAgentRuntimeId(string agentRuntimeId) { DARABONBA_PTR_SET_VALUE(agentRuntimeId_, agentRuntimeId) };


    // botBizId Field Functions 
    bool hasBotBizId() const { return this->botBizId_ != nullptr;};
    void deleteBotBizId() { this->botBizId_ = nullptr;};
    inline string getBotBizId() const { DARABONBA_PTR_GET_DEFAULT(botBizId_, "") };
    inline IMBotInfo& setBotBizId(string botBizId) { DARABONBA_PTR_SET_VALUE(botBizId_, botBizId) };


    // botBizType Field Functions 
    bool hasBotBizType() const { return this->botBizType_ != nullptr;};
    void deleteBotBizType() { this->botBizType_ = nullptr;};
    inline string getBotBizType() const { DARABONBA_PTR_GET_DEFAULT(botBizType_, "") };
    inline IMBotInfo& setBotBizType(string botBizType) { DARABONBA_PTR_SET_VALUE(botBizType_, botBizType) };


    // botMode Field Functions 
    bool hasBotMode() const { return this->botMode_ != nullptr;};
    void deleteBotMode() { this->botMode_ = nullptr;};
    inline string getBotMode() const { DARABONBA_PTR_GET_DEFAULT(botMode_, "") };
    inline IMBotInfo& setBotMode(string botMode) { DARABONBA_PTR_SET_VALUE(botMode_, botMode) };


    // botName Field Functions 
    bool hasBotName() const { return this->botName_ != nullptr;};
    void deleteBotName() { this->botName_ = nullptr;};
    inline string getBotName() const { DARABONBA_PTR_GET_DEFAULT(botName_, "") };
    inline IMBotInfo& setBotName(string botName) { DARABONBA_PTR_SET_VALUE(botName_, botName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline IMBotInfo& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // currentInstances Field Functions 
    bool hasCurrentInstances() const { return this->currentInstances_ != nullptr;};
    void deleteCurrentInstances() { this->currentInstances_ = nullptr;};
    inline int64_t getCurrentInstances() const { DARABONBA_PTR_GET_DEFAULT(currentInstances_, 0L) };
    inline IMBotInfo& setCurrentInstances(int64_t currentInstances) { DARABONBA_PTR_SET_VALUE(currentInstances_, currentInstances) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IMBotInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline IMBotInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imChannelServerResourceName Field Functions 
    bool hasImChannelServerResourceName() const { return this->imChannelServerResourceName_ != nullptr;};
    void deleteImChannelServerResourceName() { this->imChannelServerResourceName_ = nullptr;};
    inline string getImChannelServerResourceName() const { DARABONBA_PTR_GET_DEFAULT(imChannelServerResourceName_, "") };
    inline IMBotInfo& setImChannelServerResourceName(string imChannelServerResourceName) { DARABONBA_PTR_SET_VALUE(imChannelServerResourceName_, imChannelServerResourceName) };


    // lastMessageTime Field Functions 
    bool hasLastMessageTime() const { return this->lastMessageTime_ != nullptr;};
    void deleteLastMessageTime() { this->lastMessageTime_ = nullptr;};
    inline string getLastMessageTime() const { DARABONBA_PTR_GET_DEFAULT(lastMessageTime_, "") };
    inline IMBotInfo& setLastMessageTime(string lastMessageTime) { DARABONBA_PTR_SET_VALUE(lastMessageTime_, lastMessageTime) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const IMBotMetadata & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, IMBotMetadata) };
    inline IMBotMetadata getMetadata() { DARABONBA_PTR_GET(metadata_, IMBotMetadata) };
    inline IMBotInfo& setMetadata(const IMBotMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline IMBotInfo& setMetadata(IMBotMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline IMBotInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline IMBotInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline IMBotInfo& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> agentRuntimeId_ {};
    shared_ptr<string> botBizId_ {};
    // dingtalk、wecom、feishu、custom
    shared_ptr<string> botBizType_ {};
    // standard、custom
    shared_ptr<string> botMode_ {};
    shared_ptr<string> botName_ {};
    shared_ptr<string> createdAt_ {};
    // 可选；来自账号元数据 scaling.currentInstances，同一租户下各 Bot 响应中值相同
    shared_ptr<int64_t> currentInstances_ {};
    // Bot 描述信息
    shared_ptr<string> description_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> imChannelServerResourceName_ {};
    // 可选
    shared_ptr<string> lastMessageTime_ {};
    shared_ptr<IMBotMetadata> metadata_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
