// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataAgentSessionResponseBodyDataSessionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class CreateDataAgentSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(Saved, saved_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(Saved, saved_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CreateDataAgentSessionResponseBodyData() = default ;
    CreateDataAgentSessionResponseBodyData(const CreateDataAgentSessionResponseBodyData &) = default ;
    CreateDataAgentSessionResponseBodyData(CreateDataAgentSessionResponseBodyData &&) = default ;
    CreateDataAgentSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSessionResponseBodyData() = default ;
    CreateDataAgentSessionResponseBodyData& operator=(const CreateDataAgentSessionResponseBodyData &) = default ;
    CreateDataAgentSessionResponseBodyData& operator=(CreateDataAgentSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentStatus_ == nullptr && return this->createTime_ == nullptr && return this->file_ == nullptr && return this->saved_ == nullptr && return this->sessionConfig_ == nullptr
        && return this->sessionId_ == nullptr && return this->sessionStatus_ == nullptr && return this->title_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateDataAgentSessionResponseBodyData& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline CreateDataAgentSessionResponseBodyData& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateDataAgentSessionResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string file() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline CreateDataAgentSessionResponseBodyData& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // saved Field Functions 
    bool hasSaved() const { return this->saved_ != nullptr;};
    void deleteSaved() { this->saved_ = nullptr;};
    inline bool saved() const { DARABONBA_PTR_GET_DEFAULT(saved_, false) };
    inline CreateDataAgentSessionResponseBodyData& setSaved(bool saved) { DARABONBA_PTR_SET_VALUE(saved_, saved) };


    // sessionConfig Field Functions 
    bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
    void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
    inline const Models::CreateDataAgentSessionResponseBodyDataSessionConfig & sessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, Models::CreateDataAgentSessionResponseBodyDataSessionConfig) };
    inline Models::CreateDataAgentSessionResponseBodyDataSessionConfig sessionConfig() { DARABONBA_PTR_GET(sessionConfig_, Models::CreateDataAgentSessionResponseBodyDataSessionConfig) };
    inline CreateDataAgentSessionResponseBodyData& setSessionConfig(const Models::CreateDataAgentSessionResponseBodyDataSessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
    inline CreateDataAgentSessionResponseBodyData& setSessionConfig(Models::CreateDataAgentSessionResponseBodyDataSessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateDataAgentSessionResponseBodyData& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline string sessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
    inline CreateDataAgentSessionResponseBodyData& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateDataAgentSessionResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Agent Id
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> agentStatus_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> file_ = nullptr;
    std::shared_ptr<bool> saved_ = nullptr;
    std::shared_ptr<Models::CreateDataAgentSessionResponseBodyDataSessionConfig> sessionConfig_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> sessionStatus_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
