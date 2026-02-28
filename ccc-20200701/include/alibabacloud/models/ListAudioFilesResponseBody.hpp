// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDIOFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDIOFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAudioFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAudioFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAudioFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAudioFilesResponseBody() = default ;
    ListAudioFilesResponseBody(const ListAudioFilesResponseBody &) = default ;
    ListAudioFilesResponseBody(ListAudioFilesResponseBody &&) = default ;
    ListAudioFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAudioFilesResponseBody() = default ;
    ListAudioFilesResponseBody& operator=(const ListAudioFilesResponseBody &) = default ;
    ListAudioFilesResponseBody& operator=(ListAudioFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(AudioFileName, audioFileName_);
          DARABONBA_PTR_TO_JSON(AudioResourceId, audioResourceId_);
          DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioFileName, audioFileName_);
          DARABONBA_PTR_FROM_JSON(AudioResourceId, audioResourceId_);
          DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
        virtual bool empty() const override { return this->audioFileName_ == nullptr
        && this->audioResourceId_ == nullptr && this->auditResult_ == nullptr && this->createdTime_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr
        && this->ossFileKey_ == nullptr && this->status_ == nullptr && this->updatedTime_ == nullptr && this->usage_ == nullptr; };
        // audioFileName Field Functions 
        bool hasAudioFileName() const { return this->audioFileName_ != nullptr;};
        void deleteAudioFileName() { this->audioFileName_ = nullptr;};
        inline string getAudioFileName() const { DARABONBA_PTR_GET_DEFAULT(audioFileName_, "") };
        inline List& setAudioFileName(string audioFileName) { DARABONBA_PTR_SET_VALUE(audioFileName_, audioFileName) };


        // audioResourceId Field Functions 
        bool hasAudioResourceId() const { return this->audioResourceId_ != nullptr;};
        void deleteAudioResourceId() { this->audioResourceId_ = nullptr;};
        inline string getAudioResourceId() const { DARABONBA_PTR_GET_DEFAULT(audioResourceId_, "") };
        inline List& setAudioResourceId(string audioResourceId) { DARABONBA_PTR_SET_VALUE(audioResourceId_, audioResourceId) };


        // auditResult Field Functions 
        bool hasAuditResult() const { return this->auditResult_ != nullptr;};
        void deleteAuditResult() { this->auditResult_ = nullptr;};
        inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
        inline List& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline List& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ossFileKey Field Functions 
        bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
        void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
        inline string getOssFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
        inline List& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline string getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, "") };
        inline List& setUpdatedTime(string updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline List& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<string> audioFileName_ {};
        shared_ptr<string> audioResourceId_ {};
        shared_ptr<string> auditResult_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> ossFileKey_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> updatedTime_ {};
        shared_ptr<string> usage_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAudioFilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAudioFilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAudioFilesResponseBody::Data) };
    inline ListAudioFilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAudioFilesResponseBody::Data) };
    inline ListAudioFilesResponseBody& setData(const ListAudioFilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAudioFilesResponseBody& setData(ListAudioFilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAudioFilesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAudioFilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAudioFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListAudioFilesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
