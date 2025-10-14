// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMAINDOMAINNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMAINDOMAINNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class GetMainDomainNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMainDomainNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputString, inputString_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetMainDomainNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputString, inputString_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetMainDomainNameRequest() = default ;
    GetMainDomainNameRequest(const GetMainDomainNameRequest &) = default ;
    GetMainDomainNameRequest(GetMainDomainNameRequest &&) = default ;
    GetMainDomainNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMainDomainNameRequest() = default ;
    GetMainDomainNameRequest& operator=(const GetMainDomainNameRequest &) = default ;
    GetMainDomainNameRequest& operator=(GetMainDomainNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputString_ == nullptr
        && return this->lang_ == nullptr; };
    // inputString Field Functions 
    bool hasInputString() const { return this->inputString_ != nullptr;};
    void deleteInputString() { this->inputString_ = nullptr;};
    inline string inputString() const { DARABONBA_PTR_GET_DEFAULT(inputString_, "") };
    inline GetMainDomainNameRequest& setInputString(string inputString) { DARABONBA_PTR_SET_VALUE(inputString_, inputString) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetMainDomainNameRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The string. The string can be up to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputString_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
