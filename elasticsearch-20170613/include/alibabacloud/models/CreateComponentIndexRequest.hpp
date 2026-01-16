// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateComponentIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentIndexRequest& obj) { 
      DARABONBA_ANY_TO_JSON(_meta, meta_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentIndexRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(_meta, meta_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    CreateComponentIndexRequest() = default ;
    CreateComponentIndexRequest(const CreateComponentIndexRequest &) = default ;
    CreateComponentIndexRequest(CreateComponentIndexRequest &&) = default ;
    CreateComponentIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentIndexRequest() = default ;
    CreateComponentIndexRequest& operator=(const CreateComponentIndexRequest &) = default ;
    CreateComponentIndexRequest& operator=(CreateComponentIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_ANY_TO_JSON(aliases, aliases_);
        DARABONBA_ANY_TO_JSON(mappings, mappings_);
        DARABONBA_ANY_TO_JSON(settings, settings_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_ANY_FROM_JSON(aliases, aliases_);
        DARABONBA_ANY_FROM_JSON(mappings, mappings_);
        DARABONBA_ANY_FROM_JSON(settings, settings_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliases_ == nullptr
        && this->mappings_ == nullptr && this->settings_ == nullptr; };
      // aliases Field Functions 
      bool hasAliases() const { return this->aliases_ != nullptr;};
      void deleteAliases() { this->aliases_ = nullptr;};
      inline       const Darabonba::Json & getAliases() const { DARABONBA_GET(aliases_) };
      Darabonba::Json & getAliases() { DARABONBA_GET(aliases_) };
      inline Template& setAliases(const Darabonba::Json & aliases) { DARABONBA_SET_VALUE(aliases_, aliases) };
      inline Template& setAliases(Darabonba::Json && aliases) { DARABONBA_SET_RVALUE(aliases_, aliases) };


      // mappings Field Functions 
      bool hasMappings() const { return this->mappings_ != nullptr;};
      void deleteMappings() { this->mappings_ = nullptr;};
      inline       const Darabonba::Json & getMappings() const { DARABONBA_GET(mappings_) };
      Darabonba::Json & getMappings() { DARABONBA_GET(mappings_) };
      inline Template& setMappings(const Darabonba::Json & mappings) { DARABONBA_SET_VALUE(mappings_, mappings) };
      inline Template& setMappings(Darabonba::Json && mappings) { DARABONBA_SET_RVALUE(mappings_, mappings) };


      // settings Field Functions 
      bool hasSettings() const { return this->settings_ != nullptr;};
      void deleteSettings() { this->settings_ = nullptr;};
      inline       const Darabonba::Json & getSettings() const { DARABONBA_GET(settings_) };
      Darabonba::Json & getSettings() { DARABONBA_GET(settings_) };
      inline Template& setSettings(const Darabonba::Json & settings) { DARABONBA_SET_VALUE(settings_, settings) };
      inline Template& setSettings(Darabonba::Json && settings) { DARABONBA_SET_RVALUE(settings_, settings) };


    protected:
      Darabonba::Json aliases_ {};
      Darabonba::Json mappings_ {};
      Darabonba::Json settings_ {};
    };

    virtual bool empty() const override { return this->meta_ == nullptr
        && this->template_ == nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
    inline CreateComponentIndexRequest& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline CreateComponentIndexRequest& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateComponentIndexRequest::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, CreateComponentIndexRequest::Template) };
    inline CreateComponentIndexRequest::Template getTemplate() { DARABONBA_PTR_GET(template_, CreateComponentIndexRequest::Template) };
    inline CreateComponentIndexRequest& setTemplate(const CreateComponentIndexRequest::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateComponentIndexRequest& setTemplate(CreateComponentIndexRequest::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    Darabonba::Json meta_ {};
    shared_ptr<CreateComponentIndexRequest::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
