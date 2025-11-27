// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRIGGERREQUESTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRIGGERREQUESTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateTriggerRequestActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTriggerRequestActions& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTriggerRequestActions& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    UpdateTriggerRequestActions() = default ;
    UpdateTriggerRequestActions(const UpdateTriggerRequestActions &) = default ;
    UpdateTriggerRequestActions(UpdateTriggerRequestActions &&) = default ;
    UpdateTriggerRequestActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTriggerRequestActions() = default ;
    UpdateTriggerRequestActions& operator=(const UpdateTriggerRequestActions &) = default ;
    UpdateTriggerRequestActions& operator=(UpdateTriggerRequestActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->parameters_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTriggerRequestActions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<string> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<string>) };
    inline vector<string> parameters() { DARABONBA_PTR_GET(parameters_, vector<string>) };
    inline UpdateTriggerRequestActions& setParameters(const vector<string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateTriggerRequestActions& setParameters(vector<string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


  protected:
    // The template name.
    std::shared_ptr<string> name_ = nullptr;
    // The template parameters.
    std::shared_ptr<vector<string>> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
