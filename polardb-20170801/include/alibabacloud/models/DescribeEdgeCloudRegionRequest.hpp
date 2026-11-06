// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGECLOUDREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGECLOUDREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeEdgeCloudRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeCloudRegionRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeCloudRegionRequest& obj) { 
      (void)j; (void)obj; 
    };
    DescribeEdgeCloudRegionRequest() = default ;
    DescribeEdgeCloudRegionRequest(const DescribeEdgeCloudRegionRequest &) = default ;
    DescribeEdgeCloudRegionRequest(DescribeEdgeCloudRegionRequest &&) = default ;
    DescribeEdgeCloudRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeCloudRegionRequest() = default ;
    DescribeEdgeCloudRegionRequest& operator=(const DescribeEdgeCloudRegionRequest &) = default ;
    DescribeEdgeCloudRegionRequest& operator=(DescribeEdgeCloudRegionRequest &&) = default ;
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
