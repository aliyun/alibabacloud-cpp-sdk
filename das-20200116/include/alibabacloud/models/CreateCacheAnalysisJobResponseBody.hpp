// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBRESPONSEBODY_HPP_
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
  class CreateCacheAnalysisJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCacheAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCacheAnalysisJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateCacheAnalysisJobResponseBody() = default ;
    CreateCacheAnalysisJobResponseBody(const CreateCacheAnalysisJobResponseBody &) = default ;
    CreateCacheAnalysisJobResponseBody(CreateCacheAnalysisJobResponseBody &&) = default ;
    CreateCacheAnalysisJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCacheAnalysisJobResponseBody() = default ;
    CreateCacheAnalysisJobResponseBody& operator=(const CreateCacheAnalysisJobResponseBody &) = default ;
    CreateCacheAnalysisJobResponseBody& operator=(CreateCacheAnalysisJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(TaskState, taskState_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
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
          // The name of the database.
          shared_ptr<int32_t> db_ {};
          // The data type of the key.
          shared_ptr<string> encoding_ {};
          // The expiration period of the key. Unit: milliseconds. A value of 0 indicates that the key does not expire.
          shared_ptr<int64_t> expirationTimeMillis_ {};
          // The name of the key.
          shared_ptr<string> key_ {};
          // The ID of the data node on the instance.
          shared_ptr<string> nodeId_ {};
          // The data type of the ApsaraDB for Redis instance.
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
        && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->nodeId_ == nullptr && this->taskState_ == nullptr; };
      // bigKeys Field Functions 
      bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
      void deleteBigKeys() { this->bigKeys_ = nullptr;};
      inline const Data::BigKeys & getBigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Data::BigKeys) };
      inline Data::BigKeys getBigKeys() { DARABONBA_PTR_GET(bigKeys_, Data::BigKeys) };
      inline Data& setBigKeys(const Data::BigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
      inline Data& setBigKeys(Data::BigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


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


    protected:
      // The number of elements in the key.
      shared_ptr<Data::BigKeys> bigKeys_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The ID of the cache analysis task.
      // 
      // >  This parameter can be used to query a specific cache analysis task. When you call the CreateCacheAnalysisJob operation, it takes some time to create a cache analysis task. As a result, the analysis results cannot be immediately returned. You can call the [DescribeCacheAnalysisJob](https://help.aliyun.com/document_detail/180983.html) operation to query the analysis results of the specified cache analysis task.
      shared_ptr<string> jobId_ {};
      // The returned message.
      // 
      // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
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
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateCacheAnalysisJobResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateCacheAnalysisJobResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateCacheAnalysisJobResponseBody::Data) };
    inline CreateCacheAnalysisJobResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateCacheAnalysisJobResponseBody::Data) };
    inline CreateCacheAnalysisJobResponseBody& setData(const CreateCacheAnalysisJobResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateCacheAnalysisJobResponseBody& setData(CreateCacheAnalysisJobResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateCacheAnalysisJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCacheAnalysisJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateCacheAnalysisJobResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information.
    shared_ptr<CreateCacheAnalysisJobResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
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
