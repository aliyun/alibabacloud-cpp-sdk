// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomHotTopicBroadcastJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomHotTopicBroadcastJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotTopicBroadcastConfig, hotTopicBroadcastConfig_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomHotTopicBroadcastJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotTopicBroadcastConfig, hotTopicBroadcastConfig_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitCustomHotTopicBroadcastJobRequest() = default ;
    SubmitCustomHotTopicBroadcastJobRequest(const SubmitCustomHotTopicBroadcastJobRequest &) = default ;
    SubmitCustomHotTopicBroadcastJobRequest(SubmitCustomHotTopicBroadcastJobRequest &&) = default ;
    SubmitCustomHotTopicBroadcastJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomHotTopicBroadcastJobRequest() = default ;
    SubmitCustomHotTopicBroadcastJobRequest& operator=(const SubmitCustomHotTopicBroadcastJobRequest &) = default ;
    SubmitCustomHotTopicBroadcastJobRequest& operator=(SubmitCustomHotTopicBroadcastJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotTopicBroadcastConfig_ == nullptr
        && return this->hotTopicVersion_ == nullptr && return this->topics_ == nullptr && return this->workspaceId_ == nullptr; };
    // hotTopicBroadcastConfig Field Functions 
    bool hasHotTopicBroadcastConfig() const { return this->hotTopicBroadcastConfig_ != nullptr;};
    void deleteHotTopicBroadcastConfig() { this->hotTopicBroadcastConfig_ = nullptr;};
    inline const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig & hotTopicBroadcastConfig() const { DARABONBA_PTR_GET_CONST(hotTopicBroadcastConfig_, SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig hotTopicBroadcastConfig() { DARABONBA_PTR_GET(hotTopicBroadcastConfig_, SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setHotTopicBroadcastConfig(const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig & hotTopicBroadcastConfig) { DARABONBA_PTR_SET_VALUE(hotTopicBroadcastConfig_, hotTopicBroadcastConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setHotTopicBroadcastConfig(SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig && hotTopicBroadcastConfig) { DARABONBA_PTR_SET_RVALUE(hotTopicBroadcastConfig_, hotTopicBroadcastConfig) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline SubmitCustomHotTopicBroadcastJobRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline SubmitCustomHotTopicBroadcastJobRequest& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitCustomHotTopicBroadcastJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig> hotTopicBroadcastConfig_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<vector<string>> topics_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
