// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVMSINSERVICEMESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVMSINSERVICEMESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeVMsInServiceMeshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVMsInServiceMeshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVMsInServiceMeshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeVMsInServiceMeshRequest() = default ;
    DescribeVMsInServiceMeshRequest(const DescribeVMsInServiceMeshRequest &) = default ;
    DescribeVMsInServiceMeshRequest(DescribeVMsInServiceMeshRequest &&) = default ;
    DescribeVMsInServiceMeshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVMsInServiceMeshRequest() = default ;
    DescribeVMsInServiceMeshRequest& operator=(const DescribeVMsInServiceMeshRequest &) = default ;
    DescribeVMsInServiceMeshRequest& operator=(DescribeVMsInServiceMeshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceMeshId_ == nullptr; };
    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeVMsInServiceMeshRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
