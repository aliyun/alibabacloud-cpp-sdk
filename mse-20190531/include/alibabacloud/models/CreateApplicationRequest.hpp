// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateApplicationRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SentinelEnable, sentinelEnable_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SwitchEnable, switchEnable_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SentinelEnable, sentinelEnable_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SwitchEnable, switchEnable_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateApplicationRequest() = default ;
    CreateApplicationRequest(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest(CreateApplicationRequest &&) = default ;
    CreateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationRequest() = default ;
    CreateApplicationRequest& operator=(const CreateApplicationRequest &) = default ;
    CreateApplicationRequest& operator=(CreateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->appName_ != nullptr && this->language_ != nullptr && this->namespace_ != nullptr && this->region_ != nullptr && this->sentinelEnable_ != nullptr
        && this->source_ != nullptr && this->switchEnable_ != nullptr && this->tags_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateApplicationRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateApplicationRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CreateApplicationRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateApplicationRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateApplicationRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sentinelEnable Field Functions 
    bool hasSentinelEnable() const { return this->sentinelEnable_ != nullptr;};
    void deleteSentinelEnable() { this->sentinelEnable_ = nullptr;};
    inline string sentinelEnable() const { DARABONBA_PTR_GET_DEFAULT(sentinelEnable_, "") };
    inline CreateApplicationRequest& setSentinelEnable(string sentinelEnable) { DARABONBA_PTR_SET_VALUE(sentinelEnable_, sentinelEnable) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateApplicationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // switchEnable Field Functions 
    bool hasSwitchEnable() const { return this->switchEnable_ != nullptr;};
    void deleteSwitchEnable() { this->switchEnable_ = nullptr;};
    inline string switchEnable() const { DARABONBA_PTR_GET_DEFAULT(switchEnable_, "") };
    inline CreateApplicationRequest& setSwitchEnable(string switchEnable) { DARABONBA_PTR_SET_VALUE(switchEnable_, switchEnable) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateApplicationRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateApplicationRequestTags>) };
    inline vector<CreateApplicationRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateApplicationRequestTags>) };
    inline CreateApplicationRequest& setTags(const vector<CreateApplicationRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateApplicationRequest& setTags(vector<CreateApplicationRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The programming language of the application.
    std::shared_ptr<string> language_ = nullptr;
    // MSE命名空间名字。
    std::shared_ptr<string> namespace_ = nullptr;
    // The region to which the application belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // Specifies whether to start the switch.
    std::shared_ptr<string> sentinelEnable_ = nullptr;
    // The service where the application is deployed. A value of ACK indicates Container Service for Kubernetes.
    std::shared_ptr<string> source_ = nullptr;
    // The name of the Microservices Engine (MSE) namespace.
    std::shared_ptr<string> switchEnable_ = nullptr;
    std::shared_ptr<vector<CreateApplicationRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
