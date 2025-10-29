// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityRuleResponseBodyDataQualityRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRule, dataQualityRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRule, dataQualityRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityRuleResponseBody() = default ;
    GetDataQualityRuleResponseBody(const GetDataQualityRuleResponseBody &) = default ;
    GetDataQualityRuleResponseBody(GetDataQualityRuleResponseBody &&) = default ;
    GetDataQualityRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleResponseBody() = default ;
    GetDataQualityRuleResponseBody& operator=(const GetDataQualityRuleResponseBody &) = default ;
    GetDataQualityRuleResponseBody& operator=(GetDataQualityRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataQualityRule_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataQualityRule Field Functions 
    bool hasDataQualityRule() const { return this->dataQualityRule_ != nullptr;};
    void deleteDataQualityRule() { this->dataQualityRule_ = nullptr;};
    inline const GetDataQualityRuleResponseBodyDataQualityRule & dataQualityRule() const { DARABONBA_PTR_GET_CONST(dataQualityRule_, GetDataQualityRuleResponseBodyDataQualityRule) };
    inline GetDataQualityRuleResponseBodyDataQualityRule dataQualityRule() { DARABONBA_PTR_GET(dataQualityRule_, GetDataQualityRuleResponseBodyDataQualityRule) };
    inline GetDataQualityRuleResponseBody& setDataQualityRule(const GetDataQualityRuleResponseBodyDataQualityRule & dataQualityRule) { DARABONBA_PTR_SET_VALUE(dataQualityRule_, dataQualityRule) };
    inline GetDataQualityRuleResponseBody& setDataQualityRule(GetDataQualityRuleResponseBodyDataQualityRule && dataQualityRule) { DARABONBA_PTR_SET_RVALUE(dataQualityRule_, dataQualityRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the rule.
    std::shared_ptr<GetDataQualityRuleResponseBodyDataQualityRule> dataQualityRule_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
