// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEAUTOSCALERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceAutoScalerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceAutoScalerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceAutoScalerRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeServiceAutoScalerRequest() = default ;
    DescribeServiceAutoScalerRequest(const DescribeServiceAutoScalerRequest &) = default ;
    DescribeServiceAutoScalerRequest(DescribeServiceAutoScalerRequest &&) = default ;
    DescribeServiceAutoScalerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceAutoScalerRequest() = default ;
    DescribeServiceAutoScalerRequest& operator=(const DescribeServiceAutoScalerRequest &) = default ;
    DescribeServiceAutoScalerRequest& operator=(DescribeServiceAutoScalerRequest &&) = default ;
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
