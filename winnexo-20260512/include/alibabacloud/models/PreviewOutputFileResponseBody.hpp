// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWOUTPUTFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWOUTPUTFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class PreviewOutputFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewOutputFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(degraded, degraded_);
      DARABONBA_PTR_TO_JSON(downloadExpiresAt, downloadExpiresAt_);
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(fileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(itemName, itemName_);
      DARABONBA_PTR_TO_JSON(itemType, itemType_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(previewExpiresAt, previewExpiresAt_);
      DARABONBA_PTR_TO_JSON(previewType, previewType_);
      DARABONBA_PTR_TO_JSON(previewUrl, previewUrl_);
      DARABONBA_PTR_TO_JSON(readState, readState_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(slides, slides_);
      DARABONBA_PTR_TO_JSON(unavailableReason, unavailableReason_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewOutputFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(degraded, degraded_);
      DARABONBA_PTR_FROM_JSON(downloadExpiresAt, downloadExpiresAt_);
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(fileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(itemName, itemName_);
      DARABONBA_PTR_FROM_JSON(itemType, itemType_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(previewExpiresAt, previewExpiresAt_);
      DARABONBA_PTR_FROM_JSON(previewType, previewType_);
      DARABONBA_PTR_FROM_JSON(previewUrl, previewUrl_);
      DARABONBA_PTR_FROM_JSON(readState, readState_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(slides, slides_);
      DARABONBA_PTR_FROM_JSON(unavailableReason, unavailableReason_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    PreviewOutputFileResponseBody() = default ;
    PreviewOutputFileResponseBody(const PreviewOutputFileResponseBody &) = default ;
    PreviewOutputFileResponseBody(PreviewOutputFileResponseBody &&) = default ;
    PreviewOutputFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewOutputFileResponseBody() = default ;
    PreviewOutputFileResponseBody& operator=(const PreviewOutputFileResponseBody &) = default ;
    PreviewOutputFileResponseBody& operator=(PreviewOutputFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Version : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Version& obj) { 
        DARABONBA_PTR_TO_JSON(availability, availability_);
        DARABONBA_PTR_TO_JSON(capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(contentRevision, contentRevision_);
        DARABONBA_PTR_TO_JSON(isLatest, isLatest_);
        DARABONBA_PTR_TO_JSON(latestVersionId, latestVersionId_);
        DARABONBA_PTR_TO_JSON(readState, readState_);
        DARABONBA_PTR_TO_JSON(selectedVersionId, selectedVersionId_);
        DARABONBA_PTR_TO_JSON(sourceMessageId, sourceMessageId_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(versionNo, versionNo_);
      };
      friend void from_json(const Darabonba::Json& j, Version& obj) { 
        DARABONBA_PTR_FROM_JSON(availability, availability_);
        DARABONBA_PTR_FROM_JSON(capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(contentRevision, contentRevision_);
        DARABONBA_PTR_FROM_JSON(isLatest, isLatest_);
        DARABONBA_PTR_FROM_JSON(latestVersionId, latestVersionId_);
        DARABONBA_PTR_FROM_JSON(readState, readState_);
        DARABONBA_PTR_FROM_JSON(selectedVersionId, selectedVersionId_);
        DARABONBA_PTR_FROM_JSON(sourceMessageId, sourceMessageId_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(versionNo, versionNo_);
      };
      Version() = default ;
      Version(const Version &) = default ;
      Version(Version &&) = default ;
      Version(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Version() = default ;
      Version& operator=(const Version &) = default ;
      Version& operator=(Version &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Capabilities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
          DARABONBA_PTR_TO_JSON(canBrowserOpen, canBrowserOpen_);
          DARABONBA_PTR_TO_JSON(canDownload, canDownload_);
          DARABONBA_PTR_TO_JSON(canEdit, canEdit_);
          DARABONBA_PTR_TO_JSON(canRestore, canRestore_);
          DARABONBA_PTR_TO_JSON(canSaveAsKnowledge, canSaveAsKnowledge_);
          DARABONBA_PTR_TO_JSON(canShare, canShare_);
        };
        friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
          DARABONBA_PTR_FROM_JSON(canBrowserOpen, canBrowserOpen_);
          DARABONBA_PTR_FROM_JSON(canDownload, canDownload_);
          DARABONBA_PTR_FROM_JSON(canEdit, canEdit_);
          DARABONBA_PTR_FROM_JSON(canRestore, canRestore_);
          DARABONBA_PTR_FROM_JSON(canSaveAsKnowledge, canSaveAsKnowledge_);
          DARABONBA_PTR_FROM_JSON(canShare, canShare_);
        };
        Capabilities() = default ;
        Capabilities(const Capabilities &) = default ;
        Capabilities(Capabilities &&) = default ;
        Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Capabilities() = default ;
        Capabilities& operator=(const Capabilities &) = default ;
        Capabilities& operator=(Capabilities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canBrowserOpen_ == nullptr
        && this->canDownload_ == nullptr && this->canEdit_ == nullptr && this->canRestore_ == nullptr && this->canSaveAsKnowledge_ == nullptr && this->canShare_ == nullptr; };
        // canBrowserOpen Field Functions 
        bool hasCanBrowserOpen() const { return this->canBrowserOpen_ != nullptr;};
        void deleteCanBrowserOpen() { this->canBrowserOpen_ = nullptr;};
        inline bool getCanBrowserOpen() const { DARABONBA_PTR_GET_DEFAULT(canBrowserOpen_, false) };
        inline Capabilities& setCanBrowserOpen(bool canBrowserOpen) { DARABONBA_PTR_SET_VALUE(canBrowserOpen_, canBrowserOpen) };


        // canDownload Field Functions 
        bool hasCanDownload() const { return this->canDownload_ != nullptr;};
        void deleteCanDownload() { this->canDownload_ = nullptr;};
        inline bool getCanDownload() const { DARABONBA_PTR_GET_DEFAULT(canDownload_, false) };
        inline Capabilities& setCanDownload(bool canDownload) { DARABONBA_PTR_SET_VALUE(canDownload_, canDownload) };


        // canEdit Field Functions 
        bool hasCanEdit() const { return this->canEdit_ != nullptr;};
        void deleteCanEdit() { this->canEdit_ = nullptr;};
        inline bool getCanEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
        inline Capabilities& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


        // canRestore Field Functions 
        bool hasCanRestore() const { return this->canRestore_ != nullptr;};
        void deleteCanRestore() { this->canRestore_ = nullptr;};
        inline bool getCanRestore() const { DARABONBA_PTR_GET_DEFAULT(canRestore_, false) };
        inline Capabilities& setCanRestore(bool canRestore) { DARABONBA_PTR_SET_VALUE(canRestore_, canRestore) };


        // canSaveAsKnowledge Field Functions 
        bool hasCanSaveAsKnowledge() const { return this->canSaveAsKnowledge_ != nullptr;};
        void deleteCanSaveAsKnowledge() { this->canSaveAsKnowledge_ = nullptr;};
        inline bool getCanSaveAsKnowledge() const { DARABONBA_PTR_GET_DEFAULT(canSaveAsKnowledge_, false) };
        inline Capabilities& setCanSaveAsKnowledge(bool canSaveAsKnowledge) { DARABONBA_PTR_SET_VALUE(canSaveAsKnowledge_, canSaveAsKnowledge) };


        // canShare Field Functions 
        bool hasCanShare() const { return this->canShare_ != nullptr;};
        void deleteCanShare() { this->canShare_ = nullptr;};
        inline bool getCanShare() const { DARABONBA_PTR_GET_DEFAULT(canShare_, false) };
        inline Capabilities& setCanShare(bool canShare) { DARABONBA_PTR_SET_VALUE(canShare_, canShare) };


      protected:
        // Indicates whether the version can be opened in a browser.
        shared_ptr<bool> canBrowserOpen_ {};
        // Indicates whether the version can be downloaded.
        shared_ptr<bool> canDownload_ {};
        // Indicates whether the course can be edited or deleted.
        shared_ptr<bool> canEdit_ {};
        // Indicates whether the version can be restored to the latest version.
        shared_ptr<bool> canRestore_ {};
        // Indicates whether the version can be saved as knowledge.
        shared_ptr<bool> canSaveAsKnowledge_ {};
        // Indicates whether the version can be shared.
        shared_ptr<bool> canShare_ {};
      };

      virtual bool empty() const override { return this->availability_ == nullptr
        && this->capabilities_ == nullptr && this->contentRevision_ == nullptr && this->isLatest_ == nullptr && this->latestVersionId_ == nullptr && this->readState_ == nullptr
        && this->selectedVersionId_ == nullptr && this->sourceMessageId_ == nullptr && this->updatedAt_ == nullptr && this->versionNo_ == nullptr; };
      // availability Field Functions 
      bool hasAvailability() const { return this->availability_ != nullptr;};
      void deleteAvailability() { this->availability_ = nullptr;};
      inline string getAvailability() const { DARABONBA_PTR_GET_DEFAULT(availability_, "") };
      inline Version& setAvailability(string availability) { DARABONBA_PTR_SET_VALUE(availability_, availability) };


      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const Version::Capabilities & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, Version::Capabilities) };
      inline Version::Capabilities getCapabilities() { DARABONBA_PTR_GET(capabilities_, Version::Capabilities) };
      inline Version& setCapabilities(const Version::Capabilities & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Version& setCapabilities(Version::Capabilities && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // contentRevision Field Functions 
      bool hasContentRevision() const { return this->contentRevision_ != nullptr;};
      void deleteContentRevision() { this->contentRevision_ = nullptr;};
      inline int64_t getContentRevision() const { DARABONBA_PTR_GET_DEFAULT(contentRevision_, 0L) };
      inline Version& setContentRevision(int64_t contentRevision) { DARABONBA_PTR_SET_VALUE(contentRevision_, contentRevision) };


      // isLatest Field Functions 
      bool hasIsLatest() const { return this->isLatest_ != nullptr;};
      void deleteIsLatest() { this->isLatest_ = nullptr;};
      inline bool getIsLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, false) };
      inline Version& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


      // latestVersionId Field Functions 
      bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
      void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
      inline string getLatestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
      inline Version& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


      // readState Field Functions 
      bool hasReadState() const { return this->readState_ != nullptr;};
      void deleteReadState() { this->readState_ = nullptr;};
      inline string getReadState() const { DARABONBA_PTR_GET_DEFAULT(readState_, "") };
      inline Version& setReadState(string readState) { DARABONBA_PTR_SET_VALUE(readState_, readState) };


      // selectedVersionId Field Functions 
      bool hasSelectedVersionId() const { return this->selectedVersionId_ != nullptr;};
      void deleteSelectedVersionId() { this->selectedVersionId_ = nullptr;};
      inline string getSelectedVersionId() const { DARABONBA_PTR_GET_DEFAULT(selectedVersionId_, "") };
      inline Version& setSelectedVersionId(string selectedVersionId) { DARABONBA_PTR_SET_VALUE(selectedVersionId_, selectedVersionId) };


      // sourceMessageId Field Functions 
      bool hasSourceMessageId() const { return this->sourceMessageId_ != nullptr;};
      void deleteSourceMessageId() { this->sourceMessageId_ = nullptr;};
      inline string getSourceMessageId() const { DARABONBA_PTR_GET_DEFAULT(sourceMessageId_, "") };
      inline Version& setSourceMessageId(string sourceMessageId) { DARABONBA_PTR_SET_VALUE(sourceMessageId_, sourceMessageId) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Version& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // versionNo Field Functions 
      bool hasVersionNo() const { return this->versionNo_ != nullptr;};
      void deleteVersionNo() { this->versionNo_ = nullptr;};
      inline int64_t getVersionNo() const { DARABONBA_PTR_GET_DEFAULT(versionNo_, 0L) };
      inline Version& setVersionNo(int64_t versionNo) { DARABONBA_PTR_SET_VALUE(versionNo_, versionNo) };


    protected:
      // The number of remaining seats.
      shared_ptr<string> availability_ {};
      // Specifies whether the model supports multiple tool calls in a single response.
      shared_ptr<Version::Capabilities> capabilities_ {};
      // The content revision number.
      shared_ptr<int64_t> contentRevision_ {};
      // Indicates whether the version is the latest version.
      shared_ptr<bool> isLatest_ {};
      // The ID of the current latest version.
      shared_ptr<string> latestVersionId_ {};
      // The read state of the version.
      shared_ptr<string> readState_ {};
      // The ID of the version that is actually read.
      shared_ptr<string> selectedVersionId_ {};
      // The ID of the message that generated this version.
      shared_ptr<string> sourceMessageId_ {};
      // The update time.
      shared_ptr<string> updatedAt_ {};
      // The version serial number.
      shared_ptr<int64_t> versionNo_ {};
    };

    class Slides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Slides& obj) { 
        DARABONBA_PTR_TO_JSON(displayText, displayText_);
        DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(slideId, slideId_);
        DARABONBA_PTR_TO_JSON(slideIndex, slideIndex_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Slides& obj) { 
        DARABONBA_PTR_FROM_JSON(displayText, displayText_);
        DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(slideId, slideId_);
        DARABONBA_PTR_FROM_JSON(slideIndex, slideIndex_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      Slides() = default ;
      Slides(const Slides &) = default ;
      Slides(Slides &&) = default ;
      Slides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Slides() = default ;
      Slides& operator=(const Slides &) = default ;
      Slides& operator=(Slides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayText_ == nullptr
        && this->imageUrl_ == nullptr && this->slideId_ == nullptr && this->slideIndex_ == nullptr && this->status_ == nullptr; };
      // displayText Field Functions 
      bool hasDisplayText() const { return this->displayText_ != nullptr;};
      void deleteDisplayText() { this->displayText_ = nullptr;};
      inline string getDisplayText() const { DARABONBA_PTR_GET_DEFAULT(displayText_, "") };
      inline Slides& setDisplayText(string displayText) { DARABONBA_PTR_SET_VALUE(displayText_, displayText) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Slides& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // slideId Field Functions 
      bool hasSlideId() const { return this->slideId_ != nullptr;};
      void deleteSlideId() { this->slideId_ = nullptr;};
      inline string getSlideId() const { DARABONBA_PTR_GET_DEFAULT(slideId_, "") };
      inline Slides& setSlideId(string slideId) { DARABONBA_PTR_SET_VALUE(slideId_, slideId) };


      // slideIndex Field Functions 
      bool hasSlideIndex() const { return this->slideIndex_ != nullptr;};
      void deleteSlideIndex() { this->slideIndex_ = nullptr;};
      inline int64_t getSlideIndex() const { DARABONBA_PTR_GET_DEFAULT(slideIndex_, 0L) };
      inline Slides& setSlideIndex(int64_t slideIndex) { DARABONBA_PTR_SET_VALUE(slideIndex_, slideIndex) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Slides& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The display text of the slide.
      shared_ptr<string> displayText_ {};
      // Specifies the detail level of the image. Valid values: low, high, and auto. Default value: auto.
      shared_ptr<string> imageUrl_ {};
      // The slide ID.
      shared_ptr<string> slideId_ {};
      // The slide order.
      shared_ptr<int64_t> slideIndex_ {};
      // The signing status. Valid values:
      // - CREATED: created but not signed
      // - SUCCESS: signed successfully
      // - STOP: terminated
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->degraded_ == nullptr && this->downloadExpiresAt_ == nullptr && this->downloadUrl_ == nullptr && this->fileExt_ == nullptr
        && this->gmtModified_ == nullptr && this->itemName_ == nullptr && this->itemType_ == nullptr && this->message_ == nullptr && this->outputItemId_ == nullptr
        && this->previewExpiresAt_ == nullptr && this->previewType_ == nullptr && this->previewUrl_ == nullptr && this->readState_ == nullptr && this->requestId_ == nullptr
        && this->slides_ == nullptr && this->unavailableReason_ == nullptr && this->version_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PreviewOutputFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline PreviewOutputFileResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // degraded Field Functions 
    bool hasDegraded() const { return this->degraded_ != nullptr;};
    void deleteDegraded() { this->degraded_ = nullptr;};
    inline bool getDegraded() const { DARABONBA_PTR_GET_DEFAULT(degraded_, false) };
    inline PreviewOutputFileResponseBody& setDegraded(bool degraded) { DARABONBA_PTR_SET_VALUE(degraded_, degraded) };


    // downloadExpiresAt Field Functions 
    bool hasDownloadExpiresAt() const { return this->downloadExpiresAt_ != nullptr;};
    void deleteDownloadExpiresAt() { this->downloadExpiresAt_ = nullptr;};
    inline string getDownloadExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(downloadExpiresAt_, "") };
    inline PreviewOutputFileResponseBody& setDownloadExpiresAt(string downloadExpiresAt) { DARABONBA_PTR_SET_VALUE(downloadExpiresAt_, downloadExpiresAt) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline PreviewOutputFileResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline PreviewOutputFileResponseBody& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline PreviewOutputFileResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline PreviewOutputFileResponseBody& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // itemType Field Functions 
    bool hasItemType() const { return this->itemType_ != nullptr;};
    void deleteItemType() { this->itemType_ = nullptr;};
    inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
    inline PreviewOutputFileResponseBody& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreviewOutputFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline PreviewOutputFileResponseBody& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // previewExpiresAt Field Functions 
    bool hasPreviewExpiresAt() const { return this->previewExpiresAt_ != nullptr;};
    void deletePreviewExpiresAt() { this->previewExpiresAt_ = nullptr;};
    inline string getPreviewExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(previewExpiresAt_, "") };
    inline PreviewOutputFileResponseBody& setPreviewExpiresAt(string previewExpiresAt) { DARABONBA_PTR_SET_VALUE(previewExpiresAt_, previewExpiresAt) };


    // previewType Field Functions 
    bool hasPreviewType() const { return this->previewType_ != nullptr;};
    void deletePreviewType() { this->previewType_ = nullptr;};
    inline string getPreviewType() const { DARABONBA_PTR_GET_DEFAULT(previewType_, "") };
    inline PreviewOutputFileResponseBody& setPreviewType(string previewType) { DARABONBA_PTR_SET_VALUE(previewType_, previewType) };


    // previewUrl Field Functions 
    bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
    void deletePreviewUrl() { this->previewUrl_ = nullptr;};
    inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
    inline PreviewOutputFileResponseBody& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


    // readState Field Functions 
    bool hasReadState() const { return this->readState_ != nullptr;};
    void deleteReadState() { this->readState_ = nullptr;};
    inline string getReadState() const { DARABONBA_PTR_GET_DEFAULT(readState_, "") };
    inline PreviewOutputFileResponseBody& setReadState(string readState) { DARABONBA_PTR_SET_VALUE(readState_, readState) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewOutputFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slides Field Functions 
    bool hasSlides() const { return this->slides_ != nullptr;};
    void deleteSlides() { this->slides_ = nullptr;};
    inline const vector<PreviewOutputFileResponseBody::Slides> & getSlides() const { DARABONBA_PTR_GET_CONST(slides_, vector<PreviewOutputFileResponseBody::Slides>) };
    inline vector<PreviewOutputFileResponseBody::Slides> getSlides() { DARABONBA_PTR_GET(slides_, vector<PreviewOutputFileResponseBody::Slides>) };
    inline PreviewOutputFileResponseBody& setSlides(const vector<PreviewOutputFileResponseBody::Slides> & slides) { DARABONBA_PTR_SET_VALUE(slides_, slides) };
    inline PreviewOutputFileResponseBody& setSlides(vector<PreviewOutputFileResponseBody::Slides> && slides) { DARABONBA_PTR_SET_RVALUE(slides_, slides) };


    // unavailableReason Field Functions 
    bool hasUnavailableReason() const { return this->unavailableReason_ != nullptr;};
    void deleteUnavailableReason() { this->unavailableReason_ = nullptr;};
    inline string getUnavailableReason() const { DARABONBA_PTR_GET_DEFAULT(unavailableReason_, "") };
    inline PreviewOutputFileResponseBody& setUnavailableReason(string unavailableReason) { DARABONBA_PTR_SET_VALUE(unavailableReason_, unavailableReason) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const PreviewOutputFileResponseBody::Version & getVersion() const { DARABONBA_PTR_GET_CONST(version_, PreviewOutputFileResponseBody::Version) };
    inline PreviewOutputFileResponseBody::Version getVersion() { DARABONBA_PTR_GET(version_, PreviewOutputFileResponseBody::Version) };
    inline PreviewOutputFileResponseBody& setVersion(const PreviewOutputFileResponseBody::Version & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline PreviewOutputFileResponseBody& setVersion(PreviewOutputFileResponseBody::Version && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The text content. This parameter is used for the CONTENT type.
    shared_ptr<string> content_ {};
    // Indicates whether the preview is degraded to a download. A value of true indicates that the preview is degraded to a download and cannot be opened in an online previewer.
    shared_ptr<bool> degraded_ {};
    // The expiration time of the download ticket.
    shared_ptr<string> downloadExpiresAt_ {};
    // The short-term signed download URL for the output. You can send a GET request to this URL before it expires.
    shared_ptr<string> downloadUrl_ {};
    // The file name extension. This parameter is used for the OSS_IMM type.
    shared_ptr<string> fileExt_ {};
    // The modification time in ISO8601 format.
    shared_ptr<string> gmtModified_ {};
    // The output name.
    shared_ptr<string> itemName_ {};
    // The output item type. Valid values: ppt, html, document, picture, slides, video, audio, email, and others.
    shared_ptr<string> itemType_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The output item ID.
    shared_ptr<string> outputItemId_ {};
    // The expiration time of the preview ticket.
    shared_ptr<string> previewExpiresAt_ {};
    // The preview type. Valid values: OSS_IMM, IMAGE, AUDIO, VIDEO, HTML, DING_TALK, VOICE_MEETING, and CONTENT.
    shared_ptr<string> previewType_ {};
    // The preview URL. This parameter is used for OSS_IMM, DING_TALK, and VOICE_MEETING.
    shared_ptr<string> previewUrl_ {};
    // The read state. Valid values: AVAILABLE, PRUNED, PENDING, and UNVERSIONED.
    shared_ptr<string> readState_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of slides for the slide deck output.
    shared_ptr<vector<PreviewOutputFileResponseBody::Slides>> slides_ {};
    // The reason why the content is unavailable.
    shared_ptr<string> unavailableReason_ {};
    // The optimistic version number.
    shared_ptr<PreviewOutputFileResponseBody::Version> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
