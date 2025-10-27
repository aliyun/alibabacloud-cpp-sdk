// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODYFLOWSENVIRONMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODYFLOWSENVIRONMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFlowsResponseBodyFlowsEnvironmentVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowsResponseBodyFlowsEnvironment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowsResponseBodyFlowsEnvironment& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowsResponseBodyFlowsEnvironment& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ListFlowsResponseBodyFlowsEnvironment() = default ;
    ListFlowsResponseBodyFlowsEnvironment(const ListFlowsResponseBodyFlowsEnvironment &) = default ;
    ListFlowsResponseBodyFlowsEnvironment(ListFlowsResponseBodyFlowsEnvironment &&) = default ;
    ListFlowsResponseBodyFlowsEnvironment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowsResponseBodyFlowsEnvironment() = default ;
    ListFlowsResponseBodyFlowsEnvironment& operator=(const ListFlowsResponseBodyFlowsEnvironment &) = default ;
    ListFlowsResponseBodyFlowsEnvironment& operator=(ListFlowsResponseBodyFlowsEnvironment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables>) };
    inline vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables>) };
    inline ListFlowsResponseBodyFlowsEnvironment& setVariables(const vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ListFlowsResponseBodyFlowsEnvironment& setVariables(vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<vector<Models::ListFlowsResponseBodyFlowsEnvironmentVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
