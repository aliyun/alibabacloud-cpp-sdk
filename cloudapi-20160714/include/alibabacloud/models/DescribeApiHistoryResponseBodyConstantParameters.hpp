// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYCONSTANTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYCONSTANTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyConstantParametersConstantParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyConstantParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyConstantParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ConstantParameter, constantParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyConstantParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstantParameter, constantParameter_);
    };
    DescribeApiHistoryResponseBodyConstantParameters() = default ;
    DescribeApiHistoryResponseBodyConstantParameters(const DescribeApiHistoryResponseBodyConstantParameters &) = default ;
    DescribeApiHistoryResponseBodyConstantParameters(DescribeApiHistoryResponseBodyConstantParameters &&) = default ;
    DescribeApiHistoryResponseBodyConstantParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyConstantParameters() = default ;
    DescribeApiHistoryResponseBodyConstantParameters& operator=(const DescribeApiHistoryResponseBodyConstantParameters &) = default ;
    DescribeApiHistoryResponseBodyConstantParameters& operator=(DescribeApiHistoryResponseBodyConstantParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->constantParameter_ == nullptr; };
    // constantParameter Field Functions 
    bool hasConstantParameter() const { return this->constantParameter_ != nullptr;};
    void deleteConstantParameter() { this->constantParameter_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter> & constantParameter() const { DARABONBA_PTR_GET_CONST(constantParameter_, vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter>) };
    inline vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter> constantParameter() { DARABONBA_PTR_GET(constantParameter_, vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter>) };
    inline DescribeApiHistoryResponseBodyConstantParameters& setConstantParameter(const vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter> & constantParameter) { DARABONBA_PTR_SET_VALUE(constantParameter_, constantParameter) };
    inline DescribeApiHistoryResponseBodyConstantParameters& setConstantParameter(vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter> && constantParameter) { DARABONBA_PTR_SET_RVALUE(constantParameter_, constantParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyConstantParametersConstantParameter>> constantParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
