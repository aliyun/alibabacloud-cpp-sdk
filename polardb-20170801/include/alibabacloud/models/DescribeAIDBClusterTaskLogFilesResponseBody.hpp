// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKLOGFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKLOGFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterTaskLogFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterTaskLogFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterTaskLogFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAIDBClusterTaskLogFilesResponseBody() = default ;
    DescribeAIDBClusterTaskLogFilesResponseBody(const DescribeAIDBClusterTaskLogFilesResponseBody &) = default ;
    DescribeAIDBClusterTaskLogFilesResponseBody(DescribeAIDBClusterTaskLogFilesResponseBody &&) = default ;
    DescribeAIDBClusterTaskLogFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterTaskLogFilesResponseBody() = default ;
    DescribeAIDBClusterTaskLogFilesResponseBody& operator=(const DescribeAIDBClusterTaskLogFilesResponseBody &) = default ;
    DescribeAIDBClusterTaskLogFilesResponseBody& operator=(DescribeAIDBClusterTaskLogFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(SlsLogItems, slsLogItems_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SlsLogItems, slsLogItems_);
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
      class SlsLogItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsLogItems& obj) { 
          DARABONBA_PTR_TO_JSON(LogTime, logTime_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, SlsLogItems& obj) { 
          DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        SlsLogItems() = default ;
        SlsLogItems(const SlsLogItems &) = default ;
        SlsLogItems(SlsLogItems &&) = default ;
        SlsLogItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsLogItems() = default ;
        SlsLogItems& operator=(const SlsLogItems &) = default ;
        SlsLogItems& operator=(SlsLogItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logTime_ == nullptr
        && this->message_ == nullptr && this->timestamp_ == nullptr; };
        // logTime Field Functions 
        bool hasLogTime() const { return this->logTime_ != nullptr;};
        void deleteLogTime() { this->logTime_ = nullptr;};
        inline string getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
        inline SlsLogItems& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline SlsLogItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline SlsLogItems& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<string> logTime_ {};
        shared_ptr<string> message_ {};
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->slsLogItems_ == nullptr; };
      // slsLogItems Field Functions 
      bool hasSlsLogItems() const { return this->slsLogItems_ != nullptr;};
      void deleteSlsLogItems() { this->slsLogItems_ = nullptr;};
      inline const vector<Items::SlsLogItems> & getSlsLogItems() const { DARABONBA_PTR_GET_CONST(slsLogItems_, vector<Items::SlsLogItems>) };
      inline vector<Items::SlsLogItems> getSlsLogItems() { DARABONBA_PTR_GET(slsLogItems_, vector<Items::SlsLogItems>) };
      inline Items& setSlsLogItems(const vector<Items::SlsLogItems> & slsLogItems) { DARABONBA_PTR_SET_VALUE(slsLogItems_, slsLogItems) };
      inline Items& setSlsLogItems(vector<Items::SlsLogItems> && slsLogItems) { DARABONBA_PTR_SET_RVALUE(slsLogItems_, slsLogItems) };


    protected:
      shared_ptr<vector<Items::SlsLogItems>> slsLogItems_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeAIDBClusterTaskLogFilesResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeAIDBClusterTaskLogFilesResponseBody::Items) };
    inline DescribeAIDBClusterTaskLogFilesResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeAIDBClusterTaskLogFilesResponseBody::Items) };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setItems(const DescribeAIDBClusterTaskLogFilesResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setItems(DescribeAIDBClusterTaskLogFilesResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAIDBClusterTaskLogFilesResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeAIDBClusterTaskLogFilesResponseBody::Items> items_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
