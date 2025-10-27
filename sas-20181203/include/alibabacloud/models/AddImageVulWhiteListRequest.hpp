// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEVULWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEVULWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddImageVulWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageVulWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageVulWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    AddImageVulWhiteListRequest() = default ;
    AddImageVulWhiteListRequest(const AddImageVulWhiteListRequest &) = default ;
    AddImageVulWhiteListRequest(AddImageVulWhiteListRequest &&) = default ;
    AddImageVulWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageVulWhiteListRequest() = default ;
    AddImageVulWhiteListRequest& operator=(const AddImageVulWhiteListRequest &) = default ;
    AddImageVulWhiteListRequest& operator=(AddImageVulWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->reason_ == nullptr && return this->source_ == nullptr && return this->target_ == nullptr && return this->type_ == nullptr && return this->whitelist_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddImageVulWhiteListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline AddImageVulWhiteListRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddImageVulWhiteListRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline AddImageVulWhiteListRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddImageVulWhiteListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string whitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline AddImageVulWhiteListRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // The language of the content within the request and response. Default value: zh. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The reason why you add the vulnerability to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The source of the whitelist. Valid values:
    // - **image**
    // - **agentless**
    std::shared_ptr<string> source_ = nullptr;
    // The object on which you want to perform the operation. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: the object type. The value is fixed to repo.
    // *   **target**: the object content. The value is in the Namespace/Image repository format.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: system vulnerability
    // *   **sca**: application vulnerability
    std::shared_ptr<string> type_ = nullptr;
    // The whitelist. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **Type**: the vulnerability type. Valid values: cve and sca.
    // *   **Name**: the name of the vulnerability that is specified in Common Vulnerabilities and Exposures (CVE).
    // *   **AliasName**: the alias of the vulnerability that is specified in CVE.
    std::shared_ptr<string> whitelist_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
