// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAREDISTRIBUTEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAREDISTRIBUTEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataReDistributeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataReDistributeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataReDistributeInfo, dataReDistributeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataReDistributeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataReDistributeInfo, dataReDistributeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataReDistributeInfoResponseBody() = default ;
    DescribeDataReDistributeInfoResponseBody(const DescribeDataReDistributeInfoResponseBody &) = default ;
    DescribeDataReDistributeInfoResponseBody(DescribeDataReDistributeInfoResponseBody &&) = default ;
    DescribeDataReDistributeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataReDistributeInfoResponseBody() = default ;
    DescribeDataReDistributeInfoResponseBody& operator=(const DescribeDataReDistributeInfoResponseBody &) = default ;
    DescribeDataReDistributeInfoResponseBody& operator=(DescribeDataReDistributeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataReDistributeInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataReDistributeInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, DataReDistributeInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      DataReDistributeInfo() = default ;
      DataReDistributeInfo(const DataReDistributeInfo &) = default ;
      DataReDistributeInfo(DataReDistributeInfo &&) = default ;
      DataReDistributeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataReDistributeInfo() = default ;
      DataReDistributeInfo& operator=(const DataReDistributeInfo &) = default ;
      DataReDistributeInfo& operator=(DataReDistributeInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->progress_ == nullptr && this->remainTime_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DataReDistributeInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline int64_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
      inline DataReDistributeInfo& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // remainTime Field Functions 
      bool hasRemainTime() const { return this->remainTime_ != nullptr;};
      void deleteRemainTime() { this->remainTime_ = nullptr;};
      inline string getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, "") };
      inline DataReDistributeInfo& setRemainTime(string remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline DataReDistributeInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataReDistributeInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DataReDistributeInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The execution information. If an error occurs, the error message is returned.
      shared_ptr<string> message_ {};
      // The progress of data redistribution. Unit: %.
      shared_ptr<int64_t> progress_ {};
      // The estimated remaining time for data redistribution.
      shared_ptr<string> remainTime_ {};
      // This parameter is not supported.
      shared_ptr<string> startTime_ {};
      // The status of data redistribution.
      shared_ptr<string> status_ {};
      // The execution type. The value **immediate** is returned, indicating immediate execution.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->dataReDistributeInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // dataReDistributeInfo Field Functions 
    bool hasDataReDistributeInfo() const { return this->dataReDistributeInfo_ != nullptr;};
    void deleteDataReDistributeInfo() { this->dataReDistributeInfo_ = nullptr;};
    inline const DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo & getDataReDistributeInfo() const { DARABONBA_PTR_GET_CONST(dataReDistributeInfo_, DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo) };
    inline DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo getDataReDistributeInfo() { DARABONBA_PTR_GET(dataReDistributeInfo_, DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo) };
    inline DescribeDataReDistributeInfoResponseBody& setDataReDistributeInfo(const DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo & dataReDistributeInfo) { DARABONBA_PTR_SET_VALUE(dataReDistributeInfo_, dataReDistributeInfo) };
    inline DescribeDataReDistributeInfoResponseBody& setDataReDistributeInfo(DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo && dataReDistributeInfo) { DARABONBA_PTR_SET_RVALUE(dataReDistributeInfo_, dataReDistributeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataReDistributeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data redistribution information.
    shared_ptr<DescribeDataReDistributeInfoResponseBody::DataReDistributeInfo> dataReDistributeInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
