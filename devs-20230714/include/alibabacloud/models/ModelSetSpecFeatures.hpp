// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELSETSPECFEATURES_HPP_
#define ALIBABACLOUD_MODELS_MODELSETSPECFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ModelSetSpecFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelSetSpecFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(agentThought, agentThought_);
      DARABONBA_PTR_TO_JSON(toolCall, toolCall_);
      DARABONBA_PTR_TO_JSON(vision, vision_);
    };
    friend void from_json(const Darabonba::Json& j, ModelSetSpecFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(agentThought, agentThought_);
      DARABONBA_PTR_FROM_JSON(toolCall, toolCall_);
      DARABONBA_PTR_FROM_JSON(vision, vision_);
    };
    ModelSetSpecFeatures() = default ;
    ModelSetSpecFeatures(const ModelSetSpecFeatures &) = default ;
    ModelSetSpecFeatures(ModelSetSpecFeatures &&) = default ;
    ModelSetSpecFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelSetSpecFeatures() = default ;
    ModelSetSpecFeatures& operator=(const ModelSetSpecFeatures &) = default ;
    ModelSetSpecFeatures& operator=(ModelSetSpecFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentThought_ != nullptr
        && this->toolCall_ != nullptr && this->vision_ != nullptr; };
    // agentThought Field Functions 
    bool hasAgentThought() const { return this->agentThought_ != nullptr;};
    void deleteAgentThought() { this->agentThought_ = nullptr;};
    inline bool agentThought() const { DARABONBA_PTR_GET_DEFAULT(agentThought_, false) };
    inline ModelSetSpecFeatures& setAgentThought(bool agentThought) { DARABONBA_PTR_SET_VALUE(agentThought_, agentThought) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool toolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline ModelSetSpecFeatures& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    // vision Field Functions 
    bool hasVision() const { return this->vision_ != nullptr;};
    void deleteVision() { this->vision_ = nullptr;};
    inline bool vision() const { DARABONBA_PTR_GET_DEFAULT(vision_, false) };
    inline ModelSetSpecFeatures& setVision(bool vision) { DARABONBA_PTR_SET_VALUE(vision_, vision) };


  protected:
    std::shared_ptr<bool> agentThought_ = nullptr;
    std::shared_ptr<bool> toolCall_ = nullptr;
    std::shared_ptr<bool> vision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
