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
    };
    friend void from_json(const Darabonba::Json& j, ChatWithKnowledgeBaseStreamShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IncludeKnowledgeBaseResults, includeKnowledgeBaseResults_);
      DARABONBA_PTR_FROM_JSON(KnowledgeParams, knowledgeParamsShrink_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParamsShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromptParams, promptParams_);
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
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->includeKnowledgeBaseResults_ != nullptr && this->knowledgeParamsShrink_ != nullptr && this->modelParamsShrink_ != nullptr && this->ownerId_ != nullptr && this->promptParams_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // includeKnowledgeBaseResults Field Functions 
    bool hasIncludeKnowledgeBaseResults() const { return this->includeKnowledgeBaseResults_ != nullptr;};
    void deleteIncludeKnowledgeBaseResults() { this->includeKnowledgeBaseResults_ = nullptr;};
    inline bool includeKnowledgeBaseResults() const { DARABONBA_PTR_GET_DEFAULT(includeKnowledgeBaseResults_, false) };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setIncludeKnowledgeBaseResults(bool includeKnowledgeBaseResults) { DARABONBA_PTR_SET_VALUE(includeKnowledgeBaseResults_, includeKnowledgeBaseResults) };


    // knowledgeParamsShrink Field Functions 
    bool hasKnowledgeParamsShrink() const { return this->knowledgeParamsShrink_ != nullptr;};
    void deleteKnowledgeParamsShrink() { this->knowledgeParamsShrink_ = nullptr;};
    inline string knowledgeParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeParamsShrink_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setKnowledgeParamsShrink(string knowledgeParamsShrink) { DARABONBA_PTR_SET_VALUE(knowledgeParamsShrink_, knowledgeParamsShrink) };


    // modelParamsShrink Field Functions 
    bool hasModelParamsShrink() const { return this->modelParamsShrink_ != nullptr;};
    void deleteModelParamsShrink() { this->modelParamsShrink_ = nullptr;};
    inline string modelParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(modelParamsShrink_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setModelParamsShrink(string modelParamsShrink) { DARABONBA_PTR_SET_VALUE(modelParamsShrink_, modelParamsShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promptParams Field Functions 
    bool hasPromptParams() const { return this->promptParams_ != nullptr;};
    void deletePromptParams() { this->promptParams_ = nullptr;};
    inline string promptParams() const { DARABONBA_PTR_GET_DEFAULT(promptParams_, "") };
    inline ChatWithKnowledgeBaseStreamShrinkRequest& setPromptParams(string promptParams) { DARABONBA_PTR_SET_VALUE(promptParams_, promptParams) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<bool> includeKnowledgeBaseResults_ = nullptr;
    std::shared_ptr<string> knowledgeParamsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelParamsShrink_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> promptParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
