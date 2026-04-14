// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeGroupRequest() = default ;
    DescribeGroupRequest(const DescribeGroupRequest &) = default ;
    DescribeGroupRequest(DescribeGroupRequest &&) = default ;
    DescribeGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupRequest() = default ;
    DescribeGroupRequest& operator=(const DescribeGroupRequest &) = default ;
    DescribeGroupRequest& operator=(DescribeGroupRequest &&) = default ;
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
