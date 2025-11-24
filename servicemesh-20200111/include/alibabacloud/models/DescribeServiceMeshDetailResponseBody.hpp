// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMesh.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceMesh, serviceMesh_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceMesh, serviceMesh_);
    };
    DescribeServiceMeshDetailResponseBody() = default ;
    DescribeServiceMeshDetailResponseBody(const DescribeServiceMeshDetailResponseBody &) = default ;
    DescribeServiceMeshDetailResponseBody(DescribeServiceMeshDetailResponseBody &&) = default ;
    DescribeServiceMeshDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBody() = default ;
    DescribeServiceMeshDetailResponseBody& operator=(const DescribeServiceMeshDetailResponseBody &) = default ;
    DescribeServiceMeshDetailResponseBody& operator=(DescribeServiceMeshDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serviceMesh_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceMeshDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceMesh Field Functions 
    bool hasServiceMesh() const { return this->serviceMesh_ != nullptr;};
    void deleteServiceMesh() { this->serviceMesh_ = nullptr;};
    inline const DescribeServiceMeshDetailResponseBodyServiceMesh & serviceMesh() const { DARABONBA_PTR_GET_CONST(serviceMesh_, DescribeServiceMeshDetailResponseBodyServiceMesh) };
    inline DescribeServiceMeshDetailResponseBodyServiceMesh serviceMesh() { DARABONBA_PTR_GET(serviceMesh_, DescribeServiceMeshDetailResponseBodyServiceMesh) };
    inline DescribeServiceMeshDetailResponseBody& setServiceMesh(const DescribeServiceMeshDetailResponseBodyServiceMesh & serviceMesh) { DARABONBA_PTR_SET_VALUE(serviceMesh_, serviceMesh) };
    inline DescribeServiceMeshDetailResponseBody& setServiceMesh(DescribeServiceMeshDetailResponseBodyServiceMesh && serviceMesh) { DARABONBA_PTR_SET_RVALUE(serviceMesh_, serviceMesh) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the ASM instance.
    std::shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMesh> serviceMesh_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
