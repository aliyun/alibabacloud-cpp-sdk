// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListMaterialDocumentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaterialDocumentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(DocTypeList, docTypeListShrink_);
      DARABONBA_PTR_TO_JSON(GeneratePublicUrl, generatePublicUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keywords, keywordsShrink_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTimeEnd, updateTimeEnd_);
      DARABONBA_PTR_TO_JSON(UpdateTimeStart, updateTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaterialDocumentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(DocTypeList, docTypeListShrink_);
      DARABONBA_PTR_FROM_JSON(GeneratePublicUrl, generatePublicUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywordsShrink_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeEnd, updateTimeEnd_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeStart, updateTimeStart_);
    };
    ListMaterialDocumentsShrinkRequest() = default ;
    ListMaterialDocumentsShrinkRequest(const ListMaterialDocumentsShrinkRequest &) = default ;
    ListMaterialDocumentsShrinkRequest(ListMaterialDocumentsShrinkRequest &&) = default ;
    ListMaterialDocumentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaterialDocumentsShrinkRequest() = default ;
    ListMaterialDocumentsShrinkRequest& operator=(const ListMaterialDocumentsShrinkRequest &) = default ;
    ListMaterialDocumentsShrinkRequest& operator=(ListMaterialDocumentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->content_ == nullptr && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->current_ == nullptr && this->docType_ == nullptr
        && this->docTypeListShrink_ == nullptr && this->generatePublicUrl_ == nullptr && this->id_ == nullptr && this->keywordsShrink_ == nullptr && this->query_ == nullptr
        && this->shareAttr_ == nullptr && this->size_ == nullptr && this->title_ == nullptr && this->updateTimeEnd_ == nullptr && this->updateTimeStart_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListMaterialDocumentsShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListMaterialDocumentsShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline ListMaterialDocumentsShrinkRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline ListMaterialDocumentsShrinkRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListMaterialDocumentsShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ListMaterialDocumentsShrinkRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docTypeListShrink Field Functions 
    bool hasDocTypeListShrink() const { return this->docTypeListShrink_ != nullptr;};
    void deleteDocTypeListShrink() { this->docTypeListShrink_ = nullptr;};
    inline string getDocTypeListShrink() const { DARABONBA_PTR_GET_DEFAULT(docTypeListShrink_, "") };
    inline ListMaterialDocumentsShrinkRequest& setDocTypeListShrink(string docTypeListShrink) { DARABONBA_PTR_SET_VALUE(docTypeListShrink_, docTypeListShrink) };


    // generatePublicUrl Field Functions 
    bool hasGeneratePublicUrl() const { return this->generatePublicUrl_ != nullptr;};
    void deleteGeneratePublicUrl() { this->generatePublicUrl_ = nullptr;};
    inline bool getGeneratePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(generatePublicUrl_, false) };
    inline ListMaterialDocumentsShrinkRequest& setGeneratePublicUrl(bool generatePublicUrl) { DARABONBA_PTR_SET_VALUE(generatePublicUrl_, generatePublicUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMaterialDocumentsShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywordsShrink Field Functions 
    bool hasKeywordsShrink() const { return this->keywordsShrink_ != nullptr;};
    void deleteKeywordsShrink() { this->keywordsShrink_ = nullptr;};
    inline string getKeywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(keywordsShrink_, "") };
    inline ListMaterialDocumentsShrinkRequest& setKeywordsShrink(string keywordsShrink) { DARABONBA_PTR_SET_VALUE(keywordsShrink_, keywordsShrink) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListMaterialDocumentsShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // shareAttr Field Functions 
    bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
    void deleteShareAttr() { this->shareAttr_ = nullptr;};
    inline int32_t getShareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
    inline ListMaterialDocumentsShrinkRequest& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListMaterialDocumentsShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListMaterialDocumentsShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTimeEnd Field Functions 
    bool hasUpdateTimeEnd() const { return this->updateTimeEnd_ != nullptr;};
    void deleteUpdateTimeEnd() { this->updateTimeEnd_ = nullptr;};
    inline string getUpdateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(updateTimeEnd_, "") };
    inline ListMaterialDocumentsShrinkRequest& setUpdateTimeEnd(string updateTimeEnd) { DARABONBA_PTR_SET_VALUE(updateTimeEnd_, updateTimeEnd) };


    // updateTimeStart Field Functions 
    bool hasUpdateTimeStart() const { return this->updateTimeStart_ != nullptr;};
    void deleteUpdateTimeStart() { this->updateTimeStart_ = nullptr;};
    inline string getUpdateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(updateTimeStart_, "") };
    inline ListMaterialDocumentsShrinkRequest& setUpdateTimeStart(string updateTimeStart) { DARABONBA_PTR_SET_VALUE(updateTimeStart_, updateTimeStart) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> createTimeEnd_ {};
    shared_ptr<string> createTimeStart_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<string> docType_ {};
    shared_ptr<string> docTypeListShrink_ {};
    shared_ptr<bool> generatePublicUrl_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> keywordsShrink_ {};
    shared_ptr<string> query_ {};
    shared_ptr<int32_t> shareAttr_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> updateTimeEnd_ {};
    shared_ptr<string> updateTimeStart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
