// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DeleteJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobTemplateRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobTemplateRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteJobTemplateRequest() = default ;
    DeleteJobTemplateRequest(const DeleteJobTemplateRequest &) = default ;
    DeleteJobTemplateRequest(DeleteJobTemplateRequest &&) = default ;
    DeleteJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobTemplateRequest() = default ;
    DeleteJobTemplateRequest& operator=(const DeleteJobTemplateRequest &) = default ;
    DeleteJobTemplateRequest& operator=(DeleteJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
