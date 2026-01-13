// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADAPICALLDAILYDETAILCMD_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADAPICALLDAILYDETAILCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class DownloadApiCallDailyDetailCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadApiCallDailyDetailCmd& obj) { 
      DARABONBA_PTR_TO_JSON(apiName, apiName_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(engineType, engineType_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadApiCallDailyDetailCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(apiName, apiName_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(engineType, engineType_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    DownloadApiCallDailyDetailCmd() = default ;
    DownloadApiCallDailyDetailCmd(const DownloadApiCallDailyDetailCmd &) = default ;
    DownloadApiCallDailyDetailCmd(DownloadApiCallDailyDetailCmd &&) = default ;
    DownloadApiCallDailyDetailCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadApiCallDailyDetailCmd() = default ;
    DownloadApiCallDailyDetailCmd& operator=(const DownloadApiCallDailyDetailCmd &) = default ;
    DownloadApiCallDailyDetailCmd& operator=(DownloadApiCallDailyDetailCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && this->endTime_ == nullptr && this->engineType_ == nullptr && this->startTime_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DownloadApiCallDailyDetailCmd& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DownloadApiCallDailyDetailCmd& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DownloadApiCallDailyDetailCmd& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DownloadApiCallDailyDetailCmd& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> apiName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> engineType_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
