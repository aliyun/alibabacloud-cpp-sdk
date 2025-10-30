// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMONCONFIGIDP_HPP_
#define ALIBABACLOUD_MODELS_COMMONCONFIGIDP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommonConfigIdpDingtalk.hpp>
#include <alibabacloud/models/CommonConfigIdpFeishu.hpp>
#include <alibabacloud/models/CommonConfigIdpIdaas2.hpp>
#include <alibabacloud/models/CommonConfigIdpSaml.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CommonConfigIdp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommonConfigIdp& obj) { 
      DARABONBA_PTR_TO_JSON(ApOidcCallbackUrl, apOidcCallbackUrl_);
      DARABONBA_PTR_TO_JSON(Dingtalk, dingtalk_);
      DARABONBA_PTR_TO_JSON(Feishu, feishu_);
      DARABONBA_PTR_TO_JSON(Idaas2, idaas2_);
      DARABONBA_PTR_TO_JSON(Saml, saml_);
    };
    friend void from_json(const Darabonba::Json& j, CommonConfigIdp& obj) { 
      DARABONBA_PTR_FROM_JSON(ApOidcCallbackUrl, apOidcCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(Dingtalk, dingtalk_);
      DARABONBA_PTR_FROM_JSON(Feishu, feishu_);
      DARABONBA_PTR_FROM_JSON(Idaas2, idaas2_);
      DARABONBA_PTR_FROM_JSON(Saml, saml_);
    };
    CommonConfigIdp() = default ;
    CommonConfigIdp(const CommonConfigIdp &) = default ;
    CommonConfigIdp(CommonConfigIdp &&) = default ;
    CommonConfigIdp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommonConfigIdp() = default ;
    CommonConfigIdp& operator=(const CommonConfigIdp &) = default ;
    CommonConfigIdp& operator=(CommonConfigIdp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apOidcCallbackUrl_ == nullptr
        && return this->dingtalk_ == nullptr && return this->feishu_ == nullptr && return this->idaas2_ == nullptr && return this->saml_ == nullptr; };
    // apOidcCallbackUrl Field Functions 
    bool hasApOidcCallbackUrl() const { return this->apOidcCallbackUrl_ != nullptr;};
    void deleteApOidcCallbackUrl() { this->apOidcCallbackUrl_ = nullptr;};
    inline string apOidcCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(apOidcCallbackUrl_, "") };
    inline CommonConfigIdp& setApOidcCallbackUrl(string apOidcCallbackUrl) { DARABONBA_PTR_SET_VALUE(apOidcCallbackUrl_, apOidcCallbackUrl) };


    // dingtalk Field Functions 
    bool hasDingtalk() const { return this->dingtalk_ != nullptr;};
    void deleteDingtalk() { this->dingtalk_ = nullptr;};
    inline const Models::CommonConfigIdpDingtalk & dingtalk() const { DARABONBA_PTR_GET_CONST(dingtalk_, Models::CommonConfigIdpDingtalk) };
    inline Models::CommonConfigIdpDingtalk dingtalk() { DARABONBA_PTR_GET(dingtalk_, Models::CommonConfigIdpDingtalk) };
    inline CommonConfigIdp& setDingtalk(const Models::CommonConfigIdpDingtalk & dingtalk) { DARABONBA_PTR_SET_VALUE(dingtalk_, dingtalk) };
    inline CommonConfigIdp& setDingtalk(Models::CommonConfigIdpDingtalk && dingtalk) { DARABONBA_PTR_SET_RVALUE(dingtalk_, dingtalk) };


    // feishu Field Functions 
    bool hasFeishu() const { return this->feishu_ != nullptr;};
    void deleteFeishu() { this->feishu_ = nullptr;};
    inline const Models::CommonConfigIdpFeishu & feishu() const { DARABONBA_PTR_GET_CONST(feishu_, Models::CommonConfigIdpFeishu) };
    inline Models::CommonConfigIdpFeishu feishu() { DARABONBA_PTR_GET(feishu_, Models::CommonConfigIdpFeishu) };
    inline CommonConfigIdp& setFeishu(const Models::CommonConfigIdpFeishu & feishu) { DARABONBA_PTR_SET_VALUE(feishu_, feishu) };
    inline CommonConfigIdp& setFeishu(Models::CommonConfigIdpFeishu && feishu) { DARABONBA_PTR_SET_RVALUE(feishu_, feishu) };


    // idaas2 Field Functions 
    bool hasIdaas2() const { return this->idaas2_ != nullptr;};
    void deleteIdaas2() { this->idaas2_ = nullptr;};
    inline const Models::CommonConfigIdpIdaas2 & idaas2() const { DARABONBA_PTR_GET_CONST(idaas2_, Models::CommonConfigIdpIdaas2) };
    inline Models::CommonConfigIdpIdaas2 idaas2() { DARABONBA_PTR_GET(idaas2_, Models::CommonConfigIdpIdaas2) };
    inline CommonConfigIdp& setIdaas2(const Models::CommonConfigIdpIdaas2 & idaas2) { DARABONBA_PTR_SET_VALUE(idaas2_, idaas2) };
    inline CommonConfigIdp& setIdaas2(Models::CommonConfigIdpIdaas2 && idaas2) { DARABONBA_PTR_SET_RVALUE(idaas2_, idaas2) };


    // saml Field Functions 
    bool hasSaml() const { return this->saml_ != nullptr;};
    void deleteSaml() { this->saml_ = nullptr;};
    inline const Models::CommonConfigIdpSaml & saml() const { DARABONBA_PTR_GET_CONST(saml_, Models::CommonConfigIdpSaml) };
    inline Models::CommonConfigIdpSaml saml() { DARABONBA_PTR_GET(saml_, Models::CommonConfigIdpSaml) };
    inline CommonConfigIdp& setSaml(const Models::CommonConfigIdpSaml & saml) { DARABONBA_PTR_SET_VALUE(saml_, saml) };
    inline CommonConfigIdp& setSaml(Models::CommonConfigIdpSaml && saml) { DARABONBA_PTR_SET_RVALUE(saml_, saml) };


  protected:
    std::shared_ptr<string> apOidcCallbackUrl_ = nullptr;
    std::shared_ptr<Models::CommonConfigIdpDingtalk> dingtalk_ = nullptr;
    std::shared_ptr<Models::CommonConfigIdpFeishu> feishu_ = nullptr;
    std::shared_ptr<Models::CommonConfigIdpIdaas2> idaas2_ = nullptr;
    std::shared_ptr<Models::CommonConfigIdpSaml> saml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
