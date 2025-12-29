// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATEATTRIBUTERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATEATTRIBUTERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTemplateAttributeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateAttributeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateAttributeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeTemplateAttributeResponse() = default ;
    DescribeTemplateAttributeResponse(const DescribeTemplateAttributeResponse &) = default ;
    DescribeTemplateAttributeResponse(DescribeTemplateAttributeResponse &&) = default ;
    DescribeTemplateAttributeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateAttributeResponse() = default ;
    DescribeTemplateAttributeResponse& operator=(const DescribeTemplateAttributeResponse &) = default ;
    DescribeTemplateAttributeResponse& operator=(DescribeTemplateAttributeResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(acl, acl_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(template, template_);
        DARABONBA_PTR_TO_JSON(template_type, templateType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(template_with_hist_id, templateWithHistId_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(updated, updated_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(acl, acl_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(template, template_);
        DARABONBA_PTR_FROM_JSON(template_type, templateType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(template_with_hist_id, templateWithHistId_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(updated, updated_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->acl_ == nullptr && this->name_ == nullptr && this->template_ == nullptr && this->templateType_ == nullptr && this->description_ == nullptr
        && this->tags_ == nullptr && this->templateWithHistId_ == nullptr && this->created_ == nullptr && this->updated_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Body& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // acl Field Functions 
      bool hasAcl() const { return this->acl_ != nullptr;};
      void deleteAcl() { this->acl_ = nullptr;};
      inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
      inline Body& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline Body& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Body& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // templateWithHistId Field Functions 
      bool hasTemplateWithHistId() const { return this->templateWithHistId_ != nullptr;};
      void deleteTemplateWithHistId() { this->templateWithHistId_ = nullptr;};
      inline string getTemplateWithHistId() const { DARABONBA_PTR_GET_DEFAULT(templateWithHistId_, "") };
      inline Body& setTemplateWithHistId(string templateWithHistId) { DARABONBA_PTR_SET_VALUE(templateWithHistId_, templateWithHistId) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Body& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline string getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
      inline Body& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    protected:
      // The ID of the template. When you update a template, a new template ID is generated.
      shared_ptr<string> id_ {};
      // The access control policy of the template.
      shared_ptr<string> acl_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The template content in the YAML format.
      shared_ptr<string> template_ {};
      // The type of template. The value can be a custom value.
      // 
      // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
      // *   If the parameter is set to `compose`, the template is displayed on the Container Service - Swarm page in the console. Container Service for Swarm is deprecated.
      // *   If the value of the parameter is not `kubernetes`, the template is not displayed on the Templates page in the console. We recommend that you set the parameter to `kubernetes`.
      // 
      // Default value: `kubernetes`.
      shared_ptr<string> templateType_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // The label of the template.
      shared_ptr<string> tags_ {};
      // The unique ID of the template. The value remains unchanged after the template is updated.
      shared_ptr<string> templateWithHistId_ {};
      // The time when the template was created.
      shared_ptr<string> created_ {};
      // The time when the template was updated.
      shared_ptr<string> updated_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeTemplateAttributeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeTemplateAttributeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeTemplateAttributeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribeTemplateAttributeResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribeTemplateAttributeResponse::Body>) };
    inline vector<DescribeTemplateAttributeResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribeTemplateAttributeResponse::Body>) };
    inline DescribeTemplateAttributeResponse& setBody(const vector<DescribeTemplateAttributeResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeTemplateAttributeResponse& setBody(vector<DescribeTemplateAttributeResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribeTemplateAttributeResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
