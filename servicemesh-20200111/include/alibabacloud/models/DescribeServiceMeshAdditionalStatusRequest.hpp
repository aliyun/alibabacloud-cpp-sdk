// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshAdditionalStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshAdditionalStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckMode, checkMode_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshAdditionalStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckMode, checkMode_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeServiceMeshAdditionalStatusRequest() = default ;
    DescribeServiceMeshAdditionalStatusRequest(const DescribeServiceMeshAdditionalStatusRequest &) = default ;
    DescribeServiceMeshAdditionalStatusRequest(DescribeServiceMeshAdditionalStatusRequest &&) = default ;
    DescribeServiceMeshAdditionalStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshAdditionalStatusRequest() = default ;
    DescribeServiceMeshAdditionalStatusRequest& operator=(const DescribeServiceMeshAdditionalStatusRequest &) = default ;
    DescribeServiceMeshAdditionalStatusRequest& operator=(DescribeServiceMeshAdditionalStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkMode_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // checkMode Field Functions 
    bool hasCheckMode() const { return this->checkMode_ != nullptr;};
    void deleteCheckMode() { this->checkMode_ = nullptr;};
    inline string checkMode() const { DARABONBA_PTR_GET_DEFAULT(checkMode_, "") };
    inline DescribeServiceMeshAdditionalStatusRequest& setCheckMode(string checkMode) { DARABONBA_PTR_SET_VALUE(checkMode_, checkMode) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeServiceMeshAdditionalStatusRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The check mode of the ASM instance. Valid values:
    // 
    // *   `normal`: checks the Server Load Balancer (SLB) instances created for exposing the API server and Istio Pilot, audit logs, and installation of Logtail for clusters on the data plane.
    // *   `full`: checks control plane logs, access logs, security groups, and the elastic IP addresses (EIPs) of the API server in addition to the check items in normal mode.
    std::shared_ptr<string> checkMode_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
