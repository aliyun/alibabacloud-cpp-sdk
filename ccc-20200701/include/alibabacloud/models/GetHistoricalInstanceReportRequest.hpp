// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHISTORICALINSTANCEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetHistoricalInstanceReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHistoricalInstanceReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetHistoricalInstanceReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetHistoricalInstanceReportRequest() = default ;
    GetHistoricalInstanceReportRequest(const GetHistoricalInstanceReportRequest &) = default ;
    GetHistoricalInstanceReportRequest(GetHistoricalInstanceReportRequest &&) = default ;
    GetHistoricalInstanceReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHistoricalInstanceReportRequest() = default ;
    GetHistoricalInstanceReportRequest& operator=(const GetHistoricalInstanceReportRequest &) = default ;
    GetHistoricalInstanceReportRequest& operator=(GetHistoricalInstanceReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->mediaType_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetHistoricalInstanceReportRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetHistoricalInstanceReportRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetHistoricalInstanceReportRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetHistoricalInstanceReportRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> mediaType_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
