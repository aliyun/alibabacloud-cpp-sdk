// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRAPHDRAFTRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGRAPHDRAFTRESOURCESRESPONSEBODY_HPP_
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
  class ListGraphDraftResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGraphDraftResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGraphDraftResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGraphDraftResourcesResponseBody() = default ;
    ListGraphDraftResourcesResponseBody(const ListGraphDraftResourcesResponseBody &) = default ;
    ListGraphDraftResourcesResponseBody(ListGraphDraftResourcesResponseBody &&) = default ;
    ListGraphDraftResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGraphDraftResourcesResponseBody() = default ;
    ListGraphDraftResourcesResponseBody& operator=(const ListGraphDraftResourcesResponseBody &) = default ;
    ListGraphDraftResourcesResponseBody& operator=(ListGraphDraftResourcesResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(editMode, editMode_);
        DARABONBA_PTR_TO_JSON(effectiveOperation, effectiveOperation_);
        DARABONBA_PTR_TO_JSON(elementType, elementType_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(hasOnlineChanged, hasOnlineChanged_);
        DARABONBA_PTR_TO_JSON(operationType, operationType_);
        DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(risk, risk_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(baseContentHash, baseContentHash_);
        DARABONBA_PTR_FROM_JSON(baseSchemaVersion, baseSchemaVersion_);
        DARABONBA_PTR_FROM_JSON(draftChangeId, draftChangeId_);
        DARABONBA_PTR_FROM_JSON(draftContentHash, draftContentHash_);
        DARABONBA_PTR_FROM_JSON(editMode, editMode_);
        DARABONBA_PTR_FROM_JSON(effectiveOperation, effectiveOperation_);
        DARABONBA_PTR_FROM_JSON(elementType, elementType_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(hasOnlineChanged, hasOnlineChanged_);
        DARABONBA_PTR_FROM_JSON(operationType, operationType_);
        DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(risk, risk_);
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
        && this->baseSchemaVersion_ == nullptr && this->draftChangeId_ == nullptr && this->draftContentHash_ == nullptr && this->editMode_ == nullptr && this->effectiveOperation_ == nullptr
        && this->elementType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hasOnlineChanged_ == nullptr && this->operationType_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr && this->risk_ == nullptr && this->sourceType_ == nullptr; };
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


      // editMode Field Functions 
      bool hasEditMode() const { return this->editMode_ != nullptr;};
      void deleteEditMode() { this->editMode_ = nullptr;};
      inline string getEditMode() const { DARABONBA_PTR_GET_DEFAULT(editMode_, "") };
      inline Items& setEditMode(string editMode) { DARABONBA_PTR_SET_VALUE(editMode_, editMode) };


      // effectiveOperation Field Functions 
      bool hasEffectiveOperation() const { return this->effectiveOperation_ != nullptr;};
      void deleteEffectiveOperation() { this->effectiveOperation_ = nullptr;};
      inline string getEffectiveOperation() const { DARABONBA_PTR_GET_DEFAULT(effectiveOperation_, "") };
      inline Items& setEffectiveOperation(string effectiveOperation) { DARABONBA_PTR_SET_VALUE(effectiveOperation_, effectiveOperation) };


      // elementType Field Functions 
      bool hasElementType() const { return this->elementType_ != nullptr;};
      void deleteElementType() { this->elementType_ = nullptr;};
      inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
      inline Items& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // hasOnlineChanged Field Functions 
      bool hasHasOnlineChanged() const { return this->hasOnlineChanged_ != nullptr;};
      void deleteHasOnlineChanged() { this->hasOnlineChanged_ = nullptr;};
      inline bool getHasOnlineChanged() const { DARABONBA_PTR_GET_DEFAULT(hasOnlineChanged_, false) };
      inline Items& setHasOnlineChanged(bool hasOnlineChanged) { DARABONBA_PTR_SET_VALUE(hasOnlineChanged_, hasOnlineChanged) };


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


      // risk Field Functions 
      bool hasRisk() const { return this->risk_ != nullptr;};
      void deleteRisk() { this->risk_ = nullptr;};
      inline string getRisk() const { DARABONBA_PTR_GET_DEFAULT(risk_, "") };
      inline Items& setRisk(string risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Items& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The hash of the draft content itself. The value is a 64-character SHA-256 hexadecimal string.
      shared_ptr<string> baseContentHash_ {};
      // The active schema version number on which the draft is based.
      shared_ptr<string> baseSchemaVersion_ {};
      // The unique ID of the draft change. This ID is referenced when you revoke a draft or publish changes.
      // 
      // This parameter is required.
      shared_ptr<int64_t> draftChangeId_ {};
      // The hash of the online content on which the draft was based when it was saved (draft starting point). The value is a 64-character SHA-256 hexadecimal string.
      shared_ptr<string> draftContentHash_ {};
      // The edit mode. In the current implementation, the value is always YAML, which corresponds to sourceType.
      shared_ptr<string> editMode_ {};
      // The actual publish effect relative to the current online state. After a draft is saved, the online graph may have changed, and the operation intent is adjusted based on the current online state.
      shared_ptr<string> effectiveOperation_ {};
      // The element type. Currently, only text is supported.
      // 
      // This parameter is required.
      shared_ptr<string> elementType_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last modification time in ISO 8601 format.
      shared_ptr<string> gmtModified_ {};
      // Indicates whether the draft baseline has expired. The value is true if the hash of the online content at the time the draft was saved is inconsistent with the hash of the current active content. The ONLINE_CHANGED risk is prompted during publishing.
      // 
      // This parameter is required.
      shared_ptr<bool> hasOnlineChanged_ {};
      // The operation type.
      shared_ptr<string> operationType_ {};
      // The resource name of the agent at runtime.
      // 
      // This parameter is required.
      shared_ptr<string> resourceName_ {};
      // The resource type.
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
      // The online risk aggregation JSON text (risk_code / risk_message). The value is null if no risk exists.
      shared_ptr<string> risk_ {};
      // The skill source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGraphDraftResourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListGraphDraftResourcesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListGraphDraftResourcesResponseBody::Items>) };
    inline vector<ListGraphDraftResourcesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListGraphDraftResourcesResponseBody::Items>) };
    inline ListGraphDraftResourcesResponseBody& setItems(const vector<ListGraphDraftResourcesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListGraphDraftResourcesResponseBody& setItems(vector<ListGraphDraftResourcesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGraphDraftResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGraphDraftResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The MCP card list.
    shared_ptr<vector<ListGraphDraftResourcesResponseBody::Items>> items_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
