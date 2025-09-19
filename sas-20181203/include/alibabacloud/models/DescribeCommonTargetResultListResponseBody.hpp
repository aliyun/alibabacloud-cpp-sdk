// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETRESULTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONTARGETRESULTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCommonTargetResultListResponseBodyTargetConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonTargetResultListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonTargetResultListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TargetConfig, targetConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonTargetResultListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TargetConfig, targetConfig_);
    };
    DescribeCommonTargetResultListResponseBody() = default ;
    DescribeCommonTargetResultListResponseBody(const DescribeCommonTargetResultListResponseBody &) = default ;
    DescribeCommonTargetResultListResponseBody(DescribeCommonTargetResultListResponseBody &&) = default ;
    DescribeCommonTargetResultListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonTargetResultListResponseBody() = default ;
    DescribeCommonTargetResultListResponseBody& operator=(const DescribeCommonTargetResultListResponseBody &) = default ;
    DescribeCommonTargetResultListResponseBody& operator=(DescribeCommonTargetResultListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->targetConfig_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonTargetResultListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetConfig Field Functions 
    bool hasTargetConfig() const { return this->targetConfig_ != nullptr;};
    void deleteTargetConfig() { this->targetConfig_ = nullptr;};
    inline const DescribeCommonTargetResultListResponseBodyTargetConfig & targetConfig() const { DARABONBA_PTR_GET_CONST(targetConfig_, DescribeCommonTargetResultListResponseBodyTargetConfig) };
    inline DescribeCommonTargetResultListResponseBodyTargetConfig targetConfig() { DARABONBA_PTR_GET(targetConfig_, DescribeCommonTargetResultListResponseBodyTargetConfig) };
    inline DescribeCommonTargetResultListResponseBody& setTargetConfig(const DescribeCommonTargetResultListResponseBodyTargetConfig & targetConfig) { DARABONBA_PTR_SET_VALUE(targetConfig_, targetConfig) };
    inline DescribeCommonTargetResultListResponseBody& setTargetConfig(DescribeCommonTargetResultListResponseBodyTargetConfig && targetConfig) { DARABONBA_PTR_SET_RVALUE(targetConfig_, targetConfig) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the configuration item.
    std::shared_ptr<DescribeCommonTargetResultListResponseBodyTargetConfig> targetConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
