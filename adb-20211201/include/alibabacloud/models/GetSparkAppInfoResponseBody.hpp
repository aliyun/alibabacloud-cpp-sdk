// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKAPPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKAPPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SparkAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkAppInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkAppInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkAppInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSparkAppInfoResponseBody() = default ;
    GetSparkAppInfoResponseBody(const GetSparkAppInfoResponseBody &) = default ;
    GetSparkAppInfoResponseBody(GetSparkAppInfoResponseBody &&) = default ;
    GetSparkAppInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkAppInfoResponseBody() = default ;
    GetSparkAppInfoResponseBody& operator=(const GetSparkAppInfoResponseBody &) = default ;
    GetSparkAppInfoResponseBody& operator=(GetSparkAppInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SparkAppInfo & data() const { DARABONBA_PTR_GET_CONST(data_, SparkAppInfo) };
    inline SparkAppInfo data() { DARABONBA_PTR_GET(data_, SparkAppInfo) };
    inline GetSparkAppInfoResponseBody& setData(const SparkAppInfo & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSparkAppInfoResponseBody& setData(SparkAppInfo && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSparkAppInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried Spark application. Fields in the response parameter:
    // 
    // *   **Data**: the data of the Spark application template.
    // *   **EstimateExecutionCpuTimeInSeconds**: the amount of time that is required to consume CPU resources for running the Spark application. Unit: milliseconds.
    // *   **LogRootPath**: the storage path of log files.
    // *   **LastAttemptId**: the most recent attempt ID.
    // *   **WebUiAddress**: the web UI URL.
    // *   **SubmittedTimeInMillis**: the time when the Spark application was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // *   **StartedTimeInMillis**: the time when the Spark application was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // *   **LastUpdatedTimeInMillis**: the time when the Spark application was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // *   **TerminatedTimeInMillis**: the time when the Spark application was terminated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // *   **DBClusterId**: the ID of the cluster on which the Spark application runs.
    // *   **ResourceGroupName**: the name of the job resource group.
    // *   **DurationInMillis**: the amount of time that is required to run the Spark application. Unit: milliseconds.
    std::shared_ptr<SparkAppInfo> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
