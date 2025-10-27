// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobConfigInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobConfigInfo, jobConfigInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobConfigInfo, jobConfigInfo_);
    };
    GetJobInfoResponseBodyData() = default ;
    GetJobInfoResponseBodyData(const GetJobInfoResponseBodyData &) = default ;
    GetJobInfoResponseBodyData(GetJobInfoResponseBodyData &&) = default ;
    GetJobInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyData() = default ;
    GetJobInfoResponseBodyData& operator=(const GetJobInfoResponseBodyData &) = default ;
    GetJobInfoResponseBodyData& operator=(GetJobInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobConfigInfo_ == nullptr; };
    // jobConfigInfo Field Functions 
    bool hasJobConfigInfo() const { return this->jobConfigInfo_ != nullptr;};
    void deleteJobConfigInfo() { this->jobConfigInfo_ = nullptr;};
    inline const Models::GetJobInfoResponseBodyDataJobConfigInfo & jobConfigInfo() const { DARABONBA_PTR_GET_CONST(jobConfigInfo_, Models::GetJobInfoResponseBodyDataJobConfigInfo) };
    inline Models::GetJobInfoResponseBodyDataJobConfigInfo jobConfigInfo() { DARABONBA_PTR_GET(jobConfigInfo_, Models::GetJobInfoResponseBodyDataJobConfigInfo) };
    inline GetJobInfoResponseBodyData& setJobConfigInfo(const Models::GetJobInfoResponseBodyDataJobConfigInfo & jobConfigInfo) { DARABONBA_PTR_SET_VALUE(jobConfigInfo_, jobConfigInfo) };
    inline GetJobInfoResponseBodyData& setJobConfigInfo(Models::GetJobInfoResponseBodyDataJobConfigInfo && jobConfigInfo) { DARABONBA_PTR_SET_RVALUE(jobConfigInfo_, jobConfigInfo) };


  protected:
    // The configurations of the job.
    std::shared_ptr<Models::GetJobInfoResponseBodyDataJobConfigInfo> jobConfigInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
