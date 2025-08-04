// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETDOCUMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETDOCUMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetDocumentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(SourceFrom, sourceFrom_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DisableHandleMultimodalMedia, disableHandleMultimodalMedia_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(SourceFrom, sourceFrom_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetDatasetDocumentResponseBodyData() = default ;
    GetDatasetDocumentResponseBodyData(const GetDatasetDocumentResponseBodyData &) = default ;
    GetDatasetDocumentResponseBodyData(GetDatasetDocumentResponseBodyData &&) = default ;
    GetDatasetDocumentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetDocumentResponseBodyData() = default ;
    GetDatasetDocumentResponseBodyData& operator=(const GetDatasetDocumentResponseBodyData &) = default ;
    GetDatasetDocumentResponseBodyData& operator=(GetDatasetDocumentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->disableHandleMultimodalMedia_ != nullptr && this->docId_ != nullptr && this->docUuid_ != nullptr && this->pubTime_ != nullptr && this->sourceFrom_ != nullptr
        && this->summary_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetDatasetDocumentResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // disableHandleMultimodalMedia Field Functions 
    bool hasDisableHandleMultimodalMedia() const { return this->disableHandleMultimodalMedia_ != nullptr;};
    void deleteDisableHandleMultimodalMedia() { this->disableHandleMultimodalMedia_ = nullptr;};
    inline bool disableHandleMultimodalMedia() const { DARABONBA_PTR_GET_DEFAULT(disableHandleMultimodalMedia_, false) };
    inline GetDatasetDocumentResponseBodyData& setDisableHandleMultimodalMedia(bool disableHandleMultimodalMedia) { DARABONBA_PTR_SET_VALUE(disableHandleMultimodalMedia_, disableHandleMultimodalMedia) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetDatasetDocumentResponseBodyData& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline GetDatasetDocumentResponseBodyData& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline GetDatasetDocumentResponseBodyData& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // sourceFrom Field Functions 
    bool hasSourceFrom() const { return this->sourceFrom_ != nullptr;};
    void deleteSourceFrom() { this->sourceFrom_ = nullptr;};
    inline string sourceFrom() const { DARABONBA_PTR_GET_DEFAULT(sourceFrom_, "") };
    inline GetDatasetDocumentResponseBodyData& setSourceFrom(string sourceFrom) { DARABONBA_PTR_SET_VALUE(sourceFrom_, sourceFrom) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetDatasetDocumentResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetDatasetDocumentResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetDatasetDocumentResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<bool> disableHandleMultimodalMedia_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> sourceFrom_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
