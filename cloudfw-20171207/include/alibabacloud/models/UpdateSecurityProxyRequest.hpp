// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateSecurityProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(ProxyName, proxyName_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
    };
    UpdateSecurityProxyRequest() = default ;
    UpdateSecurityProxyRequest(const UpdateSecurityProxyRequest &) = default ;
    UpdateSecurityProxyRequest(UpdateSecurityProxyRequest &&) = default ;
    UpdateSecurityProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityProxyRequest() = default ;
    UpdateSecurityProxyRequest& operator=(const UpdateSecurityProxyRequest &) = default ;
    UpdateSecurityProxyRequest& operator=(UpdateSecurityProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->proxyId_ == nullptr && return this->proxyName_ == nullptr && return this->strictMode_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateSecurityProxyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline UpdateSecurityProxyRequest& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // proxyName Field Functions 
    bool hasProxyName() const { return this->proxyName_ != nullptr;};
    void deleteProxyName() { this->proxyName_ = nullptr;};
    inline string proxyName() const { DARABONBA_PTR_GET_DEFAULT(proxyName_, "") };
    inline UpdateSecurityProxyRequest& setProxyName(string proxyName) { DARABONBA_PTR_SET_VALUE(proxyName_, proxyName) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline int32_t strictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, 0) };
    inline UpdateSecurityProxyRequest& setStrictMode(int32_t strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> proxyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> proxyName_ = nullptr;
    std::shared_ptr<int32_t> strictMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
