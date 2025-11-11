// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETDOCUMENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETDOCUMENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatasetDocumentsResponseBodyDataMultimodalMedias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListDatasetDocumentsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(Extend2, extend2_);
      DARABONBA_PTR_TO_JSON(Extend3, extend3_);
      DARABONBA_PTR_TO_JSON(MultimodalMedias, multimodalMedias_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(SourceFrom, sourceFrom_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetDocumentsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryUuid, categoryUuid_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
      DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
      DARABONBA_PTR_FROM_JSON(MultimodalMedias, multimodalMedias_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(SourceFrom, sourceFrom_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListDatasetDocumentsResponseBodyData() = default ;
    ListDatasetDocumentsResponseBodyData(const ListDatasetDocumentsResponseBodyData &) = default ;
    ListDatasetDocumentsResponseBodyData(ListDatasetDocumentsResponseBodyData &&) = default ;
    ListDatasetDocumentsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetDocumentsResponseBodyData() = default ;
    ListDatasetDocumentsResponseBodyData& operator=(const ListDatasetDocumentsResponseBodyData &) = default ;
    ListDatasetDocumentsResponseBodyData& operator=(ListDatasetDocumentsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryUuid_ == nullptr
        && return this->content_ == nullptr && return this->createTime_ == nullptr && return this->disableHandleMultimodalMedia_ == nullptr && return this->docId_ == nullptr && return this->docType_ == nullptr
        && return this->docUuid_ == nullptr && return this->extend1_ == nullptr && return this->extend2_ == nullptr && return this->extend3_ == nullptr && return this->multimodalMedias_ == nullptr
        && return this->pubTime_ == nullptr && return this->sourceFrom_ == nullptr && return this->status_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr
        && return this->updateTime_ == nullptr && return this->url_ == nullptr; };
    // categoryUuid Field Functions 
    bool hasCategoryUuid() const { return this->categoryUuid_ != nullptr;};
    void deleteCategoryUuid() { this->categoryUuid_ = nullptr;};
    inline string categoryUuid() const { DARABONBA_PTR_GET_DEFAULT(categoryUuid_, "") };
    inline ListDatasetDocumentsResponseBodyData& setCategoryUuid(string categoryUuid) { DARABONBA_PTR_SET_VALUE(categoryUuid_, categoryUuid) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListDatasetDocumentsResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDatasetDocumentsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // disableHandleMultimodalMedia Field Functions 
    bool hasDisableHandleMultimodalMedia() const { return this->disableHandleMultimodalMedia_ != nullptr;};
    void deleteDisableHandleMultimodalMedia() { this->disableHandleMultimodalMedia_ = nullptr;};
    inline bool disableHandleMultimodalMedia() const { DARABONBA_PTR_GET_DEFAULT(disableHandleMultimodalMedia_, false) };
    inline ListDatasetDocumentsResponseBodyData& setDisableHandleMultimodalMedia(bool disableHandleMultimodalMedia) { DARABONBA_PTR_SET_VALUE(disableHandleMultimodalMedia_, disableHandleMultimodalMedia) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline ListDatasetDocumentsResponseBodyData& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ListDatasetDocumentsResponseBodyData& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline ListDatasetDocumentsResponseBodyData& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string extend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline ListDatasetDocumentsResponseBodyData& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // extend2 Field Functions 
    bool hasExtend2() const { return this->extend2_ != nullptr;};
    void deleteExtend2() { this->extend2_ = nullptr;};
    inline string extend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
    inline ListDatasetDocumentsResponseBodyData& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


    // extend3 Field Functions 
    bool hasExtend3() const { return this->extend3_ != nullptr;};
    void deleteExtend3() { this->extend3_ = nullptr;};
    inline string extend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
    inline ListDatasetDocumentsResponseBodyData& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


    // multimodalMedias Field Functions 
    bool hasMultimodalMedias() const { return this->multimodalMedias_ != nullptr;};
    void deleteMultimodalMedias() { this->multimodalMedias_ = nullptr;};
    inline const vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias> & multimodalMedias() const { DARABONBA_PTR_GET_CONST(multimodalMedias_, vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias>) };
    inline vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias> multimodalMedias() { DARABONBA_PTR_GET(multimodalMedias_, vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias>) };
    inline ListDatasetDocumentsResponseBodyData& setMultimodalMedias(const vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias> & multimodalMedias) { DARABONBA_PTR_SET_VALUE(multimodalMedias_, multimodalMedias) };
    inline ListDatasetDocumentsResponseBodyData& setMultimodalMedias(vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias> && multimodalMedias) { DARABONBA_PTR_SET_RVALUE(multimodalMedias_, multimodalMedias) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline ListDatasetDocumentsResponseBodyData& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // sourceFrom Field Functions 
    bool hasSourceFrom() const { return this->sourceFrom_ != nullptr;};
    void deleteSourceFrom() { this->sourceFrom_ = nullptr;};
    inline string sourceFrom() const { DARABONBA_PTR_GET_DEFAULT(sourceFrom_, "") };
    inline ListDatasetDocumentsResponseBodyData& setSourceFrom(string sourceFrom) { DARABONBA_PTR_SET_VALUE(sourceFrom_, sourceFrom) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDatasetDocumentsResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListDatasetDocumentsResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDatasetDocumentsResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDatasetDocumentsResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListDatasetDocumentsResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> categoryUuid_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<bool> disableHandleMultimodalMedia_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> extend1_ = nullptr;
    std::shared_ptr<string> extend2_ = nullptr;
    std::shared_ptr<string> extend3_ = nullptr;
    std::shared_ptr<vector<Models::ListDatasetDocumentsResponseBodyDataMultimodalMedias>> multimodalMedias_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> sourceFrom_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    // url
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
