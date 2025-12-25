// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesRequestDescribeInstancesRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeInstancesRequest, describeInstancesRequest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeInstancesRequest, describeInstancesRequest_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeInstancesRequest_ == nullptr; };
    // describeInstancesRequest Field Functions 
    bool hasDescribeInstancesRequest() const { return this->describeInstancesRequest_ != nullptr;};
    void deleteDescribeInstancesRequest() { this->describeInstancesRequest_ = nullptr;};
    inline const DescribeInstancesRequestDescribeInstancesRequest & describeInstancesRequest() const { DARABONBA_PTR_GET_CONST(describeInstancesRequest_, DescribeInstancesRequestDescribeInstancesRequest) };
    inline DescribeInstancesRequestDescribeInstancesRequest describeInstancesRequest() { DARABONBA_PTR_GET(describeInstancesRequest_, DescribeInstancesRequestDescribeInstancesRequest) };
    inline DescribeInstancesRequest& setDescribeInstancesRequest(const DescribeInstancesRequestDescribeInstancesRequest & describeInstancesRequest) { DARABONBA_PTR_SET_VALUE(describeInstancesRequest_, describeInstancesRequest) };
    inline DescribeInstancesRequest& setDescribeInstancesRequest(DescribeInstancesRequestDescribeInstancesRequest && describeInstancesRequest) { DARABONBA_PTR_SET_RVALUE(describeInstancesRequest_, describeInstancesRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<DescribeInstancesRequestDescribeInstancesRequest> describeInstancesRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
