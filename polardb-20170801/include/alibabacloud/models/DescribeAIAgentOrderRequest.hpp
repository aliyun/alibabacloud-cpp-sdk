// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIAGENTORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIAGENTORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIAgentOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAgentOrderRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAgentOrderRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeAIAgentOrderRequest() = default ;
    DescribeAIAgentOrderRequest(const DescribeAIAgentOrderRequest &) = default ;
    DescribeAIAgentOrderRequest(DescribeAIAgentOrderRequest &&) = default ;
    DescribeAIAgentOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAgentOrderRequest() = default ;
    DescribeAIAgentOrderRequest& operator=(const DescribeAIAgentOrderRequest &) = default ;
    DescribeAIAgentOrderRequest& operator=(DescribeAIAgentOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
