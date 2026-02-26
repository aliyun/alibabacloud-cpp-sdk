// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISCOVERYENDPOINTSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETDISCOVERYENDPOINTSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DiscoveryEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GetDiscoveryEndpointsOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDiscoveryEndpointsOutput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(discoveryEndpoints, discoveryEndpoints_);
    };
    friend void from_json(const Darabonba::Json& j, GetDiscoveryEndpointsOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(discoveryEndpoints, discoveryEndpoints_);
    };
    GetDiscoveryEndpointsOutput() = default ;
    GetDiscoveryEndpointsOutput(const GetDiscoveryEndpointsOutput &) = default ;
    GetDiscoveryEndpointsOutput(GetDiscoveryEndpointsOutput &&) = default ;
    GetDiscoveryEndpointsOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDiscoveryEndpointsOutput() = default ;
    GetDiscoveryEndpointsOutput& operator=(const GetDiscoveryEndpointsOutput &) = default ;
    GetDiscoveryEndpointsOutput& operator=(GetDiscoveryEndpointsOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr
        && this->discoveryEndpoints_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline GetDiscoveryEndpointsOutput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // discoveryEndpoints Field Functions 
    bool hasDiscoveryEndpoints() const { return this->discoveryEndpoints_ != nullptr;};
    void deleteDiscoveryEndpoints() { this->discoveryEndpoints_ = nullptr;};
    inline const vector<DiscoveryEndpoint> & getDiscoveryEndpoints() const { DARABONBA_PTR_GET_CONST(discoveryEndpoints_, vector<DiscoveryEndpoint>) };
    inline vector<DiscoveryEndpoint> getDiscoveryEndpoints() { DARABONBA_PTR_GET(discoveryEndpoints_, vector<DiscoveryEndpoint>) };
    inline GetDiscoveryEndpointsOutput& setDiscoveryEndpoints(const vector<DiscoveryEndpoint> & discoveryEndpoints) { DARABONBA_PTR_SET_VALUE(discoveryEndpoints_, discoveryEndpoints) };
    inline GetDiscoveryEndpointsOutput& setDiscoveryEndpoints(vector<DiscoveryEndpoint> && discoveryEndpoints) { DARABONBA_PTR_SET_RVALUE(discoveryEndpoints_, discoveryEndpoints) };


  protected:
    shared_ptr<string> credentialName_ {};
    shared_ptr<vector<DiscoveryEndpoint>> discoveryEndpoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
