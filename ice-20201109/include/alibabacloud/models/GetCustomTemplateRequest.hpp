// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Subtype, subtype_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCustomTemplateRequest() = default ;
    GetCustomTemplateRequest(const GetCustomTemplateRequest &) = default ;
    GetCustomTemplateRequest(GetCustomTemplateRequest &&) = default ;
    GetCustomTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomTemplateRequest() = default ;
    GetCustomTemplateRequest& operator=(const GetCustomTemplateRequest &) = default ;
    GetCustomTemplateRequest& operator=(GetCustomTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtype_ == nullptr
        && this->templateId_ == nullptr && this->type_ == nullptr; };
    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline int32_t getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, 0) };
    inline GetCustomTemplateRequest& setSubtype(int32_t subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetCustomTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetCustomTemplateRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The template subtype.
    shared_ptr<int32_t> subtype_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
    // The ID of the template type that is used to query the default template. This parameter is required if TemplateId is not specified.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
