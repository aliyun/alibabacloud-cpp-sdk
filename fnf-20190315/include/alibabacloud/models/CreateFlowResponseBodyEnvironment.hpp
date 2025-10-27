// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWRESPONSEBODYENVIRONMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWRESPONSEBODYENVIRONMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFlowResponseBodyEnvironmentVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateFlowResponseBodyEnvironment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowResponseBodyEnvironment& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowResponseBodyEnvironment& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    CreateFlowResponseBodyEnvironment() = default ;
    CreateFlowResponseBodyEnvironment(const CreateFlowResponseBodyEnvironment &) = default ;
    CreateFlowResponseBodyEnvironment(CreateFlowResponseBodyEnvironment &&) = default ;
    CreateFlowResponseBodyEnvironment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowResponseBodyEnvironment() = default ;
    CreateFlowResponseBodyEnvironment& operator=(const CreateFlowResponseBodyEnvironment &) = default ;
    CreateFlowResponseBodyEnvironment& operator=(CreateFlowResponseBodyEnvironment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::CreateFlowResponseBodyEnvironmentVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::CreateFlowResponseBodyEnvironmentVariables>) };
    inline vector<Models::CreateFlowResponseBodyEnvironmentVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::CreateFlowResponseBodyEnvironmentVariables>) };
    inline CreateFlowResponseBodyEnvironment& setVariables(const vector<Models::CreateFlowResponseBodyEnvironmentVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateFlowResponseBodyEnvironment& setVariables(vector<Models::CreateFlowResponseBodyEnvironmentVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<vector<Models::CreateFlowResponseBodyEnvironmentVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
