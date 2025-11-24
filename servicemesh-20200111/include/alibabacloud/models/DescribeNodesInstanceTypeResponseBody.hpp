// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODESINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODESINSTANCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNodesInstanceTypeResponseBodyInstanceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNodesInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodesInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodesInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNodesInstanceTypeResponseBody() = default ;
    DescribeNodesInstanceTypeResponseBody(const DescribeNodesInstanceTypeResponseBody &) = default ;
    DescribeNodesInstanceTypeResponseBody(DescribeNodesInstanceTypeResponseBody &&) = default ;
    DescribeNodesInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodesInstanceTypeResponseBody() = default ;
    DescribeNodesInstanceTypeResponseBody& operator=(const DescribeNodesInstanceTypeResponseBody &) = default ;
    DescribeNodesInstanceTypeResponseBody& operator=(DescribeNodesInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes>) };
    inline vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes>) };
    inline DescribeNodesInstanceTypeResponseBody& setInstanceTypes(const vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeNodesInstanceTypeResponseBody& setInstanceTypes(vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNodesInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance types of the nodes.
    std::shared_ptr<vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes>> instanceTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
