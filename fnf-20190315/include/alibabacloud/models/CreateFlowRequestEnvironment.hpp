// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWREQUESTENVIRONMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWREQUESTENVIRONMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFlowRequestEnvironmentVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateFlowRequestEnvironment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowRequestEnvironment& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowRequestEnvironment& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    CreateFlowRequestEnvironment() = default ;
    CreateFlowRequestEnvironment(const CreateFlowRequestEnvironment &) = default ;
    CreateFlowRequestEnvironment(CreateFlowRequestEnvironment &&) = default ;
    CreateFlowRequestEnvironment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowRequestEnvironment() = default ;
    CreateFlowRequestEnvironment& operator=(const CreateFlowRequestEnvironment &) = default ;
    CreateFlowRequestEnvironment& operator=(CreateFlowRequestEnvironment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::CreateFlowRequestEnvironmentVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::CreateFlowRequestEnvironmentVariables>) };
    inline vector<Models::CreateFlowRequestEnvironmentVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::CreateFlowRequestEnvironmentVariables>) };
    inline CreateFlowRequestEnvironment& setVariables(const vector<Models::CreateFlowRequestEnvironmentVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateFlowRequestEnvironment& setVariables(vector<Models::CreateFlowRequestEnvironmentVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<vector<Models::CreateFlowRequestEnvironmentVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
