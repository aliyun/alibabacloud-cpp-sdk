// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAggregateFunctionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAggregateFunctionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Function, function_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAggregateFunctionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Function, function_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    DescribeAggregateFunctionResponseBodyData() = default ;
    DescribeAggregateFunctionResponseBodyData(const DescribeAggregateFunctionResponseBodyData &) = default ;
    DescribeAggregateFunctionResponseBodyData(DescribeAggregateFunctionResponseBodyData &&) = default ;
    DescribeAggregateFunctionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAggregateFunctionResponseBodyData() = default ;
    DescribeAggregateFunctionResponseBodyData& operator=(const DescribeAggregateFunctionResponseBodyData &) = default ;
    DescribeAggregateFunctionResponseBodyData& operator=(DescribeAggregateFunctionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->function_ != nullptr
        && this->functionName_ != nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline string function() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
    inline DescribeAggregateFunctionResponseBodyData& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeAggregateFunctionResponseBodyData& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The aggregate function.
    std::shared_ptr<string> function_ = nullptr;
    // The display name of the aggregate function.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
