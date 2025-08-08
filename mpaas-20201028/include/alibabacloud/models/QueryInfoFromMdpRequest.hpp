// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINFOFROMMDPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINFOFROMMDPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryInfoFromMdpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInfoFromMdpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(MobileMd5, mobileMd5_);
      DARABONBA_PTR_TO_JSON(MobileSha256, mobileSha256_);
      DARABONBA_PTR_TO_JSON(MobileSm3, mobileSm3_);
      DARABONBA_PTR_TO_JSON(RiskScene, riskScene_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInfoFromMdpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(MobileMd5, mobileMd5_);
      DARABONBA_PTR_FROM_JSON(MobileSha256, mobileSha256_);
      DARABONBA_PTR_FROM_JSON(MobileSm3, mobileSm3_);
      DARABONBA_PTR_FROM_JSON(RiskScene, riskScene_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryInfoFromMdpRequest() = default ;
    QueryInfoFromMdpRequest(const QueryInfoFromMdpRequest &) = default ;
    QueryInfoFromMdpRequest(QueryInfoFromMdpRequest &&) = default ;
    QueryInfoFromMdpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInfoFromMdpRequest() = default ;
    QueryInfoFromMdpRequest& operator=(const QueryInfoFromMdpRequest &) = default ;
    QueryInfoFromMdpRequest& operator=(QueryInfoFromMdpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->mobile_ != nullptr && this->mobileMd5_ != nullptr && this->mobileSha256_ != nullptr && this->mobileSm3_ != nullptr && this->riskScene_ != nullptr
        && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryInfoFromMdpRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline QueryInfoFromMdpRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // mobileMd5 Field Functions 
    bool hasMobileMd5() const { return this->mobileMd5_ != nullptr;};
    void deleteMobileMd5() { this->mobileMd5_ = nullptr;};
    inline string mobileMd5() const { DARABONBA_PTR_GET_DEFAULT(mobileMd5_, "") };
    inline QueryInfoFromMdpRequest& setMobileMd5(string mobileMd5) { DARABONBA_PTR_SET_VALUE(mobileMd5_, mobileMd5) };


    // mobileSha256 Field Functions 
    bool hasMobileSha256() const { return this->mobileSha256_ != nullptr;};
    void deleteMobileSha256() { this->mobileSha256_ = nullptr;};
    inline string mobileSha256() const { DARABONBA_PTR_GET_DEFAULT(mobileSha256_, "") };
    inline QueryInfoFromMdpRequest& setMobileSha256(string mobileSha256) { DARABONBA_PTR_SET_VALUE(mobileSha256_, mobileSha256) };


    // mobileSm3 Field Functions 
    bool hasMobileSm3() const { return this->mobileSm3_ != nullptr;};
    void deleteMobileSm3() { this->mobileSm3_ = nullptr;};
    inline string mobileSm3() const { DARABONBA_PTR_GET_DEFAULT(mobileSm3_, "") };
    inline QueryInfoFromMdpRequest& setMobileSm3(string mobileSm3) { DARABONBA_PTR_SET_VALUE(mobileSm3_, mobileSm3) };


    // riskScene Field Functions 
    bool hasRiskScene() const { return this->riskScene_ != nullptr;};
    void deleteRiskScene() { this->riskScene_ = nullptr;};
    inline string riskScene() const { DARABONBA_PTR_GET_DEFAULT(riskScene_, "") };
    inline QueryInfoFromMdpRequest& setRiskScene(string riskScene) { DARABONBA_PTR_SET_VALUE(riskScene_, riskScene) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryInfoFromMdpRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> mobile_ = nullptr;
    std::shared_ptr<string> mobileMd5_ = nullptr;
    std::shared_ptr<string> mobileSha256_ = nullptr;
    std::shared_ptr<string> mobileSm3_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> riskScene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
