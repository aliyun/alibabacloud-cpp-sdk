// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAIPROEMBEDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAIPROEMBEDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ModifyAiproEmbedConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAiproEmbedConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(AiProId, aiProId_);
      DARABONBA_PTR_TO_JSON(ChatHistoryStatus, chatHistoryStatus_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(MemoryEnabled, memoryEnabled_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(UploadEnabled, uploadEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAiproEmbedConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(AiProId, aiProId_);
      DARABONBA_PTR_FROM_JSON(ChatHistoryStatus, chatHistoryStatus_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(MemoryEnabled, memoryEnabled_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(UploadEnabled, uploadEnabled_);
    };
    ModifyAiproEmbedConfigRequest() = default ;
    ModifyAiproEmbedConfigRequest(const ModifyAiproEmbedConfigRequest &) = default ;
    ModifyAiproEmbedConfigRequest(ModifyAiproEmbedConfigRequest &&) = default ;
    ModifyAiproEmbedConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAiproEmbedConfigRequest() = default ;
    ModifyAiproEmbedConfigRequest& operator=(const ModifyAiproEmbedConfigRequest &) = default ;
    ModifyAiproEmbedConfigRequest& operator=(ModifyAiproEmbedConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->aiProId_ == nullptr && this->chatHistoryStatus_ == nullptr && this->config_ == nullptr && this->memoryEnabled_ == nullptr && this->showName_ == nullptr
        && this->uploadEnabled_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ModifyAiproEmbedConfigRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // aiProId Field Functions 
    bool hasAiProId() const { return this->aiProId_ != nullptr;};
    void deleteAiProId() { this->aiProId_ = nullptr;};
    inline string getAiProId() const { DARABONBA_PTR_GET_DEFAULT(aiProId_, "") };
    inline ModifyAiproEmbedConfigRequest& setAiProId(string aiProId) { DARABONBA_PTR_SET_VALUE(aiProId_, aiProId) };


    // chatHistoryStatus Field Functions 
    bool hasChatHistoryStatus() const { return this->chatHistoryStatus_ != nullptr;};
    void deleteChatHistoryStatus() { this->chatHistoryStatus_ = nullptr;};
    inline int32_t getChatHistoryStatus() const { DARABONBA_PTR_GET_DEFAULT(chatHistoryStatus_, 0) };
    inline ModifyAiproEmbedConfigRequest& setChatHistoryStatus(int32_t chatHistoryStatus) { DARABONBA_PTR_SET_VALUE(chatHistoryStatus_, chatHistoryStatus) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyAiproEmbedConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // memoryEnabled Field Functions 
    bool hasMemoryEnabled() const { return this->memoryEnabled_ != nullptr;};
    void deleteMemoryEnabled() { this->memoryEnabled_ = nullptr;};
    inline int32_t getMemoryEnabled() const { DARABONBA_PTR_GET_DEFAULT(memoryEnabled_, 0) };
    inline ModifyAiproEmbedConfigRequest& setMemoryEnabled(int32_t memoryEnabled) { DARABONBA_PTR_SET_VALUE(memoryEnabled_, memoryEnabled) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ModifyAiproEmbedConfigRequest& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // uploadEnabled Field Functions 
    bool hasUploadEnabled() const { return this->uploadEnabled_ != nullptr;};
    void deleteUploadEnabled() { this->uploadEnabled_ = nullptr;};
    inline int32_t getUploadEnabled() const { DARABONBA_PTR_GET_DEFAULT(uploadEnabled_, 0) };
    inline ModifyAiproEmbedConfigRequest& setUploadEnabled(int32_t uploadEnabled) { DARABONBA_PTR_SET_VALUE(uploadEnabled_, uploadEnabled) };


  protected:
    shared_ptr<string> agentName_ {};
    shared_ptr<string> aiProId_ {};
    shared_ptr<int32_t> chatHistoryStatus_ {};
    shared_ptr<string> config_ {};
    shared_ptr<int32_t> memoryEnabled_ {};
    shared_ptr<string> showName_ {};
    shared_ptr<int32_t> uploadEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
