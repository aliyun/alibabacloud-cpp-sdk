// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEASCRIPTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEASCRIPTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class DeleteAScriptsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAScriptsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AScriptIds, AScriptIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAScriptsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AScriptIds, AScriptIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
    };
    DeleteAScriptsRequest() = default ;
    DeleteAScriptsRequest(const DeleteAScriptsRequest &) = default ;
    DeleteAScriptsRequest(DeleteAScriptsRequest &&) = default ;
    DeleteAScriptsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAScriptsRequest() = default ;
    DeleteAScriptsRequest& operator=(const DeleteAScriptsRequest &) = default ;
    DeleteAScriptsRequest& operator=(DeleteAScriptsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AScriptIds_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr; };
    // AScriptIds Field Functions 
    bool hasAScriptIds() const { return this->AScriptIds_ != nullptr;};
    void deleteAScriptIds() { this->AScriptIds_ = nullptr;};
    inline const vector<string> & getAScriptIds() const { DARABONBA_PTR_GET_CONST(AScriptIds_, vector<string>) };
    inline vector<string> getAScriptIds() { DARABONBA_PTR_GET(AScriptIds_, vector<string>) };
    inline DeleteAScriptsRequest& setAScriptIds(const vector<string> & AScriptIds) { DARABONBA_PTR_SET_VALUE(AScriptIds_, AScriptIds) };
    inline DeleteAScriptsRequest& setAScriptIds(vector<string> && AScriptIds) { DARABONBA_PTR_SET_RVALUE(AScriptIds_, AScriptIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAScriptsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteAScriptsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The AScript rule IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> AScriptIds_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**(default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
