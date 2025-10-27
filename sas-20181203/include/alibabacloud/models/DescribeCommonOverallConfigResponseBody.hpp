// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMONOVERALLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCommonOverallConfigResponseBodyOverallConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCommonOverallConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommonOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommonOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCommonOverallConfigResponseBody() = default ;
    DescribeCommonOverallConfigResponseBody(const DescribeCommonOverallConfigResponseBody &) = default ;
    DescribeCommonOverallConfigResponseBody(DescribeCommonOverallConfigResponseBody &&) = default ;
    DescribeCommonOverallConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommonOverallConfigResponseBody() = default ;
    DescribeCommonOverallConfigResponseBody& operator=(const DescribeCommonOverallConfigResponseBody &) = default ;
    DescribeCommonOverallConfigResponseBody& operator=(DescribeCommonOverallConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overallConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // overallConfig Field Functions 
    bool hasOverallConfig() const { return this->overallConfig_ != nullptr;};
    void deleteOverallConfig() { this->overallConfig_ = nullptr;};
    inline const DescribeCommonOverallConfigResponseBodyOverallConfig & overallConfig() const { DARABONBA_PTR_GET_CONST(overallConfig_, DescribeCommonOverallConfigResponseBodyOverallConfig) };
    inline DescribeCommonOverallConfigResponseBodyOverallConfig overallConfig() { DARABONBA_PTR_GET(overallConfig_, DescribeCommonOverallConfigResponseBodyOverallConfig) };
    inline DescribeCommonOverallConfigResponseBody& setOverallConfig(const DescribeCommonOverallConfigResponseBodyOverallConfig & overallConfig) { DARABONBA_PTR_SET_VALUE(overallConfig_, overallConfig) };
    inline DescribeCommonOverallConfigResponseBody& setOverallConfig(DescribeCommonOverallConfigResponseBodyOverallConfig && overallConfig) { DARABONBA_PTR_SET_RVALUE(overallConfig_, overallConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCommonOverallConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the feature.
    std::shared_ptr<DescribeCommonOverallConfigResponseBodyOverallConfig> overallConfig_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
