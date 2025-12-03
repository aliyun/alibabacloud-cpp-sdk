// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSYSTEMPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSYSTEMPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodySystemParametersSystemParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodySystemParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodySystemParameters& obj) { 
      DARABONBA_PTR_TO_JSON(SystemParameter, systemParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodySystemParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemParameter, systemParameter_);
    };
    DescribeApiHistoryResponseBodySystemParameters() = default ;
    DescribeApiHistoryResponseBodySystemParameters(const DescribeApiHistoryResponseBodySystemParameters &) = default ;
    DescribeApiHistoryResponseBodySystemParameters(DescribeApiHistoryResponseBodySystemParameters &&) = default ;
    DescribeApiHistoryResponseBodySystemParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodySystemParameters() = default ;
    DescribeApiHistoryResponseBodySystemParameters& operator=(const DescribeApiHistoryResponseBodySystemParameters &) = default ;
    DescribeApiHistoryResponseBodySystemParameters& operator=(DescribeApiHistoryResponseBodySystemParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->systemParameter_ == nullptr; };
    // systemParameter Field Functions 
    bool hasSystemParameter() const { return this->systemParameter_ != nullptr;};
    void deleteSystemParameter() { this->systemParameter_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter> & systemParameter() const { DARABONBA_PTR_GET_CONST(systemParameter_, vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter>) };
    inline vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter> systemParameter() { DARABONBA_PTR_GET(systemParameter_, vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter>) };
    inline DescribeApiHistoryResponseBodySystemParameters& setSystemParameter(const vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter> & systemParameter) { DARABONBA_PTR_SET_VALUE(systemParameter_, systemParameter) };
    inline DescribeApiHistoryResponseBodySystemParameters& setSystemParameter(vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter> && systemParameter) { DARABONBA_PTR_SET_RVALUE(systemParameter_, systemParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodySystemParametersSystemParameter>> systemParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
