// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestKnowledgeParams.hpp>
#include <alibabacloud/models/ChatWithKnowledgeBaseRequestModelParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_TO_JSON(KnowledgeParams, knowledgeParams_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PromptParams, promptParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_FROM_JSON(KnowledgeParams, knowledgeParams_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromptParams, promptParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ChatWithKnowledgeBaseRequest() = default ;
    ChatWithKnowledgeBaseRequest(const ChatWithKnowledgeBaseRequest &) = default ;
    ChatWithKnowledgeBaseRequest(ChatWithKnowledgeBaseRequest &&) = default ;
    ChatWithKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseRequest() = default ;
    ChatWithKnowledgeBaseRequest& operator=(const ChatWithKnowledgeBaseRequest &) = default ;
    ChatWithKnowledgeBaseRequest& operator=(ChatWithKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->includeKnowledgeBaseResults_ == nullptr && return this->knowledgeParams_ == nullptr && return this->modelParams_ == nullptr && return this->ownerId_ == nullptr && return this->promptParams_ == nullptr
        && return this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ChatWithKnowledgeBaseRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // includeKnowledgeBaseResults Field Functions 
    bool hasIncludeKnowledgeBaseResults() const { return this->includeKnowledgeBaseResults_ != nullptr;};
    void deleteIncludeKnowledgeBaseResults() { this->includeKnowledgeBaseResults_ = nullptr;};
    inline bool includeKnowledgeBaseResults() const { DARABONBA_PTR_GET_DEFAULT(includeKnowledgeBaseResults_, false) };
    inline ChatWithKnowledgeBaseRequest& setIncludeKnowledgeBaseResults(bool includeKnowledgeBaseResults) { DARABONBA_PTR_SET_VALUE(includeKnowledgeBaseResults_, includeKnowledgeBaseResults) };


    // knowledgeParams Field Functions 
    bool hasKnowledgeParams() const { return this->knowledgeParams_ != nullptr;};
    void deleteKnowledgeParams() { this->knowledgeParams_ = nullptr;};
    inline const ChatWithKnowledgeBaseRequestKnowledgeParams & knowledgeParams() const { DARABONBA_PTR_GET_CONST(knowledgeParams_, ChatWithKnowledgeBaseRequestKnowledgeParams) };
    inline ChatWithKnowledgeBaseRequestKnowledgeParams knowledgeParams() { DARABONBA_PTR_GET(knowledgeParams_, ChatWithKnowledgeBaseRequestKnowledgeParams) };
    inline ChatWithKnowledgeBaseRequest& setKnowledgeParams(const ChatWithKnowledgeBaseRequestKnowledgeParams & knowledgeParams) { DARABONBA_PTR_SET_VALUE(knowledgeParams_, knowledgeParams) };
    inline ChatWithKnowledgeBaseRequest& setKnowledgeParams(ChatWithKnowledgeBaseRequestKnowledgeParams && knowledgeParams) { DARABONBA_PTR_SET_RVALUE(knowledgeParams_, knowledgeParams) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline const ChatWithKnowledgeBaseRequestModelParams & modelParams() const { DARABONBA_PTR_GET_CONST(modelParams_, ChatWithKnowledgeBaseRequestModelParams) };
    inline ChatWithKnowledgeBaseRequestModelParams modelParams() { DARABONBA_PTR_GET(modelParams_, ChatWithKnowledgeBaseRequestModelParams) };
    inline ChatWithKnowledgeBaseRequest& setModelParams(const ChatWithKnowledgeBaseRequestModelParams & modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };
    inline ChatWithKnowledgeBaseRequest& setModelParams(ChatWithKnowledgeBaseRequestModelParams && modelParams) { DARABONBA_PTR_SET_RVALUE(modelParams_, modelParams) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChatWithKnowledgeBaseRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promptParams Field Functions 
    bool hasPromptParams() const { return this->promptParams_ != nullptr;};
    void deletePromptParams() { this->promptParams_ = nullptr;};
    inline string promptParams() const { DARABONBA_PTR_GET_DEFAULT(promptParams_, "") };
    inline ChatWithKnowledgeBaseRequest& setPromptParams(string promptParams) { DARABONBA_PTR_SET_VALUE(promptParams_, promptParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChatWithKnowledgeBaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Whether to return the retrieved result. Default value: false.
    std::shared_ptr<bool> includeKnowledgeBaseResults_ = nullptr;
    // The knowledge retrieval parameter object. If you do not specify this parameter, only chat mode is enabled.
    std::shared_ptr<ChatWithKnowledgeBaseRequestKnowledgeParams> knowledgeParams_ = nullptr;
    // The Large Language Model (LLM) invocation parameter object.
    // 
    // This parameter is required.
    std::shared_ptr<ChatWithKnowledgeBaseRequestModelParams> modelParams_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The system prompt template, which should include {{ text_chunks }},{{ user_system_prompt }},{{ graph_entities },{{ graph_relations }}. If any of these placeholders are not specified, the corresponding section should have no effect.
    std::shared_ptr<string> promptParams_ = nullptr;
    // 实例所在的地域ID
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
