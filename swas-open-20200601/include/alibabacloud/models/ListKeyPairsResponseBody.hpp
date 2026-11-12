// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYPAIRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYPAIRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class ListKeyPairsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKeyPairsResponseBody() = default ;
    ListKeyPairsResponseBody(const ListKeyPairsResponseBody &) = default ;
    ListKeyPairsResponseBody(ListKeyPairsResponseBody &&) = default ;
    ListKeyPairsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeyPairsResponseBody() = default ;
    ListKeyPairsResponseBody& operator=(const ListKeyPairsResponseBody &) = default ;
    ListKeyPairsResponseBody& operator=(ListKeyPairsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyPairs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyPairs& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      };
      friend void from_json(const Darabonba::Json& j, KeyPairs& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      };
      KeyPairs() = default ;
      KeyPairs(const KeyPairs &) = default ;
      KeyPairs(KeyPairs &&) = default ;
      KeyPairs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KeyPairs() = default ;
      KeyPairs& operator=(const KeyPairs &) = default ;
      KeyPairs& operator=(KeyPairs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->instanceIds_ == nullptr && this->keyPairName_ == nullptr && this->publicKey_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline KeyPairs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline KeyPairs& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline KeyPairs& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline KeyPairs& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // publicKey Field Functions 
      bool hasPublicKey() const { return this->publicKey_ != nullptr;};
      void deletePublicKey() { this->publicKey_ = nullptr;};
      inline string getPublicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
      inline KeyPairs& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    protected:
      // The time when the key pair was created. The time follows the UTC (Z) time zone and is in the YYYY-MM-DDThh:mmZ format.
      shared_ptr<string> creationTime_ {};
      // The IDs of the simple application server instances. A maximum of 50 instance IDs are supported.
      shared_ptr<vector<string>> instanceIds_ {};
      // The name of the key pair. The name must be 2 to 64 characters in length and can contain letters and Chinese characters. It must start with an uppercase or lowercase letter or a Chinese character, and cannot start with http:// or https://. It can contain digits, colons (:), underscores (_), or hyphens (-).
      shared_ptr<string> keyPairName_ {};
      // The content of the public key.
      shared_ptr<string> publicKey_ {};
    };

    virtual bool empty() const override { return this->keyPairs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // keyPairs Field Functions 
    bool hasKeyPairs() const { return this->keyPairs_ != nullptr;};
    void deleteKeyPairs() { this->keyPairs_ = nullptr;};
    inline const vector<ListKeyPairsResponseBody::KeyPairs> & getKeyPairs() const { DARABONBA_PTR_GET_CONST(keyPairs_, vector<ListKeyPairsResponseBody::KeyPairs>) };
    inline vector<ListKeyPairsResponseBody::KeyPairs> getKeyPairs() { DARABONBA_PTR_GET(keyPairs_, vector<ListKeyPairsResponseBody::KeyPairs>) };
    inline ListKeyPairsResponseBody& setKeyPairs(const vector<ListKeyPairsResponseBody::KeyPairs> & keyPairs) { DARABONBA_PTR_SET_VALUE(keyPairs_, keyPairs) };
    inline ListKeyPairsResponseBody& setKeyPairs(vector<ListKeyPairsResponseBody::KeyPairs> && keyPairs) { DARABONBA_PTR_SET_RVALUE(keyPairs_, keyPairs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKeyPairsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeyPairsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeyPairsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKeyPairsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The collection of key pair information.
    shared_ptr<vector<ListKeyPairsResponseBody::KeyPairs>> keyPairs_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of key pairs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
