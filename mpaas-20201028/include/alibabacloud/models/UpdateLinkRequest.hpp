// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class UpdateLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Cors, cors_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Dynamicfield, dynamicfield_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Cors, cors_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Dynamicfield, dynamicfield_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateLinkRequest() = default ;
    UpdateLinkRequest(const UpdateLinkRequest &) = default ;
    UpdateLinkRequest(UpdateLinkRequest &&) = default ;
    UpdateLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLinkRequest() = default ;
    UpdateLinkRequest& operator=(const UpdateLinkRequest &) = default ;
    UpdateLinkRequest& operator=(UpdateLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->cors_ != nullptr && this->domain_ != nullptr && this->dynamicfield_ != nullptr && this->targetUrl_ != nullptr && this->url_ != nullptr
        && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateLinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cors Field Functions 
    bool hasCors() const { return this->cors_ != nullptr;};
    void deleteCors() { this->cors_ = nullptr;};
    inline bool cors() const { DARABONBA_PTR_GET_DEFAULT(cors_, false) };
    inline UpdateLinkRequest& setCors(bool cors) { DARABONBA_PTR_SET_VALUE(cors_, cors) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateLinkRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // dynamicfield Field Functions 
    bool hasDynamicfield() const { return this->dynamicfield_ != nullptr;};
    void deleteDynamicfield() { this->dynamicfield_ = nullptr;};
    inline string dynamicfield() const { DARABONBA_PTR_GET_DEFAULT(dynamicfield_, "") };
    inline UpdateLinkRequest& setDynamicfield(string dynamicfield) { DARABONBA_PTR_SET_VALUE(dynamicfield_, dynamicfield) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline UpdateLinkRequest& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateLinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateLinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<bool> cors_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> dynamicfield_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
