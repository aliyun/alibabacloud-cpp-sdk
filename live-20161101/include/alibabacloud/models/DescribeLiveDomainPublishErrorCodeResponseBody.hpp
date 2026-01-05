// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINPUBLISHERRORCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainPublishErrorCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainPublishErrorCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeCodeData, realTimeCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainPublishErrorCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeCodeData, realTimeCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainPublishErrorCodeResponseBody() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody(const DescribeLiveDomainPublishErrorCodeResponseBody &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody(DescribeLiveDomainPublishErrorCodeResponseBody &&) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainPublishErrorCodeResponseBody() = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody& operator=(const DescribeLiveDomainPublishErrorCodeResponseBody &) = default ;
    DescribeLiveDomainPublishErrorCodeResponseBody& operator=(DescribeLiveDomainPublishErrorCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeCodeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeCodeData& obj) { 
        DARABONBA_PTR_TO_JSON(CodeData, codeData_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeCodeData& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeData, codeData_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      RealTimeCodeData() = default ;
      RealTimeCodeData(const RealTimeCodeData &) = default ;
      RealTimeCodeData(RealTimeCodeData &&) = default ;
      RealTimeCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeCodeData() = default ;
      RealTimeCodeData& operator=(const RealTimeCodeData &) = default ;
      RealTimeCodeData& operator=(RealTimeCodeData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CodeData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodeData& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Proportion, proportion_);
        };
        friend void from_json(const Darabonba::Json& j, CodeData& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
        };
        CodeData() = default ;
        CodeData(const CodeData &) = default ;
        CodeData(CodeData &&) = default ;
        CodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodeData() = default ;
        CodeData& operator=(const CodeData &) = default ;
        CodeData& operator=(CodeData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->proportion_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CodeData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
        inline CodeData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // proportion Field Functions 
        bool hasProportion() const { return this->proportion_ != nullptr;};
        void deleteProportion() { this->proportion_ = nullptr;};
        inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
        inline CodeData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


      protected:
        // The response code. Valid values:
        // 
        // *   3: The data read timed out.
        // *   4: A data write error occurred.
        // *   6: The data write timed out.
        // *   200: The request is successful.
        // *   500: An unknown internal error occurred.
        // *   501: The stream ingest failed.
        // *   502: The signaling operation timed out.
        // *   401: A stream ingest parameter is invalid.
        // *   403: The stream ingest authentication failed.
        shared_ptr<string> code_ {};
        // The number of times the HTTP status code was returned.
        shared_ptr<string> count_ {};
        // The proportion of the HTTP status code.
        shared_ptr<string> proportion_ {};
      };

      virtual bool empty() const override { return this->codeData_ == nullptr
        && this->timeStamp_ == nullptr; };
      // codeData Field Functions 
      bool hasCodeData() const { return this->codeData_ != nullptr;};
      void deleteCodeData() { this->codeData_ = nullptr;};
      inline const vector<RealTimeCodeData::CodeData> & getCodeData() const { DARABONBA_PTR_GET_CONST(codeData_, vector<RealTimeCodeData::CodeData>) };
      inline vector<RealTimeCodeData::CodeData> getCodeData() { DARABONBA_PTR_GET(codeData_, vector<RealTimeCodeData::CodeData>) };
      inline RealTimeCodeData& setCodeData(const vector<RealTimeCodeData::CodeData> & codeData) { DARABONBA_PTR_SET_VALUE(codeData_, codeData) };
      inline RealTimeCodeData& setCodeData(vector<RealTimeCodeData::CodeData> && codeData) { DARABONBA_PTR_SET_RVALUE(codeData_, codeData) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline RealTimeCodeData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The proportions of error codes.
      shared_ptr<vector<RealTimeCodeData::CodeData>> codeData_ {};
      // The timestamp of the data returned.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeCodeData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeCodeData Field Functions 
    bool hasRealTimeCodeData() const { return this->realTimeCodeData_ != nullptr;};
    void deleteRealTimeCodeData() { this->realTimeCodeData_ = nullptr;};
    inline const vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData> & getRealTimeCodeData() const { DARABONBA_PTR_GET_CONST(realTimeCodeData_, vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData>) };
    inline vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData> getRealTimeCodeData() { DARABONBA_PTR_GET(realTimeCodeData_, vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData>) };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setRealTimeCodeData(const vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData> & realTimeCodeData) { DARABONBA_PTR_SET_VALUE(realTimeCodeData_, realTimeCodeData) };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setRealTimeCodeData(vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData> && realTimeCodeData) { DARABONBA_PTR_SET_RVALUE(realTimeCodeData_, realTimeCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainPublishErrorCodeResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity of the query. Unit: seconds. Default value: 60.
    shared_ptr<string> dataInterval_ {};
    // The ingest domain.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The proportions of error codes at each time interval.
    shared_ptr<vector<DescribeLiveDomainPublishErrorCodeResponseBody::RealTimeCodeData>> realTimeCodeData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
