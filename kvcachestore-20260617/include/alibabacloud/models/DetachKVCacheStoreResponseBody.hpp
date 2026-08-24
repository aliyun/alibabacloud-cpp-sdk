// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKVCACHESTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHKVCACHESTORERESPONSEBODY_HPP_
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
  class DetachKVCacheStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetachResults, detachResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetachResults, detachResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachKVCacheStoreResponseBody() = default ;
    DetachKVCacheStoreResponseBody(const DetachKVCacheStoreResponseBody &) = default ;
    DetachKVCacheStoreResponseBody(DetachKVCacheStoreResponseBody &&) = default ;
    DetachKVCacheStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKVCacheStoreResponseBody() = default ;
    DetachKVCacheStoreResponseBody& operator=(const DetachKVCacheStoreResponseBody &) = default ;
    DetachKVCacheStoreResponseBody& operator=(DetachKVCacheStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetachResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetachResults& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
      };
      friend void from_json(const Darabonba::Json& j, DetachResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
      };
      DetachResults() = default ;
      DetachResults(const DetachResults &) = default ;
      DetachResults(DetachResults &&) = default ;
      DetachResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetachResults() = default ;
      DetachResults& operator=(const DetachResults &) = default ;
      DetachResults& operator=(DetachResults &&) = default ;
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
      inline DetachResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline DetachResults& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // kvcsId Field Functions 
      bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
      void deleteKvcsId() { this->kvcsId_ = nullptr;};
      inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
      inline DetachResults& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetachResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline DetachResults& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


    protected:
      // The error code when the operation fails. This value is null when the operation succeeds.
      shared_ptr<string> errorCode_ {};
      // The error message when the operation fails. This value is null when the operation succeeds.
      shared_ptr<string> errorMessage_ {};
      // KVCacheStore KvcsId
      shared_ptr<string> kvcsId_ {};
      // The operation result. Valid values:
      // 
      // - DETACHING: The request has been accepted and the asynchronous unmount is in progress. This value is also returned for idempotent calls.
      // - Success: The synchronous validation passed and the asynchronous operation completed.
      // - Failed: The operation failed.
      shared_ptr<string> status_ {};
      // The VSC ID on the compute side.
      shared_ptr<string> vscId_ {};
    };

    virtual bool empty() const override { return this->detachResults_ == nullptr
        && this->requestId_ == nullptr; };
    // detachResults Field Functions 
    bool hasDetachResults() const { return this->detachResults_ != nullptr;};
    void deleteDetachResults() { this->detachResults_ = nullptr;};
    inline const vector<DetachKVCacheStoreResponseBody::DetachResults> & getDetachResults() const { DARABONBA_PTR_GET_CONST(detachResults_, vector<DetachKVCacheStoreResponseBody::DetachResults>) };
    inline vector<DetachKVCacheStoreResponseBody::DetachResults> getDetachResults() { DARABONBA_PTR_GET(detachResults_, vector<DetachKVCacheStoreResponseBody::DetachResults>) };
    inline DetachKVCacheStoreResponseBody& setDetachResults(const vector<DetachKVCacheStoreResponseBody::DetachResults> & detachResults) { DARABONBA_PTR_SET_VALUE(detachResults_, detachResults) };
    inline DetachKVCacheStoreResponseBody& setDetachResults(vector<DetachKVCacheStoreResponseBody::DetachResults> && detachResults) { DARABONBA_PTR_SET_RVALUE(detachResults_, detachResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachKVCacheStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of unmount results.
    shared_ptr<vector<DetachKVCacheStoreResponseBody::DetachResults>> detachResults_ {};
    // The request ID. A request ID is returned regardless of whether the API call succeeds.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
