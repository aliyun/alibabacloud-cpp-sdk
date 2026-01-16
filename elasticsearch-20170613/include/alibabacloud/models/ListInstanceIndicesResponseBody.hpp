// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEINDICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceIndicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceIndicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceIndicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListInstanceIndicesResponseBody() = default ;
    ListInstanceIndicesResponseBody(const ListInstanceIndicesResponseBody &) = default ;
    ListInstanceIndicesResponseBody(ListInstanceIndicesResponseBody &&) = default ;
    ListInstanceIndicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceIndicesResponseBody() = default ;
    ListInstanceIndicesResponseBody& operator=(const ListInstanceIndicesResponseBody &) = default ;
    ListInstanceIndicesResponseBody& operator=(ListInstanceIndicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(health, health_);
        DARABONBA_PTR_TO_JSON(ilmExplain, ilmExplain_);
        DARABONBA_PTR_TO_JSON(isManaged, isManaged_);
        DARABONBA_PTR_TO_JSON(managedStatus, managedStatus_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(phase, phase_);
        DARABONBA_PTR_TO_JSON(size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(health, health_);
        DARABONBA_PTR_FROM_JSON(ilmExplain, ilmExplain_);
        DARABONBA_PTR_FROM_JSON(isManaged, isManaged_);
        DARABONBA_PTR_FROM_JSON(managedStatus, managedStatus_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(phase, phase_);
        DARABONBA_PTR_FROM_JSON(size, size_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->health_ == nullptr && this->ilmExplain_ == nullptr && this->isManaged_ == nullptr && this->managedStatus_ == nullptr && this->name_ == nullptr
        && this->phase_ == nullptr && this->size_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // health Field Functions 
      bool hasHealth() const { return this->health_ != nullptr;};
      void deleteHealth() { this->health_ = nullptr;};
      inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
      inline Result& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


      // ilmExplain Field Functions 
      bool hasIlmExplain() const { return this->ilmExplain_ != nullptr;};
      void deleteIlmExplain() { this->ilmExplain_ = nullptr;};
      inline string getIlmExplain() const { DARABONBA_PTR_GET_DEFAULT(ilmExplain_, "") };
      inline Result& setIlmExplain(string ilmExplain) { DARABONBA_PTR_SET_VALUE(ilmExplain_, ilmExplain) };


      // isManaged Field Functions 
      bool hasIsManaged() const { return this->isManaged_ != nullptr;};
      void deleteIsManaged() { this->isManaged_ = nullptr;};
      inline string getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, "") };
      inline Result& setIsManaged(string isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


      // managedStatus Field Functions 
      bool hasManagedStatus() const { return this->managedStatus_ != nullptr;};
      void deleteManagedStatus() { this->managedStatus_ = nullptr;};
      inline string getManagedStatus() const { DARABONBA_PTR_GET_DEFAULT(managedStatus_, "") };
      inline Result& setManagedStatus(string managedStatus) { DARABONBA_PTR_SET_VALUE(managedStatus_, managedStatus) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Result& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Result& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The name of the Elasticsearch index.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> health_ {};
      shared_ptr<string> ilmExplain_ {};
      // The managed status of the index. The following three statuses are supported:
      // 
      // *   following: Hosting.
      // *   closing: The instance is being unhosted.
      // *   closed: unmanaged.
      shared_ptr<string> isManaged_ {};
      // The current storage lifecycle. Value meaning:
      // 
      // *   warm: warm.
      // *   cold: the cold phase.
      // *   hot: hot phase.
      // *   delete: deletes a stage.
      // 
      // >  If this parameter is empty, the current index is not managed by the lifecycle.
      shared_ptr<string> managedStatus_ {};
      // The full lifecycle status of the current index.
      shared_ptr<string> name_ {};
      shared_ptr<string> phase_ {};
      // The running status of the index. The following three statuses are supported:
      // 
      // *   green: healthy.
      // *   yellow: alerts.
      // *   red: an exception.
      shared_ptr<int64_t> size_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Managed-Count, xManagedCount_);
        DARABONBA_PTR_TO_JSON(X-Managed-StorageSize, xManagedStorageSize_);
        DARABONBA_PTR_TO_JSON(X-OSS-Count, xOSSCount_);
        DARABONBA_PTR_TO_JSON(X-OSS-StorageSize, xOSSStorageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Managed-Count, xManagedCount_);
        DARABONBA_PTR_FROM_JSON(X-Managed-StorageSize, xManagedStorageSize_);
        DARABONBA_PTR_FROM_JSON(X-OSS-Count, xOSSCount_);
        DARABONBA_PTR_FROM_JSON(X-OSS-StorageSize, xOSSStorageSize_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xManagedCount_ == nullptr
        && this->xManagedStorageSize_ == nullptr && this->xOSSCount_ == nullptr && this->xOSSStorageSize_ == nullptr; };
      // xManagedCount Field Functions 
      bool hasXManagedCount() const { return this->xManagedCount_ != nullptr;};
      void deleteXManagedCount() { this->xManagedCount_ = nullptr;};
      inline int32_t getXManagedCount() const { DARABONBA_PTR_GET_DEFAULT(xManagedCount_, 0) };
      inline Headers& setXManagedCount(int32_t xManagedCount) { DARABONBA_PTR_SET_VALUE(xManagedCount_, xManagedCount) };


      // xManagedStorageSize Field Functions 
      bool hasXManagedStorageSize() const { return this->xManagedStorageSize_ != nullptr;};
      void deleteXManagedStorageSize() { this->xManagedStorageSize_ = nullptr;};
      inline int64_t getXManagedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(xManagedStorageSize_, 0L) };
      inline Headers& setXManagedStorageSize(int64_t xManagedStorageSize) { DARABONBA_PTR_SET_VALUE(xManagedStorageSize_, xManagedStorageSize) };


      // xOSSCount Field Functions 
      bool hasXOSSCount() const { return this->xOSSCount_ != nullptr;};
      void deleteXOSSCount() { this->xOSSCount_ = nullptr;};
      inline int32_t getXOSSCount() const { DARABONBA_PTR_GET_DEFAULT(xOSSCount_, 0) };
      inline Headers& setXOSSCount(int32_t xOSSCount) { DARABONBA_PTR_SET_VALUE(xOSSCount_, xOSSCount) };


      // xOSSStorageSize Field Functions 
      bool hasXOSSStorageSize() const { return this->xOSSStorageSize_ != nullptr;};
      void deleteXOSSStorageSize() { this->xOSSStorageSize_ = nullptr;};
      inline int64_t getXOSSStorageSize() const { DARABONBA_PTR_GET_DEFAULT(xOSSStorageSize_, 0L) };
      inline Headers& setXOSSStorageSize(int64_t xOSSStorageSize) { DARABONBA_PTR_SET_VALUE(xOSSStorageSize_, xOSSStorageSize) };


    protected:
      // The details of the index list.
      shared_ptr<int32_t> xManagedCount_ {};
      // The total number of indexes in the OpenStore cold phase.
      shared_ptr<int64_t> xManagedStorageSize_ {};
      // The time when the index list was queried.
      shared_ptr<int32_t> xOSSCount_ {};
      // This parameter is deprecated.
      shared_ptr<int64_t> xOSSStorageSize_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListInstanceIndicesResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListInstanceIndicesResponseBody::Headers) };
    inline ListInstanceIndicesResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListInstanceIndicesResponseBody::Headers) };
    inline ListInstanceIndicesResponseBody& setHeaders(const ListInstanceIndicesResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceIndicesResponseBody& setHeaders(ListInstanceIndicesResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceIndicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListInstanceIndicesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListInstanceIndicesResponseBody::Result>) };
    inline vector<ListInstanceIndicesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListInstanceIndicesResponseBody::Result>) };
    inline ListInstanceIndicesResponseBody& setResult(const vector<ListInstanceIndicesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListInstanceIndicesResponseBody& setResult(vector<ListInstanceIndicesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The total size of the OpenStore cold stage index for this instance. Unit: bytes.
    shared_ptr<ListInstanceIndicesResponseBody::Headers> headers_ {};
    // The total number of indexes in Cloud Hosting.
    shared_ptr<string> requestId_ {};
    // The total storage space occupied by the current index. Unit: bytes.
    shared_ptr<vector<ListInstanceIndicesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
