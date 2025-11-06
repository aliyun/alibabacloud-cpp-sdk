// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSentinelBlockFallbackDefinitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSentinelBlockFallbackDefinitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClassificationSet, classificationSet_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, ListSentinelBlockFallbackDefinitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClassificationSet, classificationSet_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    ListSentinelBlockFallbackDefinitionsRequest() = default ;
    ListSentinelBlockFallbackDefinitionsRequest(const ListSentinelBlockFallbackDefinitionsRequest &) = default ;
    ListSentinelBlockFallbackDefinitionsRequest(ListSentinelBlockFallbackDefinitionsRequest &&) = default ;
    ListSentinelBlockFallbackDefinitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSentinelBlockFallbackDefinitionsRequest() = default ;
    ListSentinelBlockFallbackDefinitionsRequest& operator=(const ListSentinelBlockFallbackDefinitionsRequest &) = default ;
    ListSentinelBlockFallbackDefinitionsRequest& operator=(ListSentinelBlockFallbackDefinitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->appName_ == nullptr && return this->classificationSet_ == nullptr && return this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListSentinelBlockFallbackDefinitionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListSentinelBlockFallbackDefinitionsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // classificationSet Field Functions 
    bool hasClassificationSet() const { return this->classificationSet_ != nullptr;};
    void deleteClassificationSet() { this->classificationSet_ = nullptr;};
    inline const vector<int32_t> & classificationSet() const { DARABONBA_PTR_GET_CONST(classificationSet_, vector<int32_t>) };
    inline vector<int32_t> classificationSet() { DARABONBA_PTR_GET(classificationSet_, vector<int32_t>) };
    inline ListSentinelBlockFallbackDefinitionsRequest& setClassificationSet(const vector<int32_t> & classificationSet) { DARABONBA_PTR_SET_VALUE(classificationSet_, classificationSet) };
    inline ListSentinelBlockFallbackDefinitionsRequest& setClassificationSet(vector<int32_t> && classificationSet) { DARABONBA_PTR_SET_RVALUE(classificationSet_, classificationSet) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListSentinelBlockFallbackDefinitionsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


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
    std::shared_ptr<vector<int32_t>> classificationSet_ = nullptr;
    // The name of the Microservices namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
