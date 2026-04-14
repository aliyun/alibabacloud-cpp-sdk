// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONEMETAKNOWLEDGEBASEDOCUMENT_HPP_
#define ALIBABACLOUD_MODELS_ONEMETAKNOWLEDGEBASEDOCUMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class OneMetaKnowledgeBaseDocument : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OneMetaKnowledgeBaseDocument& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DocsCount, docsCount_);
      DARABONBA_PTR_TO_JSON(DocumentLoaderName, documentLoaderName_);
      DARABONBA_PTR_TO_JSON(FileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TextSplitterName, textSplitterName_);
    };
    friend void from_json(const Darabonba::Json& j, OneMetaKnowledgeBaseDocument& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DocsCount, docsCount_);
      DARABONBA_PTR_FROM_JSON(DocumentLoaderName, documentLoaderName_);
      DARABONBA_PTR_FROM_JSON(FileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TextSplitterName, textSplitterName_);
    };
    OneMetaKnowledgeBaseDocument() = default ;
    OneMetaKnowledgeBaseDocument(const OneMetaKnowledgeBaseDocument &) = default ;
    OneMetaKnowledgeBaseDocument(OneMetaKnowledgeBaseDocument &&) = default ;
    OneMetaKnowledgeBaseDocument(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OneMetaKnowledgeBaseDocument() = default ;
    OneMetaKnowledgeBaseDocument& operator=(const OneMetaKnowledgeBaseDocument &) = default ;
    OneMetaKnowledgeBaseDocument& operator=(OneMetaKnowledgeBaseDocument &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->docsCount_ == nullptr && this->documentLoaderName_ == nullptr && this->fileExt_ == nullptr && this->fileSize_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->kbUuid_ == nullptr && this->keywords_ == nullptr && this->name_ == nullptr && this->state_ == nullptr
        && this->summary_ == nullptr && this->textSplitterName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline OneMetaKnowledgeBaseDocument& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // docsCount Field Functions 
    bool hasDocsCount() const { return this->docsCount_ != nullptr;};
    void deleteDocsCount() { this->docsCount_ = nullptr;};
    inline int32_t getDocsCount() const { DARABONBA_PTR_GET_DEFAULT(docsCount_, 0) };
    inline OneMetaKnowledgeBaseDocument& setDocsCount(int32_t docsCount) { DARABONBA_PTR_SET_VALUE(docsCount_, docsCount) };


    // documentLoaderName Field Functions 
    bool hasDocumentLoaderName() const { return this->documentLoaderName_ != nullptr;};
    void deleteDocumentLoaderName() { this->documentLoaderName_ = nullptr;};
    inline string getDocumentLoaderName() const { DARABONBA_PTR_GET_DEFAULT(documentLoaderName_, "") };
    inline OneMetaKnowledgeBaseDocument& setDocumentLoaderName(string documentLoaderName) { DARABONBA_PTR_SET_VALUE(documentLoaderName_, documentLoaderName) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline OneMetaKnowledgeBaseDocument& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline OneMetaKnowledgeBaseDocument& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline OneMetaKnowledgeBaseDocument& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline OneMetaKnowledgeBaseDocument& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline OneMetaKnowledgeBaseDocument& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
    inline OneMetaKnowledgeBaseDocument& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline OneMetaKnowledgeBaseDocument& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline OneMetaKnowledgeBaseDocument& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline OneMetaKnowledgeBaseDocument& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // textSplitterName Field Functions 
    bool hasTextSplitterName() const { return this->textSplitterName_ != nullptr;};
    void deleteTextSplitterName() { this->textSplitterName_ = nullptr;};
    inline string getTextSplitterName() const { DARABONBA_PTR_GET_DEFAULT(textSplitterName_, "") };
    inline OneMetaKnowledgeBaseDocument& setTextSplitterName(string textSplitterName) { DARABONBA_PTR_SET_VALUE(textSplitterName_, textSplitterName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> docsCount_ {};
    shared_ptr<string> documentLoaderName_ {};
    shared_ptr<string> fileExt_ {};
    shared_ptr<int64_t> fileSize_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> kbUuid_ {};
    shared_ptr<string> keywords_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> state_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<string> textSplitterName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
