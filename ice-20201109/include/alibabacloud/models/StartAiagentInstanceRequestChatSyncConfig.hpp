// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCEREQUESTCHATSYNCCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAIAGENTINSTANCEREQUESTCHATSYNCCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartAIAgentInstanceRequestChatSyncConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIAgentInstanceRequestChatSyncConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IMAIAgentId, IMAIAgentId_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIAgentInstanceRequestChatSyncConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IMAIAgentId, IMAIAgentId_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
    };
    StartAIAgentInstanceRequestChatSyncConfig() = default ;
    StartAIAgentInstanceRequestChatSyncConfig(const StartAIAgentInstanceRequestChatSyncConfig &) = default ;
    StartAIAgentInstanceRequestChatSyncConfig(StartAIAgentInstanceRequestChatSyncConfig &&) = default ;
    StartAIAgentInstanceRequestChatSyncConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIAgentInstanceRequestChatSyncConfig() = default ;
    StartAIAgentInstanceRequestChatSyncConfig& operator=(const StartAIAgentInstanceRequestChatSyncConfig &) = default ;
    StartAIAgentInstanceRequestChatSyncConfig& operator=(StartAIAgentInstanceRequestChatSyncConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IMAIAgentId_ != nullptr
        && this->receiverId_ != nullptr; };
    // IMAIAgentId Field Functions 
    bool hasIMAIAgentId() const { return this->IMAIAgentId_ != nullptr;};
    void deleteIMAIAgentId() { this->IMAIAgentId_ = nullptr;};
    inline string IMAIAgentId() const { DARABONBA_PTR_GET_DEFAULT(IMAIAgentId_, "") };
    inline StartAIAgentInstanceRequestChatSyncConfig& setIMAIAgentId(string IMAIAgentId) { DARABONBA_PTR_SET_VALUE(IMAIAgentId_, IMAIAgentId) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline string receiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, "") };
    inline StartAIAgentInstanceRequestChatSyncConfig& setReceiverId(string receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


  protected:
    // IM的智能体Id。
    std::shared_ptr<string> IMAIAgentId_ = nullptr;
    // 接收用户Id。
    std::shared_ptr<string> receiverId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
