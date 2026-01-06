// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOPHOTKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOPHOTKEYSRESPONSEBODY_HPP_
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
  class DescribeTopHotKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTopHotKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTopHotKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeTopHotKeysResponseBody() = default ;
    DescribeTopHotKeysResponseBody(const DescribeTopHotKeysResponseBody &) = default ;
    DescribeTopHotKeysResponseBody(DescribeTopHotKeysResponseBody &&) = default ;
    DescribeTopHotKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTopHotKeysResponseBody() = default ;
    DescribeTopHotKeysResponseBody& operator=(const DescribeTopHotKeysResponseBody &) = default ;
    DescribeTopHotKeysResponseBody& operator=(DescribeTopHotKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HotKey, hotKey_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HotKey, hotKey_);
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
      class HotKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotKey& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Db, db_);
          DARABONBA_PTR_TO_JSON(Hot, hot_);
          DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(KeyType, keyType_);
          DARABONBA_PTR_TO_JSON(Lfu, lfu_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
        };
        friend void from_json(const Darabonba::Json& j, HotKey& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Db, db_);
          DARABONBA_PTR_FROM_JSON(Hot, hot_);
          DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
          DARABONBA_PTR_FROM_JSON(Lfu, lfu_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
        };
        HotKey() = default ;
        HotKey(const HotKey &) = default ;
        HotKey(HotKey &&) = default ;
        HotKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotKey() = default ;
        HotKey& operator=(const HotKey &) = default ;
        HotKey& operator=(HotKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->db_ == nullptr && this->hot_ == nullptr && this->inBytes_ == nullptr && this->key_ == nullptr && this->keyType_ == nullptr
        && this->lfu_ == nullptr && this->nodeId_ == nullptr && this->outBytes_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline HotKey& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // db Field Functions 
        bool hasDb() const { return this->db_ != nullptr;};
        void deleteDb() { this->db_ = nullptr;};
        inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
        inline HotKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


        // hot Field Functions 
        bool hasHot() const { return this->hot_ != nullptr;};
        void deleteHot() { this->hot_ = nullptr;};
        inline string getHot() const { DARABONBA_PTR_GET_DEFAULT(hot_, "") };
        inline HotKey& setHot(string hot) { DARABONBA_PTR_SET_VALUE(hot_, hot) };


        // inBytes Field Functions 
        bool hasInBytes() const { return this->inBytes_ != nullptr;};
        void deleteInBytes() { this->inBytes_ = nullptr;};
        inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
        inline HotKey& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline HotKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // keyType Field Functions 
        bool hasKeyType() const { return this->keyType_ != nullptr;};
        void deleteKeyType() { this->keyType_ = nullptr;};
        inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
        inline HotKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


        // lfu Field Functions 
        bool hasLfu() const { return this->lfu_ != nullptr;};
        void deleteLfu() { this->lfu_ = nullptr;};
        inline int32_t getLfu() const { DARABONBA_PTR_GET_DEFAULT(lfu_, 0) };
        inline HotKey& setLfu(int32_t lfu) { DARABONBA_PTR_SET_VALUE(lfu_, lfu) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline HotKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // outBytes Field Functions 
        bool hasOutBytes() const { return this->outBytes_ != nullptr;};
        void deleteOutBytes() { this->outBytes_ = nullptr;};
        inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
        inline HotKey& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      protected:
        shared_ptr<string> category_ {};
        // The database in which the key is stored.
        shared_ptr<int32_t> db_ {};
        // The frequency at which the key is accessed, which indicates the QPS of the key.
        shared_ptr<string> hot_ {};
        shared_ptr<int64_t> inBytes_ {};
        // The key.
        shared_ptr<string> key_ {};
        // The type of the key.
        shared_ptr<string> keyType_ {};
        // The statistical value that is calculated based on the least frequently used (LFU) caching algorithm.
        shared_ptr<int32_t> lfu_ {};
        // The ID of the data shard on the ApsaraDB for Redis instance.
        shared_ptr<string> nodeId_ {};
        shared_ptr<int64_t> outBytes_ {};
      };

      virtual bool empty() const override { return this->hotKey_ == nullptr; };
      // hotKey Field Functions 
      bool hasHotKey() const { return this->hotKey_ != nullptr;};
      void deleteHotKey() { this->hotKey_ = nullptr;};
      inline const vector<Data::HotKey> & getHotKey() const { DARABONBA_PTR_GET_CONST(hotKey_, vector<Data::HotKey>) };
      inline vector<Data::HotKey> getHotKey() { DARABONBA_PTR_GET(hotKey_, vector<Data::HotKey>) };
      inline Data& setHotKey(const vector<Data::HotKey> & hotKey) { DARABONBA_PTR_SET_VALUE(hotKey_, hotKey) };
      inline Data& setHotKey(vector<Data::HotKey> && hotKey) { DARABONBA_PTR_SET_RVALUE(hotKey_, hotKey) };


    protected:
      shared_ptr<vector<Data::HotKey>> hotKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTopHotKeysResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeTopHotKeysResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeTopHotKeysResponseBody::Data) };
    inline DescribeTopHotKeysResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeTopHotKeysResponseBody::Data) };
    inline DescribeTopHotKeysResponseBody& setData(const DescribeTopHotKeysResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeTopHotKeysResponseBody& setData(DescribeTopHotKeysResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTopHotKeysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTopHotKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeTopHotKeysResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information about the hot keys.
    shared_ptr<DescribeTopHotKeysResponseBody::Data> data_ {};
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
