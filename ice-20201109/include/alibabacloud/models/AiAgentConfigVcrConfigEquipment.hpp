// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIGEQUIPMENT_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIGEQUIPMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigVcrConfigEquipment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigVcrConfigEquipment& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigVcrConfigEquipment& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    AIAgentConfigVcrConfigEquipment() = default ;
    AIAgentConfigVcrConfigEquipment(const AIAgentConfigVcrConfigEquipment &) = default ;
    AIAgentConfigVcrConfigEquipment(AIAgentConfigVcrConfigEquipment &&) = default ;
    AIAgentConfigVcrConfigEquipment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigVcrConfigEquipment() = default ;
    AIAgentConfigVcrConfigEquipment& operator=(const AIAgentConfigVcrConfigEquipment &) = default ;
    AIAgentConfigVcrConfigEquipment& operator=(AIAgentConfigVcrConfigEquipment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AIAgentConfigVcrConfigEquipment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
