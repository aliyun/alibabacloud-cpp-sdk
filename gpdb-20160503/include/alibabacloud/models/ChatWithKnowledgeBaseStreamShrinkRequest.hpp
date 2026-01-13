// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHKNOWLEDGEBASESTREAMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ChatWithKnowledgeBaseStreamShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithKnowledgeBaseStreamShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_TO_JSON(KnowledgeParams, knowledgeParamsShrink_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParamsShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PromptParams, promptParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_FROM_JSON(KnowledgeParams, knowledgeParamsShrink_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParamsShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromptParams, promptParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ChatWithKnowledgeBaseStreamShrinkRequest() = default ;
    ChatWithKnowledgeBaseStreamShrinkRequest(const ChatWithKnowledgeBaseStreamShrinkRequest &) = default ;
    ChatWithKnowledgeBaseStreamShrinkRequest(ChatWithKnowledgeBaseStreamShrinkRequest &&) = default ;
    ChatWithKnowledgeBaseStreamShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithKnowledgeBaseStreamShrinkRequest() = default ;
    ChatWithKnowledgeBaseStreamShrinkRequest& operator=(const ChatWithKnowledgeBaseStreamShrinkRequest &) = default ;
    ChatWithKnowledgeBaseStreamShrinkRequest& operator=(ChatWithKnowledgeBaseStreamShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->includeKnowledgeBaseResults_ == nullptr && this->knowledgeParamsShrink_ == nullptr && this->modelParamsShrink_ == nullptr && this->ownerId_ == nullptr && this->promptParams_ == nullptr
        && this->regionId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // includeKnowledgeBaseResults Field Functions 
    bool hasIncludeKnowledgeBaseResults() const { return this->includeKnowledgeBaseResults_ != nullptr;};
    void deleteIncludeKnowledgeBaseResults() { this->includeKnowledgeBaseResults_ = nullptr;};
    inline bool getIncludeKnowledgeBaseResults() const { DARABONBA_PTR_GET_DEFAULT(includeKnowledgeBaseResults_, false) };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setIncludeKnowledgeBaseResults(bool includeKnowledgeBaseResults) { DARABONBA_PTR_SET_VALUE(includeKnowledgeBaseResults_, includeKnowledgeBaseResults) };


    // knowledgeParamsShrink Field Functions 
    bool hasKnowledgeParamsShrink() const { return this->knowledgeParamsShrink_ != nullptr;};
    void deleteKnowledgeParamsShrink() { this->knowledgeParamsShrink_ = nullptr;};
    inline string getKnowledgeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeParamsShrink_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setKnowledgeParamsShrink(string knowledgeParamsShrink) { DARABONBA_PTR_SET_VALUE(knowledgeParamsShrink_, knowledgeParamsShrink) };


    // modelParamsShrink Field Functions 
    bool hasModelParamsShrink() const { return this->modelParamsShrink_ != nullptr;};
    void deleteModelParamsShrink() { this->modelParamsShrink_ = nullptr;};
    inline string getModelParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(modelParamsShrink_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setModelParamsShrink(string modelParamsShrink) { DARABONBA_PTR_SET_VALUE(modelParamsShrink_, modelParamsShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promptParams Field Functions 
    bool hasPromptParams() const { return this->promptParams_ != nullptr;};
    void deletePromptParams() { this->promptParams_ = nullptr;};
    inline string getPromptParams() const { DARABONBA_PTR_GET_DEFAULT(promptParams_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setPromptParams(string promptParams) { DARABONBA_PTR_SET_VALUE(promptParams_, promptParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // Whether to return the retrieved result. Default value: false.
    shared_ptr<bool> includeKnowledgeBaseResults_ {};
    // The knowledge retrieval parameter object. If you do not specify this parameter, only chat mode is enabled.
    shared_ptr<string> knowledgeParamsShrink_ {};
    // The Large Language Model (LLM) invocation parameter object.
    // 
    // This parameter is required.
    shared_ptr<string> modelParamsShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The system prompt template, which should include {{ text_chunks }},{{ user_system_prompt }},{{ graph_entities },{{ graph_relations }}. If any of these placeholders are not specified, the corresponding section should have no effect.
    shared_ptr<string> promptParams_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
