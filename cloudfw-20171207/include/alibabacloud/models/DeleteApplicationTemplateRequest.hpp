// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteApplicationTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationTemplateId, applicationTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationTemplateId, applicationTemplateId_);
    };
    DeleteApplicationTemplateRequest() = default ;
    DeleteApplicationTemplateRequest(const DeleteApplicationTemplateRequest &) = default ;
    DeleteApplicationTemplateRequest(DeleteApplicationTemplateRequest &&) = default ;
    DeleteApplicationTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationTemplateRequest() = default ;
    DeleteApplicationTemplateRequest& operator=(const DeleteApplicationTemplateRequest &) = default ;
    DeleteApplicationTemplateRequest& operator=(DeleteApplicationTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationTemplateId_ == nullptr; };
    // applicationTemplateId Field Functions 
    bool hasApplicationTemplateId() const { return this->applicationTemplateId_ != nullptr;};
    void deleteApplicationTemplateId() { this->applicationTemplateId_ = nullptr;};
    inline string getApplicationTemplateId() const { DARABONBA_PTR_GET_DEFAULT(applicationTemplateId_, "") };
    inline DeleteApplicationTemplateRequest& setApplicationTemplateId(string applicationTemplateId) { DARABONBA_PTR_SET_VALUE(applicationTemplateId_, applicationTemplateId) };


  protected:
    // The ID of the application program template to delete. This parameter is required. If you leave this parameter empty, a parameter fault is returned. The template must exist within the current Alibaba Cloud account. You cannot delete a template if it contains custom application program rules or is referenced by an access control policy of the Internet border, NAT, or virtual private cloud (VPC) firewalls.
    shared_ptr<string> applicationTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
