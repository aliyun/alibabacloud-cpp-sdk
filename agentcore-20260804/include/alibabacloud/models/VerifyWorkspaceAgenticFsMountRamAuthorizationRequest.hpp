// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYWORKSPACEAGENTICFSMOUNTRAMAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYWORKSPACEAGENTICFSMOUNTRAMAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class VerifyWorkspaceAgenticFsMountRamAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyWorkspaceAgenticFsMountRamAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(server, server_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyWorkspaceAgenticFsMountRamAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(server, server_);
    };
    VerifyWorkspaceAgenticFsMountRamAuthorizationRequest() = default ;
    VerifyWorkspaceAgenticFsMountRamAuthorizationRequest(const VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &) = default ;
    VerifyWorkspaceAgenticFsMountRamAuthorizationRequest(VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &&) = default ;
    VerifyWorkspaceAgenticFsMountRamAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyWorkspaceAgenticFsMountRamAuthorizationRequest() = default ;
    VerifyWorkspaceAgenticFsMountRamAuthorizationRequest& operator=(const VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &) = default ;
    VerifyWorkspaceAgenticFsMountRamAuthorizationRequest& operator=(VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->server_ == nullptr; };
    // server Field Functions 
    bool hasServer() const { return this->server_ != nullptr;};
    void deleteServer() { this->server_ = nullptr;};
    inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
    inline VerifyWorkspaceAgenticFsMountRamAuthorizationRequest& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


  protected:
    // The domain name of the target AccessPoint, obtained from the DomainName field of NAS ListAccessPoints. Do not include the protocol, port, or path.
    // 
    // This parameter is required.
    shared_ptr<string> server_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
