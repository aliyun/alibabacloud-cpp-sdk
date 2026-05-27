// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTIMERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTIMERSRESPONSEBODY_HPP_
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
  class ListMmsTimersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTimersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTimersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMmsTimersResponseBody() = default ;
    ListMmsTimersResponseBody(const ListMmsTimersResponseBody &) = default ;
    ListMmsTimersResponseBody(ListMmsTimersResponseBody &&) = default ;
    ListMmsTimersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTimersResponseBody() = default ;
    ListMmsTimersResponseBody& operator=(const ListMmsTimersResponseBody &) = default ;
    ListMmsTimersResponseBody& operator=(ListMmsTimersResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(createTime, createTime_);
          DARABONBA_PTR_TO_JSON(dbId, dbId_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
          DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(srcDbName, srcDbName_);
          DARABONBA_PTR_TO_JSON(stopped, stopped_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectList& obj) { 
          DARABONBA_PTR_FROM_JSON(createTime, createTime_);
          DARABONBA_PTR_FROM_JSON(dbId, dbId_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
          DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(srcDbName, srcDbName_);
          DARABONBA_PTR_FROM_JSON(stopped, stopped_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(value, value_);
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
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dbId_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->scheduleType_ == nullptr && this->sourceId_ == nullptr
        && this->srcDbName_ == nullptr && this->stopped_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ObjectList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
        inline ObjectList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ObjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ObjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // scheduleType Field Functions 
        bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
        void deleteScheduleType() { this->scheduleType_ = nullptr;};
        inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
        inline ObjectList& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
        inline ObjectList& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // srcDbName Field Functions 
        bool hasSrcDbName() const { return this->srcDbName_ != nullptr;};
        void deleteSrcDbName() { this->srcDbName_ = nullptr;};
        inline string getSrcDbName() const { DARABONBA_PTR_GET_DEFAULT(srcDbName_, "") };
        inline ObjectList& setSrcDbName(string srcDbName) { DARABONBA_PTR_SET_VALUE(srcDbName_, srcDbName) };


        // stopped Field Functions 
        bool hasStopped() const { return this->stopped_ != nullptr;};
        void deleteStopped() { this->stopped_ = nullptr;};
        inline bool getStopped() const { DARABONBA_PTR_GET_DEFAULT(stopped_, false) };
        inline ObjectList& setStopped(bool stopped) { DARABONBA_PTR_SET_VALUE(stopped_, stopped) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ObjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ObjectList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> dbId_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> scheduleType_ {};
        shared_ptr<int64_t> sourceId_ {};
        shared_ptr<string> srcDbName_ {};
        shared_ptr<bool> stopped_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
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
    inline const ListMmsTimersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMmsTimersResponseBody::Data) };
    inline ListMmsTimersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListMmsTimersResponseBody::Data) };
    inline ListMmsTimersResponseBody& setData(const ListMmsTimersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMmsTimersResponseBody& setData(ListMmsTimersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMmsTimersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListMmsTimersResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
