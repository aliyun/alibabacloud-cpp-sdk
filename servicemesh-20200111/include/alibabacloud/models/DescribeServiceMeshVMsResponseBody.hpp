// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHVMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHVMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceMeshVMsResponseBodyVMs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshVMsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshVMsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VMs, VMs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshVMsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VMs, VMs_);
    };
    DescribeServiceMeshVMsResponseBody() = default ;
    DescribeServiceMeshVMsResponseBody(const DescribeServiceMeshVMsResponseBody &) = default ;
    DescribeServiceMeshVMsResponseBody(DescribeServiceMeshVMsResponseBody &&) = default ;
    DescribeServiceMeshVMsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshVMsResponseBody() = default ;
    DescribeServiceMeshVMsResponseBody& operator=(const DescribeServiceMeshVMsResponseBody &) = default ;
    DescribeServiceMeshVMsResponseBody& operator=(DescribeServiceMeshVMsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->VMs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshVMsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VMs Field Functions 
    bool hasVMs() const { return this->VMs_ != nullptr;};
    void deleteVMs() { this->VMs_ = nullptr;};
    inline const vector<DescribeServiceMeshVMsResponseBodyVMs> & VMs() const { DARABONBA_PTR_GET_CONST(VMs_, vector<DescribeServiceMeshVMsResponseBodyVMs>) };
    inline vector<DescribeServiceMeshVMsResponseBodyVMs> VMs() { DARABONBA_PTR_GET(VMs_, vector<DescribeServiceMeshVMsResponseBodyVMs>) };
    inline DescribeServiceMeshVMsResponseBody& setVMs(const vector<DescribeServiceMeshVMsResponseBodyVMs> & VMs) { DARABONBA_PTR_SET_VALUE(VMs_, VMs) };
    inline DescribeServiceMeshVMsResponseBody& setVMs(vector<DescribeServiceMeshVMsResponseBodyVMs> && VMs) { DARABONBA_PTR_SET_RVALUE(VMs_, VMs) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ECS instances that reside in the same VPC as the ASM instance.
    std::shared_ptr<vector<DescribeServiceMeshVMsResponseBodyVMs>> VMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
