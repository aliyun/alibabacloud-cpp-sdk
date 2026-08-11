// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPDETAILTOPOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPDETAILTOPOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppDetailTopoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppDetailTopoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TimeQuery, timeQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppDetailTopoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TimeQuery, timeQuery_);
    };
    GetAiAppDetailTopoRequest() = default ;
    GetAiAppDetailTopoRequest(const GetAiAppDetailTopoRequest &) = default ;
    GetAiAppDetailTopoRequest(GetAiAppDetailTopoRequest &&) = default ;
    GetAiAppDetailTopoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppDetailTopoRequest() = default ;
    GetAiAppDetailTopoRequest& operator=(const GetAiAppDetailTopoRequest &) = default ;
    GetAiAppDetailTopoRequest& operator=(GetAiAppDetailTopoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, TimeQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      TimeQuery() = default ;
      TimeQuery(const TimeQuery &) = default ;
      TimeQuery(TimeQuery &&) = default ;
      TimeQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeQuery() = default ;
      TimeQuery& operator=(const TimeQuery &) = default ;
      TimeQuery& operator=(TimeQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimension_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
      inline TimeQuery& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TimeQuery& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TimeQuery& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The dimension.
      shared_ptr<string> dimension_ {};
      // The end time.
      shared_ptr<string> endTime_ {};
      // The start time.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->regionId_ == nullptr && this->timeQuery_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAiAppDetailTopoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAiAppDetailTopoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // timeQuery Field Functions 
    bool hasTimeQuery() const { return this->timeQuery_ != nullptr;};
    void deleteTimeQuery() { this->timeQuery_ = nullptr;};
    inline const GetAiAppDetailTopoRequest::TimeQuery & getTimeQuery() const { DARABONBA_PTR_GET_CONST(timeQuery_, GetAiAppDetailTopoRequest::TimeQuery) };
    inline GetAiAppDetailTopoRequest::TimeQuery getTimeQuery() { DARABONBA_PTR_GET(timeQuery_, GetAiAppDetailTopoRequest::TimeQuery) };
    inline GetAiAppDetailTopoRequest& setTimeQuery(const GetAiAppDetailTopoRequest::TimeQuery & timeQuery) { DARABONBA_PTR_SET_VALUE(timeQuery_, timeQuery) };
    inline GetAiAppDetailTopoRequest& setTimeQuery(GetAiAppDetailTopoRequest::TimeQuery && timeQuery) { DARABONBA_PTR_SET_RVALUE(timeQuery_, timeQuery) };


  protected:
    // The application ID that identifies a specific AI application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The time query.
    shared_ptr<GetAiAppDetailTopoRequest::TimeQuery> timeQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
