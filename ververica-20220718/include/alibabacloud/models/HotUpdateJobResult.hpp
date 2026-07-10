// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTUPDATEJOBRESULT_HPP_
#define ALIBABACLOUD_MODELS_HOTUPDATEJOBRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotUpdateJobParams.hpp>
#include <alibabacloud/models/HotUpdateJobStatus.hpp>
#include <alibabacloud/models/BriefResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class HotUpdateJobResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotUpdateJobResult& obj) { 
      DARABONBA_PTR_TO_JSON(hotUpdateParams, hotUpdateParams_);
      DARABONBA_PTR_TO_JSON(jobHotUpdateId, jobHotUpdateId_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(targetResourceSetting, targetResourceSetting_);
    };
    friend void from_json(const Darabonba::Json& j, HotUpdateJobResult& obj) { 
      DARABONBA_PTR_FROM_JSON(hotUpdateParams, hotUpdateParams_);
      DARABONBA_PTR_FROM_JSON(jobHotUpdateId, jobHotUpdateId_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(targetResourceSetting, targetResourceSetting_);
    };
    HotUpdateJobResult() = default ;
    HotUpdateJobResult(const HotUpdateJobResult &) = default ;
    HotUpdateJobResult(HotUpdateJobResult &&) = default ;
    HotUpdateJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotUpdateJobResult() = default ;
    HotUpdateJobResult& operator=(const HotUpdateJobResult &) = default ;
    HotUpdateJobResult& operator=(HotUpdateJobResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotUpdateParams_ == nullptr
        && this->jobHotUpdateId_ == nullptr && this->jobId_ == nullptr && this->status_ == nullptr && this->targetResourceSetting_ == nullptr; };
    // hotUpdateParams Field Functions 
    bool hasHotUpdateParams() const { return this->hotUpdateParams_ != nullptr;};
    void deleteHotUpdateParams() { this->hotUpdateParams_ = nullptr;};
    inline const HotUpdateJobParams & getHotUpdateParams() const { DARABONBA_PTR_GET_CONST(hotUpdateParams_, HotUpdateJobParams) };
    inline HotUpdateJobParams getHotUpdateParams() { DARABONBA_PTR_GET(hotUpdateParams_, HotUpdateJobParams) };
    inline HotUpdateJobResult& setHotUpdateParams(const HotUpdateJobParams & hotUpdateParams) { DARABONBA_PTR_SET_VALUE(hotUpdateParams_, hotUpdateParams) };
    inline HotUpdateJobResult& setHotUpdateParams(HotUpdateJobParams && hotUpdateParams) { DARABONBA_PTR_SET_RVALUE(hotUpdateParams_, hotUpdateParams) };


    // jobHotUpdateId Field Functions 
    bool hasJobHotUpdateId() const { return this->jobHotUpdateId_ != nullptr;};
    void deleteJobHotUpdateId() { this->jobHotUpdateId_ = nullptr;};
    inline string getJobHotUpdateId() const { DARABONBA_PTR_GET_DEFAULT(jobHotUpdateId_, "") };
    inline HotUpdateJobResult& setJobHotUpdateId(string jobHotUpdateId) { DARABONBA_PTR_SET_VALUE(jobHotUpdateId_, jobHotUpdateId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline HotUpdateJobResult& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const HotUpdateJobStatus & getStatus() const { DARABONBA_PTR_GET_CONST(status_, HotUpdateJobStatus) };
    inline HotUpdateJobStatus getStatus() { DARABONBA_PTR_GET(status_, HotUpdateJobStatus) };
    inline HotUpdateJobResult& setStatus(const HotUpdateJobStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline HotUpdateJobResult& setStatus(HotUpdateJobStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // targetResourceSetting Field Functions 
    bool hasTargetResourceSetting() const { return this->targetResourceSetting_ != nullptr;};
    void deleteTargetResourceSetting() { this->targetResourceSetting_ = nullptr;};
    inline const BriefResourceSetting & getTargetResourceSetting() const { DARABONBA_PTR_GET_CONST(targetResourceSetting_, BriefResourceSetting) };
    inline BriefResourceSetting getTargetResourceSetting() { DARABONBA_PTR_GET(targetResourceSetting_, BriefResourceSetting) };
    inline HotUpdateJobResult& setTargetResourceSetting(const BriefResourceSetting & targetResourceSetting) { DARABONBA_PTR_SET_VALUE(targetResourceSetting_, targetResourceSetting) };
    inline HotUpdateJobResult& setTargetResourceSetting(BriefResourceSetting && targetResourceSetting) { DARABONBA_PTR_SET_RVALUE(targetResourceSetting_, targetResourceSetting) };


  protected:
    shared_ptr<HotUpdateJobParams> hotUpdateParams_ {};
    shared_ptr<string> jobHotUpdateId_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<HotUpdateJobStatus> status_ {};
    shared_ptr<BriefResourceSetting> targetResourceSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
