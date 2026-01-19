// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    DescribePluginTemplatesResponseBody() = default ;
    DescribePluginTemplatesResponseBody(const DescribePluginTemplatesResponseBody &) = default ;
    DescribePluginTemplatesResponseBody(DescribePluginTemplatesResponseBody &&) = default ;
    DescribePluginTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginTemplatesResponseBody() = default ;
    DescribePluginTemplatesResponseBody& operator=(const DescribePluginTemplatesResponseBody &) = default ;
    DescribePluginTemplatesResponseBody& operator=(DescribePluginTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(Template, template_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Template : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Template& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DocumentAnchor, documentAnchor_);
          DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Template& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DocumentAnchor, documentAnchor_);
          DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->documentAnchor_ == nullptr && this->documentId_ == nullptr && this->sample_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // documentAnchor Field Functions 
        bool hasDocumentAnchor() const { return this->documentAnchor_ != nullptr;};
        void deleteDocumentAnchor() { this->documentAnchor_ = nullptr;};
        inline string getDocumentAnchor() const { DARABONBA_PTR_GET_DEFAULT(documentAnchor_, "") };
        inline Template& setDocumentAnchor(string documentAnchor) { DARABONBA_PTR_SET_VALUE(documentAnchor_, documentAnchor) };


        // documentId Field Functions 
        bool hasDocumentId() const { return this->documentId_ != nullptr;};
        void deleteDocumentId() { this->documentId_ = nullptr;};
        inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
        inline Template& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline Template& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Template& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // The description.
        shared_ptr<string> description_ {};
        // The document anchor point.
        shared_ptr<string> documentAnchor_ {};
        // The ID of the document.
        shared_ptr<string> documentId_ {};
        // The sample.
        shared_ptr<string> sample_ {};
        // The title of the plug-in template title.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->template_ == nullptr; };
      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const vector<Templates::Template> & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, vector<Templates::Template>) };
      inline vector<Templates::Template> getTemplate() { DARABONBA_PTR_GET(template_, vector<Templates::Template>) };
      inline Templates& setTemplate(const vector<Templates::Template> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Templates& setTemplate(vector<Templates::Template> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      shared_ptr<vector<Templates::Template>> template_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const DescribePluginTemplatesResponseBody::Templates & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, DescribePluginTemplatesResponseBody::Templates) };
    inline DescribePluginTemplatesResponseBody::Templates getTemplates() { DARABONBA_PTR_GET(templates_, DescribePluginTemplatesResponseBody::Templates) };
    inline DescribePluginTemplatesResponseBody& setTemplates(const DescribePluginTemplatesResponseBody::Templates & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribePluginTemplatesResponseBody& setTemplates(DescribePluginTemplatesResponseBody::Templates && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The templates.
    shared_ptr<DescribePluginTemplatesResponseBody::Templates> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
