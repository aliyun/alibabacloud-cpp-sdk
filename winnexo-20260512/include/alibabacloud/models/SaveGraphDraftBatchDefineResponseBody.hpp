// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTBATCHDEFINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTBATCHDEFINERESPONSEBODY_HPP_
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
  class SaveGraphDraftBatchDefineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGraphDraftBatchDefineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(saveMode, saveMode_);
      DARABONBA_PTR_TO_JSON(savedCount, savedCount_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGraphDraftBatchDefineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(saveMode, saveMode_);
      DARABONBA_PTR_FROM_JSON(savedCount, savedCount_);
    };
    SaveGraphDraftBatchDefineResponseBody() = default ;
    SaveGraphDraftBatchDefineResponseBody(const SaveGraphDraftBatchDefineResponseBody &) = default ;
    SaveGraphDraftBatchDefineResponseBody(SaveGraphDraftBatchDefineResponseBody &&) = default ;
    SaveGraphDraftBatchDefineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGraphDraftBatchDefineResponseBody() = default ;
    SaveGraphDraftBatchDefineResponseBody& operator=(const SaveGraphDraftBatchDefineResponseBody &) = default ;
    SaveGraphDraftBatchDefineResponseBody& operator=(SaveGraphDraftBatchDefineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(baseContentHash, baseContentHash_);
        DARABONBA_PTR_TO_JSON(baseSchemaVersion, baseSchemaVersion_);
        DARABONBA_PTR_TO_JSON(draftChangeId, draftChangeId_);
        DARABONBA_PTR_TO_JSON(draftContentHash, draftContentHash_);
        DARABONBA_PTR_TO_JSON(elementType, elementType_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(operationType, operationType_);
        DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(baseContentHash, baseContentHash_);
        DARABONBA_PTR_FROM_JSON(baseSchemaVersion, baseSchemaVersion_);
        DARABONBA_PTR_FROM_JSON(draftChangeId, draftChangeId_);
        DARABONBA_PTR_FROM_JSON(draftContentHash, draftContentHash_);
        DARABONBA_PTR_FROM_JSON(elementType, elementType_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(operationType, operationType_);
        DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
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
      virtual bool empty() const override { return this->baseContentHash_ == nullptr
        && this->baseSchemaVersion_ == nullptr && this->draftChangeId_ == nullptr && this->draftContentHash_ == nullptr && this->elementType_ == nullptr && this->gmtModified_ == nullptr
        && this->operationType_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->sourceType_ == nullptr; };
      // baseContentHash Field Functions 
      bool hasBaseContentHash() const { return this->baseContentHash_ != nullptr;};
      void deleteBaseContentHash() { this->baseContentHash_ = nullptr;};
      inline string getBaseContentHash() const { DARABONBA_PTR_GET_DEFAULT(baseContentHash_, "") };
      inline Items& setBaseContentHash(string baseContentHash) { DARABONBA_PTR_SET_VALUE(baseContentHash_, baseContentHash) };


      // baseSchemaVersion Field Functions 
      bool hasBaseSchemaVersion() const { return this->baseSchemaVersion_ != nullptr;};
      void deleteBaseSchemaVersion() { this->baseSchemaVersion_ = nullptr;};
      inline string getBaseSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(baseSchemaVersion_, "") };
      inline Items& setBaseSchemaVersion(string baseSchemaVersion) { DARABONBA_PTR_SET_VALUE(baseSchemaVersion_, baseSchemaVersion) };


      // draftChangeId Field Functions 
      bool hasDraftChangeId() const { return this->draftChangeId_ != nullptr;};
      void deleteDraftChangeId() { this->draftChangeId_ = nullptr;};
      inline int64_t getDraftChangeId() const { DARABONBA_PTR_GET_DEFAULT(draftChangeId_, 0L) };
      inline Items& setDraftChangeId(int64_t draftChangeId) { DARABONBA_PTR_SET_VALUE(draftChangeId_, draftChangeId) };


      // draftContentHash Field Functions 
      bool hasDraftContentHash() const { return this->draftContentHash_ != nullptr;};
      void deleteDraftContentHash() { this->draftContentHash_ = nullptr;};
      inline string getDraftContentHash() const { DARABONBA_PTR_GET_DEFAULT(draftContentHash_, "") };
      inline Items& setDraftContentHash(string draftContentHash) { DARABONBA_PTR_SET_VALUE(draftContentHash_, draftContentHash) };


      // elementType Field Functions 
      bool hasElementType() const { return this->elementType_ != nullptr;};
      void deleteElementType() { this->elementType_ = nullptr;};
      inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
      inline Items& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline Items& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Items& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Items& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The hash of the draft content itself, a 64-character SHA-256 hexadecimal string.
      shared_ptr<string> baseContentHash_ {};
      // The active schema version number on which the draft is based.
      shared_ptr<string> baseSchemaVersion_ {};
      // The unique draft change ID, referenced when revoking drafts or publishing.
      shared_ptr<int64_t> draftChangeId_ {};
      // The online content hash on which the draft save is based (draft starting point), a 64-character SHA-256 hexadecimal string.
      shared_ptr<string> draftContentHash_ {};
      // The element type. Currently, only text is supported.
      // 
      // This parameter is required.
      shared_ptr<string> elementType_ {};
      // The update time in ISO 8601 format.
      shared_ptr<string> gmtModified_ {};
      // The operation type.
      shared_ptr<string> operationType_ {};
      // The resource name of the agent runtime.
      // 
      // This parameter is required.
      shared_ptr<string> resourceName_ {};
      // The resource type.
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->graphName_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->saveMode_ == nullptr
        && this->savedCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SaveGraphDraftBatchDefineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline SaveGraphDraftBatchDefineResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<SaveGraphDraftBatchDefineResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<SaveGraphDraftBatchDefineResponseBody::Items>) };
    inline vector<SaveGraphDraftBatchDefineResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<SaveGraphDraftBatchDefineResponseBody::Items>) };
    inline SaveGraphDraftBatchDefineResponseBody& setItems(const vector<SaveGraphDraftBatchDefineResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline SaveGraphDraftBatchDefineResponseBody& setItems(vector<SaveGraphDraftBatchDefineResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SaveGraphDraftBatchDefineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveGraphDraftBatchDefineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // saveMode Field Functions 
    bool hasSaveMode() const { return this->saveMode_ != nullptr;};
    void deleteSaveMode() { this->saveMode_ = nullptr;};
    inline string getSaveMode() const { DARABONBA_PTR_GET_DEFAULT(saveMode_, "") };
    inline SaveGraphDraftBatchDefineResponseBody& setSaveMode(string saveMode) { DARABONBA_PTR_SET_VALUE(saveMode_, saveMode) };


    // savedCount Field Functions 
    bool hasSavedCount() const { return this->savedCount_ != nullptr;};
    void deleteSavedCount() { this->savedCount_ = nullptr;};
    inline int32_t getSavedCount() const { DARABONBA_PTR_GET_DEFAULT(savedCount_, 0) };
    inline SaveGraphDraftBatchDefineResponseBody& setSavedCount(int32_t savedCount) { DARABONBA_PTR_SET_VALUE(savedCount_, savedCount) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The graph name.
    shared_ptr<string> graphName_ {};
    // The list of MCP cards.
    shared_ptr<vector<SaveGraphDraftBatchDefineResponseBody::Items>> items_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The save mode.
    shared_ptr<string> saveMode_ {};
    // The number of saved items.
    shared_ptr<int32_t> savedCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
