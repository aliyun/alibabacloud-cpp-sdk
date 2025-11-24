// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(IntranetApiServerEndpoint, intranetApiServerEndpoint_);
      DARABONBA_PTR_TO_JSON(IntranetPilotEndpoint, intranetPilotEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicApiServerEndpoint, publicApiServerEndpoint_);
      DARABONBA_PTR_TO_JSON(PublicPilotEndpoint, publicPilotEndpoint_);
      DARABONBA_PTR_TO_JSON(ReverseTunnelEndpoint, reverseTunnelEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(IntranetApiServerEndpoint, intranetApiServerEndpoint_);
      DARABONBA_PTR_FROM_JSON(IntranetPilotEndpoint, intranetPilotEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicApiServerEndpoint, publicApiServerEndpoint_);
      DARABONBA_PTR_FROM_JSON(PublicPilotEndpoint, publicPilotEndpoint_);
      DARABONBA_PTR_FROM_JSON(ReverseTunnelEndpoint, reverseTunnelEndpoint_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesEndpoints() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesEndpoints(const DescribeServiceMeshesResponseBodyServiceMeshesEndpoints &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesEndpoints(DescribeServiceMeshesResponseBodyServiceMeshesEndpoints &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesEndpoints() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesEndpoints &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& operator=(DescribeServiceMeshesResponseBodyServiceMeshesEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intranetApiServerEndpoint_ == nullptr
        && return this->intranetPilotEndpoint_ == nullptr && return this->publicApiServerEndpoint_ == nullptr && return this->publicPilotEndpoint_ == nullptr && return this->reverseTunnelEndpoint_ == nullptr; };
    // intranetApiServerEndpoint Field Functions 
    bool hasIntranetApiServerEndpoint() const { return this->intranetApiServerEndpoint_ != nullptr;};
    void deleteIntranetApiServerEndpoint() { this->intranetApiServerEndpoint_ = nullptr;};
    inline string intranetApiServerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetApiServerEndpoint_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& setIntranetApiServerEndpoint(string intranetApiServerEndpoint) { DARABONBA_PTR_SET_VALUE(intranetApiServerEndpoint_, intranetApiServerEndpoint) };


    // intranetPilotEndpoint Field Functions 
    bool hasIntranetPilotEndpoint() const { return this->intranetPilotEndpoint_ != nullptr;};
    void deleteIntranetPilotEndpoint() { this->intranetPilotEndpoint_ = nullptr;};
    inline string intranetPilotEndpoint() const { DARABONBA_PTR_GET_DEFAULT(intranetPilotEndpoint_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& setIntranetPilotEndpoint(string intranetPilotEndpoint) { DARABONBA_PTR_SET_VALUE(intranetPilotEndpoint_, intranetPilotEndpoint) };


    // publicApiServerEndpoint Field Functions 
    bool hasPublicApiServerEndpoint() const { return this->publicApiServerEndpoint_ != nullptr;};
    void deletePublicApiServerEndpoint() { this->publicApiServerEndpoint_ = nullptr;};
    inline string publicApiServerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicApiServerEndpoint_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& setPublicApiServerEndpoint(string publicApiServerEndpoint) { DARABONBA_PTR_SET_VALUE(publicApiServerEndpoint_, publicApiServerEndpoint) };


    // publicPilotEndpoint Field Functions 
    bool hasPublicPilotEndpoint() const { return this->publicPilotEndpoint_ != nullptr;};
    void deletePublicPilotEndpoint() { this->publicPilotEndpoint_ = nullptr;};
    inline string publicPilotEndpoint() const { DARABONBA_PTR_GET_DEFAULT(publicPilotEndpoint_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& setPublicPilotEndpoint(string publicPilotEndpoint) { DARABONBA_PTR_SET_VALUE(publicPilotEndpoint_, publicPilotEndpoint) };


    // reverseTunnelEndpoint Field Functions 
    bool hasReverseTunnelEndpoint() const { return this->reverseTunnelEndpoint_ != nullptr;};
    void deleteReverseTunnelEndpoint() { this->reverseTunnelEndpoint_ = nullptr;};
    inline string reverseTunnelEndpoint() const { DARABONBA_PTR_GET_DEFAULT(reverseTunnelEndpoint_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesEndpoints& setReverseTunnelEndpoint(string reverseTunnelEndpoint) { DARABONBA_PTR_SET_VALUE(reverseTunnelEndpoint_, reverseTunnelEndpoint) };


  protected:
    // The endpoint that is used to access the API server over the internal network.
    std::shared_ptr<string> intranetApiServerEndpoint_ = nullptr;
    // The endpoint that is used to access Istio Pilot from the internal network.
    std::shared_ptr<string> intranetPilotEndpoint_ = nullptr;
    // The endpoint that is used to access the API server over the Internet.
    std::shared_ptr<string> publicApiServerEndpoint_ = nullptr;
    // The public endpoint of the Pilot of the ASM instance.
    std::shared_ptr<string> publicPilotEndpoint_ = nullptr;
    // The endpoint of the reverse tunnel (Deprecated).
    std::shared_ptr<string> reverseTunnelEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
