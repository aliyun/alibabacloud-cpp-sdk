// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTRECORDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLISTRECORDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetListRecordResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListRecordResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(analysisId, analysisId_);
      DARABONBA_PTR_TO_JSON(analysisTime, analysisTime_);
      DARABONBA_PTR_TO_JSON(arguments, arguments_);
      DARABONBA_PTR_TO_JSON(failedLog, failedLog_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetListRecordResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisId, analysisId_);
      DARABONBA_PTR_FROM_JSON(analysisTime, analysisTime_);
      DARABONBA_PTR_FROM_JSON(arguments, arguments_);
      DARABONBA_PTR_FROM_JSON(failedLog, failedLog_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetListRecordResponseBodyData() = default ;
    GetListRecordResponseBodyData(const GetListRecordResponseBodyData &) = default ;
    GetListRecordResponseBodyData(GetListRecordResponseBodyData &&) = default ;
    GetListRecordResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListRecordResponseBodyData() = default ;
    GetListRecordResponseBodyData& operator=(const GetListRecordResponseBodyData &) = default ;
    GetListRecordResponseBodyData& operator=(GetListRecordResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisId_ == nullptr
        && return this->analysisTime_ == nullptr && return this->arguments_ == nullptr && return this->failedLog_ == nullptr && return this->status_ == nullptr; };
    // analysisId Field Functions 
    bool hasAnalysisId() const { return this->analysisId_ != nullptr;};
    void deleteAnalysisId() { this->analysisId_ = nullptr;};
    inline string analysisId() const { DARABONBA_PTR_GET_DEFAULT(analysisId_, "") };
    inline GetListRecordResponseBodyData& setAnalysisId(string analysisId) { DARABONBA_PTR_SET_VALUE(analysisId_, analysisId) };


    // analysisTime Field Functions 
    bool hasAnalysisTime() const { return this->analysisTime_ != nullptr;};
    void deleteAnalysisTime() { this->analysisTime_ = nullptr;};
    inline string analysisTime() const { DARABONBA_PTR_GET_DEFAULT(analysisTime_, "") };
    inline GetListRecordResponseBodyData& setAnalysisTime(string analysisTime) { DARABONBA_PTR_SET_VALUE(analysisTime_, analysisTime) };


    // arguments Field Functions 
    bool hasArguments() const { return this->arguments_ != nullptr;};
    void deleteArguments() { this->arguments_ = nullptr;};
    inline string arguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
    inline GetListRecordResponseBodyData& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


    // failedLog Field Functions 
    bool hasFailedLog() const { return this->failedLog_ != nullptr;};
    void deleteFailedLog() { this->failedLog_ = nullptr;};
    inline string failedLog() const { DARABONBA_PTR_GET_DEFAULT(failedLog_, "") };
    inline GetListRecordResponseBodyData& setFailedLog(string failedLog) { DARABONBA_PTR_SET_VALUE(failedLog_, failedLog) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetListRecordResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> analysisId_ = nullptr;
    std::shared_ptr<string> analysisTime_ = nullptr;
    std::shared_ptr<string> arguments_ = nullptr;
    std::shared_ptr<string> failedLog_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
