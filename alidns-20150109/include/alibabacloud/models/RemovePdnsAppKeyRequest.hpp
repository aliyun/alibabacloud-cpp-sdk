// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPDNSAPPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPDNSAPPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class RemovePdnsAppKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePdnsAppKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePdnsAppKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKeyId, appKeyId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    RemovePdnsAppKeyRequest() = default ;
    RemovePdnsAppKeyRequest(const RemovePdnsAppKeyRequest &) = default ;
    RemovePdnsAppKeyRequest(RemovePdnsAppKeyRequest &&) = default ;
    RemovePdnsAppKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePdnsAppKeyRequest() = default ;
    RemovePdnsAppKeyRequest& operator=(const RemovePdnsAppKeyRequest &) = default ;
    RemovePdnsAppKeyRequest& operator=(RemovePdnsAppKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKeyId_ == nullptr
        && this->lang_ == nullptr; };
    // appKeyId Field Functions 
    bool hasAppKeyId() const { return this->appKeyId_ != nullptr;};
    void deleteAppKeyId() { this->appKeyId_ = nullptr;};
    inline string getAppKeyId() const { DARABONBA_PTR_GET_DEFAULT(appKeyId_, "") };
    inline RemovePdnsAppKeyRequest& setAppKeyId(string appKeyId) { DARABONBA_PTR_SET_VALUE(appKeyId_, appKeyId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline RemovePdnsAppKeyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<string> appKeyId_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
