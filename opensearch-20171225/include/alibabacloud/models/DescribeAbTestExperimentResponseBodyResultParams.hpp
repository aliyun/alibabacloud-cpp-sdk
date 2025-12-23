// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABTESTEXPERIMENTRESPONSEBODYRESULTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABTESTEXPERIMENTRESPONSEBODYRESULTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeABTestExperimentResponseBodyResultParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeABTestExperimentResponseBodyResultParams& obj) { 
      DARABONBA_PTR_TO_JSON(first_formula_name, firstFormulaName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeABTestExperimentResponseBodyResultParams& obj) { 
      DARABONBA_PTR_FROM_JSON(first_formula_name, firstFormulaName_);
    };
    DescribeABTestExperimentResponseBodyResultParams() = default ;
    DescribeABTestExperimentResponseBodyResultParams(const DescribeABTestExperimentResponseBodyResultParams &) = default ;
    DescribeABTestExperimentResponseBodyResultParams(DescribeABTestExperimentResponseBodyResultParams &&) = default ;
    DescribeABTestExperimentResponseBodyResultParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeABTestExperimentResponseBodyResultParams() = default ;
    DescribeABTestExperimentResponseBodyResultParams& operator=(const DescribeABTestExperimentResponseBodyResultParams &) = default ;
    DescribeABTestExperimentResponseBodyResultParams& operator=(DescribeABTestExperimentResponseBodyResultParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firstFormulaName_ == nullptr; };
    // firstFormulaName Field Functions 
    bool hasFirstFormulaName() const { return this->firstFormulaName_ != nullptr;};
    void deleteFirstFormulaName() { this->firstFormulaName_ = nullptr;};
    inline string firstFormulaName() const { DARABONBA_PTR_GET_DEFAULT(firstFormulaName_, "") };
    inline DescribeABTestExperimentResponseBodyResultParams& setFirstFormulaName(string firstFormulaName) { DARABONBA_PTR_SET_VALUE(firstFormulaName_, firstFormulaName) };


  protected:
    // The name of the rough sort policy.
    std::shared_ptr<string> firstFormulaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
