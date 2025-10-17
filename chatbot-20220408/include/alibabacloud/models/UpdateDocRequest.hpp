// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDocRequestDocMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocMetadata, docMetadata_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocMetadata, docMetadata_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateDocRequest() = default ;
    UpdateDocRequest(const UpdateDocRequest &) = default ;
    UpdateDocRequest(UpdateDocRequest &&) = default ;
    UpdateDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDocRequest() = default ;
    UpdateDocRequest& operator=(const UpdateDocRequest &) = default ;
    UpdateDocRequest& operator=(UpdateDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->categoryId_ == nullptr && return this->config_ == nullptr && return this->content_ == nullptr && return this->docMetadata_ == nullptr && return this->docName_ == nullptr
        && return this->endDate_ == nullptr && return this->knowledgeId_ == nullptr && return this->meta_ == nullptr && return this->startDate_ == nullptr && return this->tagIds_ == nullptr
        && return this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateDocRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateDocRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateDocRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateDocRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docMetadata Field Functions 
    bool hasDocMetadata() const { return this->docMetadata_ != nullptr;};
    void deleteDocMetadata() { this->docMetadata_ = nullptr;};
    inline const vector<UpdateDocRequestDocMetadata> & docMetadata() const { DARABONBA_PTR_GET_CONST(docMetadata_, vector<UpdateDocRequestDocMetadata>) };
    inline vector<UpdateDocRequestDocMetadata> docMetadata() { DARABONBA_PTR_GET(docMetadata_, vector<UpdateDocRequestDocMetadata>) };
    inline UpdateDocRequest& setDocMetadata(const vector<UpdateDocRequestDocMetadata> & docMetadata) { DARABONBA_PTR_SET_VALUE(docMetadata_, docMetadata) };
    inline UpdateDocRequest& setDocMetadata(vector<UpdateDocRequestDocMetadata> && docMetadata) { DARABONBA_PTR_SET_RVALUE(docMetadata_, docMetadata) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline UpdateDocRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateDocRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline UpdateDocRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline UpdateDocRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateDocRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<int64_t> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<int64_t>) };
    inline vector<int64_t> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<int64_t>) };
    inline UpdateDocRequest& setTagIds(const vector<int64_t> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdateDocRequest& setTagIds(vector<int64_t> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateDocRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<UpdateDocRequestDocMetadata>> docMetadata_ = nullptr;
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> knowledgeId_ = nullptr;
    std::shared_ptr<string> meta_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<vector<int64_t>> tagIds_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
