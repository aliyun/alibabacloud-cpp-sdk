// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceEndpointsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceEndpointsRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeServiceEndpointsRequest() = default ;
    DescribeServiceEndpointsRequest(const DescribeServiceEndpointsRequest &) = default ;
    DescribeServiceEndpointsRequest(DescribeServiceEndpointsRequest &&) = default ;
    DescribeServiceEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceEndpointsRequest() = default ;
    DescribeServiceEndpointsRequest& operator=(const DescribeServiceEndpointsRequest &) = default ;
    DescribeServiceEndpointsRequest& operator=(DescribeServiceEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
