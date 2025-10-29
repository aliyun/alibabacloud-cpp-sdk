// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUESTINPUTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUESTINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTaskRequestInputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskRequestInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequestInputs& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequestInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    UpdateTaskRequestInputs() = default ;
    UpdateTaskRequestInputs(const UpdateTaskRequestInputs &) = default ;
    UpdateTaskRequestInputs(UpdateTaskRequestInputs &&) = default ;
    UpdateTaskRequestInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequestInputs() = default ;
    UpdateTaskRequestInputs& operator=(const UpdateTaskRequestInputs &) = default ;
    UpdateTaskRequestInputs& operator=(UpdateTaskRequestInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::UpdateTaskRequestInputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::UpdateTaskRequestInputsVariables>) };
    inline vector<Models::UpdateTaskRequestInputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::UpdateTaskRequestInputsVariables>) };
    inline UpdateTaskRequestInputs& setVariables(const vector<Models::UpdateTaskRequestInputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateTaskRequestInputs& setVariables(vector<Models::UpdateTaskRequestInputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The variables.
    std::shared_ptr<vector<Models::UpdateTaskRequestInputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
