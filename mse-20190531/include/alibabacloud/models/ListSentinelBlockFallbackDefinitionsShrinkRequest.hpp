// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSentinelBlockFallbackDefinitionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSentinelBlockFallbackDefinitionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClassificationSet, classificationSetShrink_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListSentinelBlockFallbackDefinitionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClassificationSet, classificationSetShrink_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListSentinelBlockFallbackDefinitionsShrinkRequest() = default ;
    ListSentinelBlockFallbackDefinitionsShrinkRequest(const ListSentinelBlockFallbackDefinitionsShrinkRequest &) = default ;
    ListSentinelBlockFallbackDefinitionsShrinkRequest(ListSentinelBlockFallbackDefinitionsShrinkRequest &&) = default ;
    ListSentinelBlockFallbackDefinitionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSentinelBlockFallbackDefinitionsShrinkRequest() = default ;
    ListSentinelBlockFallbackDefinitionsShrinkRequest& operator=(const ListSentinelBlockFallbackDefinitionsShrinkRequest &) = default ;
    ListSentinelBlockFallbackDefinitionsShrinkRequest& operator=(ListSentinelBlockFallbackDefinitionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->classificationSetShrink_ == nullptr && return this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListSentinelBlockFallbackDefinitionsShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListSentinelBlockFallbackDefinitionsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // classificationSetShrink Field Functions 
    bool hasClassificationSetShrink() const { return this->classificationSetShrink_ != nullptr;};
    void deleteClassificationSetShrink() { this->classificationSetShrink_ = nullptr;};
    inline string classificationSetShrink() const { DARABONBA_PTR_GET_DEFAULT(classificationSetShrink_, "") };
    inline ListSentinelBlockFallbackDefinitionsShrinkRequest& setClassificationSetShrink(string classificationSetShrink) { DARABONBA_PTR_SET_VALUE(classificationSetShrink_, classificationSetShrink) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListSentinelBlockFallbackDefinitionsShrinkRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


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
    // Behavior Classification Set.
    std::shared_ptr<string> classificationSetShrink_ = nullptr;
    // The name of the Microservices namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
