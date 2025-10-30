// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEBYIDRESPONSEBODYDATAPIPELINECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEBYIDRESPONSEBODYDATAPIPELINECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPipelineByIdResponseBodyDataPipelineConfigHops.hpp>
#include <alibabacloud/models/GetPipelineByIdResponseBodyDataPipelineConfigSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineByIdResponseBodyDataPipelineConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineByIdResponseBodyDataPipelineConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Hops, hops_);
      DARABONBA_PTR_TO_JSON(Steps, steps_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineByIdResponseBodyDataPipelineConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Hops, hops_);
      DARABONBA_PTR_FROM_JSON(Steps, steps_);
    };
    GetPipelineByIdResponseBodyDataPipelineConfig() = default ;
    GetPipelineByIdResponseBodyDataPipelineConfig(const GetPipelineByIdResponseBodyDataPipelineConfig &) = default ;
    GetPipelineByIdResponseBodyDataPipelineConfig(GetPipelineByIdResponseBodyDataPipelineConfig &&) = default ;
    GetPipelineByIdResponseBodyDataPipelineConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineByIdResponseBodyDataPipelineConfig() = default ;
    GetPipelineByIdResponseBodyDataPipelineConfig& operator=(const GetPipelineByIdResponseBodyDataPipelineConfig &) = default ;
    GetPipelineByIdResponseBodyDataPipelineConfig& operator=(GetPipelineByIdResponseBodyDataPipelineConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hops_ == nullptr
        && return this->steps_ == nullptr; };
    // hops Field Functions 
    bool hasHops() const { return this->hops_ != nullptr;};
    void deleteHops() { this->hops_ = nullptr;};
    inline const vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops> & hops() const { DARABONBA_PTR_GET_CONST(hops_, vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops>) };
    inline vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops> hops() { DARABONBA_PTR_GET(hops_, vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops>) };
    inline GetPipelineByIdResponseBodyDataPipelineConfig& setHops(const vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops> & hops) { DARABONBA_PTR_SET_VALUE(hops_, hops) };
    inline GetPipelineByIdResponseBodyDataPipelineConfig& setHops(vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops> && hops) { DARABONBA_PTR_SET_RVALUE(hops_, hops) };


    // steps Field Functions 
    bool hasSteps() const { return this->steps_ != nullptr;};
    void deleteSteps() { this->steps_ = nullptr;};
    inline const vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps> & steps() const { DARABONBA_PTR_GET_CONST(steps_, vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps>) };
    inline vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps> steps() { DARABONBA_PTR_GET(steps_, vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps>) };
    inline GetPipelineByIdResponseBodyDataPipelineConfig& setSteps(const vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
    inline GetPipelineByIdResponseBodyDataPipelineConfig& setSteps(vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


  protected:
    std::shared_ptr<vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigHops>> hops_ = nullptr;
    std::shared_ptr<vector<Models::GetPipelineByIdResponseBodyDataPipelineConfigSteps>> steps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
