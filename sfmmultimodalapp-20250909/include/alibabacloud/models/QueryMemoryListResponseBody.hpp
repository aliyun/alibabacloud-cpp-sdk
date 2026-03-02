// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEMORYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEMORYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class QueryMemoryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMemoryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMemoryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMemoryListResponseBody() = default ;
    QueryMemoryListResponseBody(const QueryMemoryListResponseBody &) = default ;
    QueryMemoryListResponseBody(QueryMemoryListResponseBody &&) = default ;
    QueryMemoryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMemoryListResponseBody() = default ;
    QueryMemoryListResponseBody& operator=(const QueryMemoryListResponseBody &) = default ;
    QueryMemoryListResponseBody& operator=(QueryMemoryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MemoryNodes, memoryNodes_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MemoryNodes, memoryNodes_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
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
      class MemoryNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemoryNodes& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Event, event_);
          DARABONBA_PTR_TO_JSON(MemoryNodeId, memoryNodeId_);
          DARABONBA_ANY_TO_JSON(MetaData, metaData_);
          DARABONBA_PTR_TO_JSON(MetaDataJson, metaDataJson_);
          DARABONBA_PTR_TO_JSON(OldContent, oldContent_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, MemoryNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Event, event_);
          DARABONBA_PTR_FROM_JSON(MemoryNodeId, memoryNodeId_);
          DARABONBA_ANY_FROM_JSON(MetaData, metaData_);
          DARABONBA_PTR_FROM_JSON(MetaDataJson, metaDataJson_);
          DARABONBA_PTR_FROM_JSON(OldContent, oldContent_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        MemoryNodes() = default ;
        MemoryNodes(const MemoryNodes &) = default ;
        MemoryNodes(MemoryNodes &&) = default ;
        MemoryNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemoryNodes() = default ;
        MemoryNodes& operator=(const MemoryNodes &) = default ;
        MemoryNodes& operator=(MemoryNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->event_ == nullptr && this->memoryNodeId_ == nullptr && this->metaData_ == nullptr && this->metaDataJson_ == nullptr
        && this->oldContent_ == nullptr && this->projectId_ == nullptr && this->timestamp_ == nullptr && this->updateTime_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline MemoryNodes& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline MemoryNodes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
        inline MemoryNodes& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


        // memoryNodeId Field Functions 
        bool hasMemoryNodeId() const { return this->memoryNodeId_ != nullptr;};
        void deleteMemoryNodeId() { this->memoryNodeId_ = nullptr;};
        inline string getMemoryNodeId() const { DARABONBA_PTR_GET_DEFAULT(memoryNodeId_, "") };
        inline MemoryNodes& setMemoryNodeId(string memoryNodeId) { DARABONBA_PTR_SET_VALUE(memoryNodeId_, memoryNodeId) };


        // metaData Field Functions 
        bool hasMetaData() const { return this->metaData_ != nullptr;};
        void deleteMetaData() { this->metaData_ = nullptr;};
        inline         const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
        Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
        inline MemoryNodes& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
        inline MemoryNodes& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


        // metaDataJson Field Functions 
        bool hasMetaDataJson() const { return this->metaDataJson_ != nullptr;};
        void deleteMetaDataJson() { this->metaDataJson_ = nullptr;};
        inline string getMetaDataJson() const { DARABONBA_PTR_GET_DEFAULT(metaDataJson_, "") };
        inline MemoryNodes& setMetaDataJson(string metaDataJson) { DARABONBA_PTR_SET_VALUE(metaDataJson_, metaDataJson) };


        // oldContent Field Functions 
        bool hasOldContent() const { return this->oldContent_ != nullptr;};
        void deleteOldContent() { this->oldContent_ = nullptr;};
        inline string getOldContent() const { DARABONBA_PTR_GET_DEFAULT(oldContent_, "") };
        inline MemoryNodes& setOldContent(string oldContent) { DARABONBA_PTR_SET_VALUE(oldContent_, oldContent) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline MemoryNodes& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline MemoryNodes& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline MemoryNodes& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> event_ {};
        shared_ptr<string> memoryNodeId_ {};
        Darabonba::Json metaData_ {};
        shared_ptr<string> metaDataJson_ {};
        shared_ptr<string> oldContent_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<int64_t> timestamp_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->memoryNodes_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // memoryNodes Field Functions 
      bool hasMemoryNodes() const { return this->memoryNodes_ != nullptr;};
      void deleteMemoryNodes() { this->memoryNodes_ = nullptr;};
      inline const vector<Data::MemoryNodes> & getMemoryNodes() const { DARABONBA_PTR_GET_CONST(memoryNodes_, vector<Data::MemoryNodes>) };
      inline vector<Data::MemoryNodes> getMemoryNodes() { DARABONBA_PTR_GET(memoryNodes_, vector<Data::MemoryNodes>) };
      inline Data& setMemoryNodes(const vector<Data::MemoryNodes> & memoryNodes) { DARABONBA_PTR_SET_VALUE(memoryNodes_, memoryNodes) };
      inline Data& setMemoryNodes(vector<Data::MemoryNodes> && memoryNodes) { DARABONBA_PTR_SET_RVALUE(memoryNodes_, memoryNodes) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline string getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, "") };
      inline Data& setPageNum(string pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Data& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::MemoryNodes>> memoryNodes_ {};
      shared_ptr<string> pageNum_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryMemoryListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryMemoryListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryMemoryListResponseBody::Data) };
    inline QueryMemoryListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryMemoryListResponseBody::Data) };
    inline QueryMemoryListResponseBody& setData(const QueryMemoryListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMemoryListResponseBody& setData(QueryMemoryListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryMemoryListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMemoryListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMemoryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMemoryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryMemoryListResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
