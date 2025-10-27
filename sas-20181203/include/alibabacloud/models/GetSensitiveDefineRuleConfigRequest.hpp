// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSensitiveDefineRuleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveDefineRuleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveDefineRuleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    GetSensitiveDefineRuleConfigRequest() = default ;
    GetSensitiveDefineRuleConfigRequest(const GetSensitiveDefineRuleConfigRequest &) = default ;
    GetSensitiveDefineRuleConfigRequest(GetSensitiveDefineRuleConfigRequest &&) = default ;
    GetSensitiveDefineRuleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveDefineRuleConfigRequest() = default ;
    GetSensitiveDefineRuleConfigRequest& operator=(const GetSensitiveDefineRuleConfigRequest &) = default ;
    GetSensitiveDefineRuleConfigRequest& operator=(GetSensitiveDefineRuleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->source_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetSensitiveDefineRuleConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetSensitiveDefineRuleConfigRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The source of the check rules. Valid values:
    // 
    // *   **image**: image.
    // *   **agentless**: agentless detection.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
