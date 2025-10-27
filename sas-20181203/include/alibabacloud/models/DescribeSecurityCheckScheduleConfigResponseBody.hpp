// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYCHECKSCHEDULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYCHECKSCHEDULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityCheckScheduleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityCheckScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskCheckJobConfig, riskCheckJobConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityCheckScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskCheckJobConfig, riskCheckJobConfig_);
    };
    DescribeSecurityCheckScheduleConfigResponseBody() = default ;
    DescribeSecurityCheckScheduleConfigResponseBody(const DescribeSecurityCheckScheduleConfigResponseBody &) = default ;
    DescribeSecurityCheckScheduleConfigResponseBody(DescribeSecurityCheckScheduleConfigResponseBody &&) = default ;
    DescribeSecurityCheckScheduleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityCheckScheduleConfigResponseBody() = default ;
    DescribeSecurityCheckScheduleConfigResponseBody& operator=(const DescribeSecurityCheckScheduleConfigResponseBody &) = default ;
    DescribeSecurityCheckScheduleConfigResponseBody& operator=(DescribeSecurityCheckScheduleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->riskCheckJobConfig_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityCheckScheduleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskCheckJobConfig Field Functions 
    bool hasRiskCheckJobConfig() const { return this->riskCheckJobConfig_ != nullptr;};
    void deleteRiskCheckJobConfig() { this->riskCheckJobConfig_ = nullptr;};
    inline const DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig & riskCheckJobConfig() const { DARABONBA_PTR_GET_CONST(riskCheckJobConfig_, DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig) };
    inline DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig riskCheckJobConfig() { DARABONBA_PTR_GET(riskCheckJobConfig_, DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig) };
    inline DescribeSecurityCheckScheduleConfigResponseBody& setRiskCheckJobConfig(const DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig & riskCheckJobConfig) { DARABONBA_PTR_SET_VALUE(riskCheckJobConfig_, riskCheckJobConfig) };
    inline DescribeSecurityCheckScheduleConfigResponseBody& setRiskCheckJobConfig(DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig && riskCheckJobConfig) { DARABONBA_PTR_SET_RVALUE(riskCheckJobConfig_, riskCheckJobConfig) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of custom check tasks.
    std::shared_ptr<DescribeSecurityCheckScheduleConfigResponseBodyRiskCheckJobConfig> riskCheckJobConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
