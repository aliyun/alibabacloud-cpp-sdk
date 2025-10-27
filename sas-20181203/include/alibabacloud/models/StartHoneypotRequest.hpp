// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTHONEYPOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTHONEYPOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartHoneypotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartHoneypotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, StartHoneypotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    StartHoneypotRequest() = default ;
    StartHoneypotRequest(const StartHoneypotRequest &) = default ;
    StartHoneypotRequest(StartHoneypotRequest &&) = default ;
    StartHoneypotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartHoneypotRequest() = default ;
    StartHoneypotRequest& operator=(const StartHoneypotRequest &) = default ;
    StartHoneypotRequest& operator=(StartHoneypotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->honeypotId_ == nullptr
        && return this->lang_ == nullptr; };
    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline StartHoneypotRequest& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline StartHoneypotRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The ID of the honeypot.
    // 
    // >  You can call the [ListHoneypot](~~ListHoneypot~~) operation to query the IDs of honeypots.
    // 
    // This parameter is required.
    std::shared_ptr<string> honeypotId_ = nullptr;
    // The language of the content in the request and response messages. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
