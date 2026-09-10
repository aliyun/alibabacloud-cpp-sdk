// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
    };
    GetDataCheckTemplateRequest() = default ;
    GetDataCheckTemplateRequest(const GetDataCheckTemplateRequest &) = default ;
    GetDataCheckTemplateRequest(GetDataCheckTemplateRequest &&) = default ;
    GetDataCheckTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckTemplateRequest() = default ;
    GetDataCheckTemplateRequest& operator=(const GetDataCheckTemplateRequest &) = default ;
    GetDataCheckTemplateRequest& operator=(GetDataCheckTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateId_ == nullptr; };
    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetDataCheckTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The check template ID (logical foreign key) that uniquely identifies a check template.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
