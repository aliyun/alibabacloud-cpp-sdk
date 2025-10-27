// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWRESPONSEBODYENVIRONMENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWRESPONSEBODYENVIRONMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowResponseBodyEnvironmentVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeFlowResponseBodyEnvironment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowResponseBodyEnvironment& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowResponseBodyEnvironment& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    DescribeFlowResponseBodyEnvironment() = default ;
    DescribeFlowResponseBodyEnvironment(const DescribeFlowResponseBodyEnvironment &) = default ;
    DescribeFlowResponseBodyEnvironment(DescribeFlowResponseBodyEnvironment &&) = default ;
    DescribeFlowResponseBodyEnvironment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowResponseBodyEnvironment() = default ;
    DescribeFlowResponseBodyEnvironment& operator=(const DescribeFlowResponseBodyEnvironment &) = default ;
    DescribeFlowResponseBodyEnvironment& operator=(DescribeFlowResponseBodyEnvironment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::DescribeFlowResponseBodyEnvironmentVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::DescribeFlowResponseBodyEnvironmentVariables>) };
    inline vector<Models::DescribeFlowResponseBodyEnvironmentVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::DescribeFlowResponseBodyEnvironmentVariables>) };
    inline DescribeFlowResponseBodyEnvironment& setVariables(const vector<Models::DescribeFlowResponseBodyEnvironmentVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline DescribeFlowResponseBodyEnvironment& setVariables(vector<Models::DescribeFlowResponseBodyEnvironmentVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    std::shared_ptr<vector<Models::DescribeFlowResponseBodyEnvironmentVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
