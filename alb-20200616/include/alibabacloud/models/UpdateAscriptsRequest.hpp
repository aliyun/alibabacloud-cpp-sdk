// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAScriptsRequestAScripts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateAScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AScripts, AScripts_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AScripts, AScripts_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
    };
    UpdateAScriptsRequest() = default ;
    UpdateAScriptsRequest(const UpdateAScriptsRequest &) = default ;
    UpdateAScriptsRequest(UpdateAScriptsRequest &&) = default ;
    UpdateAScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAScriptsRequest() = default ;
    UpdateAScriptsRequest& operator=(const UpdateAScriptsRequest &) = default ;
    UpdateAScriptsRequest& operator=(UpdateAScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AScripts_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr; };
    // AScripts Field Functions 
    bool hasAScripts() const { return this->AScripts_ != nullptr;};
    void deleteAScripts() { this->AScripts_ = nullptr;};
    inline const vector<UpdateAScriptsRequestAScripts> & AScripts() const { DARABONBA_PTR_GET_CONST(AScripts_, vector<UpdateAScriptsRequestAScripts>) };
    inline vector<UpdateAScriptsRequestAScripts> AScripts() { DARABONBA_PTR_GET(AScripts_, vector<UpdateAScriptsRequestAScripts>) };
    inline UpdateAScriptsRequest& setAScripts(const vector<UpdateAScriptsRequestAScripts> & AScripts) { DARABONBA_PTR_SET_VALUE(AScripts_, AScripts) };
    inline UpdateAScriptsRequest& setAScripts(vector<UpdateAScriptsRequestAScripts> && AScripts) { DARABONBA_PTR_SET_RVALUE(AScripts_, AScripts) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAScriptsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateAScriptsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The information about the AScript rule.
    std::shared_ptr<vector<UpdateAScriptsRequestAScripts>> AScripts_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
