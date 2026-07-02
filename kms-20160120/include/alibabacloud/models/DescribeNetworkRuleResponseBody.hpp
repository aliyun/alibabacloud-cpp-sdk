// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeNetworkRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourcePrivateIp, sourcePrivateIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourcePrivateIp, sourcePrivateIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeNetworkRuleResponseBody() = default ;
    DescribeNetworkRuleResponseBody(const DescribeNetworkRuleResponseBody &) = default ;
    DescribeNetworkRuleResponseBody(DescribeNetworkRuleResponseBody &&) = default ;
    DescribeNetworkRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRuleResponseBody() = default ;
    DescribeNetworkRuleResponseBody& operator=(const DescribeNetworkRuleResponseBody &) = default ;
    DescribeNetworkRuleResponseBody& operator=(DescribeNetworkRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && this->description_ == nullptr && this->requestId_ == nullptr && this->sourcePrivateIp_ == nullptr && this->type_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeNetworkRuleResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkRuleResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourcePrivateIp Field Functions 
    bool hasSourcePrivateIp() const { return this->sourcePrivateIp_ != nullptr;};
    void deleteSourcePrivateIp() { this->sourcePrivateIp_ = nullptr;};
    inline string getSourcePrivateIp() const { DARABONBA_PTR_GET_DEFAULT(sourcePrivateIp_, "") };
    inline DescribeNetworkRuleResponseBody& setSourcePrivateIp(string sourcePrivateIp) { DARABONBA_PTR_SET_VALUE(sourcePrivateIp_, sourcePrivateIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNetworkRuleResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ARN of the network rule.
    shared_ptr<string> arn_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The ID of the request. Alibaba Cloud generates a unique ID for each request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The private IP addresses or private CIDR blocks.
    shared_ptr<string> sourcePrivateIp_ {};
    // The network type. The only valid value is Private, which means only private IP addresses are supported.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
