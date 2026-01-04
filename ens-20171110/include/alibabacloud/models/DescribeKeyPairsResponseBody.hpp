// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeKeyPairsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairs, keyPairs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeKeyPairsResponseBody() = default ;
    DescribeKeyPairsResponseBody(const DescribeKeyPairsResponseBody &) = default ;
    DescribeKeyPairsResponseBody(DescribeKeyPairsResponseBody &&) = default ;
    DescribeKeyPairsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsResponseBody() = default ;
    DescribeKeyPairsResponseBody& operator=(const DescribeKeyPairsResponseBody &) = default ;
    DescribeKeyPairsResponseBody& operator=(DescribeKeyPairsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyPairs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyPairs& obj) { 
        DARABONBA_PTR_TO_JSON(KeyPair, keyPair_);
      };
      friend void from_json(const Darabonba::Json& j, KeyPairs& obj) { 
        DARABONBA_PTR_FROM_JSON(KeyPair, keyPair_);
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
      class KeyPair : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyPair& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
          DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
          DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        };
        friend void from_json(const Darabonba::Json& j, KeyPair& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
          DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
          DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        };
        KeyPair() = default ;
        KeyPair(const KeyPair &) = default ;
        KeyPair(KeyPair &&) = default ;
        KeyPair(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyPair() = default ;
        KeyPair& operator=(const KeyPair &) = default ;
        KeyPair& operator=(KeyPair &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->keyPairFingerPrint_ == nullptr && this->keyPairId_ == nullptr && this->keyPairName_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline KeyPair& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // keyPairFingerPrint Field Functions 
        bool hasKeyPairFingerPrint() const { return this->keyPairFingerPrint_ != nullptr;};
        void deleteKeyPairFingerPrint() { this->keyPairFingerPrint_ = nullptr;};
        inline string getKeyPairFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(keyPairFingerPrint_, "") };
        inline KeyPair& setKeyPairFingerPrint(string keyPairFingerPrint) { DARABONBA_PTR_SET_VALUE(keyPairFingerPrint_, keyPairFingerPrint) };


        // keyPairId Field Functions 
        bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
        void deleteKeyPairId() { this->keyPairId_ = nullptr;};
        inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
        inline KeyPair& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


        // keyPairName Field Functions 
        bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
        void deleteKeyPairName() { this->keyPairName_ = nullptr;};
        inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
        inline KeyPair& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      protected:
        // The time when the key pair was created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> creationTime_ {};
        // The fingerprint of the key pair.
        shared_ptr<string> keyPairFingerPrint_ {};
        // The ID of the key pair.
        shared_ptr<string> keyPairId_ {};
        // The name of the SSH key pair.
        shared_ptr<string> keyPairName_ {};
      };

      virtual bool empty() const override { return this->keyPair_ == nullptr; };
      // keyPair Field Functions 
      bool hasKeyPair() const { return this->keyPair_ != nullptr;};
      void deleteKeyPair() { this->keyPair_ = nullptr;};
      inline const vector<KeyPairs::KeyPair> & getKeyPair() const { DARABONBA_PTR_GET_CONST(keyPair_, vector<KeyPairs::KeyPair>) };
      inline vector<KeyPairs::KeyPair> getKeyPair() { DARABONBA_PTR_GET(keyPair_, vector<KeyPairs::KeyPair>) };
      inline KeyPairs& setKeyPair(const vector<KeyPairs::KeyPair> & keyPair) { DARABONBA_PTR_SET_VALUE(keyPair_, keyPair) };
      inline KeyPairs& setKeyPair(vector<KeyPairs::KeyPair> && keyPair) { DARABONBA_PTR_SET_RVALUE(keyPair_, keyPair) };


    protected:
      shared_ptr<vector<KeyPairs::KeyPair>> keyPair_ {};
    };

    virtual bool empty() const override { return this->keyPairs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // keyPairs Field Functions 
    bool hasKeyPairs() const { return this->keyPairs_ != nullptr;};
    void deleteKeyPairs() { this->keyPairs_ = nullptr;};
    inline const DescribeKeyPairsResponseBody::KeyPairs & getKeyPairs() const { DARABONBA_PTR_GET_CONST(keyPairs_, DescribeKeyPairsResponseBody::KeyPairs) };
    inline DescribeKeyPairsResponseBody::KeyPairs getKeyPairs() { DARABONBA_PTR_GET(keyPairs_, DescribeKeyPairsResponseBody::KeyPairs) };
    inline DescribeKeyPairsResponseBody& setKeyPairs(const DescribeKeyPairsResponseBody::KeyPairs & keyPairs) { DARABONBA_PTR_SET_VALUE(keyPairs_, keyPairs) };
    inline DescribeKeyPairsResponseBody& setKeyPairs(DescribeKeyPairsResponseBody::KeyPairs && keyPairs) { DARABONBA_PTR_SET_RVALUE(keyPairs_, keyPairs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKeyPairsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKeyPairsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyPairsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeKeyPairsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the key pairs.
    shared_ptr<DescribeKeyPairsResponseBody::KeyPairs> keyPairs_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of key pairs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
