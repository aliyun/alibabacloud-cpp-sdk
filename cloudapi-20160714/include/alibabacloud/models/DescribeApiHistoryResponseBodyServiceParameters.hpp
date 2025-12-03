// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIHISTORYRESPONSEBODYSERVICEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiHistoryResponseBodyServiceParametersServiceParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiHistoryResponseBodyServiceParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiHistoryResponseBodyServiceParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceParameter, serviceParameter_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiHistoryResponseBodyServiceParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceParameter, serviceParameter_);
    };
    DescribeApiHistoryResponseBodyServiceParameters() = default ;
    DescribeApiHistoryResponseBodyServiceParameters(const DescribeApiHistoryResponseBodyServiceParameters &) = default ;
    DescribeApiHistoryResponseBodyServiceParameters(DescribeApiHistoryResponseBodyServiceParameters &&) = default ;
    DescribeApiHistoryResponseBodyServiceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiHistoryResponseBodyServiceParameters() = default ;
    DescribeApiHistoryResponseBodyServiceParameters& operator=(const DescribeApiHistoryResponseBodyServiceParameters &) = default ;
    DescribeApiHistoryResponseBodyServiceParameters& operator=(DescribeApiHistoryResponseBodyServiceParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceParameter_ == nullptr; };
    // serviceParameter Field Functions 
    bool hasServiceParameter() const { return this->serviceParameter_ != nullptr;};
    void deleteServiceParameter() { this->serviceParameter_ = nullptr;};
    inline const vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter> & serviceParameter() const { DARABONBA_PTR_GET_CONST(serviceParameter_, vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter>) };
    inline vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter> serviceParameter() { DARABONBA_PTR_GET(serviceParameter_, vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter>) };
    inline DescribeApiHistoryResponseBodyServiceParameters& setServiceParameter(const vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter> & serviceParameter) { DARABONBA_PTR_SET_VALUE(serviceParameter_, serviceParameter) };
    inline DescribeApiHistoryResponseBodyServiceParameters& setServiceParameter(vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter> && serviceParameter) { DARABONBA_PTR_SET_RVALUE(serviceParameter_, serviceParameter) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiHistoryResponseBodyServiceParametersServiceParameter>> serviceParameter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
