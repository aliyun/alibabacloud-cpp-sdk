// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEVERSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRUNTIMEVERSIONINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateAgentRuntimeVersionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentRuntimeVersionInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentRuntimeVersionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    CreateAgentRuntimeVersionInput() = default ;
    CreateAgentRuntimeVersionInput(const CreateAgentRuntimeVersionInput &) = default ;
    CreateAgentRuntimeVersionInput(CreateAgentRuntimeVersionInput &&) = default ;
    CreateAgentRuntimeVersionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentRuntimeVersionInput() = default ;
    CreateAgentRuntimeVersionInput& operator=(const CreateAgentRuntimeVersionInput &) = default ;
    CreateAgentRuntimeVersionInput& operator=(CreateAgentRuntimeVersionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAgentRuntimeVersionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // 版本描述
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
