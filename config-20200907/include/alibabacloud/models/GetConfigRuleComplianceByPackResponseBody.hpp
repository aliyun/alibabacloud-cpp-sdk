// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULECOMPLIANCEBYPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleComplianceByPackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleComplianceResult, configRuleComplianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleComplianceByPackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleComplianceResult, configRuleComplianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConfigRuleComplianceByPackResponseBody() = default ;
    GetConfigRuleComplianceByPackResponseBody(const GetConfigRuleComplianceByPackResponseBody &) = default ;
    GetConfigRuleComplianceByPackResponseBody(GetConfigRuleComplianceByPackResponseBody &&) = default ;
    GetConfigRuleComplianceByPackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleComplianceByPackResponseBody() = default ;
    GetConfigRuleComplianceByPackResponseBody& operator=(const GetConfigRuleComplianceByPackResponseBody &) = default ;
    GetConfigRuleComplianceByPackResponseBody& operator=(GetConfigRuleComplianceByPackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleComplianceResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // configRuleComplianceResult Field Functions 
    bool hasConfigRuleComplianceResult() const { return this->configRuleComplianceResult_ != nullptr;};
    void deleteConfigRuleComplianceResult() { this->configRuleComplianceResult_ = nullptr;};
    inline const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult & configRuleComplianceResult() const { DARABONBA_PTR_GET_CONST(configRuleComplianceResult_, GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult) };
    inline GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult configRuleComplianceResult() { DARABONBA_PTR_GET(configRuleComplianceResult_, GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult) };
    inline GetConfigRuleComplianceByPackResponseBody& setConfigRuleComplianceResult(const GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult & configRuleComplianceResult) { DARABONBA_PTR_SET_VALUE(configRuleComplianceResult_, configRuleComplianceResult) };
    inline GetConfigRuleComplianceByPackResponseBody& setConfigRuleComplianceResult(GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult && configRuleComplianceResult) { DARABONBA_PTR_SET_RVALUE(configRuleComplianceResult_, configRuleComplianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConfigRuleComplianceByPackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation results returned.
    std::shared_ptr<GetConfigRuleComplianceByPackResponseBodyConfigRuleComplianceResult> configRuleComplianceResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
