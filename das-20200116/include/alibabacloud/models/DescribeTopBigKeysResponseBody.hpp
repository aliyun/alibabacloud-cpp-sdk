// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPBIGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeTopBigKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopBigKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopBigKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeTopBigKeysResponseBody() = default ;
    DescribeTopBigKeysResponseBody(const DescribeTopBigKeysResponseBody &) = default ;
    DescribeTopBigKeysResponseBody(DescribeTopBigKeysResponseBody &&) = default ;
    DescribeTopBigKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopBigKeysResponseBody() = default ;
    DescribeTopBigKeysResponseBody& operator=(const DescribeTopBigKeysResponseBody &) = default ;
    DescribeTopBigKeysResponseBody& operator=(DescribeTopBigKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BigKey, bigKey_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BigKey, bigKey_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BigKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BigKey& obj) { 
          DARABONBA_PTR_TO_JSON(Db, db_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(KeyType, keyType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, BigKey& obj) { 
          DARABONBA_PTR_FROM_JSON(Db, db_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        BigKey() = default ;
        BigKey(const BigKey &) = default ;
        BigKey(BigKey &&) = default ;
        BigKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BigKey() = default ;
        BigKey& operator=(const BigKey &) = default ;
        BigKey& operator=(BigKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->db_ == nullptr
        && this->key_ == nullptr && this->keyType_ == nullptr && this->nodeId_ == nullptr && this->size_ == nullptr; };
        // db Field Functions 
        bool hasDb() const { return this->db_ != nullptr;};
        void deleteDb() { this->db_ = nullptr;};
        inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
        inline BigKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline BigKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // keyType Field Functions 
        bool hasKeyType() const { return this->keyType_ != nullptr;};
        void deleteKeyType() { this->keyType_ = nullptr;};
        inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
        inline BigKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline BigKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline BigKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        // The database in which the key is stored.
        shared_ptr<int32_t> db_ {};
        // The key.
        shared_ptr<string> key_ {};
        // The type of the key.
        shared_ptr<string> keyType_ {};
        // The ID of the data shard on the ApsaraDB for Redis instance.
        shared_ptr<string> nodeId_ {};
        // The number of elements in the key.
        shared_ptr<int64_t> size_ {};
      };

      virtual bool empty() const override { return this->bigKey_ == nullptr; };
      // bigKey Field Functions 
      bool hasBigKey() const { return this->bigKey_ != nullptr;};
      void deleteBigKey() { this->bigKey_ = nullptr;};
      inline const vector<Data::BigKey> & getBigKey() const { DARABONBA_PTR_GET_CONST(bigKey_, vector<Data::BigKey>) };
      inline vector<Data::BigKey> getBigKey() { DARABONBA_PTR_GET(bigKey_, vector<Data::BigKey>) };
      inline Data& setBigKey(const vector<Data::BigKey> & bigKey) { DARABONBA_PTR_SET_VALUE(bigKey_, bigKey) };
      inline Data& setBigKey(vector<Data::BigKey> && bigKey) { DARABONBA_PTR_SET_RVALUE(bigKey_, bigKey) };


    protected:
      shared_ptr<vector<Data::BigKey>> bigKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTopBigKeysResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTopBigKeysResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeTopBigKeysResponseBody::Data) };
    inline DescribeTopBigKeysResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeTopBigKeysResponseBody::Data) };
    inline DescribeTopBigKeysResponseBody& setData(const DescribeTopBigKeysResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTopBigKeysResponseBody& setData(DescribeTopBigKeysResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTopBigKeysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTopBigKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeTopBigKeysResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information about the large keys.
    // 
    // > This parameter is left empty If no large keys exist within the specified time range.
    shared_ptr<DescribeTopBigKeysResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
