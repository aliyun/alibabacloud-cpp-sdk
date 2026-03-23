// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEVISITDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEVISITDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetPageVisitDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageVisitDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PId, PId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageVisitDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PId, PId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetPageVisitDataRequest() = default ;
    GetPageVisitDataRequest(const GetPageVisitDataRequest &) = default ;
    GetPageVisitDataRequest(GetPageVisitDataRequest &&) = default ;
    GetPageVisitDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageVisitDataRequest() = default ;
    GetPageVisitDataRequest& operator=(const GetPageVisitDataRequest &) = default ;
    GetPageVisitDataRequest& operator=(GetPageVisitDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->endTime_ == nullptr && this->PId_ == nullptr && this->startTime_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetPageVisitDataRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetPageVisitDataRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetPageVisitDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // PId Field Functions 
    bool hasPId() const { return this->PId_ != nullptr;};
    void deletePId() { this->PId_ = nullptr;};
    inline string getPId() const { DARABONBA_PTR_GET_DEFAULT(PId_, "") };
    inline GetPageVisitDataRequest& setPId(string PId) { DARABONBA_PTR_SET_VALUE(PId_, PId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetPageVisitDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // appCode
    shared_ptr<string> appCode_ {};
    // appName
    shared_ptr<string> appName_ {};
    // endTime
    shared_ptr<string> endTime_ {};
    // pId
    shared_ptr<string> PId_ {};
    // startTime
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
