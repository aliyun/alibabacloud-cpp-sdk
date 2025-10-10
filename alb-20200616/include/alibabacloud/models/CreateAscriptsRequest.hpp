// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAScriptsRequestAScripts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateAScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AScripts, AScripts_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AScripts, AScripts_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
    };
    CreateAScriptsRequest() = default ;
    CreateAScriptsRequest(const CreateAScriptsRequest &) = default ;
    CreateAScriptsRequest(CreateAScriptsRequest &&) = default ;
    CreateAScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAScriptsRequest() = default ;
    CreateAScriptsRequest& operator=(const CreateAScriptsRequest &) = default ;
    CreateAScriptsRequest& operator=(CreateAScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScripts_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->listenerId_ != nullptr; };
    // AScripts Field Functions 
    bool hasAScripts() const { return this->AScripts_ != nullptr;};
    void deleteAScripts() { this->AScripts_ = nullptr;};
    inline const vector<CreateAScriptsRequestAScripts> & AScripts() const { DARABONBA_PTR_GET_CONST(AScripts_, vector<CreateAScriptsRequestAScripts>) };
    inline vector<CreateAScriptsRequestAScripts> AScripts() { DARABONBA_PTR_GET(AScripts_, vector<CreateAScriptsRequestAScripts>) };
    inline CreateAScriptsRequest& setAScripts(const vector<CreateAScriptsRequestAScripts> & AScripts) { DARABONBA_PTR_SET_VALUE(AScripts_, AScripts) };
    inline CreateAScriptsRequest& setAScripts(vector<CreateAScriptsRequestAScripts> && AScripts) { DARABONBA_PTR_SET_RVALUE(AScripts_, AScripts) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAScriptsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAScriptsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline CreateAScriptsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


  protected:
    // The information about the AScript rules.
    std::shared_ptr<vector<CreateAScriptsRequestAScripts>> AScripts_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The listener ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> listenerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
