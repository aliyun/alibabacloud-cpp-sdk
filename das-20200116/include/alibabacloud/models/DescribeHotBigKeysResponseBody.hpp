// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODY_HPP_
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
  class DescribeHotBigKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeHotBigKeysResponseBody() = default ;
    DescribeHotBigKeysResponseBody(const DescribeHotBigKeysResponseBody &) = default ;
    DescribeHotBigKeysResponseBody(DescribeHotBigKeysResponseBody &&) = default ;
    DescribeHotBigKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBody() = default ;
    DescribeHotBigKeysResponseBody& operator=(const DescribeHotBigKeysResponseBody &) = default ;
    DescribeHotBigKeysResponseBody& operator=(DescribeHotBigKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BigKeyMsg, bigKeyMsg_);
        DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
        DARABONBA_PTR_TO_JSON(HighTrafficKeyMsg, highTrafficKeyMsg_);
        DARABONBA_PTR_TO_JSON(HighTrafficKeys, highTrafficKeys_);
        DARABONBA_PTR_TO_JSON(HotKeyMsg, hotKeyMsg_);
        DARABONBA_PTR_TO_JSON(HotKeys, hotKeys_);
        DARABONBA_PTR_TO_JSON(LargeKeyMsg, largeKeyMsg_);
        DARABONBA_PTR_TO_JSON(LargeKeys, largeKeys_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BigKeyMsg, bigKeyMsg_);
        DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
        DARABONBA_PTR_FROM_JSON(HighTrafficKeyMsg, highTrafficKeyMsg_);
        DARABONBA_PTR_FROM_JSON(HighTrafficKeys, highTrafficKeys_);
        DARABONBA_PTR_FROM_JSON(HotKeyMsg, hotKeyMsg_);
        DARABONBA_PTR_FROM_JSON(HotKeys, hotKeys_);
        DARABONBA_PTR_FROM_JSON(LargeKeyMsg, largeKeyMsg_);
        DARABONBA_PTR_FROM_JSON(LargeKeys, largeKeys_);
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
      class LargeKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LargeKeys& obj) { 
          DARABONBA_PTR_TO_JSON(LargeKey, largeKey_);
        };
        friend void from_json(const Darabonba::Json& j, LargeKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(LargeKey, largeKey_);
        };
        LargeKeys() = default ;
        LargeKeys(const LargeKeys &) = default ;
        LargeKeys(LargeKeys &&) = default ;
        LargeKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LargeKeys() = default ;
        LargeKeys& operator=(const LargeKeys &) = default ;
        LargeKeys& operator=(LargeKeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LargeKey : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LargeKey& obj) { 
            DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(KeyType, keyType_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          };
          friend void from_json(const Darabonba::Json& j, LargeKey& obj) { 
            DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          };
          LargeKey() = default ;
          LargeKey(const LargeKey &) = default ;
          LargeKey(LargeKey &&) = default ;
          LargeKey(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LargeKey() = default ;
          LargeKey& operator=(const LargeKey &) = default ;
          LargeKey& operator=(LargeKey &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->db_ == nullptr && this->key_ == nullptr && this->keyType_ == nullptr && this->nodeId_ == nullptr; };
          // dataSize Field Functions 
          bool hasDataSize() const { return this->dataSize_ != nullptr;};
          void deleteDataSize() { this->dataSize_ = nullptr;};
          inline string getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, "") };
          inline LargeKey& setDataSize(string dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


          // db Field Functions 
          bool hasDb() const { return this->db_ != nullptr;};
          void deleteDb() { this->db_ = nullptr;};
          inline string getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
          inline LargeKey& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline LargeKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // keyType Field Functions 
          bool hasKeyType() const { return this->keyType_ != nullptr;};
          void deleteKeyType() { this->keyType_ = nullptr;};
          inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
          inline LargeKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline LargeKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        protected:
          shared_ptr<string> dataSize_ {};
          shared_ptr<string> db_ {};
          shared_ptr<string> key_ {};
          shared_ptr<string> keyType_ {};
          shared_ptr<string> nodeId_ {};
        };

        virtual bool empty() const override { return this->largeKey_ == nullptr; };
        // largeKey Field Functions 
        bool hasLargeKey() const { return this->largeKey_ != nullptr;};
        void deleteLargeKey() { this->largeKey_ = nullptr;};
        inline const vector<LargeKeys::LargeKey> & getLargeKey() const { DARABONBA_PTR_GET_CONST(largeKey_, vector<LargeKeys::LargeKey>) };
        inline vector<LargeKeys::LargeKey> getLargeKey() { DARABONBA_PTR_GET(largeKey_, vector<LargeKeys::LargeKey>) };
        inline LargeKeys& setLargeKey(const vector<LargeKeys::LargeKey> & largeKey) { DARABONBA_PTR_SET_VALUE(largeKey_, largeKey) };
        inline LargeKeys& setLargeKey(vector<LargeKeys::LargeKey> && largeKey) { DARABONBA_PTR_SET_RVALUE(largeKey_, largeKey) };


      protected:
        shared_ptr<vector<LargeKeys::LargeKey>> largeKey_ {};
      };

      class HotKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotKeys& obj) { 
          DARABONBA_PTR_TO_JSON(HotKey, hotKey_);
        };
        friend void from_json(const Darabonba::Json& j, HotKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(HotKey, hotKey_);
        };
        HotKeys() = default ;
        HotKeys(const HotKeys &) = default ;
        HotKeys(HotKeys &&) = default ;
        HotKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotKeys() = default ;
        HotKeys& operator=(const HotKeys &) = default ;
        HotKeys& operator=(HotKeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HotKey : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HotKey& obj) { 
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Hot, hot_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(KeyType, keyType_);
            DARABONBA_PTR_TO_JSON(Lfu, lfu_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Size, size_);
          };
          friend void from_json(const Darabonba::Json& j, HotKey& obj) { 
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Hot, hot_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
            DARABONBA_PTR_FROM_JSON(Lfu, lfu_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
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
          virtual bool empty() const override { return this->db_ == nullptr
        && this->hot_ == nullptr && this->key_ == nullptr && this->keyType_ == nullptr && this->lfu_ == nullptr && this->nodeId_ == nullptr
        && this->size_ == nullptr; };
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


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
          inline HotKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        protected:
          // The database in which the key is stored.
          shared_ptr<int32_t> db_ {};
          // The frequency at which the key is accessed, which indicates the queries per second (QPS) of the key.
          shared_ptr<string> hot_ {};
          // The key.
          shared_ptr<string> key_ {};
          // The type of the key.
          shared_ptr<string> keyType_ {};
          // The statistical value that is calculated based on the least frequently used (LFU) caching algorithm.
          shared_ptr<int32_t> lfu_ {};
          // The ID of the data shard on the ApsaraDB for Redis instance.
          shared_ptr<string> nodeId_ {};
          shared_ptr<int64_t> size_ {};
        };

        virtual bool empty() const override { return this->hotKey_ == nullptr; };
        // hotKey Field Functions 
        bool hasHotKey() const { return this->hotKey_ != nullptr;};
        void deleteHotKey() { this->hotKey_ = nullptr;};
        inline const vector<HotKeys::HotKey> & getHotKey() const { DARABONBA_PTR_GET_CONST(hotKey_, vector<HotKeys::HotKey>) };
        inline vector<HotKeys::HotKey> getHotKey() { DARABONBA_PTR_GET(hotKey_, vector<HotKeys::HotKey>) };
        inline HotKeys& setHotKey(const vector<HotKeys::HotKey> & hotKey) { DARABONBA_PTR_SET_VALUE(hotKey_, hotKey) };
        inline HotKeys& setHotKey(vector<HotKeys::HotKey> && hotKey) { DARABONBA_PTR_SET_RVALUE(hotKey_, hotKey) };


      protected:
        shared_ptr<vector<HotKeys::HotKey>> hotKey_ {};
      };

      class HighTrafficKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HighTrafficKeys& obj) { 
          DARABONBA_PTR_TO_JSON(HighTrafficKey, highTrafficKey_);
        };
        friend void from_json(const Darabonba::Json& j, HighTrafficKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(HighTrafficKey, highTrafficKey_);
        };
        HighTrafficKeys() = default ;
        HighTrafficKeys(const HighTrafficKeys &) = default ;
        HighTrafficKeys(HighTrafficKeys &&) = default ;
        HighTrafficKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HighTrafficKeys() = default ;
        HighTrafficKeys& operator=(const HighTrafficKeys &) = default ;
        HighTrafficKeys& operator=(HighTrafficKeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HighTrafficKey : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HighTrafficKey& obj) { 
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Hot, hot_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(KeyType, keyType_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(inBytes, inBytes_);
            DARABONBA_PTR_TO_JSON(outBytes, outBytes_);
          };
          friend void from_json(const Darabonba::Json& j, HighTrafficKey& obj) { 
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Hot, hot_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(inBytes, inBytes_);
            DARABONBA_PTR_FROM_JSON(outBytes, outBytes_);
          };
          HighTrafficKey() = default ;
          HighTrafficKey(const HighTrafficKey &) = default ;
          HighTrafficKey(HighTrafficKey &&) = default ;
          HighTrafficKey(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HighTrafficKey() = default ;
          HighTrafficKey& operator=(const HighTrafficKey &) = default ;
          HighTrafficKey& operator=(HighTrafficKey &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->db_ == nullptr
        && this->hot_ == nullptr && this->key_ == nullptr && this->keyType_ == nullptr && this->nodeId_ == nullptr && this->size_ == nullptr
        && this->inBytes_ == nullptr && this->outBytes_ == nullptr; };
          // db Field Functions 
          bool hasDb() const { return this->db_ != nullptr;};
          void deleteDb() { this->db_ = nullptr;};
          inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
          inline HighTrafficKey& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


          // hot Field Functions 
          bool hasHot() const { return this->hot_ != nullptr;};
          void deleteHot() { this->hot_ = nullptr;};
          inline string getHot() const { DARABONBA_PTR_GET_DEFAULT(hot_, "") };
          inline HighTrafficKey& setHot(string hot) { DARABONBA_PTR_SET_VALUE(hot_, hot) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline HighTrafficKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // keyType Field Functions 
          bool hasKeyType() const { return this->keyType_ != nullptr;};
          void deleteKeyType() { this->keyType_ = nullptr;};
          inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
          inline HighTrafficKey& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline HighTrafficKey& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
          inline HighTrafficKey& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // inBytes Field Functions 
          bool hasInBytes() const { return this->inBytes_ != nullptr;};
          void deleteInBytes() { this->inBytes_ = nullptr;};
          inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
          inline HighTrafficKey& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


          // outBytes Field Functions 
          bool hasOutBytes() const { return this->outBytes_ != nullptr;};
          void deleteOutBytes() { this->outBytes_ = nullptr;};
          inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
          inline HighTrafficKey& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


        protected:
          shared_ptr<int32_t> db_ {};
          shared_ptr<string> hot_ {};
          shared_ptr<string> key_ {};
          shared_ptr<string> keyType_ {};
          shared_ptr<string> nodeId_ {};
          shared_ptr<int64_t> size_ {};
          shared_ptr<int64_t> inBytes_ {};
          shared_ptr<int64_t> outBytes_ {};
        };

        virtual bool empty() const override { return this->highTrafficKey_ == nullptr; };
        // highTrafficKey Field Functions 
        bool hasHighTrafficKey() const { return this->highTrafficKey_ != nullptr;};
        void deleteHighTrafficKey() { this->highTrafficKey_ = nullptr;};
        inline const vector<HighTrafficKeys::HighTrafficKey> & getHighTrafficKey() const { DARABONBA_PTR_GET_CONST(highTrafficKey_, vector<HighTrafficKeys::HighTrafficKey>) };
        inline vector<HighTrafficKeys::HighTrafficKey> getHighTrafficKey() { DARABONBA_PTR_GET(highTrafficKey_, vector<HighTrafficKeys::HighTrafficKey>) };
        inline HighTrafficKeys& setHighTrafficKey(const vector<HighTrafficKeys::HighTrafficKey> & highTrafficKey) { DARABONBA_PTR_SET_VALUE(highTrafficKey_, highTrafficKey) };
        inline HighTrafficKeys& setHighTrafficKey(vector<HighTrafficKeys::HighTrafficKey> && highTrafficKey) { DARABONBA_PTR_SET_RVALUE(highTrafficKey_, highTrafficKey) };


      protected:
        shared_ptr<vector<HighTrafficKeys::HighTrafficKey>> highTrafficKey_ {};
      };

      class BigKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BigKeys& obj) { 
          DARABONBA_PTR_TO_JSON(BigKey, bigKey_);
        };
        friend void from_json(const Darabonba::Json& j, BigKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(BigKey, bigKey_);
        };
        BigKeys() = default ;
        BigKeys(const BigKeys &) = default ;
        BigKeys(BigKeys &&) = default ;
        BigKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BigKeys() = default ;
        BigKeys& operator=(const BigKeys &) = default ;
        BigKeys& operator=(BigKeys &&) = default ;
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
        inline const vector<BigKeys::BigKey> & getBigKey() const { DARABONBA_PTR_GET_CONST(bigKey_, vector<BigKeys::BigKey>) };
        inline vector<BigKeys::BigKey> getBigKey() { DARABONBA_PTR_GET(bigKey_, vector<BigKeys::BigKey>) };
        inline BigKeys& setBigKey(const vector<BigKeys::BigKey> & bigKey) { DARABONBA_PTR_SET_VALUE(bigKey_, bigKey) };
        inline BigKeys& setBigKey(vector<BigKeys::BigKey> && bigKey) { DARABONBA_PTR_SET_RVALUE(bigKey_, bigKey) };


      protected:
        shared_ptr<vector<BigKeys::BigKey>> bigKey_ {};
      };

      virtual bool empty() const override { return this->bigKeyMsg_ == nullptr
        && this->bigKeys_ == nullptr && this->highTrafficKeyMsg_ == nullptr && this->highTrafficKeys_ == nullptr && this->hotKeyMsg_ == nullptr && this->hotKeys_ == nullptr
        && this->largeKeyMsg_ == nullptr && this->largeKeys_ == nullptr; };
      // bigKeyMsg Field Functions 
      bool hasBigKeyMsg() const { return this->bigKeyMsg_ != nullptr;};
      void deleteBigKeyMsg() { this->bigKeyMsg_ = nullptr;};
      inline string getBigKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(bigKeyMsg_, "") };
      inline Data& setBigKeyMsg(string bigKeyMsg) { DARABONBA_PTR_SET_VALUE(bigKeyMsg_, bigKeyMsg) };


      // bigKeys Field Functions 
      bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
      void deleteBigKeys() { this->bigKeys_ = nullptr;};
      inline const Data::BigKeys & getBigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Data::BigKeys) };
      inline Data::BigKeys getBigKeys() { DARABONBA_PTR_GET(bigKeys_, Data::BigKeys) };
      inline Data& setBigKeys(const Data::BigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
      inline Data& setBigKeys(Data::BigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


      // highTrafficKeyMsg Field Functions 
      bool hasHighTrafficKeyMsg() const { return this->highTrafficKeyMsg_ != nullptr;};
      void deleteHighTrafficKeyMsg() { this->highTrafficKeyMsg_ = nullptr;};
      inline string getHighTrafficKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(highTrafficKeyMsg_, "") };
      inline Data& setHighTrafficKeyMsg(string highTrafficKeyMsg) { DARABONBA_PTR_SET_VALUE(highTrafficKeyMsg_, highTrafficKeyMsg) };


      // highTrafficKeys Field Functions 
      bool hasHighTrafficKeys() const { return this->highTrafficKeys_ != nullptr;};
      void deleteHighTrafficKeys() { this->highTrafficKeys_ = nullptr;};
      inline const Data::HighTrafficKeys & getHighTrafficKeys() const { DARABONBA_PTR_GET_CONST(highTrafficKeys_, Data::HighTrafficKeys) };
      inline Data::HighTrafficKeys getHighTrafficKeys() { DARABONBA_PTR_GET(highTrafficKeys_, Data::HighTrafficKeys) };
      inline Data& setHighTrafficKeys(const Data::HighTrafficKeys & highTrafficKeys) { DARABONBA_PTR_SET_VALUE(highTrafficKeys_, highTrafficKeys) };
      inline Data& setHighTrafficKeys(Data::HighTrafficKeys && highTrafficKeys) { DARABONBA_PTR_SET_RVALUE(highTrafficKeys_, highTrafficKeys) };


      // hotKeyMsg Field Functions 
      bool hasHotKeyMsg() const { return this->hotKeyMsg_ != nullptr;};
      void deleteHotKeyMsg() { this->hotKeyMsg_ = nullptr;};
      inline string getHotKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(hotKeyMsg_, "") };
      inline Data& setHotKeyMsg(string hotKeyMsg) { DARABONBA_PTR_SET_VALUE(hotKeyMsg_, hotKeyMsg) };


      // hotKeys Field Functions 
      bool hasHotKeys() const { return this->hotKeys_ != nullptr;};
      void deleteHotKeys() { this->hotKeys_ = nullptr;};
      inline const Data::HotKeys & getHotKeys() const { DARABONBA_PTR_GET_CONST(hotKeys_, Data::HotKeys) };
      inline Data::HotKeys getHotKeys() { DARABONBA_PTR_GET(hotKeys_, Data::HotKeys) };
      inline Data& setHotKeys(const Data::HotKeys & hotKeys) { DARABONBA_PTR_SET_VALUE(hotKeys_, hotKeys) };
      inline Data& setHotKeys(Data::HotKeys && hotKeys) { DARABONBA_PTR_SET_RVALUE(hotKeys_, hotKeys) };


      // largeKeyMsg Field Functions 
      bool hasLargeKeyMsg() const { return this->largeKeyMsg_ != nullptr;};
      void deleteLargeKeyMsg() { this->largeKeyMsg_ = nullptr;};
      inline string getLargeKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(largeKeyMsg_, "") };
      inline Data& setLargeKeyMsg(string largeKeyMsg) { DARABONBA_PTR_SET_VALUE(largeKeyMsg_, largeKeyMsg) };


      // largeKeys Field Functions 
      bool hasLargeKeys() const { return this->largeKeys_ != nullptr;};
      void deleteLargeKeys() { this->largeKeys_ = nullptr;};
      inline const Data::LargeKeys & getLargeKeys() const { DARABONBA_PTR_GET_CONST(largeKeys_, Data::LargeKeys) };
      inline Data::LargeKeys getLargeKeys() { DARABONBA_PTR_GET(largeKeys_, Data::LargeKeys) };
      inline Data& setLargeKeys(const Data::LargeKeys & largeKeys) { DARABONBA_PTR_SET_VALUE(largeKeys_, largeKeys) };
      inline Data& setLargeKeys(Data::LargeKeys && largeKeys) { DARABONBA_PTR_SET_RVALUE(largeKeys_, largeKeys) };


    protected:
      // The reason why the large key failed to be queried.
      shared_ptr<string> bigKeyMsg_ {};
      // The list of large keys.
      shared_ptr<Data::BigKeys> bigKeys_ {};
      shared_ptr<string> highTrafficKeyMsg_ {};
      shared_ptr<Data::HighTrafficKeys> highTrafficKeys_ {};
      // The reason why the hot key failed to be queried.
      shared_ptr<string> hotKeyMsg_ {};
      // The list of hot keys.
      shared_ptr<Data::HotKeys> hotKeys_ {};
      shared_ptr<string> largeKeyMsg_ {};
      shared_ptr<Data::LargeKeys> largeKeys_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHotBigKeysResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeHotBigKeysResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeHotBigKeysResponseBody::Data) };
    inline DescribeHotBigKeysResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeHotBigKeysResponseBody::Data) };
    inline DescribeHotBigKeysResponseBody& setData(const DescribeHotBigKeysResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeHotBigKeysResponseBody& setData(DescribeHotBigKeysResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHotBigKeysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHotBigKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHotBigKeysResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The list of hot keys and large keys.
    shared_ptr<DescribeHotBigKeysResponseBody::Data> data_ {};
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
