// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMANDPIPELINECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEBYASYNCREQUESTCREATECOMMANDPIPELINECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops.hpp>
#include <alibabacloud/models/CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineByAsyncRequestCreateCommandPipelineConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineByAsyncRequestCreateCommandPipelineConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Hops, hops_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineByAsyncRequestCreateCommandPipelineConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Hops, hops_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
    };
    CreatePipelineByAsyncRequestCreateCommandPipelineConfig() = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfig(const CreatePipelineByAsyncRequestCreateCommandPipelineConfig &) = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfig(CreatePipelineByAsyncRequestCreateCommandPipelineConfig &&) = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineByAsyncRequestCreateCommandPipelineConfig() = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfig& operator=(const CreatePipelineByAsyncRequestCreateCommandPipelineConfig &) = default ;
    CreatePipelineByAsyncRequestCreateCommandPipelineConfig& operator=(CreatePipelineByAsyncRequestCreateCommandPipelineConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hops_ == nullptr
        && return this->steps_ == nullptr; };
    // hops Field Functions 
    bool hasHops() const { return this->hops_ != nullptr;};
    void deleteHops() { this->hops_ = nullptr;};
    inline const vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops> & hops() const { DARABONBA_PTR_GET_CONST(hops_, vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops>) };
    inline vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops> hops() { DARABONBA_PTR_GET(hops_, vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops>) };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfig& setHops(const vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfig& setHops(vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps>) };
    inline vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps> steps() { DARABONBA_PTR_GET(steps_, vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps>) };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfig& setSteps(const vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline CreatePipelineByAsyncRequestCreateCommandPipelineConfig& setSteps(vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigHops>> hops_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreatePipelineByAsyncRequestCreateCommandPipelineConfigSteps>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
