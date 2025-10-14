// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PutContactRequestChannels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, PutContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    PutContactRequest() = default ;
    PutContactRequest(const PutContactRequest &) = default ;
    PutContactRequest(PutContactRequest &&) = default ;
    PutContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutContactRequest() = default ;
    PutContactRequest& operator=(const PutContactRequest &) = default ;
    PutContactRequest& operator=(PutContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->contactName_ == nullptr && return this->describe_ == nullptr && return this->lang_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const PutContactRequestChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, PutContactRequestChannels) };
    inline PutContactRequestChannels channels() { DARABONBA_PTR_GET(channels_, PutContactRequestChannels) };
    inline PutContactRequest& setChannels(const PutContactRequestChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline PutContactRequest& setChannels(PutContactRequestChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline PutContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline PutContactRequest& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PutContactRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    std::shared_ptr<PutContactRequestChannels> channels_ = nullptr;
    // The name of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactName_ = nullptr;
    // The description of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> describe_ = nullptr;
    // The language in which the alert information is displayed. Valid values:
    // 
    // *   zh-cn: simplified Chinese
    // *   en: English
    // 
    // >  If you do not specify this parameter, CloudMonitor identifies the language of the alert information based on the region of your Alibaba Cloud account.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
