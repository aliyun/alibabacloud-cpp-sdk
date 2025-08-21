// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceDetailsResponseBodyInstanceDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDetails, instanceDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDetails, instanceDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceDetailsResponseBody() = default ;
    DescribeInstanceDetailsResponseBody(const DescribeInstanceDetailsResponseBody &) = default ;
    DescribeInstanceDetailsResponseBody(DescribeInstanceDetailsResponseBody &&) = default ;
    DescribeInstanceDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDetailsResponseBody() = default ;
    DescribeInstanceDetailsResponseBody& operator=(const DescribeInstanceDetailsResponseBody &) = default ;
    DescribeInstanceDetailsResponseBody& operator=(DescribeInstanceDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceDetails_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceDetails Field Functions 
    bool hasInstanceDetails() const { return this->instanceDetails_ != nullptr;};
    void deleteInstanceDetails() { this->instanceDetails_ = nullptr;};
    inline const vector<DescribeInstanceDetailsResponseBodyInstanceDetails> & instanceDetails() const { DARABONBA_PTR_GET_CONST(instanceDetails_, vector<DescribeInstanceDetailsResponseBodyInstanceDetails>) };
    inline vector<DescribeInstanceDetailsResponseBodyInstanceDetails> instanceDetails() { DARABONBA_PTR_GET(instanceDetails_, vector<DescribeInstanceDetailsResponseBodyInstanceDetails>) };
    inline DescribeInstanceDetailsResponseBody& setInstanceDetails(const vector<DescribeInstanceDetailsResponseBodyInstanceDetails> & instanceDetails) { DARABONBA_PTR_SET_VALUE(instanceDetails_, instanceDetails) };
    inline DescribeInstanceDetailsResponseBody& setInstanceDetails(vector<DescribeInstanceDetailsResponseBodyInstanceDetails> && instanceDetails) { DARABONBA_PTR_SET_RVALUE(instanceDetails_, instanceDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IP address and ISP line information about the Anti-DDoS Proxy instance.
    std::shared_ptr<vector<DescribeInstanceDetailsResponseBodyInstanceDetails>> instanceDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
