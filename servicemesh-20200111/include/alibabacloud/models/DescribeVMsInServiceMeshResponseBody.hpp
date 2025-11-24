// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVMSINSERVICEMESHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVMSINSERVICEMESHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVMsInServiceMeshResponseBodyVMs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeVMsInServiceMeshResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVMsInServiceMeshResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VMs, VMs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVMsInServiceMeshResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VMs, VMs_);
    };
    DescribeVMsInServiceMeshResponseBody() = default ;
    DescribeVMsInServiceMeshResponseBody(const DescribeVMsInServiceMeshResponseBody &) = default ;
    DescribeVMsInServiceMeshResponseBody(DescribeVMsInServiceMeshResponseBody &&) = default ;
    DescribeVMsInServiceMeshResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVMsInServiceMeshResponseBody() = default ;
    DescribeVMsInServiceMeshResponseBody& operator=(const DescribeVMsInServiceMeshResponseBody &) = default ;
    DescribeVMsInServiceMeshResponseBody& operator=(DescribeVMsInServiceMeshResponseBody &&) = default ;
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
    inline DescribeVMsInServiceMeshResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VMs Field Functions 
    bool hasVMs() const { return this->VMs_ != nullptr;};
    void deleteVMs() { this->VMs_ = nullptr;};
    inline const vector<DescribeVMsInServiceMeshResponseBodyVMs> & VMs() const { DARABONBA_PTR_GET_CONST(VMs_, vector<DescribeVMsInServiceMeshResponseBodyVMs>) };
    inline vector<DescribeVMsInServiceMeshResponseBodyVMs> VMs() { DARABONBA_PTR_GET(VMs_, vector<DescribeVMsInServiceMeshResponseBodyVMs>) };
    inline DescribeVMsInServiceMeshResponseBody& setVMs(const vector<DescribeVMsInServiceMeshResponseBodyVMs> & VMs) { DARABONBA_PTR_SET_VALUE(VMs_, VMs) };
    inline DescribeVMsInServiceMeshResponseBody& setVMs(vector<DescribeVMsInServiceMeshResponseBodyVMs> && VMs) { DARABONBA_PTR_SET_RVALUE(VMs_, VMs) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The VMs that are added to the ASM instance.
    std::shared_ptr<vector<DescribeVMsInServiceMeshResponseBodyVMs>> VMs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
