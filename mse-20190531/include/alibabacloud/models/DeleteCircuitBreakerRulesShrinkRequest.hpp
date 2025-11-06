// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECIRCUITBREAKERRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECIRCUITBREAKERRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteCircuitBreakerRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCircuitBreakerRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCircuitBreakerRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DeleteCircuitBreakerRulesShrinkRequest() = default ;
    DeleteCircuitBreakerRulesShrinkRequest(const DeleteCircuitBreakerRulesShrinkRequest &) = default ;
    DeleteCircuitBreakerRulesShrinkRequest(DeleteCircuitBreakerRulesShrinkRequest &&) = default ;
    DeleteCircuitBreakerRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCircuitBreakerRulesShrinkRequest() = default ;
    DeleteCircuitBreakerRulesShrinkRequest& operator=(const DeleteCircuitBreakerRulesShrinkRequest &) = default ;
    DeleteCircuitBreakerRulesShrinkRequest& operator=(DeleteCircuitBreakerRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->idsShrink_ == nullptr && return this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteCircuitBreakerRulesShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteCircuitBreakerRulesShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline DeleteCircuitBreakerRulesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteCircuitBreakerRulesShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language of the response. Valid values: zh and en. Default value: zh. The value zh indicates Chinese, and the value en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The IDs of the rules that you want to delete.
    std::shared_ptr<string> idsShrink_ = nullptr;
    // The microservice namespace to which the application belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
