// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASTREAMSRESPONSEBODY_HPP_
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
  class ListDataStreamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataStreamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataStreamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDataStreamsResponseBody() = default ;
    ListDataStreamsResponseBody(const ListDataStreamsResponseBody &) = default ;
    ListDataStreamsResponseBody(ListDataStreamsResponseBody &&) = default ;
    ListDataStreamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataStreamsResponseBody() = default ;
    ListDataStreamsResponseBody& operator=(const ListDataStreamsResponseBody &) = default ;
    ListDataStreamsResponseBody& operator=(ListDataStreamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(health, health_);
        DARABONBA_PTR_TO_JSON(ilmPolicyName, ilmPolicyName_);
        DARABONBA_PTR_TO_JSON(indexTemplateName, indexTemplateName_);
        DARABONBA_PTR_TO_JSON(indices, indices_);
        DARABONBA_PTR_TO_JSON(managedStorageSize, managedStorageSize_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(totalStorageSize, totalStorageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(health, health_);
        DARABONBA_PTR_FROM_JSON(ilmPolicyName, ilmPolicyName_);
        DARABONBA_PTR_FROM_JSON(indexTemplateName, indexTemplateName_);
        DARABONBA_PTR_FROM_JSON(indices, indices_);
        DARABONBA_PTR_FROM_JSON(managedStorageSize, managedStorageSize_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(totalStorageSize, totalStorageSize_);
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
      class Indices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Indices& obj) { 
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(health, health_);
          DARABONBA_PTR_TO_JSON(isManaged, isManaged_);
          DARABONBA_PTR_TO_JSON(managedStatus, managedStatus_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(size, size_);
        };
        friend void from_json(const Darabonba::Json& j, Indices& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(health, health_);
          DARABONBA_PTR_FROM_JSON(isManaged, isManaged_);
          DARABONBA_PTR_FROM_JSON(managedStatus, managedStatus_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(size, size_);
        };
        Indices() = default ;
        Indices(const Indices &) = default ;
        Indices(Indices &&) = default ;
        Indices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Indices() = default ;
        Indices& operator=(const Indices &) = default ;
        Indices& operator=(Indices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->health_ == nullptr && this->isManaged_ == nullptr && this->managedStatus_ == nullptr && this->name_ == nullptr && this->size_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Indices& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // health Field Functions 
        bool hasHealth() const { return this->health_ != nullptr;};
        void deleteHealth() { this->health_ = nullptr;};
        inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
        inline Indices& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


        // isManaged Field Functions 
        bool hasIsManaged() const { return this->isManaged_ != nullptr;};
        void deleteIsManaged() { this->isManaged_ = nullptr;};
        inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
        inline Indices& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


        // managedStatus Field Functions 
        bool hasManagedStatus() const { return this->managedStatus_ != nullptr;};
        void deleteManagedStatus() { this->managedStatus_ = nullptr;};
        inline string getManagedStatus() const { DARABONBA_PTR_GET_DEFAULT(managedStatus_, "") };
        inline Indices& setManagedStatus(string managedStatus) { DARABONBA_PTR_SET_VALUE(managedStatus_, managedStatus) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Indices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline Indices& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> health_ {};
        shared_ptr<bool> isManaged_ {};
        shared_ptr<string> managedStatus_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> size_ {};
      };

      virtual bool empty() const override { return this->health_ == nullptr
        && this->ilmPolicyName_ == nullptr && this->indexTemplateName_ == nullptr && this->indices_ == nullptr && this->managedStorageSize_ == nullptr && this->name_ == nullptr
        && this->totalStorageSize_ == nullptr; };
      // health Field Functions 
      bool hasHealth() const { return this->health_ != nullptr;};
      void deleteHealth() { this->health_ = nullptr;};
      inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
      inline Result& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


      // ilmPolicyName Field Functions 
      bool hasIlmPolicyName() const { return this->ilmPolicyName_ != nullptr;};
      void deleteIlmPolicyName() { this->ilmPolicyName_ = nullptr;};
      inline string getIlmPolicyName() const { DARABONBA_PTR_GET_DEFAULT(ilmPolicyName_, "") };
      inline Result& setIlmPolicyName(string ilmPolicyName) { DARABONBA_PTR_SET_VALUE(ilmPolicyName_, ilmPolicyName) };


      // indexTemplateName Field Functions 
      bool hasIndexTemplateName() const { return this->indexTemplateName_ != nullptr;};
      void deleteIndexTemplateName() { this->indexTemplateName_ = nullptr;};
      inline string getIndexTemplateName() const { DARABONBA_PTR_GET_DEFAULT(indexTemplateName_, "") };
      inline Result& setIndexTemplateName(string indexTemplateName) { DARABONBA_PTR_SET_VALUE(indexTemplateName_, indexTemplateName) };


      // indices Field Functions 
      bool hasIndices() const { return this->indices_ != nullptr;};
      void deleteIndices() { this->indices_ = nullptr;};
      inline const vector<Result::Indices> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<Result::Indices>) };
      inline vector<Result::Indices> getIndices() { DARABONBA_PTR_GET(indices_, vector<Result::Indices>) };
      inline Result& setIndices(const vector<Result::Indices> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
      inline Result& setIndices(vector<Result::Indices> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


      // managedStorageSize Field Functions 
      bool hasManagedStorageSize() const { return this->managedStorageSize_ != nullptr;};
      void deleteManagedStorageSize() { this->managedStorageSize_ = nullptr;};
      inline int64_t getManagedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(managedStorageSize_, 0L) };
      inline Result& setManagedStorageSize(int64_t managedStorageSize) { DARABONBA_PTR_SET_VALUE(managedStorageSize_, managedStorageSize) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // totalStorageSize Field Functions 
      bool hasTotalStorageSize() const { return this->totalStorageSize_ != nullptr;};
      void deleteTotalStorageSize() { this->totalStorageSize_ = nullptr;};
      inline int64_t getTotalStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalStorageSize_, 0L) };
      inline Result& setTotalStorageSize(int64_t totalStorageSize) { DARABONBA_PTR_SET_VALUE(totalStorageSize_, totalStorageSize) };


    protected:
      shared_ptr<string> health_ {};
      shared_ptr<string> ilmPolicyName_ {};
      shared_ptr<string> indexTemplateName_ {};
      shared_ptr<vector<Result::Indices>> indices_ {};
      shared_ptr<int64_t> managedStorageSize_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int64_t> totalStorageSize_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Managed-Count, xManagedCount_);
        DARABONBA_PTR_TO_JSON(X-Managed-StorageSize, xManagedStorageSize_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Managed-Count, xManagedCount_);
        DARABONBA_PTR_FROM_JSON(X-Managed-StorageSize, xManagedStorageSize_);
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
        && this->xManagedStorageSize_ == nullptr; };
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


    protected:
      shared_ptr<int32_t> xManagedCount_ {};
      shared_ptr<int64_t> xManagedStorageSize_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDataStreamsResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListDataStreamsResponseBody::Headers) };
    inline ListDataStreamsResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListDataStreamsResponseBody::Headers) };
    inline ListDataStreamsResponseBody& setHeaders(const ListDataStreamsResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDataStreamsResponseBody& setHeaders(ListDataStreamsResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataStreamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDataStreamsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDataStreamsResponseBody::Result>) };
    inline vector<ListDataStreamsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDataStreamsResponseBody::Result>) };
    inline ListDataStreamsResponseBody& setResult(const vector<ListDataStreamsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDataStreamsResponseBody& setResult(vector<ListDataStreamsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<ListDataStreamsResponseBody::Headers> headers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListDataStreamsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
