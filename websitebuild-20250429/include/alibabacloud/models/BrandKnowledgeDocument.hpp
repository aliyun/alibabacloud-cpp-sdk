// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRANDKNOWLEDGEDOCUMENT_HPP_
#define ALIBABACLOUD_MODELS_BRANDKNOWLEDGEDOCUMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class BrandKnowledgeDocument : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrandKnowledgeDocument& obj) { 
      DARABONBA_PTR_TO_JSON(ContentSufficient, contentSufficient_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_TO_JSON(Deletable, deletable_);
      DARABONBA_PTR_TO_JSON(DisplayTitle, displayTitle_);
      DARABONBA_PTR_TO_JSON(DocCategory, docCategory_);
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(KeyTopics, keyTopics_);
      DARABONBA_PTR_TO_JSON(OneLineSummary, oneLineSummary_);
      DARABONBA_PTR_TO_JSON(OriginalName, originalName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ReadyAt, readyAt_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_TO_JSON(SummaryErrorCode, summaryErrorCode_);
      DARABONBA_PTR_TO_JSON(SummaryStatus, summaryStatus_);
      DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, BrandKnowledgeDocument& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentSufficient, contentSufficient_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(Deletable, deletable_);
      DARABONBA_PTR_FROM_JSON(DisplayTitle, displayTitle_);
      DARABONBA_PTR_FROM_JSON(DocCategory, docCategory_);
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(KeyTopics, keyTopics_);
      DARABONBA_PTR_FROM_JSON(OneLineSummary, oneLineSummary_);
      DARABONBA_PTR_FROM_JSON(OriginalName, originalName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ReadyAt, readyAt_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      DARABONBA_PTR_FROM_JSON(SummaryErrorCode, summaryErrorCode_);
      DARABONBA_PTR_FROM_JSON(SummaryStatus, summaryStatus_);
      DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
    };
    BrandKnowledgeDocument() = default ;
    BrandKnowledgeDocument(const BrandKnowledgeDocument &) = default ;
    BrandKnowledgeDocument(BrandKnowledgeDocument &&) = default ;
    BrandKnowledgeDocument(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrandKnowledgeDocument() = default ;
    BrandKnowledgeDocument& operator=(const BrandKnowledgeDocument &) = default ;
    BrandKnowledgeDocument& operator=(BrandKnowledgeDocument &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentSufficient_ == nullptr
        && this->contentType_ == nullptr && this->createdAt_ == nullptr && this->deletable_ == nullptr && this->displayTitle_ == nullptr && this->docCategory_ == nullptr
        && this->documentId_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->fileSize_ == nullptr && this->keyTopics_ == nullptr
        && this->oneLineSummary_ == nullptr && this->originalName_ == nullptr && this->projectId_ == nullptr && this->readyAt_ == nullptr && this->status_ == nullptr
        && this->statusMessage_ == nullptr && this->summaryErrorCode_ == nullptr && this->summaryStatus_ == nullptr && this->updatedAt_ == nullptr; };
    // contentSufficient Field Functions 
    bool hasContentSufficient() const { return this->contentSufficient_ != nullptr;};
    void deleteContentSufficient() { this->contentSufficient_ = nullptr;};
    inline bool getContentSufficient() const { DARABONBA_PTR_GET_DEFAULT(contentSufficient_, false) };
    inline BrandKnowledgeDocument& setContentSufficient(bool contentSufficient) { DARABONBA_PTR_SET_VALUE(contentSufficient_, contentSufficient) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline BrandKnowledgeDocument& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline BrandKnowledgeDocument& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // deletable Field Functions 
    bool hasDeletable() const { return this->deletable_ != nullptr;};
    void deleteDeletable() { this->deletable_ = nullptr;};
    inline bool getDeletable() const { DARABONBA_PTR_GET_DEFAULT(deletable_, false) };
    inline BrandKnowledgeDocument& setDeletable(bool deletable) { DARABONBA_PTR_SET_VALUE(deletable_, deletable) };


    // displayTitle Field Functions 
    bool hasDisplayTitle() const { return this->displayTitle_ != nullptr;};
    void deleteDisplayTitle() { this->displayTitle_ = nullptr;};
    inline string getDisplayTitle() const { DARABONBA_PTR_GET_DEFAULT(displayTitle_, "") };
    inline BrandKnowledgeDocument& setDisplayTitle(string displayTitle) { DARABONBA_PTR_SET_VALUE(displayTitle_, displayTitle) };


    // docCategory Field Functions 
    bool hasDocCategory() const { return this->docCategory_ != nullptr;};
    void deleteDocCategory() { this->docCategory_ = nullptr;};
    inline string getDocCategory() const { DARABONBA_PTR_GET_DEFAULT(docCategory_, "") };
    inline BrandKnowledgeDocument& setDocCategory(string docCategory) { DARABONBA_PTR_SET_VALUE(docCategory_, docCategory) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline BrandKnowledgeDocument& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BrandKnowledgeDocument& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline BrandKnowledgeDocument& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline BrandKnowledgeDocument& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // keyTopics Field Functions 
    bool hasKeyTopics() const { return this->keyTopics_ != nullptr;};
    void deleteKeyTopics() { this->keyTopics_ = nullptr;};
    inline const vector<string> & getKeyTopics() const { DARABONBA_PTR_GET_CONST(keyTopics_, vector<string>) };
    inline vector<string> getKeyTopics() { DARABONBA_PTR_GET(keyTopics_, vector<string>) };
    inline BrandKnowledgeDocument& setKeyTopics(const vector<string> & keyTopics) { DARABONBA_PTR_SET_VALUE(keyTopics_, keyTopics) };
    inline BrandKnowledgeDocument& setKeyTopics(vector<string> && keyTopics) { DARABONBA_PTR_SET_RVALUE(keyTopics_, keyTopics) };


    // oneLineSummary Field Functions 
    bool hasOneLineSummary() const { return this->oneLineSummary_ != nullptr;};
    void deleteOneLineSummary() { this->oneLineSummary_ = nullptr;};
    inline string getOneLineSummary() const { DARABONBA_PTR_GET_DEFAULT(oneLineSummary_, "") };
    inline BrandKnowledgeDocument& setOneLineSummary(string oneLineSummary) { DARABONBA_PTR_SET_VALUE(oneLineSummary_, oneLineSummary) };


    // originalName Field Functions 
    bool hasOriginalName() const { return this->originalName_ != nullptr;};
    void deleteOriginalName() { this->originalName_ = nullptr;};
    inline string getOriginalName() const { DARABONBA_PTR_GET_DEFAULT(originalName_, "") };
    inline BrandKnowledgeDocument& setOriginalName(string originalName) { DARABONBA_PTR_SET_VALUE(originalName_, originalName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline BrandKnowledgeDocument& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // readyAt Field Functions 
    bool hasReadyAt() const { return this->readyAt_ != nullptr;};
    void deleteReadyAt() { this->readyAt_ = nullptr;};
    inline int64_t getReadyAt() const { DARABONBA_PTR_GET_DEFAULT(readyAt_, 0L) };
    inline BrandKnowledgeDocument& setReadyAt(int64_t readyAt) { DARABONBA_PTR_SET_VALUE(readyAt_, readyAt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BrandKnowledgeDocument& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusMessage Field Functions 
    bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
    void deleteStatusMessage() { this->statusMessage_ = nullptr;};
    inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
    inline BrandKnowledgeDocument& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    // summaryErrorCode Field Functions 
    bool hasSummaryErrorCode() const { return this->summaryErrorCode_ != nullptr;};
    void deleteSummaryErrorCode() { this->summaryErrorCode_ = nullptr;};
    inline string getSummaryErrorCode() const { DARABONBA_PTR_GET_DEFAULT(summaryErrorCode_, "") };
    inline BrandKnowledgeDocument& setSummaryErrorCode(string summaryErrorCode) { DARABONBA_PTR_SET_VALUE(summaryErrorCode_, summaryErrorCode) };


    // summaryStatus Field Functions 
    bool hasSummaryStatus() const { return this->summaryStatus_ != nullptr;};
    void deleteSummaryStatus() { this->summaryStatus_ = nullptr;};
    inline string getSummaryStatus() const { DARABONBA_PTR_GET_DEFAULT(summaryStatus_, "") };
    inline BrandKnowledgeDocument& setSummaryStatus(string summaryStatus) { DARABONBA_PTR_SET_VALUE(summaryStatus_, summaryStatus) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline BrandKnowledgeDocument& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // Specifies whether the content is sufficient to be considered for plan summary candidates.
    shared_ptr<bool> contentSufficient_ {};
    // The MIME type of the file.
    shared_ptr<string> contentType_ {};
    // The creation time in Unix milliseconds.
    shared_ptr<int64_t> createdAt_ {};
    // Specifies whether deletion is currently allowed.
    shared_ptr<bool> deletable_ {};
    // The display title.
    shared_ptr<string> displayTitle_ {};
    // The document category.
    shared_ptr<string> docCategory_ {};
    // The ID of the brand knowledge document.
    shared_ptr<string> documentId_ {};
    // The stable error code for main processing failures.
    shared_ptr<string> errorCode_ {};
    // The desensitized error message for main processing failures.
    shared_ptr<string> errorMessage_ {};
    // The file size in bytes.
    shared_ptr<int64_t> fileSize_ {};
    // The summary keywords.
    shared_ptr<vector<string>> keyTopics_ {};
    // The one-line summary, which is used only to construct search queries and cannot be used as factual evidence.
    shared_ptr<string> oneLineSummary_ {};
    // The original file name.
    shared_ptr<string> originalName_ {};
    // The ID of the business workspace. For GEO business workspaces of the brand marketing type, this is the appWorkspaceId.
    shared_ptr<string> projectId_ {};
    // The time when the document is ready for reference, in Unix milliseconds.
    shared_ptr<int64_t> readyAt_ {};
    // The document processing status.
    shared_ptr<string> status_ {};
    // The message displayed on the status page.
    shared_ptr<string> statusMessage_ {};
    // The stable error code for summary failures.
    shared_ptr<string> summaryErrorCode_ {};
    // The summary status.
    shared_ptr<string> summaryStatus_ {};
    // The last update time in Unix milliseconds.
    shared_ptr<int64_t> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
