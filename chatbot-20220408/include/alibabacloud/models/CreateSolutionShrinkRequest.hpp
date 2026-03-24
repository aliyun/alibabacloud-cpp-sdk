// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOLUTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOLUTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateSolutionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSolutionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_TO_JSON(TagIdList, tagIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSolutionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(PerspectiveCodes, perspectiveCodes_);
      DARABONBA_PTR_FROM_JSON(TagIdList, tagIdListShrink_);
    };
    CreateSolutionShrinkRequest() = default ;
    CreateSolutionShrinkRequest(const CreateSolutionShrinkRequest &) = default ;
    CreateSolutionShrinkRequest(CreateSolutionShrinkRequest &&) = default ;
    CreateSolutionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSolutionShrinkRequest() = default ;
    CreateSolutionShrinkRequest& operator=(const CreateSolutionShrinkRequest &) = default ;
    CreateSolutionShrinkRequest& operator=(CreateSolutionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->content_ == nullptr && this->contentType_ == nullptr && this->knowledgeId_ == nullptr && this->perspectiveCodes_ == nullptr && this->tagIdListShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateSolutionShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateSolutionShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline int32_t getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, 0) };
    inline CreateSolutionShrinkRequest& setContentType(int32_t contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline CreateSolutionShrinkRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // perspectiveCodes Field Functions 
    bool hasPerspectiveCodes() const { return this->perspectiveCodes_ != nullptr;};
    void deletePerspectiveCodes() { this->perspectiveCodes_ = nullptr;};
    inline const vector<string> & getPerspectiveCodes() const { DARABONBA_PTR_GET_CONST(perspectiveCodes_, vector<string>) };
    inline vector<string> getPerspectiveCodes() { DARABONBA_PTR_GET(perspectiveCodes_, vector<string>) };
    inline CreateSolutionShrinkRequest& setPerspectiveCodes(const vector<string> & perspectiveCodes) { DARABONBA_PTR_SET_VALUE(perspectiveCodes_, perspectiveCodes) };
    inline CreateSolutionShrinkRequest& setPerspectiveCodes(vector<string> && perspectiveCodes) { DARABONBA_PTR_SET_RVALUE(perspectiveCodes_, perspectiveCodes) };


    // tagIdListShrink Field Functions 
    bool hasTagIdListShrink() const { return this->tagIdListShrink_ != nullptr;};
    void deleteTagIdListShrink() { this->tagIdListShrink_ = nullptr;};
    inline string getTagIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(tagIdListShrink_, "") };
    inline CreateSolutionShrinkRequest& setTagIdListShrink(string tagIdListShrink) { DARABONBA_PTR_SET_VALUE(tagIdListShrink_, tagIdListShrink) };


  protected:
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<int32_t> contentType_ {};
    // This parameter is required.
    shared_ptr<int64_t> knowledgeId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> perspectiveCodes_ {};
    shared_ptr<string> tagIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
