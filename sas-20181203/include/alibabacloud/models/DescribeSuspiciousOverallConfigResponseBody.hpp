// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSuspiciousOverallConfigResponseBodyOverallConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspiciousOverallConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousOverallConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallConfig, overallConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSuspiciousOverallConfigResponseBody() = default ;
    DescribeSuspiciousOverallConfigResponseBody(const DescribeSuspiciousOverallConfigResponseBody &) = default ;
    DescribeSuspiciousOverallConfigResponseBody(DescribeSuspiciousOverallConfigResponseBody &&) = default ;
    DescribeSuspiciousOverallConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousOverallConfigResponseBody() = default ;
    DescribeSuspiciousOverallConfigResponseBody& operator=(const DescribeSuspiciousOverallConfigResponseBody &) = default ;
    DescribeSuspiciousOverallConfigResponseBody& operator=(DescribeSuspiciousOverallConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overallConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // overallConfig Field Functions 
    bool hasOverallConfig() const { return this->overallConfig_ != nullptr;};
    void deleteOverallConfig() { this->overallConfig_ = nullptr;};
    inline const DescribeSuspiciousOverallConfigResponseBodyOverallConfig & overallConfig() const { DARABONBA_PTR_GET_CONST(overallConfig_, DescribeSuspiciousOverallConfigResponseBodyOverallConfig) };
    inline DescribeSuspiciousOverallConfigResponseBodyOverallConfig overallConfig() { DARABONBA_PTR_GET(overallConfig_, DescribeSuspiciousOverallConfigResponseBodyOverallConfig) };
    inline DescribeSuspiciousOverallConfigResponseBody& setOverallConfig(const DescribeSuspiciousOverallConfigResponseBodyOverallConfig & overallConfig) { DARABONBA_PTR_SET_VALUE(overallConfig_, overallConfig) };
    inline DescribeSuspiciousOverallConfigResponseBody& setOverallConfig(DescribeSuspiciousOverallConfigResponseBodyOverallConfig && overallConfig) { DARABONBA_PTR_SET_RVALUE(overallConfig_, overallConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspiciousOverallConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration.
    std::shared_ptr<DescribeSuspiciousOverallConfigResponseBodyOverallConfig> overallConfig_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
