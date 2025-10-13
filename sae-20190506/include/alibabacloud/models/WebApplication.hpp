// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_WEBAPPLICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevisionConfig.hpp>
#include <alibabacloud/models/WebScalingConfig.hpp>
#include <alibabacloud/models/WebTrafficConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebApplication& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InternetURL, internetURL_);
      DARABONBA_PTR_TO_JSON(IntranetURL, intranetURL_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RevisionConfig, revisionConfig_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WebScalingConfig, webScalingConfig_);
      DARABONBA_PTR_TO_JSON(WebTrafficConfig, webTrafficConfig_);
    };
    friend void from_json(const Darabonba::Json& j, WebApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InternetURL, internetURL_);
      DARABONBA_PTR_FROM_JSON(IntranetURL, intranetURL_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RevisionConfig, revisionConfig_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WebScalingConfig, webScalingConfig_);
      DARABONBA_PTR_FROM_JSON(WebTrafficConfig, webTrafficConfig_);
    };
    WebApplication() = default ;
    WebApplication(const WebApplication &) = default ;
    WebApplication(WebApplication &&) = default ;
    WebApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebApplication() = default ;
    WebApplication& operator=(const WebApplication &) = default ;
    WebApplication& operator=(WebApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->applicationName_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->internetURL_ == nullptr && return this->intranetURL_ == nullptr
        && return this->lastModifiedTime_ == nullptr && return this->namespaceId_ == nullptr && return this->revisionConfig_ == nullptr && return this->vpcId_ == nullptr && return this->webScalingConfig_ == nullptr
        && return this->webTrafficConfig_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline WebApplication& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline WebApplication& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline WebApplication& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline WebApplication& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // internetURL Field Functions 
    bool hasInternetURL() const { return this->internetURL_ != nullptr;};
    void deleteInternetURL() { this->internetURL_ = nullptr;};
    inline string internetURL() const { DARABONBA_PTR_GET_DEFAULT(internetURL_, "") };
    inline WebApplication& setInternetURL(string internetURL) { DARABONBA_PTR_SET_VALUE(internetURL_, internetURL) };


    // intranetURL Field Functions 
    bool hasIntranetURL() const { return this->intranetURL_ != nullptr;};
    void deleteIntranetURL() { this->intranetURL_ = nullptr;};
    inline string intranetURL() const { DARABONBA_PTR_GET_DEFAULT(intranetURL_, "") };
    inline WebApplication& setIntranetURL(string intranetURL) { DARABONBA_PTR_SET_VALUE(intranetURL_, intranetURL) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline WebApplication& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline WebApplication& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // revisionConfig Field Functions 
    bool hasRevisionConfig() const { return this->revisionConfig_ != nullptr;};
    void deleteRevisionConfig() { this->revisionConfig_ = nullptr;};
    inline const RevisionConfig & revisionConfig() const { DARABONBA_PTR_GET_CONST(revisionConfig_, RevisionConfig) };
    inline RevisionConfig revisionConfig() { DARABONBA_PTR_GET(revisionConfig_, RevisionConfig) };
    inline WebApplication& setRevisionConfig(const RevisionConfig & revisionConfig) { DARABONBA_PTR_SET_VALUE(revisionConfig_, revisionConfig) };
    inline WebApplication& setRevisionConfig(RevisionConfig && revisionConfig) { DARABONBA_PTR_SET_RVALUE(revisionConfig_, revisionConfig) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline WebApplication& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // webScalingConfig Field Functions 
    bool hasWebScalingConfig() const { return this->webScalingConfig_ != nullptr;};
    void deleteWebScalingConfig() { this->webScalingConfig_ = nullptr;};
    inline const WebScalingConfig & webScalingConfig() const { DARABONBA_PTR_GET_CONST(webScalingConfig_, WebScalingConfig) };
    inline WebScalingConfig webScalingConfig() { DARABONBA_PTR_GET(webScalingConfig_, WebScalingConfig) };
    inline WebApplication& setWebScalingConfig(const WebScalingConfig & webScalingConfig) { DARABONBA_PTR_SET_VALUE(webScalingConfig_, webScalingConfig) };
    inline WebApplication& setWebScalingConfig(WebScalingConfig && webScalingConfig) { DARABONBA_PTR_SET_RVALUE(webScalingConfig_, webScalingConfig) };


    // webTrafficConfig Field Functions 
    bool hasWebTrafficConfig() const { return this->webTrafficConfig_ != nullptr;};
    void deleteWebTrafficConfig() { this->webTrafficConfig_ = nullptr;};
    inline const WebTrafficConfig & webTrafficConfig() const { DARABONBA_PTR_GET_CONST(webTrafficConfig_, WebTrafficConfig) };
    inline WebTrafficConfig webTrafficConfig() { DARABONBA_PTR_GET(webTrafficConfig_, WebTrafficConfig) };
    inline WebApplication& setWebTrafficConfig(const WebTrafficConfig & webTrafficConfig) { DARABONBA_PTR_SET_VALUE(webTrafficConfig_, webTrafficConfig) };
    inline WebApplication& setWebTrafficConfig(WebTrafficConfig && webTrafficConfig) { DARABONBA_PTR_SET_RVALUE(webTrafficConfig_, webTrafficConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> internetURL_ = nullptr;
    std::shared_ptr<string> intranetURL_ = nullptr;
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<RevisionConfig> revisionConfig_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<WebScalingConfig> webScalingConfig_ = nullptr;
    std::shared_ptr<WebTrafficConfig> webTrafficConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
