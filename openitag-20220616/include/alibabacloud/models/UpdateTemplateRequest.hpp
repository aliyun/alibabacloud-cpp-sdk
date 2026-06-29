// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TemplateDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class UpdateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateTemplateRequest() = default ;
    UpdateTemplateRequest(const UpdateTemplateRequest &) = default ;
    UpdateTemplateRequest(UpdateTemplateRequest &&) = default ;
    UpdateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateRequest() = default ;
    UpdateTemplateRequest& operator=(const UpdateTemplateRequest &) = default ;
    UpdateTemplateRequest& operator=(UpdateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const TemplateDTO & getBody() const { DARABONBA_PTR_GET_CONST(body_, TemplateDTO) };
    inline TemplateDTO getBody() { DARABONBA_PTR_GET(body_, TemplateDTO) };
    inline UpdateTemplateRequest& setBody(const TemplateDTO & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTemplateRequest& setBody(TemplateDTO && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // template
    shared_ptr<TemplateDTO> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
