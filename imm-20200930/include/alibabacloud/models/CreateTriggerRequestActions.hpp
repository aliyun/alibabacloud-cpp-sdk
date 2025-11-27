// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERREQUESTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERREQUESTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FastFailPolicy.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateTriggerRequestActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerRequestActions& obj) { 
      DARABONBA_PTR_TO_JSON(FastFailPolicy, fastFailPolicy_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerRequestActions& obj) { 
      DARABONBA_PTR_FROM_JSON(FastFailPolicy, fastFailPolicy_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    CreateTriggerRequestActions() = default ;
    CreateTriggerRequestActions(const CreateTriggerRequestActions &) = default ;
    CreateTriggerRequestActions(CreateTriggerRequestActions &&) = default ;
    CreateTriggerRequestActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerRequestActions() = default ;
    CreateTriggerRequestActions& operator=(const CreateTriggerRequestActions &) = default ;
    CreateTriggerRequestActions& operator=(CreateTriggerRequestActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fastFailPolicy_ == nullptr
        && return this->name_ == nullptr && return this->parameters_ == nullptr; };
    // fastFailPolicy Field Functions 
    bool hasFastFailPolicy() const { return this->fastFailPolicy_ != nullptr;};
    void deleteFastFailPolicy() { this->fastFailPolicy_ = nullptr;};
    inline const Models::FastFailPolicy & fastFailPolicy() const { DARABONBA_PTR_GET_CONST(fastFailPolicy_, Models::FastFailPolicy) };
    inline Models::FastFailPolicy fastFailPolicy() { DARABONBA_PTR_GET(fastFailPolicy_, Models::FastFailPolicy) };
    inline CreateTriggerRequestActions& setFastFailPolicy(const Models::FastFailPolicy & fastFailPolicy) { DARABONBA_PTR_SET_VALUE(fastFailPolicy_, fastFailPolicy) };
    inline CreateTriggerRequestActions& setFastFailPolicy(Models::FastFailPolicy && fastFailPolicy) { DARABONBA_PTR_SET_RVALUE(fastFailPolicy_, fastFailPolicy) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTriggerRequestActions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
    inline vector<string> parameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
    inline CreateTriggerRequestActions& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateTriggerRequestActions& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    // The policy configurations for handling failures.
    std::shared_ptr<Models::FastFailPolicy> fastFailPolicy_ = nullptr;
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The template parameters.
    std::shared_ptr<vector<string>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
