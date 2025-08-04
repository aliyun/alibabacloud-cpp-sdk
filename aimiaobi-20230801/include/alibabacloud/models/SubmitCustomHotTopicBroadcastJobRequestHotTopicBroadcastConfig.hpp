// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUESTHOTTOPICBROADCASTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMHOTTOPICBROADCASTJOBREQUESTHOTTOPICBROADCASTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig.hpp>
#include <alibabacloud/models/SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& obj) { 
      DARABONBA_PTR_TO_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_TO_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(StepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_FROM_JSON(StepForNewsBroadcastContentConfig, stepForNewsBroadcastContentConfig_);
    };
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig() = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig(const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig &) = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig(SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig &&) = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig() = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& operator=(const SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig &) = default ;
    SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& operator=(SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->stepForCustomSummaryStyleConfig_ != nullptr
        && this->stepForNewsBroadcastContentConfig_ != nullptr; };
    // stepForCustomSummaryStyleConfig Field Functions 
    bool hasStepForCustomSummaryStyleConfig() const { return this->stepForCustomSummaryStyleConfig_ != nullptr;};
    void deleteStepForCustomSummaryStyleConfig() { this->stepForCustomSummaryStyleConfig_ = nullptr;};
    inline const Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig() const { DARABONBA_PTR_GET_CONST(stepForCustomSummaryStyleConfig_, Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig) };
    inline Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig stepForCustomSummaryStyleConfig() { DARABONBA_PTR_GET(stepForCustomSummaryStyleConfig_, Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& setStepForCustomSummaryStyleConfig(const Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& setStepForCustomSummaryStyleConfig(Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig && stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_RVALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };


    // stepForNewsBroadcastContentConfig Field Functions 
    bool hasStepForNewsBroadcastContentConfig() const { return this->stepForNewsBroadcastContentConfig_ != nullptr;};
    void deleteStepForNewsBroadcastContentConfig() { this->stepForNewsBroadcastContentConfig_ = nullptr;};
    inline const Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig & stepForNewsBroadcastContentConfig() const { DARABONBA_PTR_GET_CONST(stepForNewsBroadcastContentConfig_, Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig) };
    inline Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig stepForNewsBroadcastContentConfig() { DARABONBA_PTR_GET(stepForNewsBroadcastContentConfig_, Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& setStepForNewsBroadcastContentConfig(const Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig & stepForNewsBroadcastContentConfig) { DARABONBA_PTR_SET_VALUE(stepForNewsBroadcastContentConfig_, stepForNewsBroadcastContentConfig) };
    inline SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfig& setStepForNewsBroadcastContentConfig(Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig && stepForNewsBroadcastContentConfig) { DARABONBA_PTR_SET_RVALUE(stepForNewsBroadcastContentConfig_, stepForNewsBroadcastContentConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForCustomSummaryStyleConfig> stepForCustomSummaryStyleConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::SubmitCustomHotTopicBroadcastJobRequestHotTopicBroadcastConfigStepForNewsBroadcastContentConfig> stepForNewsBroadcastContentConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
