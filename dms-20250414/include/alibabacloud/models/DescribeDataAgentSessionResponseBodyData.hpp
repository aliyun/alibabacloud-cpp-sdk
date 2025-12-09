// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDataAgentSessionResponseBodyDataChatHistoryLocations.hpp>
#include <alibabacloud/models/DescribeDataAgentSessionResponseBodyDataSessionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDataAgentSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(ChatHistoryLocations, chatHistoryLocations_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Saved, saved_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(ChatHistoryLocations, chatHistoryLocations_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Saved, saved_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeDataAgentSessionResponseBodyData() = default ;
    DescribeDataAgentSessionResponseBodyData(const DescribeDataAgentSessionResponseBodyData &) = default ;
    DescribeDataAgentSessionResponseBodyData(DescribeDataAgentSessionResponseBodyData &&) = default ;
    DescribeDataAgentSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentSessionResponseBodyData() = default ;
    DescribeDataAgentSessionResponseBodyData& operator=(const DescribeDataAgentSessionResponseBodyData &) = default ;
    DescribeDataAgentSessionResponseBodyData& operator=(DescribeDataAgentSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentStatus_ == nullptr && return this->chatHistoryLocations_ == nullptr && return this->createTime_ == nullptr && return this->favoriteInWorkspace_ == nullptr && return this->file_ == nullptr
        && return this->saved_ == nullptr && return this->sessionConfig_ == nullptr && return this->sessionId_ == nullptr && return this->sessionStatus_ == nullptr && return this->title_ == nullptr
        && return this->userId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // chatHistoryLocations Field Functions 
    bool hasChatHistoryLocations() const { return this->chatHistoryLocations_ != nullptr;};
    void deleteChatHistoryLocations() { this->chatHistoryLocations_ = nullptr;};
    inline const vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations> & chatHistoryLocations() const { DARABONBA_PTR_GET_CONST(chatHistoryLocations_, vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations>) };
    inline vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations> chatHistoryLocations() { DARABONBA_PTR_GET(chatHistoryLocations_, vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations>) };
    inline DescribeDataAgentSessionResponseBodyData& setChatHistoryLocations(const vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations> & chatHistoryLocations) { DARABONBA_PTR_SET_VALUE(chatHistoryLocations_, chatHistoryLocations) };
    inline DescribeDataAgentSessionResponseBodyData& setChatHistoryLocations(vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations> && chatHistoryLocations) { DARABONBA_PTR_SET_RVALUE(chatHistoryLocations_, chatHistoryLocations) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeDataAgentSessionResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // favoriteInWorkspace Field Functions 
    bool hasFavoriteInWorkspace() const { return this->favoriteInWorkspace_ != nullptr;};
    void deleteFavoriteInWorkspace() { this->favoriteInWorkspace_ = nullptr;};
    inline string favoriteInWorkspace() const { DARABONBA_PTR_GET_DEFAULT(favoriteInWorkspace_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setFavoriteInWorkspace(string favoriteInWorkspace) { DARABONBA_PTR_SET_VALUE(favoriteInWorkspace_, favoriteInWorkspace) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // saved Field Functions 
    bool hasSaved() const { return this->saved_ != nullptr;};
    void deleteSaved() { this->saved_ = nullptr;};
    inline bool saved() const { DARABONBA_PTR_GET_DEFAULT(saved_, false) };
    inline DescribeDataAgentSessionResponseBodyData& setSaved(bool saved) { DARABONBA_PTR_SET_VALUE(saved_, saved) };


    // sessionConfig Field Functions 
    bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
    void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
    inline const Models::DescribeDataAgentSessionResponseBodyDataSessionConfig & sessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, Models::DescribeDataAgentSessionResponseBodyDataSessionConfig) };
    inline Models::DescribeDataAgentSessionResponseBodyDataSessionConfig sessionConfig() { DARABONBA_PTR_GET(sessionConfig_, Models::DescribeDataAgentSessionResponseBodyDataSessionConfig) };
    inline DescribeDataAgentSessionResponseBodyData& setSessionConfig(const Models::DescribeDataAgentSessionResponseBodyDataSessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
    inline DescribeDataAgentSessionResponseBodyData& setSessionConfig(Models::DescribeDataAgentSessionResponseBodyDataSessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeDataAgentSessionResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentStatus_ = nullptr;
    std::shared_ptr<vector<Models::DescribeDataAgentSessionResponseBodyDataChatHistoryLocations>> chatHistoryLocations_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> favoriteInWorkspace_ = nullptr;
    std::shared_ptr<string> file_ = nullptr;
    std::shared_ptr<bool> saved_ = nullptr;
    std::shared_ptr<Models::DescribeDataAgentSessionResponseBodyDataSessionConfig> sessionConfig_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> sessionStatus_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
