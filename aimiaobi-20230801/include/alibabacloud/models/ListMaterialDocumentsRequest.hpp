// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMATERIALDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListMaterialDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaterialDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(DocTypeList, docTypeList_);
      DARABONBA_PTR_TO_JSON(GeneratePublicUrl, generatePublicUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTimeEnd, updateTimeEnd_);
      DARABONBA_PTR_TO_JSON(UpdateTimeStart, updateTimeStart_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaterialDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(DocTypeList, docTypeList_);
      DARABONBA_PTR_FROM_JSON(GeneratePublicUrl, generatePublicUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ShareAttr, shareAttr_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeEnd, updateTimeEnd_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeStart, updateTimeStart_);
    };
    ListMaterialDocumentsRequest() = default ;
    ListMaterialDocumentsRequest(const ListMaterialDocumentsRequest &) = default ;
    ListMaterialDocumentsRequest(ListMaterialDocumentsRequest &&) = default ;
    ListMaterialDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaterialDocumentsRequest() = default ;
    ListMaterialDocumentsRequest& operator=(const ListMaterialDocumentsRequest &) = default ;
    ListMaterialDocumentsRequest& operator=(ListMaterialDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->content_ == nullptr && return this->createTimeEnd_ == nullptr && return this->createTimeStart_ == nullptr && return this->current_ == nullptr && return this->docType_ == nullptr
        && return this->docTypeList_ == nullptr && return this->generatePublicUrl_ == nullptr && return this->id_ == nullptr && return this->keywords_ == nullptr && return this->query_ == nullptr
        && return this->shareAttr_ == nullptr && return this->size_ == nullptr && return this->title_ == nullptr && return this->updateTimeEnd_ == nullptr && return this->updateTimeStart_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListMaterialDocumentsRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListMaterialDocumentsRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline ListMaterialDocumentsRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string createTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline ListMaterialDocumentsRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListMaterialDocumentsRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ListMaterialDocumentsRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docTypeList Field Functions 
    bool hasDocTypeList() const { return this->docTypeList_ != nullptr;};
    void deleteDocTypeList() { this->docTypeList_ = nullptr;};
    inline const vector<string> & docTypeList() const { DARABONBA_PTR_GET_CONST(docTypeList_, vector<string>) };
    inline vector<string> docTypeList() { DARABONBA_PTR_GET(docTypeList_, vector<string>) };
    inline ListMaterialDocumentsRequest& setDocTypeList(const vector<string> & docTypeList) { DARABONBA_PTR_SET_VALUE(docTypeList_, docTypeList) };
    inline ListMaterialDocumentsRequest& setDocTypeList(vector<string> && docTypeList) { DARABONBA_PTR_SET_RVALUE(docTypeList_, docTypeList) };


    // generatePublicUrl Field Functions 
    bool hasGeneratePublicUrl() const { return this->generatePublicUrl_ != nullptr;};
    void deleteGeneratePublicUrl() { this->generatePublicUrl_ = nullptr;};
    inline bool generatePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(generatePublicUrl_, false) };
    inline ListMaterialDocumentsRequest& setGeneratePublicUrl(bool generatePublicUrl) { DARABONBA_PTR_SET_VALUE(generatePublicUrl_, generatePublicUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMaterialDocumentsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline ListMaterialDocumentsRequest& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline ListMaterialDocumentsRequest& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListMaterialDocumentsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // shareAttr Field Functions 
    bool hasShareAttr() const { return this->shareAttr_ != nullptr;};
    void deleteShareAttr() { this->shareAttr_ = nullptr;};
    inline int32_t shareAttr() const { DARABONBA_PTR_GET_DEFAULT(shareAttr_, 0) };
    inline ListMaterialDocumentsRequest& setShareAttr(int32_t shareAttr) { DARABONBA_PTR_SET_VALUE(shareAttr_, shareAttr) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListMaterialDocumentsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListMaterialDocumentsRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTimeEnd Field Functions 
    bool hasUpdateTimeEnd() const { return this->updateTimeEnd_ != nullptr;};
    void deleteUpdateTimeEnd() { this->updateTimeEnd_ = nullptr;};
    inline string updateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(updateTimeEnd_, "") };
    inline ListMaterialDocumentsRequest& setUpdateTimeEnd(string updateTimeEnd) { DARABONBA_PTR_SET_VALUE(updateTimeEnd_, updateTimeEnd) };


    // updateTimeStart Field Functions 
    bool hasUpdateTimeStart() const { return this->updateTimeStart_ != nullptr;};
    void deleteUpdateTimeStart() { this->updateTimeStart_ = nullptr;};
    inline string updateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(updateTimeStart_, "") };
    inline ListMaterialDocumentsRequest& setUpdateTimeStart(string updateTimeStart) { DARABONBA_PTR_SET_VALUE(updateTimeStart_, updateTimeStart) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTimeEnd_ = nullptr;
    std::shared_ptr<string> createTimeStart_ = nullptr;
    std::shared_ptr<int32_t> current_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<vector<string>> docTypeList_ = nullptr;
    std::shared_ptr<bool> generatePublicUrl_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int32_t> shareAttr_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTimeEnd_ = nullptr;
    std::shared_ptr<string> updateTimeStart_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
