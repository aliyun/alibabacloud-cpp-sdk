// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELFEATURES_HPP_
#define ALIBABACLOUD_MODELS_MODELFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(agentThought, agentThought_);
      DARABONBA_PTR_TO_JSON(multiToolCall, multiToolCall_);
      DARABONBA_PTR_TO_JSON(streamToolCall, streamToolCall_);
      DARABONBA_PTR_TO_JSON(toolCall, toolCall_);
      DARABONBA_PTR_TO_JSON(vision, vision_);
    };
    friend void from_json(const Darabonba::Json& j, ModelFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(agentThought, agentThought_);
      DARABONBA_PTR_FROM_JSON(multiToolCall, multiToolCall_);
      DARABONBA_PTR_FROM_JSON(streamToolCall, streamToolCall_);
      DARABONBA_PTR_FROM_JSON(toolCall, toolCall_);
      DARABONBA_PTR_FROM_JSON(vision, vision_);
    };
    ModelFeatures() = default ;
    ModelFeatures(const ModelFeatures &) = default ;
    ModelFeatures(ModelFeatures &&) = default ;
    ModelFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelFeatures() = default ;
    ModelFeatures& operator=(const ModelFeatures &) = default ;
    ModelFeatures& operator=(ModelFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentThought_ == nullptr
        && this->multiToolCall_ == nullptr && this->streamToolCall_ == nullptr && this->toolCall_ == nullptr && this->vision_ == nullptr; };
    // agentThought Field Functions 
    bool hasAgentThought() const { return this->agentThought_ != nullptr;};
    void deleteAgentThought() { this->agentThought_ = nullptr;};
    inline bool getAgentThought() const { DARABONBA_PTR_GET_DEFAULT(agentThought_, false) };
    inline ModelFeatures& setAgentThought(bool agentThought) { DARABONBA_PTR_SET_VALUE(agentThought_, agentThought) };


    // multiToolCall Field Functions 
    bool hasMultiToolCall() const { return this->multiToolCall_ != nullptr;};
    void deleteMultiToolCall() { this->multiToolCall_ = nullptr;};
    inline bool getMultiToolCall() const { DARABONBA_PTR_GET_DEFAULT(multiToolCall_, false) };
    inline ModelFeatures& setMultiToolCall(bool multiToolCall) { DARABONBA_PTR_SET_VALUE(multiToolCall_, multiToolCall) };


    // streamToolCall Field Functions 
    bool hasStreamToolCall() const { return this->streamToolCall_ != nullptr;};
    void deleteStreamToolCall() { this->streamToolCall_ = nullptr;};
    inline bool getStreamToolCall() const { DARABONBA_PTR_GET_DEFAULT(streamToolCall_, false) };
    inline ModelFeatures& setStreamToolCall(bool streamToolCall) { DARABONBA_PTR_SET_VALUE(streamToolCall_, streamToolCall) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool getToolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline ModelFeatures& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    // vision Field Functions 
    bool hasVision() const { return this->vision_ != nullptr;};
    void deleteVision() { this->vision_ = nullptr;};
    inline bool getVision() const { DARABONBA_PTR_GET_DEFAULT(vision_, false) };
    inline ModelFeatures& setVision(bool vision) { DARABONBA_PTR_SET_VALUE(vision_, vision) };


  protected:
    shared_ptr<bool> agentThought_ {};
    shared_ptr<bool> multiToolCall_ {};
    shared_ptr<bool> streamToolCall_ {};
    shared_ptr<bool> toolCall_ {};
    shared_ptr<bool> vision_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
