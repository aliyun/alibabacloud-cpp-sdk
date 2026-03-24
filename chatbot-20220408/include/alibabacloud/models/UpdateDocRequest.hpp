// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCREQUEST_HPP_
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
    class DocMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DocMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessViewId, businessViewId_);
        DARABONBA_PTR_TO_JSON(BusinessViewName, businessViewName_);
        DARABONBA_PTR_TO_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
      };
      friend void from_json(const Darabonba::Json& j, DocMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessViewId, businessViewId_);
        DARABONBA_PTR_FROM_JSON(BusinessViewName, businessViewName_);
        DARABONBA_PTR_FROM_JSON(MetaCellInfoDTOList, metaCellInfoDTOList_);
      };
      DocMetadata() = default ;
      DocMetadata(const DocMetadata &) = default ;
      DocMetadata(DocMetadata &&) = default ;
      DocMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DocMetadata() = default ;
      DocMetadata& operator=(const DocMetadata &) = default ;
      DocMetadata& operator=(DocMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetaCellInfoDTOList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetaCellInfoDTOList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldCode, fieldCode_);
          DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MetaCellInfoDTOList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldCode, fieldCode_);
          DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MetaCellInfoDTOList() = default ;
        MetaCellInfoDTOList(const MetaCellInfoDTOList &) = default ;
        MetaCellInfoDTOList(MetaCellInfoDTOList &&) = default ;
        MetaCellInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetaCellInfoDTOList() = default ;
        MetaCellInfoDTOList& operator=(const MetaCellInfoDTOList &) = default ;
        MetaCellInfoDTOList& operator=(MetaCellInfoDTOList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldCode_ == nullptr
        && this->fieldName_ == nullptr && this->value_ == nullptr; };
        // fieldCode Field Functions 
        bool hasFieldCode() const { return this->fieldCode_ != nullptr;};
        void deleteFieldCode() { this->fieldCode_ = nullptr;};
        inline string getFieldCode() const { DARABONBA_PTR_GET_DEFAULT(fieldCode_, "") };
        inline MetaCellInfoDTOList& setFieldCode(string fieldCode) { DARABONBA_PTR_SET_VALUE(fieldCode_, fieldCode) };


        // fieldName Field Functions 
        bool hasFieldName() const { return this->fieldName_ != nullptr;};
        void deleteFieldName() { this->fieldName_ = nullptr;};
        inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
        inline MetaCellInfoDTOList& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline MetaCellInfoDTOList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> fieldCode_ {};
        shared_ptr<string> fieldName_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->businessViewId_ == nullptr
        && this->businessViewName_ == nullptr && this->metaCellInfoDTOList_ == nullptr; };
      // businessViewId Field Functions 
      bool hasBusinessViewId() const { return this->businessViewId_ != nullptr;};
      void deleteBusinessViewId() { this->businessViewId_ = nullptr;};
      inline string getBusinessViewId() const { DARABONBA_PTR_GET_DEFAULT(businessViewId_, "") };
      inline DocMetadata& setBusinessViewId(string businessViewId) { DARABONBA_PTR_SET_VALUE(businessViewId_, businessViewId) };


      // businessViewName Field Functions 
      bool hasBusinessViewName() const { return this->businessViewName_ != nullptr;};
      void deleteBusinessViewName() { this->businessViewName_ = nullptr;};
      inline string getBusinessViewName() const { DARABONBA_PTR_GET_DEFAULT(businessViewName_, "") };
      inline DocMetadata& setBusinessViewName(string businessViewName) { DARABONBA_PTR_SET_VALUE(businessViewName_, businessViewName) };


      // metaCellInfoDTOList Field Functions 
      bool hasMetaCellInfoDTOList() const { return this->metaCellInfoDTOList_ != nullptr;};
      void deleteMetaCellInfoDTOList() { this->metaCellInfoDTOList_ = nullptr;};
      inline const vector<DocMetadata::MetaCellInfoDTOList> & getMetaCellInfoDTOList() const { DARABONBA_PTR_GET_CONST(metaCellInfoDTOList_, vector<DocMetadata::MetaCellInfoDTOList>) };
      inline vector<DocMetadata::MetaCellInfoDTOList> getMetaCellInfoDTOList() { DARABONBA_PTR_GET(metaCellInfoDTOList_, vector<DocMetadata::MetaCellInfoDTOList>) };
      inline DocMetadata& setMetaCellInfoDTOList(const vector<DocMetadata::MetaCellInfoDTOList> & metaCellInfoDTOList) { DARABONBA_PTR_SET_VALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };
      inline DocMetadata& setMetaCellInfoDTOList(vector<DocMetadata::MetaCellInfoDTOList> && metaCellInfoDTOList) { DARABONBA_PTR_SET_RVALUE(metaCellInfoDTOList_, metaCellInfoDTOList) };


    protected:
      shared_ptr<string> businessViewId_ {};
      shared_ptr<string> businessViewName_ {};
      shared_ptr<vector<DocMetadata::MetaCellInfoDTOList>> metaCellInfoDTOList_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->categoryId_ == nullptr && this->config_ == nullptr && this->content_ == nullptr && this->docMetadata_ == nullptr && this->docName_ == nullptr
        && this->endDate_ == nullptr && this->knowledgeId_ == nullptr && this->meta_ == nullptr && this->startDate_ == nullptr && this->tagIds_ == nullptr
        && this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateDocRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateDocRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateDocRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateDocRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docMetadata Field Functions 
    bool hasDocMetadata() const { return this->docMetadata_ != nullptr;};
    void deleteDocMetadata() { this->docMetadata_ = nullptr;};
    inline const vector<UpdateDocRequest::DocMetadata> & getDocMetadata() const { DARABONBA_PTR_GET_CONST(docMetadata_, vector<UpdateDocRequest::DocMetadata>) };
    inline vector<UpdateDocRequest::DocMetadata> getDocMetadata() { DARABONBA_PTR_GET(docMetadata_, vector<UpdateDocRequest::DocMetadata>) };
    inline UpdateDocRequest& setDocMetadata(const vector<UpdateDocRequest::DocMetadata> & docMetadata) { DARABONBA_PTR_SET_VALUE(docMetadata_, docMetadata) };
    inline UpdateDocRequest& setDocMetadata(vector<UpdateDocRequest::DocMetadata> && docMetadata) { DARABONBA_PTR_SET_RVALUE(docMetadata_, docMetadata) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline UpdateDocRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateDocRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
    inline UpdateDocRequest& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline UpdateDocRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateDocRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<int64_t> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<int64_t>) };
    inline vector<int64_t> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<int64_t>) };
    inline UpdateDocRequest& setTagIds(const vector<int64_t> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline UpdateDocRequest& setTagIds(vector<int64_t> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateDocRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> agentKey_ {};
    shared_ptr<int64_t> categoryId_ {};
    shared_ptr<string> config_ {};
    shared_ptr<string> content_ {};
    shared_ptr<vector<UpdateDocRequest::DocMetadata>> docMetadata_ {};
    shared_ptr<string> docName_ {};
    shared_ptr<string> endDate_ {};
    // This parameter is required.
    shared_ptr<int64_t> knowledgeId_ {};
    shared_ptr<string> meta_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<vector<int64_t>> tagIds_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
