// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERVISIBLEKNOWLEDGEBASECONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERVISIBLEKNOWLEDGEBASECONTENTSRESPONSEBODY_HPP_
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
  class ListUserVisibleKnowledgeBaseContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserVisibleKnowledgeBaseContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserVisibleKnowledgeBaseContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListUserVisibleKnowledgeBaseContentsResponseBody() = default ;
    ListUserVisibleKnowledgeBaseContentsResponseBody(const ListUserVisibleKnowledgeBaseContentsResponseBody &) = default ;
    ListUserVisibleKnowledgeBaseContentsResponseBody(ListUserVisibleKnowledgeBaseContentsResponseBody &&) = default ;
    ListUserVisibleKnowledgeBaseContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserVisibleKnowledgeBaseContentsResponseBody() = default ;
    ListUserVisibleKnowledgeBaseContentsResponseBody& operator=(const ListUserVisibleKnowledgeBaseContentsResponseBody &) = default ;
    ListUserVisibleKnowledgeBaseContentsResponseBody& operator=(ListUserVisibleKnowledgeBaseContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_TO_JSON(directoryType, directoryType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(itemId, itemId_);
        DARABONBA_PTR_TO_JSON(itemType, itemType_);
        DARABONBA_PTR_TO_JSON(kbSubmissionPending, kbSubmissionPending_);
        DARABONBA_PTR_TO_JSON(modifierName, modifierName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_TO_JSON(ooVisibilityMode, ooVisibilityMode_);
        DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
        DARABONBA_PTR_TO_JSON(shareInfos, shareInfos_);
        DARABONBA_PTR_TO_JSON(shared, shared_);
        DARABONBA_PTR_TO_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_TO_JSON(sourceKind, sourceKind_);
        DARABONBA_PTR_TO_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_TO_JSON(sourceStatus, sourceStatus_);
        DARABONBA_PTR_TO_JSON(sourceTotalCount, sourceTotalCount_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(directoryKind, directoryKind_);
        DARABONBA_PTR_FROM_JSON(directoryType, directoryType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(itemId, itemId_);
        DARABONBA_PTR_FROM_JSON(itemType, itemType_);
        DARABONBA_PTR_FROM_JSON(kbSubmissionPending, kbSubmissionPending_);
        DARABONBA_PTR_FROM_JSON(modifierName, modifierName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
        DARABONBA_PTR_FROM_JSON(ooVisibilityMode, ooVisibilityMode_);
        DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
        DARABONBA_PTR_FROM_JSON(shareInfos, shareInfos_);
        DARABONBA_PTR_FROM_JSON(shared, shared_);
        DARABONBA_PTR_FROM_JSON(sourceFailedCount, sourceFailedCount_);
        DARABONBA_PTR_FROM_JSON(sourceKind, sourceKind_);
        DARABONBA_PTR_FROM_JSON(sourceReadyCount, sourceReadyCount_);
        DARABONBA_PTR_FROM_JSON(sourceStatus, sourceStatus_);
        DARABONBA_PTR_FROM_JSON(sourceTotalCount, sourceTotalCount_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShareInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShareInfos& obj) { 
          DARABONBA_PTR_TO_JSON(submissionId, submissionId_);
          DARABONBA_PTR_TO_JSON(submitterId, submitterId_);
          DARABONBA_PTR_TO_JSON(submitterName, submitterName_);
          DARABONBA_PTR_TO_JSON(targetDirectoryId, targetDirectoryId_);
          DARABONBA_PTR_TO_JSON(targetDirectoryName, targetDirectoryName_);
          DARABONBA_PTR_TO_JSON(targetKbRootDirectoryId, targetKbRootDirectoryId_);
          DARABONBA_PTR_TO_JSON(targetKbRootDirectoryName, targetKbRootDirectoryName_);
        };
        friend void from_json(const Darabonba::Json& j, ShareInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(submissionId, submissionId_);
          DARABONBA_PTR_FROM_JSON(submitterId, submitterId_);
          DARABONBA_PTR_FROM_JSON(submitterName, submitterName_);
          DARABONBA_PTR_FROM_JSON(targetDirectoryId, targetDirectoryId_);
          DARABONBA_PTR_FROM_JSON(targetDirectoryName, targetDirectoryName_);
          DARABONBA_PTR_FROM_JSON(targetKbRootDirectoryId, targetKbRootDirectoryId_);
          DARABONBA_PTR_FROM_JSON(targetKbRootDirectoryName, targetKbRootDirectoryName_);
        };
        ShareInfos() = default ;
        ShareInfos(const ShareInfos &) = default ;
        ShareInfos(ShareInfos &&) = default ;
        ShareInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShareInfos() = default ;
        ShareInfos& operator=(const ShareInfos &) = default ;
        ShareInfos& operator=(ShareInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->submissionId_ == nullptr
        && this->submitterId_ == nullptr && this->submitterName_ == nullptr && this->targetDirectoryId_ == nullptr && this->targetDirectoryName_ == nullptr && this->targetKbRootDirectoryId_ == nullptr
        && this->targetKbRootDirectoryName_ == nullptr; };
        // submissionId Field Functions 
        bool hasSubmissionId() const { return this->submissionId_ != nullptr;};
        void deleteSubmissionId() { this->submissionId_ = nullptr;};
        inline string getSubmissionId() const { DARABONBA_PTR_GET_DEFAULT(submissionId_, "") };
        inline ShareInfos& setSubmissionId(string submissionId) { DARABONBA_PTR_SET_VALUE(submissionId_, submissionId) };


        // submitterId Field Functions 
        bool hasSubmitterId() const { return this->submitterId_ != nullptr;};
        void deleteSubmitterId() { this->submitterId_ = nullptr;};
        inline int64_t getSubmitterId() const { DARABONBA_PTR_GET_DEFAULT(submitterId_, 0L) };
        inline ShareInfos& setSubmitterId(int64_t submitterId) { DARABONBA_PTR_SET_VALUE(submitterId_, submitterId) };


        // submitterName Field Functions 
        bool hasSubmitterName() const { return this->submitterName_ != nullptr;};
        void deleteSubmitterName() { this->submitterName_ = nullptr;};
        inline string getSubmitterName() const { DARABONBA_PTR_GET_DEFAULT(submitterName_, "") };
        inline ShareInfos& setSubmitterName(string submitterName) { DARABONBA_PTR_SET_VALUE(submitterName_, submitterName) };


        // targetDirectoryId Field Functions 
        bool hasTargetDirectoryId() const { return this->targetDirectoryId_ != nullptr;};
        void deleteTargetDirectoryId() { this->targetDirectoryId_ = nullptr;};
        inline string getTargetDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryId_, "") };
        inline ShareInfos& setTargetDirectoryId(string targetDirectoryId) { DARABONBA_PTR_SET_VALUE(targetDirectoryId_, targetDirectoryId) };


        // targetDirectoryName Field Functions 
        bool hasTargetDirectoryName() const { return this->targetDirectoryName_ != nullptr;};
        void deleteTargetDirectoryName() { this->targetDirectoryName_ = nullptr;};
        inline string getTargetDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryName_, "") };
        inline ShareInfos& setTargetDirectoryName(string targetDirectoryName) { DARABONBA_PTR_SET_VALUE(targetDirectoryName_, targetDirectoryName) };


        // targetKbRootDirectoryId Field Functions 
        bool hasTargetKbRootDirectoryId() const { return this->targetKbRootDirectoryId_ != nullptr;};
        void deleteTargetKbRootDirectoryId() { this->targetKbRootDirectoryId_ = nullptr;};
        inline string getTargetKbRootDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetKbRootDirectoryId_, "") };
        inline ShareInfos& setTargetKbRootDirectoryId(string targetKbRootDirectoryId) { DARABONBA_PTR_SET_VALUE(targetKbRootDirectoryId_, targetKbRootDirectoryId) };


        // targetKbRootDirectoryName Field Functions 
        bool hasTargetKbRootDirectoryName() const { return this->targetKbRootDirectoryName_ != nullptr;};
        void deleteTargetKbRootDirectoryName() { this->targetKbRootDirectoryName_ = nullptr;};
        inline string getTargetKbRootDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(targetKbRootDirectoryName_, "") };
        inline ShareInfos& setTargetKbRootDirectoryName(string targetKbRootDirectoryName) { DARABONBA_PTR_SET_VALUE(targetKbRootDirectoryName_, targetKbRootDirectoryName) };


      protected:
        // The Ray Job ID.
        shared_ptr<string> submissionId_ {};
        // The user ID of the submitter.
        shared_ptr<int64_t> submitterId_ {};
        // The submitter name.
        shared_ptr<string> submitterName_ {};
        // The target directory ID.
        shared_ptr<string> targetDirectoryId_ {};
        // The target directory name.
        shared_ptr<string> targetDirectoryName_ {};
        // The root directory ID of the target enterprise knowledge base.
        shared_ptr<string> targetKbRootDirectoryId_ {};
        // The name of the target enterprise knowledge base.
        shared_ptr<string> targetKbRootDirectoryName_ {};
      };

      virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->description_ == nullptr && this->directoryKind_ == nullptr && this->directoryType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->itemId_ == nullptr && this->itemType_ == nullptr && this->kbSubmissionPending_ == nullptr && this->modifierName_ == nullptr && this->name_ == nullptr
        && this->objectBindings_ == nullptr && this->ooVisibilityMode_ == nullptr && this->readOnly_ == nullptr && this->shareInfos_ == nullptr && this->shared_ == nullptr
        && this->sourceFailedCount_ == nullptr && this->sourceKind_ == nullptr && this->sourceReadyCount_ == nullptr && this->sourceStatus_ == nullptr && this->sourceTotalCount_ == nullptr
        && this->sourceType_ == nullptr; };
      // creatorName Field Functions 
      bool hasCreatorName() const { return this->creatorName_ != nullptr;};
      void deleteCreatorName() { this->creatorName_ = nullptr;};
      inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
      inline Items& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // directoryKind Field Functions 
      bool hasDirectoryKind() const { return this->directoryKind_ != nullptr;};
      void deleteDirectoryKind() { this->directoryKind_ = nullptr;};
      inline string getDirectoryKind() const { DARABONBA_PTR_GET_DEFAULT(directoryKind_, "") };
      inline Items& setDirectoryKind(string directoryKind) { DARABONBA_PTR_SET_VALUE(directoryKind_, directoryKind) };


      // directoryType Field Functions 
      bool hasDirectoryType() const { return this->directoryType_ != nullptr;};
      void deleteDirectoryType() { this->directoryType_ = nullptr;};
      inline string getDirectoryType() const { DARABONBA_PTR_GET_DEFAULT(directoryType_, "") };
      inline Items& setDirectoryType(string directoryType) { DARABONBA_PTR_SET_VALUE(directoryType_, directoryType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Items& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Items& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // itemType Field Functions 
      bool hasItemType() const { return this->itemType_ != nullptr;};
      void deleteItemType() { this->itemType_ = nullptr;};
      inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
      inline Items& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


      // kbSubmissionPending Field Functions 
      bool hasKbSubmissionPending() const { return this->kbSubmissionPending_ != nullptr;};
      void deleteKbSubmissionPending() { this->kbSubmissionPending_ = nullptr;};
      inline bool getKbSubmissionPending() const { DARABONBA_PTR_GET_DEFAULT(kbSubmissionPending_, false) };
      inline Items& setKbSubmissionPending(bool kbSubmissionPending) { DARABONBA_PTR_SET_VALUE(kbSubmissionPending_, kbSubmissionPending) };


      // modifierName Field Functions 
      bool hasModifierName() const { return this->modifierName_ != nullptr;};
      void deleteModifierName() { this->modifierName_ = nullptr;};
      inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
      inline Items& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectBindings Field Functions 
      bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
      void deleteObjectBindings() { this->objectBindings_ = nullptr;};
      inline const vector<Darabonba::Json> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<Darabonba::Json>) };
      inline Items& setObjectBindings(const vector<Darabonba::Json> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
      inline Items& setObjectBindings(vector<Darabonba::Json> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


      // ooVisibilityMode Field Functions 
      bool hasOoVisibilityMode() const { return this->ooVisibilityMode_ != nullptr;};
      void deleteOoVisibilityMode() { this->ooVisibilityMode_ = nullptr;};
      inline string getOoVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(ooVisibilityMode_, "") };
      inline Items& setOoVisibilityMode(string ooVisibilityMode) { DARABONBA_PTR_SET_VALUE(ooVisibilityMode_, ooVisibilityMode) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline Items& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // shareInfos Field Functions 
      bool hasShareInfos() const { return this->shareInfos_ != nullptr;};
      void deleteShareInfos() { this->shareInfos_ = nullptr;};
      inline const vector<Items::ShareInfos> & getShareInfos() const { DARABONBA_PTR_GET_CONST(shareInfos_, vector<Items::ShareInfos>) };
      inline vector<Items::ShareInfos> getShareInfos() { DARABONBA_PTR_GET(shareInfos_, vector<Items::ShareInfos>) };
      inline Items& setShareInfos(const vector<Items::ShareInfos> & shareInfos) { DARABONBA_PTR_SET_VALUE(shareInfos_, shareInfos) };
      inline Items& setShareInfos(vector<Items::ShareInfos> && shareInfos) { DARABONBA_PTR_SET_RVALUE(shareInfos_, shareInfos) };


      // shared Field Functions 
      bool hasShared() const { return this->shared_ != nullptr;};
      void deleteShared() { this->shared_ = nullptr;};
      inline bool getShared() const { DARABONBA_PTR_GET_DEFAULT(shared_, false) };
      inline Items& setShared(bool shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };


      // sourceFailedCount Field Functions 
      bool hasSourceFailedCount() const { return this->sourceFailedCount_ != nullptr;};
      void deleteSourceFailedCount() { this->sourceFailedCount_ = nullptr;};
      inline int64_t getSourceFailedCount() const { DARABONBA_PTR_GET_DEFAULT(sourceFailedCount_, 0L) };
      inline Items& setSourceFailedCount(int64_t sourceFailedCount) { DARABONBA_PTR_SET_VALUE(sourceFailedCount_, sourceFailedCount) };


      // sourceKind Field Functions 
      bool hasSourceKind() const { return this->sourceKind_ != nullptr;};
      void deleteSourceKind() { this->sourceKind_ = nullptr;};
      inline string getSourceKind() const { DARABONBA_PTR_GET_DEFAULT(sourceKind_, "") };
      inline Items& setSourceKind(string sourceKind) { DARABONBA_PTR_SET_VALUE(sourceKind_, sourceKind) };


      // sourceReadyCount Field Functions 
      bool hasSourceReadyCount() const { return this->sourceReadyCount_ != nullptr;};
      void deleteSourceReadyCount() { this->sourceReadyCount_ = nullptr;};
      inline int64_t getSourceReadyCount() const { DARABONBA_PTR_GET_DEFAULT(sourceReadyCount_, 0L) };
      inline Items& setSourceReadyCount(int64_t sourceReadyCount) { DARABONBA_PTR_SET_VALUE(sourceReadyCount_, sourceReadyCount) };


      // sourceStatus Field Functions 
      bool hasSourceStatus() const { return this->sourceStatus_ != nullptr;};
      void deleteSourceStatus() { this->sourceStatus_ = nullptr;};
      inline string getSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(sourceStatus_, "") };
      inline Items& setSourceStatus(string sourceStatus) { DARABONBA_PTR_SET_VALUE(sourceStatus_, sourceStatus) };


      // sourceTotalCount Field Functions 
      bool hasSourceTotalCount() const { return this->sourceTotalCount_ != nullptr;};
      void deleteSourceTotalCount() { this->sourceTotalCount_ = nullptr;};
      inline int64_t getSourceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(sourceTotalCount_, 0L) };
      inline Items& setSourceTotalCount(int64_t sourceTotalCount) { DARABONBA_PTR_SET_VALUE(sourceTotalCount_, sourceTotalCount) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The name of the creator.
      shared_ptr<string> creatorName_ {};
      // The description of the to-do card type.
      shared_ptr<string> description_ {};
      // The directory type.
      shared_ptr<string> directoryKind_ {};
      // The directory type.
      shared_ptr<string> directoryType_ {};
      // The creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // The last modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // The item ID.
      shared_ptr<string> itemId_ {};
      // The item type.
      shared_ptr<string> itemType_ {};
      // Indicates whether the resource has a pending knowledge base submission record.
      shared_ptr<bool> kbSubmissionPending_ {};
      // The name of the modifier.
      shared_ptr<string> modifierName_ {};
      // The name.
      shared_ptr<string> name_ {};
      // The object bindings.
      shared_ptr<vector<Darabonba::Json>> objectBindings_ {};
      // The visibility mode of the knowledge base to digital employees.
      shared_ptr<string> ooVisibilityMode_ {};
      // Indicates whether the item is read-only.
      shared_ptr<bool> readOnly_ {};
      // The sharing information.
      shared_ptr<vector<Items::ShareInfos>> shareInfos_ {};
      // Indicates whether shared access is allowed.
      shared_ptr<bool> shared_ {};
      // The number of resources in FAILED status. Returned only when listing top-level KB directories.
      shared_ptr<int64_t> sourceFailedCount_ {};
      // The knowledge base affiliation type. Valid values: aliding_kb_doc (DingTalk knowledge base document), normal (common knowledge).
      shared_ptr<string> sourceKind_ {};
      // The number of resources in READY status. Returned only when listing top-level KB directories.
      shared_ptr<int64_t> sourceReadyCount_ {};
      // The resource status. This field has a value only when itemType is resource.
      shared_ptr<string> sourceStatus_ {};
      // The total number of resources under the directory and its subdirectories. Returned only when listing top-level KB directories.
      shared_ptr<int64_t> sourceTotalCount_ {};
      // The data source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items>) };
    inline vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items>) };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setItems(const vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setItems(vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserVisibleKnowledgeBaseContentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The list of skill cards.
    shared_ptr<vector<ListUserVisibleKnowledgeBaseContentsResponseBody::Items>> items_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The page number. Default value: 1. Pages start from page 1.
    shared_ptr<int64_t> page_ {};
    // The page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
