// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODY_HPP_
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
  class DescribeErrorLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeErrorLogRecordsResponseBody() = default ;
    DescribeErrorLogRecordsResponseBody(const DescribeErrorLogRecordsResponseBody &) = default ;
    DescribeErrorLogRecordsResponseBody(DescribeErrorLogRecordsResponseBody &&) = default ;
    DescribeErrorLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogRecordsResponseBody() = default ;
    DescribeErrorLogRecordsResponseBody& operator=(const DescribeErrorLogRecordsResponseBody &) = default ;
    DescribeErrorLogRecordsResponseBody& operator=(DescribeErrorLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
        DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
        DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
        DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
        DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
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
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ConnInfo, connInfo_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ConnInfo, connInfo_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->connInfo_ == nullptr && this->content_ == nullptr && this->createTime_ == nullptr && this->DBInstanceName_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Logs& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // connInfo Field Functions 
        bool hasConnInfo() const { return this->connInfo_ != nullptr;};
        void deleteConnInfo() { this->connInfo_ = nullptr;};
        inline string getConnInfo() const { DARABONBA_PTR_GET_DEFAULT(connInfo_, "") };
        inline Logs& setConnInfo(string connInfo) { DARABONBA_PTR_SET_VALUE(connInfo_, connInfo) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Logs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Logs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBInstanceName Field Functions 
        bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
        void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
        inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
        inline Logs& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      protected:
        shared_ptr<string> category_ {};
        shared_ptr<string> connInfo_ {};
        shared_ptr<string> content_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> DBInstanceName_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->itemsNumbers_ == nullptr && this->logs_ == nullptr && this->maxRecordsPerPage_ == nullptr && this->pageNumbers_ == nullptr && this->startTime_ == nullptr
        && this->totalRecords_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // itemsNumbers Field Functions 
      bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
      void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
      inline int64_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0L) };
      inline Data& setItemsNumbers(int64_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<Data::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Data::Logs>) };
      inline vector<Data::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<Data::Logs>) };
      inline Data& setLogs(const vector<Data::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline Data& setLogs(vector<Data::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // maxRecordsPerPage Field Functions 
      bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
      void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
      inline int32_t getMaxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
      inline Data& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


      // pageNumbers Field Functions 
      bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
      void deletePageNumbers() { this->pageNumbers_ = nullptr;};
      inline int32_t getPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
      inline Data& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
      inline Data& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      shared_ptr<string> endTime_ {};
      shared_ptr<int64_t> itemsNumbers_ {};
      shared_ptr<vector<Data::Logs>> logs_ {};
      shared_ptr<int32_t> maxRecordsPerPage_ {};
      shared_ptr<int32_t> pageNumbers_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<int64_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeErrorLogRecordsResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeErrorLogRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeErrorLogRecordsResponseBody::Data) };
    inline DescribeErrorLogRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeErrorLogRecordsResponseBody::Data) };
    inline DescribeErrorLogRecordsResponseBody& setData(const DescribeErrorLogRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeErrorLogRecordsResponseBody& setData(DescribeErrorLogRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeErrorLogRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeErrorLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeErrorLogRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<DescribeErrorLogRecordsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
