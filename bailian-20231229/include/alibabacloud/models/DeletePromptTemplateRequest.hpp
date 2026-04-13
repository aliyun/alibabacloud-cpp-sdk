// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMPTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMPTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeletePromptTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePromptTemplateRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeletePromptTemplateRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeletePromptTemplateRequest() = default ;
    DeletePromptTemplateRequest(const DeletePromptTemplateRequest &) = default ;
    DeletePromptTemplateRequest(DeletePromptTemplateRequest &&) = default ;
    DeletePromptTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePromptTemplateRequest() = default ;
    DeletePromptTemplateRequest& operator=(const DeletePromptTemplateRequest &) = default ;
    DeletePromptTemplateRequest& operator=(DeletePromptTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
