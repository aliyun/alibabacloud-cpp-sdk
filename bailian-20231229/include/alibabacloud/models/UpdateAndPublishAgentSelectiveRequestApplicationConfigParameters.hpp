// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIGPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIGPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& obj) { 
      DARABONBA_PTR_TO_JSON(dialogRound, dialogRound_);
      DARABONBA_PTR_TO_JSON(enable_thinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogRound, dialogRound_);
      DARABONBA_PTR_FROM_JSON(enable_thinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
    };
    UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters(const UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters(UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters &&) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& operator=(const UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& operator=(UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogRound_ == nullptr
        && return this->enableThinking_ == nullptr && return this->maxTokens_ == nullptr && return this->temperature_ == nullptr; };
    // dialogRound Field Functions 
    bool hasDialogRound() const { return this->dialogRound_ != nullptr;};
    void deleteDialogRound() { this->dialogRound_ = nullptr;};
    inline int32_t dialogRound() const { DARABONBA_PTR_GET_DEFAULT(dialogRound_, 0) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& setDialogRound(int32_t dialogRound) { DARABONBA_PTR_SET_VALUE(dialogRound_, dialogRound) };


    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool enableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t maxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


  protected:
    std::shared_ptr<int32_t> dialogRound_ = nullptr;
    std::shared_ptr<bool> enableThinking_ = nullptr;
    std::shared_ptr<int32_t> maxTokens_ = nullptr;
    std::shared_ptr<double> temperature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
