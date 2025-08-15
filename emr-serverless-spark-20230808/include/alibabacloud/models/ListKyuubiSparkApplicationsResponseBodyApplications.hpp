// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiSparkApplicationsResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiSparkApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(applicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(cuHours, cuHours_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(latestSqlStatementStatus, latestSqlStatementStatus_);
      DARABONBA_PTR_TO_JSON(mbSeconds, mbSeconds_);
      DARABONBA_PTR_TO_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(vcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_TO_JSON(webUI, webUI_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiSparkApplicationsResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(cuHours, cuHours_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(latestSqlStatementStatus, latestSqlStatementStatus_);
      DARABONBA_PTR_FROM_JSON(mbSeconds, mbSeconds_);
      DARABONBA_PTR_FROM_JSON(resourceQueueId, resourceQueueId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(vcoreSeconds, vcoreSeconds_);
      DARABONBA_PTR_FROM_JSON(webUI, webUI_);
    };
    ListKyuubiSparkApplicationsResponseBodyApplications() = default ;
    ListKyuubiSparkApplicationsResponseBodyApplications(const ListKyuubiSparkApplicationsResponseBodyApplications &) = default ;
    ListKyuubiSparkApplicationsResponseBodyApplications(ListKyuubiSparkApplicationsResponseBodyApplications &&) = default ;
    ListKyuubiSparkApplicationsResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiSparkApplicationsResponseBodyApplications() = default ;
    ListKyuubiSparkApplicationsResponseBodyApplications& operator=(const ListKyuubiSparkApplicationsResponseBodyApplications &) = default ;
    ListKyuubiSparkApplicationsResponseBodyApplications& operator=(ListKyuubiSparkApplicationsResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->applicationName_ != nullptr && this->cuHours_ != nullptr && this->endTime_ != nullptr && this->latestSqlStatementStatus_ != nullptr && this->mbSeconds_ != nullptr
        && this->resourceQueueId_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr && this->vcoreSeconds_ != nullptr && this->webUI_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // cuHours Field Functions 
    bool hasCuHours() const { return this->cuHours_ != nullptr;};
    void deleteCuHours() { this->cuHours_ = nullptr;};
    inline double cuHours() const { DARABONBA_PTR_GET_DEFAULT(cuHours_, 0.0) };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setCuHours(double cuHours) { DARABONBA_PTR_SET_VALUE(cuHours_, cuHours) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // latestSqlStatementStatus Field Functions 
    bool hasLatestSqlStatementStatus() const { return this->latestSqlStatementStatus_ != nullptr;};
    void deleteLatestSqlStatementStatus() { this->latestSqlStatementStatus_ = nullptr;};
    inline string latestSqlStatementStatus() const { DARABONBA_PTR_GET_DEFAULT(latestSqlStatementStatus_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setLatestSqlStatementStatus(string latestSqlStatementStatus) { DARABONBA_PTR_SET_VALUE(latestSqlStatementStatus_, latestSqlStatementStatus) };


    // mbSeconds Field Functions 
    bool hasMbSeconds() const { return this->mbSeconds_ != nullptr;};
    void deleteMbSeconds() { this->mbSeconds_ = nullptr;};
    inline int64_t mbSeconds() const { DARABONBA_PTR_GET_DEFAULT(mbSeconds_, 0L) };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setMbSeconds(int64_t mbSeconds) { DARABONBA_PTR_SET_VALUE(mbSeconds_, mbSeconds) };


    // resourceQueueId Field Functions 
    bool hasResourceQueueId() const { return this->resourceQueueId_ != nullptr;};
    void deleteResourceQueueId() { this->resourceQueueId_ = nullptr;};
    inline string resourceQueueId() const { DARABONBA_PTR_GET_DEFAULT(resourceQueueId_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setResourceQueueId(string resourceQueueId) { DARABONBA_PTR_SET_VALUE(resourceQueueId_, resourceQueueId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // vcoreSeconds Field Functions 
    bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
    void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
    inline int64_t vcoreSeconds() const { DARABONBA_PTR_GET_DEFAULT(vcoreSeconds_, 0L) };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setVcoreSeconds(int64_t vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };


    // webUI Field Functions 
    bool hasWebUI() const { return this->webUI_ != nullptr;};
    void deleteWebUI() { this->webUI_ = nullptr;};
    inline string webUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
    inline ListKyuubiSparkApplicationsResponseBodyApplications& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


  protected:
    // The ID of the application that is submitted by using a Kyuubi gateway.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The name of the Spark application that is submitted by using a Kyuubi gateway.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The number of CUs consumed during a specified cycle of a task. The value is an estimated value. Refer to your Alibaba Cloud bill for the actual number of consumed CUs.
    std::shared_ptr<double> cuHours_ = nullptr;
    // The time when the task ended.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> latestSqlStatementStatus_ = nullptr;
    // The total amount of memory allocated to the job multiplied by the running duration (seconds).
    std::shared_ptr<int64_t> mbSeconds_ = nullptr;
    // The name of the resource queue on which the Spark jobs run.
    std::shared_ptr<string> resourceQueueId_ = nullptr;
    // The time when the task started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the Spark application.
    // 
    // *   STARTING
    // *   RUNNING
    // *   TERMINATED
    std::shared_ptr<string> state_ = nullptr;
    // The total number of CPU cores allocated to the job multiplied by the running duration (seconds).
    std::shared_ptr<int64_t> vcoreSeconds_ = nullptr;
    // The URL of the web UI for the Spark application.
    std::shared_ptr<string> webUI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
