// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateDocShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDocShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocMetadata, docMetadataShrink_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIdsShrink_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDocShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocMetadata, docMetadataShrink_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateDocShrinkRequest() = default ;
    UpdateDocShrinkRequest(const UpdateDocShrinkRequest &) = default ;
    UpdateDocShrinkRequest(UpdateDocShrinkRequest &&) = default ;
    UpdateDocShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDocShrinkRequest() = default ;
    UpdateDocShrinkRequest& operator=(const UpdateDocShrinkRequest &) = default ;
    UpdateDocShrinkRequest& operator=(UpdateDocShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->categoryId_ != nullptr && this->config_ != nullptr && this->content_ != nullptr && this->docMetadataShrink_ != nullptr && this->docName_ != nullptr
        && this->endDate_ != nullptr && this->knowledgeId_ != nullptr && this->meta_ != nullptr && this->startDate_ != nullptr && this->tagIdsShrink_ != nullptr
        && this->title_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateDocShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateDocShrinkRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateDocShrinkRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateDocShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docMetadataShrink Field Functions 
    bool hasDocMetadataShrink() const { return this->docMetadataShrink_ != nullptr;};
    void deleteDocMetadataShrink() { this->docMetadataShrink_ = nullptr;};
    inline string docMetadataShrink() const { DARABONBA_PTR_GET_DEFAULT(docMetadataShrink_, "") };
    inline UpdateDocShrinkRequest& setDocMetadataShrink(string docMetadataShrink) { DARABONBA_PTR_SET_VALUE(docMetadataShrink_, docMetadataShrink) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline UpdateDocShrinkRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateDocShrinkRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline UpdateDocShrinkRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline UpdateDocShrinkRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateDocShrinkRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tagIdsShrink Field Functions 
    bool hasTagIdsShrink() const { return this->tagIdsShrink_ != nullptr;};
    void deleteTagIdsShrink() { this->tagIdsShrink_ = nullptr;};
    inline string tagIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagIdsShrink_, "") };
    inline UpdateDocShrinkRequest& setTagIdsShrink(string tagIdsShrink) { DARABONBA_PTR_SET_VALUE(tagIdsShrink_, tagIdsShrink) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateDocShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docMetadataShrink_ = nullptr;
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
    std::shared_ptr<string> meta_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> tagIdsShrink_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
