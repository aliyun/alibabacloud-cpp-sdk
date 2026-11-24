// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORCEDELETEEXPRESSCONNECTROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORCEDELETEEXPRESSCONNECTROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class ForceDeleteExpressConnectRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForceDeleteExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ForceDeleteExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ForceDeleteExpressConnectRouterRequest() = default ;
    ForceDeleteExpressConnectRouterRequest(const ForceDeleteExpressConnectRouterRequest &) = default ;
    ForceDeleteExpressConnectRouterRequest(ForceDeleteExpressConnectRouterRequest &&) = default ;
    ForceDeleteExpressConnectRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForceDeleteExpressConnectRouterRequest() = default ;
    ForceDeleteExpressConnectRouterRequest& operator=(const ForceDeleteExpressConnectRouterRequest &) = default ;
    ForceDeleteExpressConnectRouterRequest& operator=(ForceDeleteExpressConnectRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->version_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ForceDeleteExpressConnectRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ForceDeleteExpressConnectRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline ForceDeleteExpressConnectRouterRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ForceDeleteExpressConnectRouterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // A client token to ensure that the request is idempotent.
    // 
    // Generate a unique parameter value from your client. The ClientToken parameter can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system uses the **RequestId** of the request as the **ClientToken**. Each API request has a unique **RequestId**.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Performs a dry run to check the request. No resources are modified.
    // 
    // - **false** (default): Sends a standard request.
    shared_ptr<bool> dryRun_ {};
    // The ID of the ECR instance.
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
