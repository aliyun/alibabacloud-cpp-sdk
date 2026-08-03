// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONTASKREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeInspectionTaskReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionTaskReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionTaskReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInspectionTaskReportResponseBody() = default ;
    DescribeInspectionTaskReportResponseBody(const DescribeInspectionTaskReportResponseBody &) = default ;
    DescribeInspectionTaskReportResponseBody(DescribeInspectionTaskReportResponseBody &&) = default ;
    DescribeInspectionTaskReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionTaskReportResponseBody() = default ;
    DescribeInspectionTaskReportResponseBody& operator=(const DescribeInspectionTaskReportResponseBody &) = default ;
    DescribeInspectionTaskReportResponseBody& operator=(DescribeInspectionTaskReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(MarkdownText, markdownText_);
        DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(MarkdownText, markdownText_);
        DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(Error, error_);
          DARABONBA_PTR_TO_JSON(Failed, failed_);
          DARABONBA_PTR_TO_JSON(Normal, normal_);
          DARABONBA_PTR_TO_JSON(Warning, warning_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(Error, error_);
          DARABONBA_PTR_FROM_JSON(Failed, failed_);
          DARABONBA_PTR_FROM_JSON(Normal, normal_);
          DARABONBA_PTR_FROM_JSON(Warning, warning_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
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
        inline Summary& setError(int64_t error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // failed Field Functions 
        bool hasFailed() const { return this->failed_ != nullptr;};
        void deleteFailed() { this->failed_ = nullptr;};
        inline int64_t getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
        inline Summary& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


        // normal Field Functions 
        bool hasNormal() const { return this->normal_ != nullptr;};
        void deleteNormal() { this->normal_ = nullptr;};
        inline int64_t getNormal() const { DARABONBA_PTR_GET_DEFAULT(normal_, 0L) };
        inline Summary& setNormal(int64_t normal) { DARABONBA_PTR_SET_VALUE(normal_, normal) };


        // warning Field Functions 
        bool hasWarning() const { return this->warning_ != nullptr;};
        void deleteWarning() { this->warning_ = nullptr;};
        inline int64_t getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, 0L) };
        inline Summary& setWarning(int64_t warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


      protected:
        shared_ptr<int64_t> error_ {};
        shared_ptr<int64_t> failed_ {};
        shared_ptr<int64_t> normal_ {};
        shared_ptr<int64_t> warning_ {};
      };

      virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->markdownText_ == nullptr && this->reportLanguage_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->taskId_ == nullptr; };
      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline Data& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline Data& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // markdownText Field Functions 
      bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
      void deleteMarkdownText() { this->markdownText_ = nullptr;};
      inline string getMarkdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, "") };
      inline Data& setMarkdownText(string markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


      // reportLanguage Field Functions 
      bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
      void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
      inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
      inline Data& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const Data::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Data::Summary) };
      inline Data::Summary getSummary() { DARABONBA_PTR_GET(summary_, Data::Summary) };
      inline Data& setSummary(const Data::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Data& setSummary(Data::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<vector<string>> instanceIds_ {};
      shared_ptr<string> markdownText_ {};
      shared_ptr<string> reportLanguage_ {};
      shared_ptr<string> status_ {};
      shared_ptr<Data::Summary> summary_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeInspectionTaskReportResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeInspectionTaskReportResponseBody::Data) };
    inline DescribeInspectionTaskReportResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeInspectionTaskReportResponseBody::Data) };
    inline DescribeInspectionTaskReportResponseBody& setData(const DescribeInspectionTaskReportResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInspectionTaskReportResponseBody& setData(DescribeInspectionTaskReportResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInspectionTaskReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInspectionTaskReportResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeInspectionTaskReportResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
