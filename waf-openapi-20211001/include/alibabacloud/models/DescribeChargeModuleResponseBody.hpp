// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGEMODULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGEMODULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChargeModuleResponseBodyChargeModules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeModuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeModuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeModules, chargeModules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeModuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeModules, chargeModules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChargeModuleResponseBody() = default ;
    DescribeChargeModuleResponseBody(const DescribeChargeModuleResponseBody &) = default ;
    DescribeChargeModuleResponseBody(DescribeChargeModuleResponseBody &&) = default ;
    DescribeChargeModuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeModuleResponseBody() = default ;
    DescribeChargeModuleResponseBody& operator=(const DescribeChargeModuleResponseBody &) = default ;
    DescribeChargeModuleResponseBody& operator=(DescribeChargeModuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeModules_ == nullptr
        && return this->requestId_ == nullptr; };
    // chargeModules Field Functions 
    bool hasChargeModules() const { return this->chargeModules_ != nullptr;};
    void deleteChargeModules() { this->chargeModules_ = nullptr;};
    inline const vector<DescribeChargeModuleResponseBodyChargeModules> & chargeModules() const { DARABONBA_PTR_GET_CONST(chargeModules_, vector<DescribeChargeModuleResponseBodyChargeModules>) };
    inline vector<DescribeChargeModuleResponseBodyChargeModules> chargeModules() { DARABONBA_PTR_GET(chargeModules_, vector<DescribeChargeModuleResponseBodyChargeModules>) };
    inline DescribeChargeModuleResponseBody& setChargeModules(const vector<DescribeChargeModuleResponseBodyChargeModules> & chargeModules) { DARABONBA_PTR_SET_VALUE(chargeModules_, chargeModules) };
    inline DescribeChargeModuleResponseBody& setChargeModules(vector<DescribeChargeModuleResponseBodyChargeModules> && chargeModules) { DARABONBA_PTR_SET_RVALUE(chargeModules_, chargeModules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChargeModuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeChargeModuleResponseBodyChargeModules>> chargeModules_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
