// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRANSCODEPARAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINTRANSCODEPARAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainTranscodeParamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainTranscodeParamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(app, app_);
      DARABONBA_PTR_TO_JSON(pushdomain, pushdomain_);
      DARABONBA_PTR_TO_JSON(template_name, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainTranscodeParamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(app, app_);
      DARABONBA_PTR_FROM_JSON(pushdomain, pushdomain_);
      DARABONBA_PTR_FROM_JSON(template_name, templateName_);
    };
    DescribeLiveDomainTranscodeParamsRequest() = default ;
    DescribeLiveDomainTranscodeParamsRequest(const DescribeLiveDomainTranscodeParamsRequest &) = default ;
    DescribeLiveDomainTranscodeParamsRequest(DescribeLiveDomainTranscodeParamsRequest &&) = default ;
    DescribeLiveDomainTranscodeParamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainTranscodeParamsRequest() = default ;
    DescribeLiveDomainTranscodeParamsRequest& operator=(const DescribeLiveDomainTranscodeParamsRequest &) = default ;
    DescribeLiveDomainTranscodeParamsRequest& operator=(DescribeLiveDomainTranscodeParamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && return this->app_ == nullptr && return this->pushdomain_ == nullptr && return this->templateName_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeLiveDomainTranscodeParamsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveDomainTranscodeParamsRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // pushdomain Field Functions 
    bool hasPushdomain() const { return this->pushdomain_ != nullptr;};
    void deletePushdomain() { this->pushdomain_ = nullptr;};
    inline string pushdomain() const { DARABONBA_PTR_GET_DEFAULT(pushdomain_, "") };
    inline DescribeLiveDomainTranscodeParamsRequest& setPushdomain(string pushdomain) { DARABONBA_PTR_SET_VALUE(pushdomain_, pushdomain) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeLiveDomainTranscodeParamsRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pushdomain_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
