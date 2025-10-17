// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIVPPALGOJOBRESPONSEBODYDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETAIVPPALGOJOBRESPONSEBODYDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class GetAivppAlgoJobResponseBodyDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAivppAlgoJobResponseBodyDataResponse& obj) { 
      DARABONBA_ANY_TO_JSON(DebugInfo, debugInfo_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_ANY_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetAivppAlgoJobResponseBodyDataResponse& obj) { 
      DARABONBA_ANY_FROM_JSON(DebugInfo, debugInfo_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_ANY_FROM_JSON(Result, result_);
    };
    GetAivppAlgoJobResponseBodyDataResponse() = default ;
    GetAivppAlgoJobResponseBodyDataResponse(const GetAivppAlgoJobResponseBodyDataResponse &) = default ;
    GetAivppAlgoJobResponseBodyDataResponse(GetAivppAlgoJobResponseBodyDataResponse &&) = default ;
    GetAivppAlgoJobResponseBodyDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAivppAlgoJobResponseBodyDataResponse() = default ;
    GetAivppAlgoJobResponseBodyDataResponse& operator=(const GetAivppAlgoJobResponseBodyDataResponse &) = default ;
    GetAivppAlgoJobResponseBodyDataResponse& operator=(GetAivppAlgoJobResponseBodyDataResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->debugInfo_ == nullptr
        && return this->jobType_ == nullptr && return this->result_ == nullptr; };
    // debugInfo Field Functions 
    bool hasDebugInfo() const { return this->debugInfo_ != nullptr;};
    void deleteDebugInfo() { this->debugInfo_ = nullptr;};
    inline     const Darabonba::Json & debugInfo() const { DARABONBA_GET(debugInfo_) };
    Darabonba::Json & debugInfo() { DARABONBA_GET(debugInfo_) };
    inline GetAivppAlgoJobResponseBodyDataResponse& setDebugInfo(const Darabonba::Json & debugInfo) { DARABONBA_SET_VALUE(debugInfo_, debugInfo) };
    inline GetAivppAlgoJobResponseBodyDataResponse& setDebugInfo(Darabonba::Json & debugInfo) { DARABONBA_SET_RVALUE(debugInfo_, debugInfo) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetAivppAlgoJobResponseBodyDataResponse& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & result() const { DARABONBA_GET(result_) };
    Darabonba::Json & result() { DARABONBA_GET(result_) };
    inline GetAivppAlgoJobResponseBodyDataResponse& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline GetAivppAlgoJobResponseBodyDataResponse& setResult(Darabonba::Json & result) { DARABONBA_SET_RVALUE(result_, result) };


  protected:
    Darabonba::Json debugInfo_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    Darabonba::Json result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
