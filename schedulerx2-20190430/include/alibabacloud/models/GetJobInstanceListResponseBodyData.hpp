// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINSTANCELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINSTANCELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobInstanceListResponseBodyDataJobInstanceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInstanceListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInstanceListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobInstanceDetails, jobInstanceDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInstanceListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobInstanceDetails, jobInstanceDetails_);
    };
    GetJobInstanceListResponseBodyData() = default ;
    GetJobInstanceListResponseBodyData(const GetJobInstanceListResponseBodyData &) = default ;
    GetJobInstanceListResponseBodyData(GetJobInstanceListResponseBodyData &&) = default ;
    GetJobInstanceListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInstanceListResponseBodyData() = default ;
    GetJobInstanceListResponseBodyData& operator=(const GetJobInstanceListResponseBodyData &) = default ;
    GetJobInstanceListResponseBodyData& operator=(GetJobInstanceListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobInstanceDetails_ == nullptr; };
    // jobInstanceDetails Field Functions 
    bool hasJobInstanceDetails() const { return this->jobInstanceDetails_ != nullptr;};
    void deleteJobInstanceDetails() { this->jobInstanceDetails_ = nullptr;};
    inline const vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails> & jobInstanceDetails() const { DARABONBA_PTR_GET_CONST(jobInstanceDetails_, vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails>) };
    inline vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails> jobInstanceDetails() { DARABONBA_PTR_GET(jobInstanceDetails_, vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails>) };
    inline GetJobInstanceListResponseBodyData& setJobInstanceDetails(const vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails> & jobInstanceDetails) { DARABONBA_PTR_SET_VALUE(jobInstanceDetails_, jobInstanceDetails) };
    inline GetJobInstanceListResponseBodyData& setJobInstanceDetails(vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails> && jobInstanceDetails) { DARABONBA_PTR_SET_RVALUE(jobInstanceDetails_, jobInstanceDetails) };


  protected:
    // The details of the job instance.
    std::shared_ptr<vector<Models::GetJobInstanceListResponseBodyDataJobInstanceDetails>> jobInstanceDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
