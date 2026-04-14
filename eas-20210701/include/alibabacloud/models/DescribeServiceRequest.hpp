// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeServiceRequest() = default ;
    DescribeServiceRequest(const DescribeServiceRequest &) = default ;
    DescribeServiceRequest(DescribeServiceRequest &&) = default ;
    DescribeServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceRequest() = default ;
    DescribeServiceRequest& operator=(const DescribeServiceRequest &) = default ;
    DescribeServiceRequest& operator=(DescribeServiceRequest &&) = default ;
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
