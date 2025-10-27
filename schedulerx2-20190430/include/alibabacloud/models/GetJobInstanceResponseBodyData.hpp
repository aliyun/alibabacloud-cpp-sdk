// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobInstanceResponseBodyDataJobInstanceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobInstanceDetail, jobInstanceDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInstanceDetail, jobInstanceDetail_);
    };
    GetJobInstanceResponseBodyData() = default ;
    GetJobInstanceResponseBodyData(const GetJobInstanceResponseBodyData &) = default ;
    GetJobInstanceResponseBodyData(GetJobInstanceResponseBodyData &&) = default ;
    GetJobInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInstanceResponseBodyData() = default ;
    GetJobInstanceResponseBodyData& operator=(const GetJobInstanceResponseBodyData &) = default ;
    GetJobInstanceResponseBodyData& operator=(GetJobInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInstanceDetail_ == nullptr; };
    // jobInstanceDetail Field Functions 
    bool hasJobInstanceDetail() const { return this->jobInstanceDetail_ != nullptr;};
    void deleteJobInstanceDetail() { this->jobInstanceDetail_ = nullptr;};
    inline const Models::GetJobInstanceResponseBodyDataJobInstanceDetail & jobInstanceDetail() const { DARABONBA_PTR_GET_CONST(jobInstanceDetail_, Models::GetJobInstanceResponseBodyDataJobInstanceDetail) };
    inline Models::GetJobInstanceResponseBodyDataJobInstanceDetail jobInstanceDetail() { DARABONBA_PTR_GET(jobInstanceDetail_, Models::GetJobInstanceResponseBodyDataJobInstanceDetail) };
    inline GetJobInstanceResponseBodyData& setJobInstanceDetail(const Models::GetJobInstanceResponseBodyDataJobInstanceDetail & jobInstanceDetail) { DARABONBA_PTR_SET_VALUE(jobInstanceDetail_, jobInstanceDetail) };
    inline GetJobInstanceResponseBodyData& setJobInstanceDetail(Models::GetJobInstanceResponseBodyDataJobInstanceDetail && jobInstanceDetail) { DARABONBA_PTR_SET_RVALUE(jobInstanceDetail_, jobInstanceDetail) };


  protected:
    // The details of the job instance.
    std::shared_ptr<Models::GetJobInstanceResponseBodyDataJobInstanceDetail> jobInstanceDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
