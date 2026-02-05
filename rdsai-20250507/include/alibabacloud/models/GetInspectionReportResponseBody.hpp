// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSPECTIONREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSPECTIONREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetInspectionReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInspectionReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MarkdownText, markdownText_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInspectionReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MarkdownText, markdownText_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetInspectionReportResponseBody() = default ;
    GetInspectionReportResponseBody(const GetInspectionReportResponseBody &) = default ;
    GetInspectionReportResponseBody(GetInspectionReportResponseBody &&) = default ;
    GetInspectionReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInspectionReportResponseBody() = default ;
    GetInspectionReportResponseBody& operator=(const GetInspectionReportResponseBody &) = default ;
    GetInspectionReportResponseBody& operator=(GetInspectionReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(EngineType, engineType_);
        DARABONBA_PTR_TO_JSON(InstanceDesc, instanceDesc_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LevelSummary, levelSummary_);
        DARABONBA_PTR_TO_JSON(MarkdownText, markdownText_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
        DARABONBA_PTR_FROM_JSON(InstanceDesc, instanceDesc_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LevelSummary, levelSummary_);
        DARABONBA_PTR_FROM_JSON(MarkdownText, markdownText_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
      class LevelSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LevelSummary& obj) { 
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(Normal, normal_);
          DARABONBA_PTR_TO_JSON(Warning, warning_);
        };
        friend void from_json(const Darabonba::Json& j, LevelSummary& obj) { 
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(Normal, normal_);
          DARABONBA_PTR_FROM_JSON(Warning, warning_);
        };
        LevelSummary() = default ;
        LevelSummary(const LevelSummary &) = default ;
        LevelSummary(LevelSummary &&) = default ;
        LevelSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LevelSummary() = default ;
        LevelSummary& operator=(const LevelSummary &) = default ;
        LevelSummary& operator=(LevelSummary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->error_ == nullptr
        && this->failed_ == nullptr && this->normal_ == nullptr && this->warning_ == nullptr; };
        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline int64_t getError() const { DARABONBA_PTR_GET_DEFAULT(error_, 0L) };
        inline LevelSummary& setError(int64_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
        inline LevelSummary& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // normal Field Functions 
        bool hasNormal() const { return this->normal_ != nullptr;};
        void deleteNormal() { this->normal_ = nullptr;};
        inline int64_t getNormal() const { DARABONBA_PTR_GET_DEFAULT(normal_, 0L) };
        inline LevelSummary& setNormal(int64_t normal) { DARABONBA_PTR_SET_VALUE(normal_, normal) };


        // warning Field Functions 
        bool hasWarning() const { return this->warning_ != nullptr;};
        void deleteWarning() { this->warning_ = nullptr;};
        inline int64_t getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, 0L) };
        inline LevelSummary& setWarning(int64_t warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


      protected:
        shared_ptr<int64_t> error_ {};
        shared_ptr<int64_t> failed_ {};
        shared_ptr<int64_t> normal_ {};
        shared_ptr<int64_t> warning_ {};
      };

      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(Items, items_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(Items, items_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Level, level_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Level, level_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Items() = default ;
          Items(const Items &) = default ;
          Items(Items &&) = default ;
          Items(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Items() = default ;
          Items& operator=(const Items &) = default ;
          Items& operator=(Items &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Data : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Data& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
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
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Data& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->data_ == nullptr
        && this->level_ == nullptr && this->message_ == nullptr && this->name_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const vector<Items::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Items::Data>) };
          inline vector<Items::Data> getData() { DARABONBA_PTR_GET(data_, vector<Items::Data>) };
          inline Items& setData(const vector<Items::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Items& setData(vector<Items::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // level Field Functions 
          bool hasLevel() const { return this->level_ != nullptr;};
          void deleteLevel() { this->level_ = nullptr;};
          inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
          inline Items& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline Items& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<vector<Items::Data>> data_ {};
          shared_ptr<string> level_ {};
          shared_ptr<string> message_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->group_ == nullptr
        && this->items_ == nullptr; };
        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline DataItem& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<DataItem::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DataItem::Items>) };
        inline vector<DataItem::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DataItem::Items>) };
        inline DataItem& setItems(const vector<DataItem::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline DataItem& setItems(vector<DataItem::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      protected:
        shared_ptr<string> group_ {};
        shared_ptr<vector<DataItem::Items>> items_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->endTime_ == nullptr && this->engineType_ == nullptr && this->instanceDesc_ == nullptr && this->instanceId_ == nullptr && this->levelSummary_ == nullptr
        && this->markdownText_ == nullptr && this->region_ == nullptr && this->startTime_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Data& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // instanceDesc Field Functions 
      bool hasInstanceDesc() const { return this->instanceDesc_ != nullptr;};
      void deleteInstanceDesc() { this->instanceDesc_ = nullptr;};
      inline string getInstanceDesc() const { DARABONBA_PTR_GET_DEFAULT(instanceDesc_, "") };
      inline Data& setInstanceDesc(string instanceDesc) { DARABONBA_PTR_SET_VALUE(instanceDesc_, instanceDesc) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // levelSummary Field Functions 
      bool hasLevelSummary() const { return this->levelSummary_ != nullptr;};
      void deleteLevelSummary() { this->levelSummary_ = nullptr;};
      inline const Data::LevelSummary & getLevelSummary() const { DARABONBA_PTR_GET_CONST(levelSummary_, Data::LevelSummary) };
      inline Data::LevelSummary getLevelSummary() { DARABONBA_PTR_GET(levelSummary_, Data::LevelSummary) };
      inline Data& setLevelSummary(const Data::LevelSummary & levelSummary) { DARABONBA_PTR_SET_VALUE(levelSummary_, levelSummary) };
      inline Data& setLevelSummary(Data::LevelSummary && levelSummary) { DARABONBA_PTR_SET_RVALUE(levelSummary_, levelSummary) };


      // markdownText Field Functions 
      bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
      void deleteMarkdownText() { this->markdownText_ = nullptr;};
      inline string getMarkdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, "") };
      inline Data& setMarkdownText(string markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> engineType_ {};
      shared_ptr<string> instanceDesc_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<Data::LevelSummary> levelSummary_ {};
      shared_ptr<string> markdownText_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->markdownText_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetInspectionReportResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetInspectionReportResponseBody::Data>) };
    inline vector<GetInspectionReportResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetInspectionReportResponseBody::Data>) };
    inline GetInspectionReportResponseBody& setData(const vector<GetInspectionReportResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInspectionReportResponseBody& setData(vector<GetInspectionReportResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // markdownText Field Functions 
    bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
    void deleteMarkdownText() { this->markdownText_ = nullptr;};
    inline string getMarkdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, "") };
    inline GetInspectionReportResponseBody& setMarkdownText(string markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInspectionReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetInspectionReportResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<vector<GetInspectionReportResponseBody::Data>> data_ {};
    shared_ptr<string> markdownText_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
