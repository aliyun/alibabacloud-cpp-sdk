// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICECRONSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICECRONSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateServiceCronScalerRequestScaleJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceCronScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceCronScalerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_TO_JSON(ScaleJobs, scaleJobs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceCronScalerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeDates, excludeDates_);
      DARABONBA_PTR_FROM_JSON(ScaleJobs, scaleJobs_);
    };
    CreateServiceCronScalerRequest() = default ;
    CreateServiceCronScalerRequest(const CreateServiceCronScalerRequest &) = default ;
    CreateServiceCronScalerRequest(CreateServiceCronScalerRequest &&) = default ;
    CreateServiceCronScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceCronScalerRequest() = default ;
    CreateServiceCronScalerRequest& operator=(const CreateServiceCronScalerRequest &) = default ;
    CreateServiceCronScalerRequest& operator=(CreateServiceCronScalerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeDates_ == nullptr
        && return this->scaleJobs_ == nullptr; };
    // excludeDates Field Functions 
    bool hasExcludeDates() const { return this->excludeDates_ != nullptr;};
    void deleteExcludeDates() { this->excludeDates_ = nullptr;};
    inline const vector<string> & excludeDates() const { DARABONBA_PTR_GET_CONST(excludeDates_, vector<string>) };
    inline vector<string> excludeDates() { DARABONBA_PTR_GET(excludeDates_, vector<string>) };
    inline CreateServiceCronScalerRequest& setExcludeDates(const vector<string> & excludeDates) { DARABONBA_PTR_SET_VALUE(excludeDates_, excludeDates) };
    inline CreateServiceCronScalerRequest& setExcludeDates(vector<string> && excludeDates) { DARABONBA_PTR_SET_RVALUE(excludeDates_, excludeDates) };


    // scaleJobs Field Functions 
    bool hasScaleJobs() const { return this->scaleJobs_ != nullptr;};
    void deleteScaleJobs() { this->scaleJobs_ = nullptr;};
    inline const vector<CreateServiceCronScalerRequestScaleJobs> & scaleJobs() const { DARABONBA_PTR_GET_CONST(scaleJobs_, vector<CreateServiceCronScalerRequestScaleJobs>) };
    inline vector<CreateServiceCronScalerRequestScaleJobs> scaleJobs() { DARABONBA_PTR_GET(scaleJobs_, vector<CreateServiceCronScalerRequestScaleJobs>) };
    inline CreateServiceCronScalerRequest& setScaleJobs(const vector<CreateServiceCronScalerRequestScaleJobs> & scaleJobs) { DARABONBA_PTR_SET_VALUE(scaleJobs_, scaleJobs) };
    inline CreateServiceCronScalerRequest& setScaleJobs(vector<CreateServiceCronScalerRequestScaleJobs> && scaleJobs) { DARABONBA_PTR_SET_RVALUE(scaleJobs_, scaleJobs) };


  protected:
    // The points in time that are excluded when you schedule a CronHPA job. The points in time must be specified by using a cron expression.
    std::shared_ptr<vector<string>> excludeDates_ = nullptr;
    // The description of the CronHPA job.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateServiceCronScalerRequestScaleJobs>> scaleJobs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
