// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKVCACHESTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKVCACHESTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class AttachKVCacheStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachResults, attachResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachResults, attachResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachKVCacheStoreResponseBody() = default ;
    AttachKVCacheStoreResponseBody(const AttachKVCacheStoreResponseBody &) = default ;
    AttachKVCacheStoreResponseBody(AttachKVCacheStoreResponseBody &&) = default ;
    AttachKVCacheStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKVCacheStoreResponseBody() = default ;
    AttachKVCacheStoreResponseBody& operator=(const AttachKVCacheStoreResponseBody &) = default ;
    AttachKVCacheStoreResponseBody& operator=(AttachKVCacheStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachResults& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, AttachResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      };
      AttachResults() = default ;
      AttachResults(const AttachResults &) = default ;
      AttachResults(AttachResults &&) = default ;
      AttachResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachResults() = default ;
      AttachResults& operator=(const AttachResults &) = default ;
      AttachResults& operator=(AttachResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->kvcsId_ == nullptr && this->status_ == nullptr && this->vscId_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline AttachResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline AttachResults& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline AttachResults& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AttachResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline AttachResults& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      // The error code returned when the operation fails. This value is null when the operation succeeds.
      shared_ptr<string> errorCode_ {};
      // The error message returned when the operation fails. This value is null when the operation succeeds.
      shared_ptr<string> errorMessage_ {};
      // KVCacheStore KvcsId
      shared_ptr<string> kvcsId_ {};
      // The operation result. Valid values:
      // - ATTACHING: The request has been accepted and the asynchronous mount is in progress.
      // - ATTACHED: The resource is already mounted (idempotent).
      // - Success: The synchronous verification passed and the asynchronous operation is complete.
      // - Failed: The operation failed.
      shared_ptr<string> status_ {};
      // The VSC ID on the compute side.
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->attachResults_ == nullptr
        && this->requestId_ == nullptr; };
    // attachResults Field Functions 
    bool hasAttachResults() const { return this->attachResults_ != nullptr;};
    void deleteAttachResults() { this->attachResults_ = nullptr;};
    inline const vector<AttachKVCacheStoreResponseBody::AttachResults> & getAttachResults() const { DARABONBA_PTR_GET_CONST(attachResults_, vector<AttachKVCacheStoreResponseBody::AttachResults>) };
    inline vector<AttachKVCacheStoreResponseBody::AttachResults> getAttachResults() { DARABONBA_PTR_GET(attachResults_, vector<AttachKVCacheStoreResponseBody::AttachResults>) };
    inline AttachKVCacheStoreResponseBody& setAttachResults(const vector<AttachKVCacheStoreResponseBody::AttachResults> & attachResults) { DARABONBA_PTR_SET_VALUE(attachResults_, attachResults) };
    inline AttachKVCacheStoreResponseBody& setAttachResults(vector<AttachKVCacheStoreResponseBody::AttachResults> && attachResults) { DARABONBA_PTR_SET_RVALUE(attachResults_, attachResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachKVCacheStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of mount results.
    shared_ptr<vector<AttachKVCacheStoreResponseBody::AttachResults>> attachResults_ {};
    // The request ID. A request ID is returned regardless of whether the operation is successful.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
