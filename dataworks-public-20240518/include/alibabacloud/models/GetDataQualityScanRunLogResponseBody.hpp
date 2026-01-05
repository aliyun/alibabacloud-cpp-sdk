// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogSegment, logSegment_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogSegment, logSegment_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityScanRunLogResponseBody() = default ;
    GetDataQualityScanRunLogResponseBody(const GetDataQualityScanRunLogResponseBody &) = default ;
    GetDataQualityScanRunLogResponseBody(GetDataQualityScanRunLogResponseBody &&) = default ;
    GetDataQualityScanRunLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunLogResponseBody() = default ;
    GetDataQualityScanRunLogResponseBody& operator=(const GetDataQualityScanRunLogResponseBody &) = default ;
    GetDataQualityScanRunLogResponseBody& operator=(GetDataQualityScanRunLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogSegment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogSegment& obj) { 
        DARABONBA_PTR_TO_JSON(Log, log_);
        DARABONBA_PTR_TO_JSON(NextOffset, nextOffset_);
      };
      friend void from_json(const Darabonba::Json& j, LogSegment& obj) { 
        DARABONBA_PTR_FROM_JSON(Log, log_);
        DARABONBA_PTR_FROM_JSON(NextOffset, nextOffset_);
      };
      LogSegment() = default ;
      LogSegment(const LogSegment &) = default ;
      LogSegment(LogSegment &&) = default ;
      LogSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogSegment() = default ;
      LogSegment& operator=(const LogSegment &) = default ;
      LogSegment& operator=(LogSegment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->log_ == nullptr
        && this->nextOffset_ == nullptr; };
      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline string getLog() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
      inline LogSegment& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


      // nextOffset Field Functions 
      bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
      void deleteNextOffset() { this->nextOffset_ = nullptr;};
      inline int64_t getNextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0L) };
      inline LogSegment& setNextOffset(int64_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


    protected:
      // The task log.
      shared_ptr<string> log_ {};
      // The starting offset of the next log segment. A value of -1 indicates that all logs have been read.
      shared_ptr<int64_t> nextOffset_ {};
    };

    virtual bool empty() const override { return this->logSegment_ == nullptr
        && this->requestId_ == nullptr; };
    // logSegment Field Functions 
    bool hasLogSegment() const { return this->logSegment_ != nullptr;};
    void deleteLogSegment() { this->logSegment_ = nullptr;};
    inline const GetDataQualityScanRunLogResponseBody::LogSegment & getLogSegment() const { DARABONBA_PTR_GET_CONST(logSegment_, GetDataQualityScanRunLogResponseBody::LogSegment) };
    inline GetDataQualityScanRunLogResponseBody::LogSegment getLogSegment() { DARABONBA_PTR_GET(logSegment_, GetDataQualityScanRunLogResponseBody::LogSegment) };
    inline GetDataQualityScanRunLogResponseBody& setLogSegment(const GetDataQualityScanRunLogResponseBody::LogSegment & logSegment) { DARABONBA_PTR_SET_VALUE(logSegment_, logSegment) };
    inline GetDataQualityScanRunLogResponseBody& setLogSegment(GetDataQualityScanRunLogResponseBody::LogSegment && logSegment) { DARABONBA_PTR_SET_RVALUE(logSegment_, logSegment) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityScanRunLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The task log information.
    shared_ptr<GetDataQualityScanRunLogResponseBody::LogSegment> logSegment_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
