// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICECRONSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICECRONSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateServiceCronScalerRequestScaleJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateServiceCronScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceCronScalerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_TO_JSON(ScaleJobs, scaleJobs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceCronScalerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_FROM_JSON(ScaleJobs, scaleJobs_);
    };
    UpdateServiceCronScalerRequest() = default ;
    UpdateServiceCronScalerRequest(const UpdateServiceCronScalerRequest &) = default ;
    UpdateServiceCronScalerRequest(UpdateServiceCronScalerRequest &&) = default ;
    UpdateServiceCronScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceCronScalerRequest() = default ;
    UpdateServiceCronScalerRequest& operator=(const UpdateServiceCronScalerRequest &) = default ;
    UpdateServiceCronScalerRequest& operator=(UpdateServiceCronScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeDates_ != nullptr
        && this->scaleJobs_ != nullptr; };
    // excludeDates Field Functions 
    bool hasExcludeDates() const { return this->excludeDates_ != nullptr;};
    void deleteExcludeDates() { this->excludeDates_ = nullptr;};
    inline const vector<string> & excludeDates() const { DARABONBA_PTR_GET_CONST(excludeDates_, vector<string>) };
    inline vector<string> excludeDates() { DARABONBA_PTR_GET(excludeDates_, vector<string>) };
    inline UpdateServiceCronScalerRequest& setExcludeDates(const vector<string> & excludeDates) { DARABONBA_PTR_SET_VALUE(excludeDates_, excludeDates) };
    inline UpdateServiceCronScalerRequest& setExcludeDates(vector<string> && excludeDates) { DARABONBA_PTR_SET_RVALUE(excludeDates_, excludeDates) };


    // scaleJobs Field Functions 
    bool hasScaleJobs() const { return this->scaleJobs_ != nullptr;};
    void deleteScaleJobs() { this->scaleJobs_ = nullptr;};
    inline const vector<UpdateServiceCronScalerRequestScaleJobs> & scaleJobs() const { DARABONBA_PTR_GET_CONST(scaleJobs_, vector<UpdateServiceCronScalerRequestScaleJobs>) };
    inline vector<UpdateServiceCronScalerRequestScaleJobs> scaleJobs() { DARABONBA_PTR_GET(scaleJobs_, vector<UpdateServiceCronScalerRequestScaleJobs>) };
    inline UpdateServiceCronScalerRequest& setScaleJobs(const vector<UpdateServiceCronScalerRequestScaleJobs> & scaleJobs) { DARABONBA_PTR_SET_VALUE(scaleJobs_, scaleJobs) };
    inline UpdateServiceCronScalerRequest& setScaleJobs(vector<UpdateServiceCronScalerRequestScaleJobs> && scaleJobs) { DARABONBA_PTR_SET_RVALUE(scaleJobs_, scaleJobs) };


  protected:
    // The points in time that are excluded when you schedule a CronHPA job. The points in time must be specified by using a cron expression.
    std::shared_ptr<vector<string>> excludeDates_ = nullptr;
    // The description of the CronHPA job.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateServiceCronScalerRequestScaleJobs>> scaleJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
