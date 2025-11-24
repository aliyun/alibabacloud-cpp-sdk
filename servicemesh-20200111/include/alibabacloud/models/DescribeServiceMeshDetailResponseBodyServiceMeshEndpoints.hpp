// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(IntranetApiServerEndpoint, intranetApiServerEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetCanaryPilotEndpoint, intranetCanaryPilotEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetPilotEndpoint, intranetPilotEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicApiServerEndpoint, publicApiServerEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicCanaryPilotEndpoint, publicCanaryPilotEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicPilotEndpoint, publicPilotEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(IntranetApiServerEndpoint, intranetApiServerEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetCanaryPilotEndpoint, intranetCanaryPilotEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetPilotEndpoint, intranetPilotEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicApiServerEndpoint, publicApiServerEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicCanaryPilotEndpoint, publicCanaryPilotEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicPilotEndpoint, publicPilotEndpoint_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints(const DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints(DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intranetApiServerEndpoint_ == nullptr
        && return this->intranetCanaryPilotEndpoint_ == nullptr && return this->intranetPilotEndpoint_ == nullptr && return this->publicApiServerEndpoint_ == nullptr && return this->publicCanaryPilotEndpoint_ == nullptr && return this->publicPilotEndpoint_ == nullptr; };
    // intranetApiServerEndpoint Field Functions 
    bool hasIntranetApiServerEndpoint() const { return this->intranetApiServerEndpoint_ != nullptr;};
    void deleteIntranetApiServerEndpoint() { this->intranetApiServerEndpoint_ = nullptr;};
    inline string intranetApiServerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetApiServerEndpoint_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& setIntranetApiServerEndpoint(string intranetApiServerEndpoint) { DARABONBA_PTR_SET_VALUE(intranetApiServerEndpoint_, intranetApiServerEndpoint) };


    // intranetCanaryPilotEndpoint Field Functions 
    bool hasIntranetCanaryPilotEndpoint() const { return this->intranetCanaryPilotEndpoint_ != nullptr;};
    void deleteIntranetCanaryPilotEndpoint() { this->intranetCanaryPilotEndpoint_ = nullptr;};
    inline string intranetCanaryPilotEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetCanaryPilotEndpoint_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& setIntranetCanaryPilotEndpoint(string intranetCanaryPilotEndpoint) { DARABONBA_PTR_SET_VALUE(intranetCanaryPilotEndpoint_, intranetCanaryPilotEndpoint) };


    // intranetPilotEndpoint Field Functions 
    bool hasIntranetPilotEndpoint() const { return this->intranetPilotEndpoint_ != nullptr;};
    void deleteIntranetPilotEndpoint() { this->intranetPilotEndpoint_ = nullptr;};
    inline string intranetPilotEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetPilotEndpoint_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& setIntranetPilotEndpoint(string intranetPilotEndpoint) { DARABONBA_PTR_SET_VALUE(intranetPilotEndpoint_, intranetPilotEndpoint) };


    // publicApiServerEndpoint Field Functions 
    bool hasPublicApiServerEndpoint() const { return this->publicApiServerEndpoint_ != nullptr;};
    void deletePublicApiServerEndpoint() { this->publicApiServerEndpoint_ = nullptr;};
    inline string publicApiServerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicApiServerEndpoint_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& setPublicApiServerEndpoint(string publicApiServerEndpoint) { DARABONBA_PTR_SET_VALUE(publicApiServerEndpoint_, publicApiServerEndpoint) };


    // publicCanaryPilotEndpoint Field Functions 
    bool hasPublicCanaryPilotEndpoint() const { return this->publicCanaryPilotEndpoint_ != nullptr;};
    void deletePublicCanaryPilotEndpoint() { this->publicCanaryPilotEndpoint_ = nullptr;};
    inline string publicCanaryPilotEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicCanaryPilotEndpoint_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& setPublicCanaryPilotEndpoint(string publicCanaryPilotEndpoint) { DARABONBA_PTR_SET_VALUE(publicCanaryPilotEndpoint_, publicCanaryPilotEndpoint) };


    // publicPilotEndpoint Field Functions 
    bool hasPublicPilotEndpoint() const { return this->publicPilotEndpoint_ != nullptr;};
    void deletePublicPilotEndpoint() { this->publicPilotEndpoint_ = nullptr;};
    inline string publicPilotEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicPilotEndpoint_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints& setPublicPilotEndpoint(string publicPilotEndpoint) { DARABONBA_PTR_SET_VALUE(publicPilotEndpoint_, publicPilotEndpoint) };


  protected:
    // The endpoint that is used to access the API server from the internal network.
    std::shared_ptr<string> intranetApiServerEndpoint_ = nullptr;
    // The endpoint that is used to access Istio Pilot from the internal network (Intranet) during canary release.
    std::shared_ptr<string> intranetCanaryPilotEndpoint_ = nullptr;
    // The endpoint that is used to access Istio Pilot from the internal network.
    std::shared_ptr<string> intranetPilotEndpoint_ = nullptr;
    // The endpoint that is used to access the API server over the Internet.
    std::shared_ptr<string> publicApiServerEndpoint_ = nullptr;
    // The endpoint that is used to expose Istio Pilot to the public network (Internet) during canary release.
    std::shared_ptr<string> publicCanaryPilotEndpoint_ = nullptr;
    // The endpoint that is used to expose Istio Pilot to the Internet.
    std::shared_ptr<string> publicPilotEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
