// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESRESPONSEBODY_HPP_
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
  class BatchRemoveOperatingObjectFavoritesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemoveOperatingObjectFavoritesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(remainingCount, remainingCount_);
      DARABONBA_PTR_TO_JSON(removedCount, removedCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requestedCount, requestedCount_);
      DARABONBA_PTR_TO_JSON(results, results_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemoveOperatingObjectFavoritesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(remainingCount, remainingCount_);
      DARABONBA_PTR_FROM_JSON(removedCount, removedCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requestedCount, requestedCount_);
      DARABONBA_PTR_FROM_JSON(results, results_);
    };
    BatchRemoveOperatingObjectFavoritesResponseBody() = default ;
    BatchRemoveOperatingObjectFavoritesResponseBody(const BatchRemoveOperatingObjectFavoritesResponseBody &) = default ;
    BatchRemoveOperatingObjectFavoritesResponseBody(BatchRemoveOperatingObjectFavoritesResponseBody &&) = default ;
    BatchRemoveOperatingObjectFavoritesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemoveOperatingObjectFavoritesResponseBody() = default ;
    BatchRemoveOperatingObjectFavoritesResponseBody& operator=(const BatchRemoveOperatingObjectFavoritesResponseBody &) = default ;
    BatchRemoveOperatingObjectFavoritesResponseBody& operator=(BatchRemoveOperatingObjectFavoritesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(isFavorited, isFavorited_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(processed, processed_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(isFavorited, isFavorited_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(processed, processed_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isFavorited_ == nullptr
        && this->objectId_ == nullptr && this->processed_ == nullptr; };
      // isFavorited Field Functions 
      bool hasIsFavorited() const { return this->isFavorited_ != nullptr;};
      void deleteIsFavorited() { this->isFavorited_ = nullptr;};
      inline bool getIsFavorited() const { DARABONBA_PTR_GET_DEFAULT(isFavorited_, false) };
      inline Results& setIsFavorited(bool isFavorited) { DARABONBA_PTR_SET_VALUE(isFavorited_, isFavorited) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline Results& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // processed Field Functions 
      bool hasProcessed() const { return this->processed_ != nullptr;};
      void deleteProcessed() { this->processed_ = nullptr;};
      inline bool getProcessed() const { DARABONBA_PTR_GET_DEFAULT(processed_, false) };
      inline Results& setProcessed(bool processed) { DARABONBA_PTR_SET_VALUE(processed_, processed) };


    protected:
      // Indicates whether the object is favorited after the operation.
      shared_ptr<bool> isFavorited_ {};
      // The aligned object ID: target ID or KR ID.
      shared_ptr<string> objectId_ {};
      // Indicates whether the request has been processed.
      shared_ptr<bool> processed_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->graphName_ == nullptr && this->message_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->remainingCount_ == nullptr
        && this->removedCount_ == nullptr && this->requestId_ == nullptr && this->requestedCount_ == nullptr && this->results_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // remainingCount Field Functions 
    bool hasRemainingCount() const { return this->remainingCount_ != nullptr;};
    void deleteRemainingCount() { this->remainingCount_ = nullptr;};
    inline int64_t getRemainingCount() const { DARABONBA_PTR_GET_DEFAULT(remainingCount_, 0L) };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setRemainingCount(int64_t remainingCount) { DARABONBA_PTR_SET_VALUE(remainingCount_, remainingCount) };


    // removedCount Field Functions 
    bool hasRemovedCount() const { return this->removedCount_ != nullptr;};
    void deleteRemovedCount() { this->removedCount_ = nullptr;};
    inline int64_t getRemovedCount() const { DARABONBA_PTR_GET_DEFAULT(removedCount_, 0L) };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setRemovedCount(int64_t removedCount) { DARABONBA_PTR_SET_VALUE(removedCount_, removedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestedCount Field Functions 
    bool hasRequestedCount() const { return this->requestedCount_ != nullptr;};
    void deleteRequestedCount() { this->requestedCount_ = nullptr;};
    inline int64_t getRequestedCount() const { DARABONBA_PTR_GET_DEFAULT(requestedCount_, 0L) };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setRequestedCount(int64_t requestedCount) { DARABONBA_PTR_SET_VALUE(requestedCount_, requestedCount) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results>) };
    inline vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results>) };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setResults(const vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline BatchRemoveOperatingObjectFavoritesResponseBody& setResults(vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The graph name.
    shared_ptr<string> graphName_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The object type, such as customer. This parameter has a value when type is set to mention.
    shared_ptr<string> objectType_ {};
    // The digital employee name (operating object name, optional).
    shared_ptr<string> operatingObjectName_ {};
    // The number of remaining favorited objects within the specified scope.
    shared_ptr<int64_t> remainingCount_ {};
    // The number of physical favorite records that are actually deleted.
    shared_ptr<int64_t> removedCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // **The number of requested members before deduplication.**
    shared_ptr<int64_t> requestedCount_ {};
    // The relationships between internal and external DingTalk users that failed to be created.
    shared_ptr<vector<BatchRemoveOperatingObjectFavoritesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
