// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateComputeQuotaScheduleRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(scheduleTimezone, scheduleTimezone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(scheduleTimezone, scheduleTimezone_);
    };
    UpdateComputeQuotaScheduleRequest() = default ;
    UpdateComputeQuotaScheduleRequest(const UpdateComputeQuotaScheduleRequest &) = default ;
    UpdateComputeQuotaScheduleRequest(UpdateComputeQuotaScheduleRequest &&) = default ;
    UpdateComputeQuotaScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaScheduleRequest() = default ;
    UpdateComputeQuotaScheduleRequest& operator=(const UpdateComputeQuotaScheduleRequest &) = default ;
    UpdateComputeQuotaScheduleRequest& operator=(UpdateComputeQuotaScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->scheduleTimezone_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateComputeQuotaScheduleRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateComputeQuotaScheduleRequestBody>) };
    inline vector<UpdateComputeQuotaScheduleRequestBody> body() { DARABONBA_PTR_GET(body_, vector<UpdateComputeQuotaScheduleRequestBody>) };
    inline UpdateComputeQuotaScheduleRequest& setBody(const vector<UpdateComputeQuotaScheduleRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateComputeQuotaScheduleRequest& setBody(vector<UpdateComputeQuotaScheduleRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // scheduleTimezone Field Functions 
    bool hasScheduleTimezone() const { return this->scheduleTimezone_ != nullptr;};
    void deleteScheduleTimezone() { this->scheduleTimezone_ = nullptr;};
    inline string scheduleTimezone() const { DARABONBA_PTR_GET_DEFAULT(scheduleTimezone_, "") };
    inline UpdateComputeQuotaScheduleRequest& setScheduleTimezone(string scheduleTimezone) { DARABONBA_PTR_SET_VALUE(scheduleTimezone_, scheduleTimezone) };


  protected:
    // The request body parameters.
    std::shared_ptr<vector<UpdateComputeQuotaScheduleRequestBody>> body_ = nullptr;
    std::shared_ptr<string> scheduleTimezone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
