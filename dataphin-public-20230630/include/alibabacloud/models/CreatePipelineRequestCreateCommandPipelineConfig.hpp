// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINEREQUESTCREATECOMMANDPIPELINECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINEREQUESTCREATECOMMANDPIPELINECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePipelineRequestCreateCommandPipelineConfigHops.hpp>
#include <alibabacloud/models/CreatePipelineRequestCreateCommandPipelineConfigSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreatePipelineRequestCreateCommandPipelineConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineRequestCreateCommandPipelineConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Hops, hops_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineRequestCreateCommandPipelineConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Hops, hops_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
    };
    CreatePipelineRequestCreateCommandPipelineConfig() = default ;
    CreatePipelineRequestCreateCommandPipelineConfig(const CreatePipelineRequestCreateCommandPipelineConfig &) = default ;
    CreatePipelineRequestCreateCommandPipelineConfig(CreatePipelineRequestCreateCommandPipelineConfig &&) = default ;
    CreatePipelineRequestCreateCommandPipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineRequestCreateCommandPipelineConfig() = default ;
    CreatePipelineRequestCreateCommandPipelineConfig& operator=(const CreatePipelineRequestCreateCommandPipelineConfig &) = default ;
    CreatePipelineRequestCreateCommandPipelineConfig& operator=(CreatePipelineRequestCreateCommandPipelineConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hops_ == nullptr
        && return this->steps_ == nullptr; };
    // hops Field Functions 
    bool hasHops() const { return this->hops_ != nullptr;};
    void deleteHops() { this->hops_ = nullptr;};
    inline const vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops> & hops() const { DARABONBA_PTR_GET_CONST(hops_, vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops>) };
    inline vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops> hops() { DARABONBA_PTR_GET(hops_, vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops>) };
    inline CreatePipelineRequestCreateCommandPipelineConfig& setHops(const vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
    inline CreatePipelineRequestCreateCommandPipelineConfig& setHops(vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps>) };
    inline vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps> steps() { DARABONBA_PTR_GET(steps_, vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps>) };
    inline CreatePipelineRequestCreateCommandPipelineConfig& setSteps(const vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline CreatePipelineRequestCreateCommandPipelineConfig& setSteps(vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreatePipelineRequestCreateCommandPipelineConfigHops>> hops_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::CreatePipelineRequestCreateCommandPipelineConfigSteps>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
