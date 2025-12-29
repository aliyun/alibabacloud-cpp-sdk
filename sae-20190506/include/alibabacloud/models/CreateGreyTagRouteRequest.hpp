// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGREYTAGROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGREYTAGROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateGreyTagRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbRules, albRules_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ScRules, scRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbRules, albRules_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DubboRules, dubboRules_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ScRules, scRules_);
    };
    CreateGreyTagRouteRequest() = default ;
    CreateGreyTagRouteRequest(const CreateGreyTagRouteRequest &) = default ;
    CreateGreyTagRouteRequest(CreateGreyTagRouteRequest &&) = default ;
    CreateGreyTagRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGreyTagRouteRequest() = default ;
    CreateGreyTagRouteRequest& operator=(const CreateGreyTagRouteRequest &) = default ;
    CreateGreyTagRouteRequest& operator=(CreateGreyTagRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->albRules_ == nullptr
        && this->appId_ == nullptr && this->description_ == nullptr && this->dubboRules_ == nullptr && this->name_ == nullptr && this->scRules_ == nullptr; };
    // albRules Field Functions 
    bool hasAlbRules() const { return this->albRules_ != nullptr;};
    void deleteAlbRules() { this->albRules_ = nullptr;};
    inline string getAlbRules() const { DARABONBA_PTR_GET_DEFAULT(albRules_, "") };
    inline CreateGreyTagRouteRequest& setAlbRules(string albRules) { DARABONBA_PTR_SET_VALUE(albRules_, albRules) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateGreyTagRouteRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGreyTagRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dubboRules Field Functions 
    bool hasDubboRules() const { return this->dubboRules_ != nullptr;};
    void deleteDubboRules() { this->dubboRules_ = nullptr;};
    inline string getDubboRules() const { DARABONBA_PTR_GET_DEFAULT(dubboRules_, "") };
    inline CreateGreyTagRouteRequest& setDubboRules(string dubboRules) { DARABONBA_PTR_SET_VALUE(dubboRules_, dubboRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGreyTagRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // scRules Field Functions 
    bool hasScRules() const { return this->scRules_ != nullptr;};
    void deleteScRules() { this->scRules_ = nullptr;};
    inline string getScRules() const { DARABONBA_PTR_GET_DEFAULT(scRules_, "") };
    inline CreateGreyTagRouteRequest& setScRules(string scRules) { DARABONBA_PTR_SET_VALUE(scRules_, scRules) };


  protected:
    // The canary release rule of the application for which Application Load Balancer (ALB) gateway routing is configured.
    shared_ptr<string> albRules_ {};
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The description of the canary release rule. The name must be 1 to 64 characters in length.
    shared_ptr<string> description_ {};
    // The canary release rule that you created for Dubbo applications. If your application uses the Dubbo framework, you must configure this parameter. You do not need to configure the **ScRules** parameter.
    shared_ptr<string> dubboRules_ {};
    // The name of the canary release rule. The name must start with a lowercase letter and end with a digit or a lowercase letter. The name can contain only lowercase letters, Chinese characters, digits, and hyphens (-). The name must be 1 to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The canary release rule that you created for Spring Cloud application. If your application uses the Spring Cloud framework, you must configure this parameter. You do not need to configure the **DubboRules** parameter.
    shared_ptr<string> scRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
