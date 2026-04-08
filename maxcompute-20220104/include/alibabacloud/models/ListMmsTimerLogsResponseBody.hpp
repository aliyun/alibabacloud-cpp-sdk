// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTIMERLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTIMERLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTimerLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTimerLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTimerLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsTimerLogsResponseBody() = default ;
    ListMmsTimerLogsResponseBody(const ListMmsTimerLogsResponseBody &) = default ;
    ListMmsTimerLogsResponseBody(ListMmsTimerLogsResponseBody &&) = default ;
    ListMmsTimerLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTimerLogsResponseBody() = default ;
    ListMmsTimerLogsResponseBody& operator=(const ListMmsTimerLogsResponseBody &) = default ;
    ListMmsTimerLogsResponseBody& operator=(ListMmsTimerLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(objectList, objectList_);
        DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(objectList, objectList_);
        DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class ObjectList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectList& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(msg, msg_);
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(msg, msg_);
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        ObjectList() = default ;
        ObjectList(const ObjectList &) = default ;
        ObjectList(ObjectList &&) = default ;
        ObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectList() = default ;
        ObjectList& operator=(const ObjectList &) = default ;
        ObjectList& operator=(ObjectList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->msg_ == nullptr && this->sourceId_ == nullptr && this->status_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ObjectList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline ObjectList& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
        inline ObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ObjectList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> msg_ {};
        shared_ptr<int64_t> sourceId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->objectList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // objectList Field Functions 
      bool hasObjectList() const { return this->objectList_ != nullptr;};
      void deleteObjectList() { this->objectList_ = nullptr;};
      inline const vector<Data::ObjectList> & getObjectList() const { DARABONBA_PTR_GET_CONST(objectList_, vector<Data::ObjectList>) };
      inline vector<Data::ObjectList> getObjectList() { DARABONBA_PTR_GET(objectList_, vector<Data::ObjectList>) };
      inline Data& setObjectList(const vector<Data::ObjectList> & objectList) { DARABONBA_PTR_SET_VALUE(objectList_, objectList) };
      inline Data& setObjectList(vector<Data::ObjectList> && objectList) { DARABONBA_PTR_SET_RVALUE(objectList_, objectList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::ObjectList>> objectList_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMmsTimerLogsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMmsTimerLogsResponseBody::Data) };
    inline ListMmsTimerLogsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMmsTimerLogsResponseBody::Data) };
    inline ListMmsTimerLogsResponseBody& setData(const ListMmsTimerLogsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsTimerLogsResponseBody& setData(ListMmsTimerLogsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsTimerLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListMmsTimerLogsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
