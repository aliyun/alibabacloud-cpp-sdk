// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPIPELINEBYASYNCREQUESTUPDATECOMMANDPIPELINECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPIPELINEBYASYNCREQUESTUPDATECOMMANDPIPELINECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops.hpp>
#include <alibabacloud/models/UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Hops, hops_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Hops, hops_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
    };
    UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig() = default ;
    UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig(const UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig &) = default ;
    UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig(UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig &&) = default ;
    UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig() = default ;
    UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& operator=(const UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig &) = default ;
    UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& operator=(UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hops_ == nullptr
        && return this->steps_ == nullptr; };
    // hops Field Functions 
    bool hasHops() const { return this->hops_ != nullptr;};
    void deleteHops() { this->hops_ = nullptr;};
    inline const vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops> & hops() const { DARABONBA_PTR_GET_CONST(hops_, vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops>) };
    inline vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops> hops() { DARABONBA_PTR_GET(hops_, vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops>) };
    inline UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& setHops(const vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
    inline UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& setHops(vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps>) };
    inline vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps> steps() { DARABONBA_PTR_GET(steps_, vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps>) };
    inline UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& setSteps(const vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline UpdatePipelineByAsyncRequestUpdateCommandPipelineConfig& setSteps(vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigHops>> hops_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::UpdatePipelineByAsyncRequestUpdateCommandPipelineConfigSteps>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
