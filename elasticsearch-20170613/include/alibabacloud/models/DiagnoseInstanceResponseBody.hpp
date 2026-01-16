// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DiagnoseInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DiagnoseInstanceResponseBody() = default ;
    DiagnoseInstanceResponseBody(const DiagnoseInstanceResponseBody &) = default ;
    DiagnoseInstanceResponseBody(DiagnoseInstanceResponseBody &&) = default ;
    DiagnoseInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseInstanceResponseBody() = default ;
    DiagnoseInstanceResponseBody& operator=(const DiagnoseInstanceResponseBody &) = default ;
    DiagnoseInstanceResponseBody& operator=(DiagnoseInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(reportId, reportId_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(reportId, reportId_);
        DARABONBA_PTR_FROM_JSON(state, state_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->reportId_ == nullptr && this->state_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Result& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Result& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The ID of the diagnostic instance.
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> reportId_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DiagnoseInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DiagnoseInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DiagnoseInstanceResponseBody::Result) };
    inline DiagnoseInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DiagnoseInstanceResponseBody::Result) };
    inline DiagnoseInstanceResponseBody& setResult(const DiagnoseInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DiagnoseInstanceResponseBody& setResult(DiagnoseInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the report.
    shared_ptr<string> requestId_ {};
    // The diagnosis status. Valid values: Supported: SUCCESS, FAILED, and RUNNING.
    shared_ptr<DiagnoseInstanceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
