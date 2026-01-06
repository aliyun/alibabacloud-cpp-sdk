// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODY_HPP_
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
  class DescribeCacheAnalysisJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCacheAnalysisJobsResponseBody() = default ;
    DescribeCacheAnalysisJobsResponseBody(const DescribeCacheAnalysisJobsResponseBody &) = default ;
    DescribeCacheAnalysisJobsResponseBody(DescribeCacheAnalysisJobsResponseBody &&) = default ;
    DescribeCacheAnalysisJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobsResponseBody() = default ;
    DescribeCacheAnalysisJobsResponseBody& operator=(const DescribeCacheAnalysisJobsResponseBody &) = default ;
    DescribeCacheAnalysisJobsResponseBody& operator=(DescribeCacheAnalysisJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(CacheAnalysisJob, cacheAnalysisJob_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(CacheAnalysisJob, cacheAnalysisJob_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CacheAnalysisJob : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CacheAnalysisJob& obj) { 
            DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(JobId, jobId_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(TaskState, taskState_);
          };
          friend void from_json(const Darabonba::Json& j, CacheAnalysisJob& obj) { 
            DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(JobId, jobId_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
          };
          CacheAnalysisJob() = default ;
          CacheAnalysisJob(const CacheAnalysisJob &) = default ;
          CacheAnalysisJob(CacheAnalysisJob &&) = default ;
          CacheAnalysisJob(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CacheAnalysisJob() = default ;
          CacheAnalysisJob& operator=(const CacheAnalysisJob &) = default ;
          CacheAnalysisJob& operator=(CacheAnalysisJob &&) = default ;
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
        && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->nodeId_ == nullptr && this->taskState_ == nullptr; };
          // bigKeys Field Functions 
          bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
          void deleteBigKeys() { this->bigKeys_ = nullptr;};
          inline const CacheAnalysisJob::BigKeys & getBigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, CacheAnalysisJob::BigKeys) };
          inline CacheAnalysisJob::BigKeys getBigKeys() { DARABONBA_PTR_GET(bigKeys_, CacheAnalysisJob::BigKeys) };
          inline CacheAnalysisJob& setBigKeys(const CacheAnalysisJob::BigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
          inline CacheAnalysisJob& setBigKeys(CacheAnalysisJob::BigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline CacheAnalysisJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // jobId Field Functions 
          bool hasJobId() const { return this->jobId_ != nullptr;};
          void deleteJobId() { this->jobId_ = nullptr;};
          inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
          inline CacheAnalysisJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline CacheAnalysisJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline CacheAnalysisJob& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // taskState Field Functions 
          bool hasTaskState() const { return this->taskState_ != nullptr;};
          void deleteTaskState() { this->taskState_ = nullptr;};
          inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
          inline CacheAnalysisJob& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


        protected:
          // The details about the large keys.
          // 
          // > The sub-parameters of this parameter and the content of the sub-parameters are not returned. To query the detailed information about the cache analysis tasks, call the [DescribeCacheAnalysisJob](https://help.aliyun.com/document_detail/443012.html) operation.
          shared_ptr<CacheAnalysisJob::BigKeys> bigKeys_ {};
          // The instance ID.
          shared_ptr<string> instanceId_ {};
          // The ID of the cache analysis task.
          shared_ptr<string> jobId_ {};
          // The returned message.
          // 
          // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
          shared_ptr<string> message_ {};
          // The ID of the data node on the instance.
          shared_ptr<string> nodeId_ {};
          // The state of the cache analysis task. Valid values:
          // 
          // * **BACKUP**: The data is being backed up.
          // * **ANALYZING**: The data is being analyzed.
          // * **FINISHED**: The data is analyzed.
          // * **FAILED**: An error occurred.
          shared_ptr<string> taskState_ {};
        };

        virtual bool empty() const override { return this->cacheAnalysisJob_ == nullptr; };
        // cacheAnalysisJob Field Functions 
        bool hasCacheAnalysisJob() const { return this->cacheAnalysisJob_ != nullptr;};
        void deleteCacheAnalysisJob() { this->cacheAnalysisJob_ = nullptr;};
        inline const vector<List::CacheAnalysisJob> & getCacheAnalysisJob() const { DARABONBA_PTR_GET_CONST(cacheAnalysisJob_, vector<List::CacheAnalysisJob>) };
        inline vector<List::CacheAnalysisJob> getCacheAnalysisJob() { DARABONBA_PTR_GET(cacheAnalysisJob_, vector<List::CacheAnalysisJob>) };
        inline List& setCacheAnalysisJob(const vector<List::CacheAnalysisJob> & cacheAnalysisJob) { DARABONBA_PTR_SET_VALUE(cacheAnalysisJob_, cacheAnalysisJob) };
        inline List& setCacheAnalysisJob(vector<List::CacheAnalysisJob> && cacheAnalysisJob) { DARABONBA_PTR_SET_RVALUE(cacheAnalysisJob_, cacheAnalysisJob) };


      protected:
        shared_ptr<vector<List::CacheAnalysisJob>> cacheAnalysisJob_ {};
      };

      virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const Data::List & getList() const { DARABONBA_PTR_GET_CONST(list_, Data::List) };
      inline Data::List getList() { DARABONBA_PTR_GET(list_, Data::List) };
      inline Data& setList(const Data::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(Data::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The reserved parameter.
      shared_ptr<string> extra_ {};
      // The ID of the data node on the instance.
      shared_ptr<Data::List> list_ {};
      // The page number. The value must be an integer that is greater than 0. Default value: 1.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page. Default value: 10.
      shared_ptr<int64_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCacheAnalysisJobsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCacheAnalysisJobsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCacheAnalysisJobsResponseBody::Data) };
    inline DescribeCacheAnalysisJobsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCacheAnalysisJobsResponseBody::Data) };
    inline DescribeCacheAnalysisJobsResponseBody& setData(const DescribeCacheAnalysisJobsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCacheAnalysisJobsResponseBody& setData(DescribeCacheAnalysisJobsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCacheAnalysisJobsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCacheAnalysisJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCacheAnalysisJobsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The list of cache analysis tasks.
    shared_ptr<DescribeCacheAnalysisJobsResponseBody::Data> data_ {};
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
