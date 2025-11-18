// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceEndpointsResponseBodyInstanceEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceEndpoints, instanceEndpoints_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceEndpoints, instanceEndpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceEndpointsResponseBody() = default ;
    DescribeInstanceEndpointsResponseBody(const DescribeInstanceEndpointsResponseBody &) = default ;
    DescribeInstanceEndpointsResponseBody(DescribeInstanceEndpointsResponseBody &&) = default ;
    DescribeInstanceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceEndpointsResponseBody() = default ;
    DescribeInstanceEndpointsResponseBody& operator=(const DescribeInstanceEndpointsResponseBody &) = default ;
    DescribeInstanceEndpointsResponseBody& operator=(DescribeInstanceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceEndpoints_ == nullptr
        && return this->instanceName_ == nullptr && return this->requestId_ == nullptr; };
    // instanceEndpoints Field Functions 
    bool hasInstanceEndpoints() const { return this->instanceEndpoints_ != nullptr;};
    void deleteInstanceEndpoints() { this->instanceEndpoints_ = nullptr;};
    inline const vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints> & instanceEndpoints() const { DARABONBA_PTR_GET_CONST(instanceEndpoints_, vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints>) };
    inline vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints> instanceEndpoints() { DARABONBA_PTR_GET(instanceEndpoints_, vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints>) };
    inline DescribeInstanceEndpointsResponseBody& setInstanceEndpoints(const vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints> & instanceEndpoints) { DARABONBA_PTR_SET_VALUE(instanceEndpoints_, instanceEndpoints) };
    inline DescribeInstanceEndpointsResponseBody& setInstanceEndpoints(vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints> && instanceEndpoints) { DARABONBA_PTR_SET_RVALUE(instanceEndpoints_, instanceEndpoints) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceEndpointsResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeInstanceEndpointsResponseBodyInstanceEndpoints>> instanceEndpoints_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
