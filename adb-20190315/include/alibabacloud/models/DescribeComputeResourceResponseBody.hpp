// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeComputeResourceResponseBodyComputeResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeComputeResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComputeResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComputeResourceResponseBody() = default ;
    DescribeComputeResourceResponseBody(const DescribeComputeResourceResponseBody &) = default ;
    DescribeComputeResourceResponseBody(DescribeComputeResourceResponseBody &&) = default ;
    DescribeComputeResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComputeResourceResponseBody() = default ;
    DescribeComputeResourceResponseBody& operator=(const DescribeComputeResourceResponseBody &) = default ;
    DescribeComputeResourceResponseBody& operator=(DescribeComputeResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->requestId_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const vector<DescribeComputeResourceResponseBodyComputeResource> & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, vector<DescribeComputeResourceResponseBodyComputeResource>) };
    inline vector<DescribeComputeResourceResponseBodyComputeResource> computeResource() { DARABONBA_PTR_GET(computeResource_, vector<DescribeComputeResourceResponseBodyComputeResource>) };
    inline DescribeComputeResourceResponseBody& setComputeResource(const vector<DescribeComputeResourceResponseBodyComputeResource> & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline DescribeComputeResourceResponseBody& setComputeResource(vector<DescribeComputeResourceResponseBodyComputeResource> && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComputeResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried specifications of computing resources.
    std::shared_ptr<vector<DescribeComputeResourceResponseBodyComputeResource>> computeResource_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
