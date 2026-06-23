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
      // 编排模板ID，每次变更都会有一个模板ID。
      shared_ptr<string> id_ {};
      // 编排模板的访问权限，取值：
      // 
      // - `private`：私有。
      // - `public`：公共。
      // - `shared`：可共享。
      shared_ptr<string> acl_ {};
      // 编排模板名称。
      shared_ptr<string> name_ {};
      // 编排模板YAML内容。
      shared_ptr<string> template_ {};
      // 模板类型。
      // 
      // - 当取值为kubernetes时将在控制台的编排模板页面展示该模板。
      // 
      // - 该参数不填写或者取值为其他值时，控制台的编排模板页面将不会展示该模板。
      shared_ptr<string> templateType_ {};
      // 编排模板描述信息。
      shared_ptr<string> description_ {};
      // 部署模板的标签。
      shared_ptr<string> tags_ {};
      // 编排模板唯一ID，不随模板更新而改变。
      shared_ptr<string> templateWithHistId_ {};
      // 编排模板创建时间。
      shared_ptr<string> created_ {};
      // 编排模板更新时间。
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
