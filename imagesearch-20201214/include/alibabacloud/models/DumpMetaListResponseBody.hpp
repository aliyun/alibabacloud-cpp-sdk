// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUMPMETALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DUMPMETALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DumpMetaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DumpMetaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DumpMetaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DumpMetaListResponseBody() = default ;
    DumpMetaListResponseBody(const DumpMetaListResponseBody &) = default ;
    DumpMetaListResponseBody(DumpMetaListResponseBody &&) = default ;
    DumpMetaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DumpMetaListResponseBody() = default ;
    DumpMetaListResponseBody& operator=(const DumpMetaListResponseBody &) = default ;
    DumpMetaListResponseBody& operator=(DumpMetaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DumpMetaList, dumpMetaList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DumpMetaList, dumpMetaList_);
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
      class DumpMetaList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DumpMetaList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MetaUrl, metaUrl_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UtcCreate, utcCreate_);
          DARABONBA_PTR_TO_JSON(UtcModified, utcModified_);
        };
        friend void from_json(const Darabonba::Json& j, DumpMetaList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MetaUrl, metaUrl_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UtcCreate, utcCreate_);
          DARABONBA_PTR_FROM_JSON(UtcModified, utcModified_);
        };
        DumpMetaList() = default ;
        DumpMetaList(const DumpMetaList &) = default ;
        DumpMetaList(DumpMetaList &&) = default ;
        DumpMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DumpMetaList() = default ;
        DumpMetaList& operator=(const DumpMetaList &) = default ;
        DumpMetaList& operator=(DumpMetaList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->metaUrl_ == nullptr && this->msg_ == nullptr && this->status_ == nullptr && this->utcCreate_ == nullptr
        && this->utcModified_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline DumpMetaList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DumpMetaList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // metaUrl Field Functions 
        bool hasMetaUrl() const { return this->metaUrl_ != nullptr;};
        void deleteMetaUrl() { this->metaUrl_ = nullptr;};
        inline string getMetaUrl() const { DARABONBA_PTR_GET_DEFAULT(metaUrl_, "") };
        inline DumpMetaList& setMetaUrl(string metaUrl) { DARABONBA_PTR_SET_VALUE(metaUrl_, metaUrl) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline DumpMetaList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DumpMetaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // utcCreate Field Functions 
        bool hasUtcCreate() const { return this->utcCreate_ != nullptr;};
        void deleteUtcCreate() { this->utcCreate_ = nullptr;};
        inline string getUtcCreate() const { DARABONBA_PTR_GET_DEFAULT(utcCreate_, "") };
        inline DumpMetaList& setUtcCreate(string utcCreate) { DARABONBA_PTR_SET_VALUE(utcCreate_, utcCreate) };


        // utcModified Field Functions 
        bool hasUtcModified() const { return this->utcModified_ != nullptr;};
        void deleteUtcModified() { this->utcModified_ = nullptr;};
        inline int64_t getUtcModified() const { DARABONBA_PTR_GET_DEFAULT(utcModified_, 0L) };
        inline DumpMetaList& setUtcModified(int64_t utcModified) { DARABONBA_PTR_SET_VALUE(utcModified_, utcModified) };


      protected:
        // The error code returned.
        // 
        // *   A value of 0 indicates that the operation is successful.
        // *   Values other than 0 indicate errors.
        shared_ptr<string> code_ {};
        // The ID of the task.
        shared_ptr<int64_t> id_ {};
        // The address where you can download the metadata. The address is valid for 2 hours.
        shared_ptr<string> metaUrl_ {};
        // The error message returned.
        shared_ptr<string> msg_ {};
        // The status of the export task.
        // 
        // *   PROCESSING: in progress
        // *   FAIL: failed
        // *   SUCCESS: successful
        shared_ptr<string> status_ {};
        // The time when the task was created. Unit: milliseconds.
        shared_ptr<string> utcCreate_ {};
        // The time when the task was updated. Unit: milliseconds.
        shared_ptr<int64_t> utcModified_ {};
      };

      virtual bool empty() const override { return this->dumpMetaList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dumpMetaList Field Functions 
      bool hasDumpMetaList() const { return this->dumpMetaList_ != nullptr;};
      void deleteDumpMetaList() { this->dumpMetaList_ = nullptr;};
      inline const vector<Data::DumpMetaList> & getDumpMetaList() const { DARABONBA_PTR_GET_CONST(dumpMetaList_, vector<Data::DumpMetaList>) };
      inline vector<Data::DumpMetaList> getDumpMetaList() { DARABONBA_PTR_GET(dumpMetaList_, vector<Data::DumpMetaList>) };
      inline Data& setDumpMetaList(const vector<Data::DumpMetaList> & dumpMetaList) { DARABONBA_PTR_SET_VALUE(dumpMetaList_, dumpMetaList) };
      inline Data& setDumpMetaList(vector<Data::DumpMetaList> && dumpMetaList) { DARABONBA_PTR_SET_RVALUE(dumpMetaList_, dumpMetaList) };


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
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // A list of tasks that are used to export metadata.
      shared_ptr<vector<Data::DumpMetaList>> dumpMetaList_ {};
      // The number of the page to return.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries to return on each page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of tasks.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DumpMetaListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DumpMetaListResponseBody::Data) };
    inline DumpMetaListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DumpMetaListResponseBody::Data) };
    inline DumpMetaListResponseBody& setData(const DumpMetaListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DumpMetaListResponseBody& setData(DumpMetaListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DumpMetaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the task that is used to export metadata.
    shared_ptr<DumpMetaListResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
