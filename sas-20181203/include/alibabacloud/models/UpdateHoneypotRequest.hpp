// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
    };
    UpdateHoneypotRequest() = default ;
    UpdateHoneypotRequest(const UpdateHoneypotRequest &) = default ;
    UpdateHoneypotRequest(UpdateHoneypotRequest &&) = default ;
    UpdateHoneypotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotRequest() = default ;
    UpdateHoneypotRequest& operator=(const UpdateHoneypotRequest &) = default ;
    UpdateHoneypotRequest& operator=(UpdateHoneypotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotId_ == nullptr
        && this->honeypotName_ == nullptr && this->lang_ == nullptr && this->meta_ == nullptr; };
    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline UpdateHoneypotRequest& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // honeypotName Field Functions 
    bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
    void deleteHoneypotName() { this->honeypotName_ = nullptr;};
    inline string getHoneypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
    inline UpdateHoneypotRequest& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateHoneypotRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline UpdateHoneypotRequest& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


  protected:
    // The ID of the honeypot.
    // 
    // >  You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
    // 
    // This parameter is required.
    shared_ptr<string> honeypotId_ {};
    // The custom name of the honeypot.
    shared_ptr<string> honeypotName_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The custom configuration of the honeypot.
    // 
    // > You can call the [ListAvailableHoneypot](~~ListAvailableHoneypot~~) operation to query the configurations of honeypots from the **Template** response parameter.
    shared_ptr<string> meta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
