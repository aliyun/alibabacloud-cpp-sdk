// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONESENTINELRULEFROMAHASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONESENTINELRULEFROMAHASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneSentinelRuleFromAhasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneSentinelRuleFromAhasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AhasNamespace, ahasNamespace_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(IsAHASPublicRegion, isAHASPublicRegion_);
      DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, CloneSentinelRuleFromAhasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AhasNamespace, ahasNamespace_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(IsAHASPublicRegion, isAHASPublicRegion_);
      DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    CloneSentinelRuleFromAhasRequest() = default ;
    CloneSentinelRuleFromAhasRequest(const CloneSentinelRuleFromAhasRequest &) = default ;
    CloneSentinelRuleFromAhasRequest(CloneSentinelRuleFromAhasRequest &&) = default ;
    CloneSentinelRuleFromAhasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneSentinelRuleFromAhasRequest() = default ;
    CloneSentinelRuleFromAhasRequest& operator=(const CloneSentinelRuleFromAhasRequest &) = default ;
    CloneSentinelRuleFromAhasRequest& operator=(CloneSentinelRuleFromAhasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->ahasNamespace_ == nullptr && return this->appName_ == nullptr && return this->isAHASPublicRegion_ == nullptr && return this->mseAppName_ == nullptr && return this->namespace_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CloneSentinelRuleFromAhasRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // ahasNamespace Field Functions 
    bool hasAhasNamespace() const { return this->ahasNamespace_ != nullptr;};
    void deleteAhasNamespace() { this->ahasNamespace_ = nullptr;};
    inline string ahasNamespace() const { DARABONBA_PTR_GET_DEFAULT(ahasNamespace_, "") };
    inline CloneSentinelRuleFromAhasRequest& setAhasNamespace(string ahasNamespace) { DARABONBA_PTR_SET_VALUE(ahasNamespace_, ahasNamespace) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CloneSentinelRuleFromAhasRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // isAHASPublicRegion Field Functions 
    bool hasIsAHASPublicRegion() const { return this->isAHASPublicRegion_ != nullptr;};
    void deleteIsAHASPublicRegion() { this->isAHASPublicRegion_ = nullptr;};
    inline bool isAHASPublicRegion() const { DARABONBA_PTR_GET_DEFAULT(isAHASPublicRegion_, false) };
    inline CloneSentinelRuleFromAhasRequest& setIsAHASPublicRegion(bool isAHASPublicRegion) { DARABONBA_PTR_SET_VALUE(isAHASPublicRegion_, isAHASPublicRegion) };


    // mseAppName Field Functions 
    bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
    void deleteMseAppName() { this->mseAppName_ = nullptr;};
    inline string mseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
    inline CloneSentinelRuleFromAhasRequest& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CloneSentinelRuleFromAhasRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The namespace (environment) of Application High Availability Service (AHAS).
    // 
    // This parameter is required.
    std::shared_ptr<string> ahasNamespace_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // Specifies whether AHAS is deployed in the Internet region.
    std::shared_ptr<bool> isAHASPublicRegion_ = nullptr;
    // The name of the MSE application after migration. If this parameter is not specified, the name of the Application High Availability Service (AHAS) application is used by default.
    std::shared_ptr<string> mseAppName_ = nullptr;
    // The namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
