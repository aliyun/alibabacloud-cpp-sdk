// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateIndexTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(dataStream, dataStream_);
      DARABONBA_PTR_TO_JSON(ilmPolicy, ilmPolicy_);
      DARABONBA_PTR_TO_JSON(indexPatterns, indexPatterns_);
      DARABONBA_PTR_TO_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(dataStream, dataStream_);
      DARABONBA_PTR_FROM_JSON(ilmPolicy, ilmPolicy_);
      DARABONBA_PTR_FROM_JSON(indexPatterns, indexPatterns_);
      DARABONBA_PTR_FROM_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    CreateIndexTemplateRequest() = default ;
    CreateIndexTemplateRequest(const CreateIndexTemplateRequest &) = default ;
    CreateIndexTemplateRequest(CreateIndexTemplateRequest &&) = default ;
    CreateIndexTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexTemplateRequest() = default ;
    CreateIndexTemplateRequest& operator=(const CreateIndexTemplateRequest &) = default ;
    CreateIndexTemplateRequest& operator=(CreateIndexTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(aliases, aliases_);
        DARABONBA_PTR_TO_JSON(mappings, mappings_);
        DARABONBA_PTR_TO_JSON(settings, settings_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(aliases, aliases_);
        DARABONBA_PTR_FROM_JSON(mappings, mappings_);
        DARABONBA_PTR_FROM_JSON(settings, settings_);
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
      inline string getAliases() const { DARABONBA_PTR_GET_DEFAULT(aliases_, "") };
      inline Template& setAliases(string aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };


      // mappings Field Functions 
      bool hasMappings() const { return this->mappings_ != nullptr;};
      void deleteMappings() { this->mappings_ = nullptr;};
      inline string getMappings() const { DARABONBA_PTR_GET_DEFAULT(mappings_, "") };
      inline Template& setMappings(string mappings) { DARABONBA_PTR_SET_VALUE(mappings_, mappings) };


      // settings Field Functions 
      bool hasSettings() const { return this->settings_ != nullptr;};
      void deleteSettings() { this->settings_ = nullptr;};
      inline string getSettings() const { DARABONBA_PTR_GET_DEFAULT(settings_, "") };
      inline Template& setSettings(string settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };


    protected:
      shared_ptr<string> aliases_ {};
      shared_ptr<string> mappings_ {};
      shared_ptr<string> settings_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataStream_ == nullptr && this->ilmPolicy_ == nullptr && this->indexPatterns_ == nullptr && this->indexTemplate_ == nullptr && this->priority_ == nullptr
        && this->template_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIndexTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataStream Field Functions 
    bool hasDataStream() const { return this->dataStream_ != nullptr;};
    void deleteDataStream() { this->dataStream_ = nullptr;};
    inline bool getDataStream() const { DARABONBA_PTR_GET_DEFAULT(dataStream_, false) };
    inline CreateIndexTemplateRequest& setDataStream(bool dataStream) { DARABONBA_PTR_SET_VALUE(dataStream_, dataStream) };


    // ilmPolicy Field Functions 
    bool hasIlmPolicy() const { return this->ilmPolicy_ != nullptr;};
    void deleteIlmPolicy() { this->ilmPolicy_ = nullptr;};
    inline string getIlmPolicy() const { DARABONBA_PTR_GET_DEFAULT(ilmPolicy_, "") };
    inline CreateIndexTemplateRequest& setIlmPolicy(string ilmPolicy) { DARABONBA_PTR_SET_VALUE(ilmPolicy_, ilmPolicy) };


    // indexPatterns Field Functions 
    bool hasIndexPatterns() const { return this->indexPatterns_ != nullptr;};
    void deleteIndexPatterns() { this->indexPatterns_ = nullptr;};
    inline const vector<string> & getIndexPatterns() const { DARABONBA_PTR_GET_CONST(indexPatterns_, vector<string>) };
    inline vector<string> getIndexPatterns() { DARABONBA_PTR_GET(indexPatterns_, vector<string>) };
    inline CreateIndexTemplateRequest& setIndexPatterns(const vector<string> & indexPatterns) { DARABONBA_PTR_SET_VALUE(indexPatterns_, indexPatterns) };
    inline CreateIndexTemplateRequest& setIndexPatterns(vector<string> && indexPatterns) { DARABONBA_PTR_SET_RVALUE(indexPatterns_, indexPatterns) };


    // indexTemplate Field Functions 
    bool hasIndexTemplate() const { return this->indexTemplate_ != nullptr;};
    void deleteIndexTemplate() { this->indexTemplate_ = nullptr;};
    inline string getIndexTemplate() const { DARABONBA_PTR_GET_DEFAULT(indexTemplate_, "") };
    inline CreateIndexTemplateRequest& setIndexTemplate(string indexTemplate) { DARABONBA_PTR_SET_VALUE(indexTemplate_, indexTemplate) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateIndexTemplateRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateIndexTemplateRequest::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, CreateIndexTemplateRequest::Template) };
    inline CreateIndexTemplateRequest::Template getTemplate() { DARABONBA_PTR_GET(template_, CreateIndexTemplateRequest::Template) };
    inline CreateIndexTemplateRequest& setTemplate(const CreateIndexTemplateRequest::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateIndexTemplateRequest& setTemplate(CreateIndexTemplateRequest::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<bool> dataStream_ {};
    shared_ptr<string> ilmPolicy_ {};
    // This parameter is required.
    shared_ptr<vector<string>> indexPatterns_ {};
    // This parameter is required.
    shared_ptr<string> indexTemplate_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<CreateIndexTemplateRequest::Template> template_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
