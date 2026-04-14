// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeResourceRequest() = default ;
    DescribeResourceRequest(const DescribeResourceRequest &) = default ;
    DescribeResourceRequest(DescribeResourceRequest &&) = default ;
    DescribeResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceRequest() = default ;
    DescribeResourceRequest& operator=(const DescribeResourceRequest &) = default ;
    DescribeResourceRequest& operator=(DescribeResourceRequest &&) = default ;
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
