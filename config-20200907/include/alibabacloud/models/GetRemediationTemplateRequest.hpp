// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMEDIATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREMEDIATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetRemediationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemediationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateIdentifier, templateIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemediationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateIdentifier, templateIdentifier_);
    };
    GetRemediationTemplateRequest() = default ;
    GetRemediationTemplateRequest(const GetRemediationTemplateRequest &) = default ;
    GetRemediationTemplateRequest(GetRemediationTemplateRequest &&) = default ;
    GetRemediationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemediationTemplateRequest() = default ;
    GetRemediationTemplateRequest& operator=(const GetRemediationTemplateRequest &) = default ;
    GetRemediationTemplateRequest& operator=(GetRemediationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateIdentifier_ == nullptr; };
    // templateIdentifier Field Functions 
    bool hasTemplateIdentifier() const { return this->templateIdentifier_ != nullptr;};
    void deleteTemplateIdentifier() { this->templateIdentifier_ = nullptr;};
    inline string getTemplateIdentifier() const { DARABONBA_PTR_GET_DEFAULT(templateIdentifier_, "") };
    inline GetRemediationTemplateRequest& setTemplateIdentifier(string templateIdentifier) { DARABONBA_PTR_SET_VALUE(templateIdentifier_, templateIdentifier) };


  protected:
    // The ID of the automatic remediation template.
    // 
    // For more information about how to obtain the ID of a remediation template, see [Compliance library](https://help.aliyun.com/document_detail/2337741.html).
    shared_ptr<string> templateIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
