// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULEATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRuleAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRuleAttributes, networkRuleAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRuleAttributes, networkRuleAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkRuleAttributesResponseBody() = default ;
    DescribeNetworkRuleAttributesResponseBody(const DescribeNetworkRuleAttributesResponseBody &) = default ;
    DescribeNetworkRuleAttributesResponseBody(DescribeNetworkRuleAttributesResponseBody &&) = default ;
    DescribeNetworkRuleAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleAttributesResponseBody() = default ;
    DescribeNetworkRuleAttributesResponseBody& operator=(const DescribeNetworkRuleAttributesResponseBody &) = default ;
    DescribeNetworkRuleAttributesResponseBody& operator=(DescribeNetworkRuleAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkRuleAttributes_ != nullptr
        && this->requestId_ != nullptr; };
    // networkRuleAttributes Field Functions 
    bool hasNetworkRuleAttributes() const { return this->networkRuleAttributes_ != nullptr;};
    void deleteNetworkRuleAttributes() { this->networkRuleAttributes_ = nullptr;};
    inline const vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes> & networkRuleAttributes() const { DARABONBA_PTR_GET_CONST(networkRuleAttributes_, vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes>) };
    inline vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes> networkRuleAttributes() { DARABONBA_PTR_GET(networkRuleAttributes_, vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes>) };
    inline DescribeNetworkRuleAttributesResponseBody& setNetworkRuleAttributes(const vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes> & networkRuleAttributes) { DARABONBA_PTR_SET_VALUE(networkRuleAttributes_, networkRuleAttributes) };
    inline DescribeNetworkRuleAttributesResponseBody& setNetworkRuleAttributes(vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes> && networkRuleAttributes) { DARABONBA_PTR_SET_RVALUE(networkRuleAttributes_, networkRuleAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkRuleAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the mitigation settings of the port forwarding rule for a non-website service. The mitigation settings include session persistence and DDoS mitigation policies.
    std::shared_ptr<vector<DescribeNetworkRuleAttributesResponseBodyNetworkRuleAttributes>> networkRuleAttributes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
