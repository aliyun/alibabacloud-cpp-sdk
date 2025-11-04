// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIGHEADMOTION_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGVCRCONFIGHEADMOTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigVcrConfigHeadMotion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigVcrConfigHeadMotion& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigVcrConfigHeadMotion& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    AIAgentConfigVcrConfigHeadMotion() = default ;
    AIAgentConfigVcrConfigHeadMotion(const AIAgentConfigVcrConfigHeadMotion &) = default ;
    AIAgentConfigVcrConfigHeadMotion(AIAgentConfigVcrConfigHeadMotion &&) = default ;
    AIAgentConfigVcrConfigHeadMotion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigVcrConfigHeadMotion() = default ;
    AIAgentConfigVcrConfigHeadMotion& operator=(const AIAgentConfigVcrConfigHeadMotion &) = default ;
    AIAgentConfigVcrConfigHeadMotion& operator=(AIAgentConfigVcrConfigHeadMotion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline AIAgentConfigVcrConfigHeadMotion& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
