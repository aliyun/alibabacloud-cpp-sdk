// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INCREASELISTRESPONSEBODY_HPP_
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
  class IncreaseListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    IncreaseListResponseBody() = default ;
    IncreaseListResponseBody(const IncreaseListResponseBody &) = default ;
    IncreaseListResponseBody(IncreaseListResponseBody &&) = default ;
    IncreaseListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseListResponseBody() = default ;
    IncreaseListResponseBody& operator=(const IncreaseListResponseBody &) = default ;
    IncreaseListResponseBody& operator=(IncreaseListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Increments, increments_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Increments, increments_);
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
      class Increments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Increments& obj) { 
          DARABONBA_PTR_TO_JSON(Instance, instance_);
        };
        friend void from_json(const Darabonba::Json& j, Increments& obj) { 
          DARABONBA_PTR_FROM_JSON(Instance, instance_);
        };
        Increments() = default ;
        Increments(const Increments &) = default ;
        Increments(Increments &&) = default ;
        Increments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Increments() = default ;
        Increments& operator=(const Increments &) = default ;
        Increments& operator=(Increments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Instance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Instance& obj) { 
            DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
            DARABONBA_PTR_TO_JSON(CallbackAddress, callbackAddress_);
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(ErrorUrl, errorUrl_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Msg, msg_);
            DARABONBA_PTR_TO_JSON(Path, path_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(UtcCreate, utcCreate_);
            DARABONBA_PTR_TO_JSON(UtcModified, utcModified_);
          };
          friend void from_json(const Darabonba::Json& j, Instance& obj) { 
            DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
            DARABONBA_PTR_FROM_JSON(CallbackAddress, callbackAddress_);
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(ErrorUrl, errorUrl_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Msg, msg_);
            DARABONBA_PTR_FROM_JSON(Path, path_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(UtcCreate, utcCreate_);
            DARABONBA_PTR_FROM_JSON(UtcModified, utcModified_);
          };
          Instance() = default ;
          Instance(const Instance &) = default ;
          Instance(Instance &&) = default ;
          Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Instance() = default ;
          Instance& operator=(const Instance &) = default ;
          Instance& operator=(Instance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->callbackAddress_ == nullptr && this->code_ == nullptr && this->errorUrl_ == nullptr && this->id_ == nullptr && this->msg_ == nullptr
        && this->path_ == nullptr && this->status_ == nullptr && this->utcCreate_ == nullptr && this->utcModified_ == nullptr; };
          // bucketName Field Functions 
          bool hasBucketName() const { return this->bucketName_ != nullptr;};
          void deleteBucketName() { this->bucketName_ = nullptr;};
          inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
          inline Instance& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


          // callbackAddress Field Functions 
          bool hasCallbackAddress() const { return this->callbackAddress_ != nullptr;};
          void deleteCallbackAddress() { this->callbackAddress_ = nullptr;};
          inline string getCallbackAddress() const { DARABONBA_PTR_GET_DEFAULT(callbackAddress_, "") };
          inline Instance& setCallbackAddress(string callbackAddress) { DARABONBA_PTR_SET_VALUE(callbackAddress_, callbackAddress) };


          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Instance& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // errorUrl Field Functions 
          bool hasErrorUrl() const { return this->errorUrl_ != nullptr;};
          void deleteErrorUrl() { this->errorUrl_ = nullptr;};
          inline string getErrorUrl() const { DARABONBA_PTR_GET_DEFAULT(errorUrl_, "") };
          inline Instance& setErrorUrl(string errorUrl) { DARABONBA_PTR_SET_VALUE(errorUrl_, errorUrl) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Instance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // msg Field Functions 
          bool hasMsg() const { return this->msg_ != nullptr;};
          void deleteMsg() { this->msg_ = nullptr;};
          inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
          inline Instance& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline Instance& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // utcCreate Field Functions 
          bool hasUtcCreate() const { return this->utcCreate_ != nullptr;};
          void deleteUtcCreate() { this->utcCreate_ = nullptr;};
          inline string getUtcCreate() const { DARABONBA_PTR_GET_DEFAULT(utcCreate_, "") };
          inline Instance& setUtcCreate(string utcCreate) { DARABONBA_PTR_SET_VALUE(utcCreate_, utcCreate) };


          // utcModified Field Functions 
          bool hasUtcModified() const { return this->utcModified_ != nullptr;};
          void deleteUtcModified() { this->utcModified_ = nullptr;};
          inline int64_t getUtcModified() const { DARABONBA_PTR_GET_DEFAULT(utcModified_, 0L) };
          inline Instance& setUtcModified(int64_t utcModified) { DARABONBA_PTR_SET_VALUE(utcModified_, utcModified) };


        protected:
          // The name of the Object Storage Service (OSS) bucket.
          shared_ptr<string> bucketName_ {};
          // The callback address.
          shared_ptr<string> callbackAddress_ {};
          // The error code returned.
          // 
          // *   A value of 0 indicates that the operation is successful.
          // *   Values other than 0 indicate errors.
          shared_ptr<string> code_ {};
          // The address where you can download the result. The address is valid for 2 hours.
          shared_ptr<string> errorUrl_ {};
          // The ID of the task.
          shared_ptr<int64_t> id_ {};
          // The error message returned.
          shared_ptr<string> msg_ {};
          // The absolute path to the increment.meta file in the bucket. The path must start with a forward slash (/) and cannot end with a forward slash (/).
          shared_ptr<string> path_ {};
          // The status of the batch task.
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

        virtual bool empty() const override { return this->instance_ == nullptr; };
        // instance Field Functions 
        bool hasInstance() const { return this->instance_ != nullptr;};
        void deleteInstance() { this->instance_ = nullptr;};
        inline const vector<Increments::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Increments::Instance>) };
        inline vector<Increments::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<Increments::Instance>) };
        inline Increments& setInstance(const vector<Increments::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
        inline Increments& setInstance(vector<Increments::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


      protected:
        shared_ptr<vector<Increments::Instance>> instance_ {};
      };

      virtual bool empty() const override { return this->increments_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // increments Field Functions 
      bool hasIncrements() const { return this->increments_ != nullptr;};
      void deleteIncrements() { this->increments_ = nullptr;};
      inline const Data::Increments & getIncrements() const { DARABONBA_PTR_GET_CONST(increments_, Data::Increments) };
      inline Data::Increments getIncrements() { DARABONBA_PTR_GET(increments_, Data::Increments) };
      inline Data& setIncrements(const Data::Increments & increments) { DARABONBA_PTR_SET_VALUE(increments_, increments) };
      inline Data& setIncrements(Data::Increments && increments) { DARABONBA_PTR_SET_RVALUE(increments_, increments) };


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
      // A list of batch tasks.
      shared_ptr<Data::Increments> increments_ {};
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
    inline const IncreaseListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, IncreaseListResponseBody::Data) };
    inline IncreaseListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, IncreaseListResponseBody::Data) };
    inline IncreaseListResponseBody& setData(const IncreaseListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline IncreaseListResponseBody& setData(IncreaseListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IncreaseListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the batch task.
    shared_ptr<IncreaseListResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
