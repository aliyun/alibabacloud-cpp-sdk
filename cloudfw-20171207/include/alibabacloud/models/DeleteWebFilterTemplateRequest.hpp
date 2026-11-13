// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBFILTERTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBFILTERTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteWebFilterTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebFilterTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebFilterTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
    };
    DeleteWebFilterTemplateRequest() = default ;
    DeleteWebFilterTemplateRequest(const DeleteWebFilterTemplateRequest &) = default ;
    DeleteWebFilterTemplateRequest(DeleteWebFilterTemplateRequest &&) = default ;
    DeleteWebFilterTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebFilterTemplateRequest() = default ;
    DeleteWebFilterTemplateRequest& operator=(const DeleteWebFilterTemplateRequest &) = default ;
    DeleteWebFilterTemplateRequest& operator=(DeleteWebFilterTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webFilterTemplateId_ == nullptr; };
    // webFilterTemplateId Field Functions 
    bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
    void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
    inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
    inline DeleteWebFilterTemplateRequest& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


  protected:
    // The ID of the web filtering template to be deleted. This parameter is required. If this parameter is empty, a parameter fault is returned. The template must exist in the current Alibaba Cloud account. A template cannot be deleted if it is referenced by an access control policy of the Internet border, NAT, or virtual private cloud (VPC) firewalls.
    shared_ptr<string> webFilterTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
