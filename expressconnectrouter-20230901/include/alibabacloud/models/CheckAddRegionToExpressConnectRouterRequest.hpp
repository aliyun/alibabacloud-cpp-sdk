// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKADDREGIONTOEXPRESSCONNECTROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKADDREGIONTOEXPRESSCONNECTROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class CheckAddRegionToExpressConnectRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAddRegionToExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(FreshRegionId, freshRegionId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAddRegionToExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(FreshRegionId, freshRegionId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CheckAddRegionToExpressConnectRouterRequest() = default ;
    CheckAddRegionToExpressConnectRouterRequest(const CheckAddRegionToExpressConnectRouterRequest &) = default ;
    CheckAddRegionToExpressConnectRouterRequest(CheckAddRegionToExpressConnectRouterRequest &&) = default ;
    CheckAddRegionToExpressConnectRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAddRegionToExpressConnectRouterRequest() = default ;
    CheckAddRegionToExpressConnectRouterRequest& operator=(const CheckAddRegionToExpressConnectRouterRequest &) = default ;
    CheckAddRegionToExpressConnectRouterRequest& operator=(CheckAddRegionToExpressConnectRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->ecrId_ != nullptr && this->freshRegionId_ != nullptr && this->version_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CheckAddRegionToExpressConnectRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CheckAddRegionToExpressConnectRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline CheckAddRegionToExpressConnectRouterRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // freshRegionId Field Functions 
    bool hasFreshRegionId() const { return this->freshRegionId_ != nullptr;};
    void deleteFreshRegionId() { this->freshRegionId_ = nullptr;};
    inline string freshRegionId() const { DARABONBA_PTR_GET_DEFAULT(freshRegionId_, "") };
    inline CheckAddRegionToExpressConnectRouterRequest& setFreshRegionId(string freshRegionId) { DARABONBA_PTR_SET_VALUE(freshRegionId_, freshRegionId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CheckAddRegionToExpressConnectRouterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run.
    // *   false (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ECR ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the region for which you want to check whether the CDT service is enabled for the ECR feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> freshRegionId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
