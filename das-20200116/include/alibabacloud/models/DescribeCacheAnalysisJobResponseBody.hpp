// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODY_HPP_
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
  class DescribeCacheAnalysisJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCacheAnalysisJobResponseBody() = default ;
    DescribeCacheAnalysisJobResponseBody(const DescribeCacheAnalysisJobResponseBody &) = default ;
    DescribeCacheAnalysisJobResponseBody(DescribeCacheAnalysisJobResponseBody &&) = default ;
    DescribeCacheAnalysisJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBody() = default ;
    DescribeCacheAnalysisJobResponseBody& operator=(const DescribeCacheAnalysisJobResponseBody &) = default ;
    DescribeCacheAnalysisJobResponseBody& operator=(DescribeCacheAnalysisJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
        DARABONBA_PTR_TO_JSON(BigKeysOfNum, bigKeysOfNum_);
        DARABONBA_PTR_TO_JSON(ExpiryKeysLevelCount, expiryKeysLevelCount_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(KeyPrefixes, keyPrefixes_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(TaskState, taskState_);
        DARABONBA_PTR_TO_JSON(UnexBigKeysOfBytes, unexBigKeysOfBytes_);
        DARABONBA_PTR_TO_JSON(UnexBigKeysOfNum, unexBigKeysOfNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
        DARABONBA_PTR_FROM_JSON(BigKeysOfNum, bigKeysOfNum_);
        DARABONBA_PTR_FROM_JSON(ExpiryKeysLevelCount, expiryKeysLevelCount_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(KeyPrefixes, keyPrefixes_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
        DARABONBA_PTR_FROM_JSON(UnexBigKeysOfBytes, unexBigKeysOfBytes_);
        DARABONBA_PTR_FROM_JSON(UnexBigKeysOfNum, unexBigKeysOfNum_);
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
      class UnexBigKeysOfNum : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnexBigKeysOfNum& obj) { 
          DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
        };
        friend void from_json(const Darabonba::Json& j, UnexBigKeysOfNum& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
        };
        UnexBigKeysOfNum() = default ;
        UnexBigKeysOfNum(const UnexBigKeysOfNum &) = default ;
        UnexBigKeysOfNum(UnexBigKeysOfNum &&) = default ;
        UnexBigKeysOfNum(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnexBigKeysOfNum() = default ;
        UnexBigKeysOfNum& operator=(const UnexBigKeysOfNum &) = default ;
        UnexBigKeysOfNum& operator=(UnexBigKeysOfNum &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class KeyInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeyInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Bytes, bytes_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Encoding, encoding_);
            DARABONBA_PTR_TO_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, KeyInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
            DARABONBA_PTR_FROM_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          KeyInfo() = default ;
          KeyInfo(const KeyInfo &) = default ;
          KeyInfo(KeyInfo &&) = default ;
          KeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeyInfo() = default ;
          KeyInfo& operator=(const KeyInfo &) = default ;
          KeyInfo& operator=(KeyInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bytes_ == nullptr
        && this->count_ == nullptr && this->db_ == nullptr && this->encoding_ == nullptr && this->expirationTimeMillis_ == nullptr && this->key_ == nullptr
        && this->nodeId_ == nullptr && this->type_ == nullptr; };
          // bytes Field Functions 
          bool hasBytes() const { return this->bytes_ != nullptr;};
          void deleteBytes() { this->bytes_ = nullptr;};
          inline int64_t getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
          inline KeyInfo& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline KeyInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // db Field Functions 
          bool hasDb() const { return this->db_ != nullptr;};
          void deleteDb() { this->db_ = nullptr;};
          inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
          inline KeyInfo& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


          // encoding Field Functions 
          bool hasEncoding() const { return this->encoding_ != nullptr;};
          void deleteEncoding() { this->encoding_ = nullptr;};
          inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
          inline KeyInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


          // expirationTimeMillis Field Functions 
          bool hasExpirationTimeMillis() const { return this->expirationTimeMillis_ != nullptr;};
          void deleteExpirationTimeMillis() { this->expirationTimeMillis_ = nullptr;};
          inline int64_t getExpirationTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeMillis_, 0L) };
          inline KeyInfo& setExpirationTimeMillis(int64_t expirationTimeMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeMillis_, expirationTimeMillis) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline KeyInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline KeyInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline KeyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The number of bytes that are occupied by the key.
          shared_ptr<int64_t> bytes_ {};
          // The number of elements in the key.
          shared_ptr<int64_t> count_ {};
          // The database name.
          shared_ptr<int32_t> db_ {};
          // The data type of the key.
          shared_ptr<string> encoding_ {};
          // The time when the key expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. A value of 0 indicates that the key never expires.
          shared_ptr<int64_t> expirationTimeMillis_ {};
          // The key name.
          shared_ptr<string> key_ {};
          // The ID of the data node on the instance.
          shared_ptr<string> nodeId_ {};
          // The data type of the instance.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->keyInfo_ == nullptr; };
        // keyInfo Field Functions 
        bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
        void deleteKeyInfo() { this->keyInfo_ = nullptr;};
        inline const vector<UnexBigKeysOfNum::KeyInfo> & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<UnexBigKeysOfNum::KeyInfo>) };
        inline vector<UnexBigKeysOfNum::KeyInfo> getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<UnexBigKeysOfNum::KeyInfo>) };
        inline UnexBigKeysOfNum& setKeyInfo(const vector<UnexBigKeysOfNum::KeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
        inline UnexBigKeysOfNum& setKeyInfo(vector<UnexBigKeysOfNum::KeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


      protected:
        shared_ptr<vector<UnexBigKeysOfNum::KeyInfo>> keyInfo_ {};
      };

      class UnexBigKeysOfBytes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnexBigKeysOfBytes& obj) { 
          DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
        };
        friend void from_json(const Darabonba::Json& j, UnexBigKeysOfBytes& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
        };
        UnexBigKeysOfBytes() = default ;
        UnexBigKeysOfBytes(const UnexBigKeysOfBytes &) = default ;
        UnexBigKeysOfBytes(UnexBigKeysOfBytes &&) = default ;
        UnexBigKeysOfBytes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnexBigKeysOfBytes() = default ;
        UnexBigKeysOfBytes& operator=(const UnexBigKeysOfBytes &) = default ;
        UnexBigKeysOfBytes& operator=(UnexBigKeysOfBytes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class KeyInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeyInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Bytes, bytes_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Encoding, encoding_);
            DARABONBA_PTR_TO_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, KeyInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
            DARABONBA_PTR_FROM_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          KeyInfo() = default ;
          KeyInfo(const KeyInfo &) = default ;
          KeyInfo(KeyInfo &&) = default ;
          KeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeyInfo() = default ;
          KeyInfo& operator=(const KeyInfo &) = default ;
          KeyInfo& operator=(KeyInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bytes_ == nullptr
        && this->count_ == nullptr && this->db_ == nullptr && this->encoding_ == nullptr && this->expirationTimeMillis_ == nullptr && this->key_ == nullptr
        && this->nodeId_ == nullptr && this->type_ == nullptr; };
          // bytes Field Functions 
          bool hasBytes() const { return this->bytes_ != nullptr;};
          void deleteBytes() { this->bytes_ = nullptr;};
          inline int64_t getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
          inline KeyInfo& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline KeyInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // db Field Functions 
          bool hasDb() const { return this->db_ != nullptr;};
          void deleteDb() { this->db_ = nullptr;};
          inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
          inline KeyInfo& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


          // encoding Field Functions 
          bool hasEncoding() const { return this->encoding_ != nullptr;};
          void deleteEncoding() { this->encoding_ = nullptr;};
          inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
          inline KeyInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


          // expirationTimeMillis Field Functions 
          bool hasExpirationTimeMillis() const { return this->expirationTimeMillis_ != nullptr;};
          void deleteExpirationTimeMillis() { this->expirationTimeMillis_ = nullptr;};
          inline int64_t getExpirationTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeMillis_, 0L) };
          inline KeyInfo& setExpirationTimeMillis(int64_t expirationTimeMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeMillis_, expirationTimeMillis) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline KeyInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline KeyInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline KeyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The number of bytes that are occupied by the key.
          shared_ptr<int64_t> bytes_ {};
          // The number of elements in the key.
          shared_ptr<int64_t> count_ {};
          // The database name.
          shared_ptr<int32_t> db_ {};
          // The data type of the key.
          shared_ptr<string> encoding_ {};
          // The time when the key expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. A value of 0 indicates that the key never expires.
          shared_ptr<int64_t> expirationTimeMillis_ {};
          // The key name.
          shared_ptr<string> key_ {};
          // The ID of the data node on the instance.
          shared_ptr<string> nodeId_ {};
          // The data type of the instance.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->keyInfo_ == nullptr; };
        // keyInfo Field Functions 
        bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
        void deleteKeyInfo() { this->keyInfo_ = nullptr;};
        inline const vector<UnexBigKeysOfBytes::KeyInfo> & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<UnexBigKeysOfBytes::KeyInfo>) };
        inline vector<UnexBigKeysOfBytes::KeyInfo> getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<UnexBigKeysOfBytes::KeyInfo>) };
        inline UnexBigKeysOfBytes& setKeyInfo(const vector<UnexBigKeysOfBytes::KeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
        inline UnexBigKeysOfBytes& setKeyInfo(vector<UnexBigKeysOfBytes::KeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


      protected:
        shared_ptr<vector<UnexBigKeysOfBytes::KeyInfo>> keyInfo_ {};
      };

      class KeyPrefixes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyPrefixes& obj) { 
          DARABONBA_PTR_TO_JSON(Prefix, prefix_);
        };
        friend void from_json(const Darabonba::Json& j, KeyPrefixes& obj) { 
          DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
        };
        KeyPrefixes() = default ;
        KeyPrefixes(const KeyPrefixes &) = default ;
        KeyPrefixes(KeyPrefixes &&) = default ;
        KeyPrefixes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyPrefixes() = default ;
        KeyPrefixes& operator=(const KeyPrefixes &) = default ;
        KeyPrefixes& operator=(KeyPrefixes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Prefix : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Prefix& obj) { 
            DARABONBA_PTR_TO_JSON(Bytes, bytes_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(KeyNum, keyNum_);
            DARABONBA_PTR_TO_JSON(Prefix, prefix_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Prefix& obj) { 
            DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(KeyNum, keyNum_);
            DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Prefix() = default ;
          Prefix(const Prefix &) = default ;
          Prefix(Prefix &&) = default ;
          Prefix(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Prefix() = default ;
          Prefix& operator=(const Prefix &) = default ;
          Prefix& operator=(Prefix &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bytes_ == nullptr
        && this->count_ == nullptr && this->keyNum_ == nullptr && this->prefix_ == nullptr && this->type_ == nullptr; };
          // bytes Field Functions 
          bool hasBytes() const { return this->bytes_ != nullptr;};
          void deleteBytes() { this->bytes_ = nullptr;};
          inline int64_t getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
          inline Prefix& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline Prefix& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // keyNum Field Functions 
          bool hasKeyNum() const { return this->keyNum_ != nullptr;};
          void deleteKeyNum() { this->keyNum_ = nullptr;};
          inline int64_t getKeyNum() const { DARABONBA_PTR_GET_DEFAULT(keyNum_, 0L) };
          inline Prefix& setKeyNum(int64_t keyNum) { DARABONBA_PTR_SET_VALUE(keyNum_, keyNum) };


          // prefix Field Functions 
          bool hasPrefix() const { return this->prefix_ != nullptr;};
          void deletePrefix() { this->prefix_ = nullptr;};
          inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
          inline Prefix& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Prefix& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The number of bytes that are occupied by the key.
          shared_ptr<int64_t> bytes_ {};
          // The number of elements in the key.
          shared_ptr<int64_t> count_ {};
          // The number of keys that contain the prefix.
          shared_ptr<int64_t> keyNum_ {};
          // The prefix of the key.
          shared_ptr<string> prefix_ {};
          // The data type of the instance.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->prefix_ == nullptr; };
        // prefix Field Functions 
        bool hasPrefix() const { return this->prefix_ != nullptr;};
        void deletePrefix() { this->prefix_ = nullptr;};
        inline const vector<KeyPrefixes::Prefix> & getPrefix() const { DARABONBA_PTR_GET_CONST(prefix_, vector<KeyPrefixes::Prefix>) };
        inline vector<KeyPrefixes::Prefix> getPrefix() { DARABONBA_PTR_GET(prefix_, vector<KeyPrefixes::Prefix>) };
        inline KeyPrefixes& setPrefix(const vector<KeyPrefixes::Prefix> & prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };
        inline KeyPrefixes& setPrefix(vector<KeyPrefixes::Prefix> && prefix) { DARABONBA_PTR_SET_RVALUE(prefix_, prefix) };


      protected:
        shared_ptr<vector<KeyPrefixes::Prefix>> prefix_ {};
      };

      class ExpiryKeysLevelCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExpiryKeysLevelCount& obj) { 
          DARABONBA_PTR_TO_JSON(ExpiryLevel, expiryLevel_);
        };
        friend void from_json(const Darabonba::Json& j, ExpiryKeysLevelCount& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpiryLevel, expiryLevel_);
        };
        ExpiryKeysLevelCount() = default ;
        ExpiryKeysLevelCount(const ExpiryKeysLevelCount &) = default ;
        ExpiryKeysLevelCount(ExpiryKeysLevelCount &&) = default ;
        ExpiryKeysLevelCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExpiryKeysLevelCount() = default ;
        ExpiryKeysLevelCount& operator=(const ExpiryKeysLevelCount &) = default ;
        ExpiryKeysLevelCount& operator=(ExpiryKeysLevelCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExpiryLevel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExpiryLevel& obj) { 
            DARABONBA_PTR_TO_JSON(AnalysisTs, analysisTs_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
            DARABONBA_PTR_TO_JSON(TotalKeys, totalKeys_);
          };
          friend void from_json(const Darabonba::Json& j, ExpiryLevel& obj) { 
            DARABONBA_PTR_FROM_JSON(AnalysisTs, analysisTs_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
            DARABONBA_PTR_FROM_JSON(TotalKeys, totalKeys_);
          };
          ExpiryLevel() = default ;
          ExpiryLevel(const ExpiryLevel &) = default ;
          ExpiryLevel(ExpiryLevel &&) = default ;
          ExpiryLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExpiryLevel() = default ;
          ExpiryLevel& operator=(const ExpiryLevel &) = default ;
          ExpiryLevel& operator=(ExpiryLevel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->analysisTs_ == nullptr
        && this->level_ == nullptr && this->totalBytes_ == nullptr && this->totalKeys_ == nullptr; };
          // analysisTs Field Functions 
          bool hasAnalysisTs() const { return this->analysisTs_ != nullptr;};
          void deleteAnalysisTs() { this->analysisTs_ = nullptr;};
          inline int64_t getAnalysisTs() const { DARABONBA_PTR_GET_DEFAULT(analysisTs_, 0L) };
          inline ExpiryLevel& setAnalysisTs(int64_t analysisTs) { DARABONBA_PTR_SET_VALUE(analysisTs_, analysisTs) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
          inline ExpiryLevel& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // totalBytes Field Functions 
          bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
          void deleteTotalBytes() { this->totalBytes_ = nullptr;};
          inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
          inline ExpiryLevel& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


          // totalKeys Field Functions 
          bool hasTotalKeys() const { return this->totalKeys_ != nullptr;};
          void deleteTotalKeys() { this->totalKeys_ = nullptr;};
          inline int64_t getTotalKeys() const { DARABONBA_PTR_GET_DEFAULT(totalKeys_, 0L) };
          inline ExpiryLevel& setTotalKeys(int64_t totalKeys) { DARABONBA_PTR_SET_VALUE(totalKeys_, totalKeys) };


        protected:
          // The time when the cache analysis task was complete. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
          shared_ptr<int64_t> analysisTs_ {};
          // The expiration level. Valid values:
          // 
          // *   **0**: The key never expires.
          // *   **1**: The key has expired.
          // *   **2**: The key has expired for 0 to 1 hour.
          // *   **3**: The key has expired for 1 to 3 hours.
          // *   **4**: The key has expired for 3 to 12 hours.
          // *   **5**: The key has expired for 12 to 24 hours.
          // *   **6**: The key has expired for one to two days.
          // *   **7**: The key has expired for three to seven days.
          // *   **8**: The key has expired for more than seven days.
          shared_ptr<int32_t> level_ {};
          // The number of bytes occupied by the keys that have expired.
          shared_ptr<int64_t> totalBytes_ {};
          // The total number of the keys that have expired.
          shared_ptr<int64_t> totalKeys_ {};
        };

        virtual bool empty() const override { return this->expiryLevel_ == nullptr; };
        // expiryLevel Field Functions 
        bool hasExpiryLevel() const { return this->expiryLevel_ != nullptr;};
        void deleteExpiryLevel() { this->expiryLevel_ = nullptr;};
        inline const vector<ExpiryKeysLevelCount::ExpiryLevel> & getExpiryLevel() const { DARABONBA_PTR_GET_CONST(expiryLevel_, vector<ExpiryKeysLevelCount::ExpiryLevel>) };
        inline vector<ExpiryKeysLevelCount::ExpiryLevel> getExpiryLevel() { DARABONBA_PTR_GET(expiryLevel_, vector<ExpiryKeysLevelCount::ExpiryLevel>) };
        inline ExpiryKeysLevelCount& setExpiryLevel(const vector<ExpiryKeysLevelCount::ExpiryLevel> & expiryLevel) { DARABONBA_PTR_SET_VALUE(expiryLevel_, expiryLevel) };
        inline ExpiryKeysLevelCount& setExpiryLevel(vector<ExpiryKeysLevelCount::ExpiryLevel> && expiryLevel) { DARABONBA_PTR_SET_RVALUE(expiryLevel_, expiryLevel) };


      protected:
        shared_ptr<vector<ExpiryKeysLevelCount::ExpiryLevel>> expiryLevel_ {};
      };

      class BigKeysOfNum : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BigKeysOfNum& obj) { 
          DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
        };
        friend void from_json(const Darabonba::Json& j, BigKeysOfNum& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
        };
        BigKeysOfNum() = default ;
        BigKeysOfNum(const BigKeysOfNum &) = default ;
        BigKeysOfNum(BigKeysOfNum &&) = default ;
        BigKeysOfNum(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BigKeysOfNum() = default ;
        BigKeysOfNum& operator=(const BigKeysOfNum &) = default ;
        BigKeysOfNum& operator=(BigKeysOfNum &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class KeyInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeyInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Bytes, bytes_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Encoding, encoding_);
            DARABONBA_PTR_TO_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, KeyInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
            DARABONBA_PTR_FROM_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          KeyInfo() = default ;
          KeyInfo(const KeyInfo &) = default ;
          KeyInfo(KeyInfo &&) = default ;
          KeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeyInfo() = default ;
          KeyInfo& operator=(const KeyInfo &) = default ;
          KeyInfo& operator=(KeyInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bytes_ == nullptr
        && this->count_ == nullptr && this->db_ == nullptr && this->encoding_ == nullptr && this->expirationTimeMillis_ == nullptr && this->key_ == nullptr
        && this->nodeId_ == nullptr && this->type_ == nullptr; };
          // bytes Field Functions 
          bool hasBytes() const { return this->bytes_ != nullptr;};
          void deleteBytes() { this->bytes_ = nullptr;};
          inline int64_t getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
          inline KeyInfo& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline KeyInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // db Field Functions 
          bool hasDb() const { return this->db_ != nullptr;};
          void deleteDb() { this->db_ = nullptr;};
          inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
          inline KeyInfo& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


          // encoding Field Functions 
          bool hasEncoding() const { return this->encoding_ != nullptr;};
          void deleteEncoding() { this->encoding_ = nullptr;};
          inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
          inline KeyInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


          // expirationTimeMillis Field Functions 
          bool hasExpirationTimeMillis() const { return this->expirationTimeMillis_ != nullptr;};
          void deleteExpirationTimeMillis() { this->expirationTimeMillis_ = nullptr;};
          inline int64_t getExpirationTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeMillis_, 0L) };
          inline KeyInfo& setExpirationTimeMillis(int64_t expirationTimeMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeMillis_, expirationTimeMillis) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline KeyInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline KeyInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline KeyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The number of bytes that are occupied by the key.
          shared_ptr<int64_t> bytes_ {};
          // The number of elements in the key.
          shared_ptr<int64_t> count_ {};
          // The database name.
          shared_ptr<int32_t> db_ {};
          // The data type of the key.
          shared_ptr<string> encoding_ {};
          // The time when the key expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. A value of 0 indicates that the key never expires.
          shared_ptr<int64_t> expirationTimeMillis_ {};
          // The key name.
          shared_ptr<string> key_ {};
          // The ID of the data node on the instance.
          shared_ptr<string> nodeId_ {};
          // The data type of the instance.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->keyInfo_ == nullptr; };
        // keyInfo Field Functions 
        bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
        void deleteKeyInfo() { this->keyInfo_ = nullptr;};
        inline const vector<BigKeysOfNum::KeyInfo> & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<BigKeysOfNum::KeyInfo>) };
        inline vector<BigKeysOfNum::KeyInfo> getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<BigKeysOfNum::KeyInfo>) };
        inline BigKeysOfNum& setKeyInfo(const vector<BigKeysOfNum::KeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
        inline BigKeysOfNum& setKeyInfo(vector<BigKeysOfNum::KeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


      protected:
        shared_ptr<vector<BigKeysOfNum::KeyInfo>> keyInfo_ {};
      };

      class BigKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BigKeys& obj) { 
          DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
        };
        friend void from_json(const Darabonba::Json& j, BigKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
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
        class KeyInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KeyInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Bytes, bytes_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Db, db_);
            DARABONBA_PTR_TO_JSON(Encoding, encoding_);
            DARABONBA_PTR_TO_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, KeyInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Bytes, bytes_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Db, db_);
            DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
            DARABONBA_PTR_FROM_JSON(ExpirationTimeMillis, expirationTimeMillis_);
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          KeyInfo() = default ;
          KeyInfo(const KeyInfo &) = default ;
          KeyInfo(KeyInfo &&) = default ;
          KeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KeyInfo() = default ;
          KeyInfo& operator=(const KeyInfo &) = default ;
          KeyInfo& operator=(KeyInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bytes_ == nullptr
        && this->count_ == nullptr && this->db_ == nullptr && this->encoding_ == nullptr && this->expirationTimeMillis_ == nullptr && this->key_ == nullptr
        && this->nodeId_ == nullptr && this->type_ == nullptr; };
          // bytes Field Functions 
          bool hasBytes() const { return this->bytes_ != nullptr;};
          void deleteBytes() { this->bytes_ = nullptr;};
          inline int64_t getBytes() const { DARABONBA_PTR_GET_DEFAULT(bytes_, 0L) };
          inline KeyInfo& setBytes(int64_t bytes) { DARABONBA_PTR_SET_VALUE(bytes_, bytes) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline KeyInfo& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // db Field Functions 
          bool hasDb() const { return this->db_ != nullptr;};
          void deleteDb() { this->db_ = nullptr;};
          inline int32_t getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, 0) };
          inline KeyInfo& setDb(int32_t db) { DARABONBA_PTR_SET_VALUE(db_, db) };


          // encoding Field Functions 
          bool hasEncoding() const { return this->encoding_ != nullptr;};
          void deleteEncoding() { this->encoding_ = nullptr;};
          inline string getEncoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
          inline KeyInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


          // expirationTimeMillis Field Functions 
          bool hasExpirationTimeMillis() const { return this->expirationTimeMillis_ != nullptr;};
          void deleteExpirationTimeMillis() { this->expirationTimeMillis_ = nullptr;};
          inline int64_t getExpirationTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(expirationTimeMillis_, 0L) };
          inline KeyInfo& setExpirationTimeMillis(int64_t expirationTimeMillis) { DARABONBA_PTR_SET_VALUE(expirationTimeMillis_, expirationTimeMillis) };


          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline KeyInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline KeyInfo& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline KeyInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The number of bytes that are occupied by the key.
          shared_ptr<int64_t> bytes_ {};
          // The number of elements in the key.
          shared_ptr<int64_t> count_ {};
          // The database name.
          shared_ptr<int32_t> db_ {};
          // The data type of the key.
          shared_ptr<string> encoding_ {};
          // The time when the key expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. A value of 0 indicates that the key never expires.
          shared_ptr<int64_t> expirationTimeMillis_ {};
          // The key name.
          shared_ptr<string> key_ {};
          // The ID of the data node on the instance.
          shared_ptr<string> nodeId_ {};
          // The data type of the instance.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->keyInfo_ == nullptr; };
        // keyInfo Field Functions 
        bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
        void deleteKeyInfo() { this->keyInfo_ = nullptr;};
        inline const vector<BigKeys::KeyInfo> & getKeyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<BigKeys::KeyInfo>) };
        inline vector<BigKeys::KeyInfo> getKeyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<BigKeys::KeyInfo>) };
        inline BigKeys& setKeyInfo(const vector<BigKeys::KeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
        inline BigKeys& setKeyInfo(vector<BigKeys::KeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


      protected:
        shared_ptr<vector<BigKeys::KeyInfo>> keyInfo_ {};
      };

      virtual bool empty() const override { return this->bigKeys_ == nullptr
        && this->bigKeysOfNum_ == nullptr && this->expiryKeysLevelCount_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->keyPrefixes_ == nullptr
        && this->message_ == nullptr && this->nodeId_ == nullptr && this->taskState_ == nullptr && this->unexBigKeysOfBytes_ == nullptr && this->unexBigKeysOfNum_ == nullptr; };
      // bigKeys Field Functions 
      bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
      void deleteBigKeys() { this->bigKeys_ = nullptr;};
      inline const Data::BigKeys & getBigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Data::BigKeys) };
      inline Data::BigKeys getBigKeys() { DARABONBA_PTR_GET(bigKeys_, Data::BigKeys) };
      inline Data& setBigKeys(const Data::BigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
      inline Data& setBigKeys(Data::BigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


      // bigKeysOfNum Field Functions 
      bool hasBigKeysOfNum() const { return this->bigKeysOfNum_ != nullptr;};
      void deleteBigKeysOfNum() { this->bigKeysOfNum_ = nullptr;};
      inline const Data::BigKeysOfNum & getBigKeysOfNum() const { DARABONBA_PTR_GET_CONST(bigKeysOfNum_, Data::BigKeysOfNum) };
      inline Data::BigKeysOfNum getBigKeysOfNum() { DARABONBA_PTR_GET(bigKeysOfNum_, Data::BigKeysOfNum) };
      inline Data& setBigKeysOfNum(const Data::BigKeysOfNum & bigKeysOfNum) { DARABONBA_PTR_SET_VALUE(bigKeysOfNum_, bigKeysOfNum) };
      inline Data& setBigKeysOfNum(Data::BigKeysOfNum && bigKeysOfNum) { DARABONBA_PTR_SET_RVALUE(bigKeysOfNum_, bigKeysOfNum) };


      // expiryKeysLevelCount Field Functions 
      bool hasExpiryKeysLevelCount() const { return this->expiryKeysLevelCount_ != nullptr;};
      void deleteExpiryKeysLevelCount() { this->expiryKeysLevelCount_ = nullptr;};
      inline const Data::ExpiryKeysLevelCount & getExpiryKeysLevelCount() const { DARABONBA_PTR_GET_CONST(expiryKeysLevelCount_, Data::ExpiryKeysLevelCount) };
      inline Data::ExpiryKeysLevelCount getExpiryKeysLevelCount() { DARABONBA_PTR_GET(expiryKeysLevelCount_, Data::ExpiryKeysLevelCount) };
      inline Data& setExpiryKeysLevelCount(const Data::ExpiryKeysLevelCount & expiryKeysLevelCount) { DARABONBA_PTR_SET_VALUE(expiryKeysLevelCount_, expiryKeysLevelCount) };
      inline Data& setExpiryKeysLevelCount(Data::ExpiryKeysLevelCount && expiryKeysLevelCount) { DARABONBA_PTR_SET_RVALUE(expiryKeysLevelCount_, expiryKeysLevelCount) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // keyPrefixes Field Functions 
      bool hasKeyPrefixes() const { return this->keyPrefixes_ != nullptr;};
      void deleteKeyPrefixes() { this->keyPrefixes_ = nullptr;};
      inline const Data::KeyPrefixes & getKeyPrefixes() const { DARABONBA_PTR_GET_CONST(keyPrefixes_, Data::KeyPrefixes) };
      inline Data::KeyPrefixes getKeyPrefixes() { DARABONBA_PTR_GET(keyPrefixes_, Data::KeyPrefixes) };
      inline Data& setKeyPrefixes(const Data::KeyPrefixes & keyPrefixes) { DARABONBA_PTR_SET_VALUE(keyPrefixes_, keyPrefixes) };
      inline Data& setKeyPrefixes(Data::KeyPrefixes && keyPrefixes) { DARABONBA_PTR_SET_RVALUE(keyPrefixes_, keyPrefixes) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // taskState Field Functions 
      bool hasTaskState() const { return this->taskState_ != nullptr;};
      void deleteTaskState() { this->taskState_ = nullptr;};
      inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
      inline Data& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


      // unexBigKeysOfBytes Field Functions 
      bool hasUnexBigKeysOfBytes() const { return this->unexBigKeysOfBytes_ != nullptr;};
      void deleteUnexBigKeysOfBytes() { this->unexBigKeysOfBytes_ = nullptr;};
      inline const Data::UnexBigKeysOfBytes & getUnexBigKeysOfBytes() const { DARABONBA_PTR_GET_CONST(unexBigKeysOfBytes_, Data::UnexBigKeysOfBytes) };
      inline Data::UnexBigKeysOfBytes getUnexBigKeysOfBytes() { DARABONBA_PTR_GET(unexBigKeysOfBytes_, Data::UnexBigKeysOfBytes) };
      inline Data& setUnexBigKeysOfBytes(const Data::UnexBigKeysOfBytes & unexBigKeysOfBytes) { DARABONBA_PTR_SET_VALUE(unexBigKeysOfBytes_, unexBigKeysOfBytes) };
      inline Data& setUnexBigKeysOfBytes(Data::UnexBigKeysOfBytes && unexBigKeysOfBytes) { DARABONBA_PTR_SET_RVALUE(unexBigKeysOfBytes_, unexBigKeysOfBytes) };


      // unexBigKeysOfNum Field Functions 
      bool hasUnexBigKeysOfNum() const { return this->unexBigKeysOfNum_ != nullptr;};
      void deleteUnexBigKeysOfNum() { this->unexBigKeysOfNum_ = nullptr;};
      inline const Data::UnexBigKeysOfNum & getUnexBigKeysOfNum() const { DARABONBA_PTR_GET_CONST(unexBigKeysOfNum_, Data::UnexBigKeysOfNum) };
      inline Data::UnexBigKeysOfNum getUnexBigKeysOfNum() { DARABONBA_PTR_GET(unexBigKeysOfNum_, Data::UnexBigKeysOfNum) };
      inline Data& setUnexBigKeysOfNum(const Data::UnexBigKeysOfNum & unexBigKeysOfNum) { DARABONBA_PTR_SET_VALUE(unexBigKeysOfNum_, unexBigKeysOfNum) };
      inline Data& setUnexBigKeysOfNum(Data::UnexBigKeysOfNum && unexBigKeysOfNum) { DARABONBA_PTR_SET_RVALUE(unexBigKeysOfNum_, unexBigKeysOfNum) };


    protected:
      // The details of the large keys. The returned large keys are sorted in descending order based on the number of bytes occupied by the keys.
      shared_ptr<Data::BigKeys> bigKeys_ {};
      // The details of the large keys. The returned large keys are sorted in descending order based on the number of keys.
      shared_ptr<Data::BigKeysOfNum> bigKeysOfNum_ {};
      // The statistics of the keys that have expired.
      shared_ptr<Data::ExpiryKeysLevelCount> expiryKeysLevelCount_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The ID of the cache analysis task.
      shared_ptr<string> jobId_ {};
      // The prefixes of the keys.
      shared_ptr<Data::KeyPrefixes> keyPrefixes_ {};
      // The message that is returned for the request.
      // 
      // >  If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
      shared_ptr<string> message_ {};
      // The ID of the data node on the instance.
      shared_ptr<string> nodeId_ {};
      // The state of the cache analysis task. Valid values:
      // 
      // *   **BACKUP**: The data is being backed up.
      // *   **ANALYZING**: The data is being analyzed.
      // *   **FINISHED**: The data is analyzed.
      // *   **FAILED**: An error occurred.
      shared_ptr<string> taskState_ {};
      // The details of permanent keys. The returned keys are sorted in descending order based on the number of bytes occupied by the keys.
      shared_ptr<Data::UnexBigKeysOfBytes> unexBigKeysOfBytes_ {};
      // The details of permanent keys. The returned keys are sorted in descending order based on the number of keys.
      shared_ptr<Data::UnexBigKeysOfNum> unexBigKeysOfNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCacheAnalysisJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCacheAnalysisJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCacheAnalysisJobResponseBody::Data) };
    inline DescribeCacheAnalysisJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCacheAnalysisJobResponseBody::Data) };
    inline DescribeCacheAnalysisJobResponseBody& setData(const DescribeCacheAnalysisJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCacheAnalysisJobResponseBody& setData(DescribeCacheAnalysisJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCacheAnalysisJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCacheAnalysisJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCacheAnalysisJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The details of the cache analysis task.
    shared_ptr<DescribeCacheAnalysisJobResponseBody::Data> data_ {};
    // The message that is returned for the request.
    // 
    // >  If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
