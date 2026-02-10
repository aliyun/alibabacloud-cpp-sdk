// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteHoneypotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHoneypotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHoneypotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DeleteHoneypotRequest() = default ;
    DeleteHoneypotRequest(const DeleteHoneypotRequest &) = default ;
    DeleteHoneypotRequest(DeleteHoneypotRequest &&) = default ;
    DeleteHoneypotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHoneypotRequest() = default ;
    DeleteHoneypotRequest& operator=(const DeleteHoneypotRequest &) = default ;
    DeleteHoneypotRequest& operator=(DeleteHoneypotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotId_ == nullptr
        && this->lang_ == nullptr; };
    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline DeleteHoneypotRequest& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteHoneypotRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the honeypot.
    // 
    // > You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
    // 
    // This parameter is required.
    shared_ptr<string> honeypotId_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
