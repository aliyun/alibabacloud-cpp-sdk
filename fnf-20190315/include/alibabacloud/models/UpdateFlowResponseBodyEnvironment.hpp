// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWRESPONSEBODYENVIRONMENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWRESPONSEBODYENVIRONMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateFlowResponseBodyEnvironmentVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateFlowResponseBodyEnvironment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowResponseBodyEnvironment& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowResponseBodyEnvironment& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    UpdateFlowResponseBodyEnvironment() = default ;
    UpdateFlowResponseBodyEnvironment(const UpdateFlowResponseBodyEnvironment &) = default ;
    UpdateFlowResponseBodyEnvironment(UpdateFlowResponseBodyEnvironment &&) = default ;
    UpdateFlowResponseBodyEnvironment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowResponseBodyEnvironment() = default ;
    UpdateFlowResponseBodyEnvironment& operator=(const UpdateFlowResponseBodyEnvironment &) = default ;
    UpdateFlowResponseBodyEnvironment& operator=(UpdateFlowResponseBodyEnvironment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::UpdateFlowResponseBodyEnvironmentVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::UpdateFlowResponseBodyEnvironmentVariables>) };
    inline vector<Models::UpdateFlowResponseBodyEnvironmentVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::UpdateFlowResponseBodyEnvironmentVariables>) };
    inline UpdateFlowResponseBodyEnvironment& setVariables(const vector<Models::UpdateFlowResponseBodyEnvironmentVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateFlowResponseBodyEnvironment& setVariables(vector<Models::UpdateFlowResponseBodyEnvironmentVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<vector<Models::UpdateFlowResponseBodyEnvironmentVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
