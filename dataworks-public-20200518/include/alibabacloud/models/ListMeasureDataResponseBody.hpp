// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEASUREDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEASUREDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMeasureDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMeasureDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MeasureDatas, measureDatas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMeasureDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MeasureDatas, measureDatas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMeasureDataResponseBody() = default ;
    ListMeasureDataResponseBody(const ListMeasureDataResponseBody &) = default ;
    ListMeasureDataResponseBody(ListMeasureDataResponseBody &&) = default ;
    ListMeasureDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMeasureDataResponseBody() = default ;
    ListMeasureDataResponseBody& operator=(const ListMeasureDataResponseBody &) = default ;
    ListMeasureDataResponseBody& operator=(ListMeasureDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MeasureDatas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MeasureDatas& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
        DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, MeasureDatas& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
        DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      MeasureDatas() = default ;
      MeasureDatas(const MeasureDatas &) = default ;
      MeasureDatas(MeasureDatas &&) = default ;
      MeasureDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MeasureDatas() = default ;
      MeasureDatas& operator=(const MeasureDatas &) = default ;
      MeasureDatas& operator=(MeasureDatas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentCode_ == nullptr
        && this->domainCode_ == nullptr && this->endTime_ == nullptr && this->startTime_ == nullptr && this->usage_ == nullptr; };
      // componentCode Field Functions 
      bool hasComponentCode() const { return this->componentCode_ != nullptr;};
      void deleteComponentCode() { this->componentCode_ = nullptr;};
      inline string getComponentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
      inline MeasureDatas& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


      // domainCode Field Functions 
      bool hasDomainCode() const { return this->domainCode_ != nullptr;};
      void deleteDomainCode() { this->domainCode_ = nullptr;};
      inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
      inline MeasureDatas& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline MeasureDatas& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline MeasureDatas& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline int64_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
      inline MeasureDatas& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      // The measurement component.
      shared_ptr<string> componentCode_ {};
      // The item that is measured.
      shared_ptr<string> domainCode_ {};
      // The end timestamp of the metering cycle, in milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The start timestamp of the metering cycle, in milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The total quantity used within the measurement period.
      shared_ptr<int64_t> usage_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->measureDatas_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListMeasureDataResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListMeasureDataResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListMeasureDataResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // measureDatas Field Functions 
    bool hasMeasureDatas() const { return this->measureDatas_ != nullptr;};
    void deleteMeasureDatas() { this->measureDatas_ = nullptr;};
    inline const vector<ListMeasureDataResponseBody::MeasureDatas> & getMeasureDatas() const { DARABONBA_PTR_GET_CONST(measureDatas_, vector<ListMeasureDataResponseBody::MeasureDatas>) };
    inline vector<ListMeasureDataResponseBody::MeasureDatas> getMeasureDatas() { DARABONBA_PTR_GET(measureDatas_, vector<ListMeasureDataResponseBody::MeasureDatas>) };
    inline ListMeasureDataResponseBody& setMeasureDatas(const vector<ListMeasureDataResponseBody::MeasureDatas> & measureDatas) { DARABONBA_PTR_SET_VALUE(measureDatas_, measureDatas) };
    inline ListMeasureDataResponseBody& setMeasureDatas(vector<ListMeasureDataResponseBody::MeasureDatas> && measureDatas) { DARABONBA_PTR_SET_RVALUE(measureDatas_, measureDatas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMeasureDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMeasureDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The metering results.
    shared_ptr<vector<ListMeasureDataResponseBody::MeasureDatas>> measureDatas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
