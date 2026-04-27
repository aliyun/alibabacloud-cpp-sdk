// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERTRAILCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERTRAILCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeUserTrailCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserTrailCountRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserTrailCountRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeUserTrailCountRequest() = default ;
    DescribeUserTrailCountRequest(const DescribeUserTrailCountRequest &) = default ;
    DescribeUserTrailCountRequest(DescribeUserTrailCountRequest &&) = default ;
    DescribeUserTrailCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserTrailCountRequest() = default ;
    DescribeUserTrailCountRequest& operator=(const DescribeUserTrailCountRequest &) = default ;
    DescribeUserTrailCountRequest& operator=(DescribeUserTrailCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
