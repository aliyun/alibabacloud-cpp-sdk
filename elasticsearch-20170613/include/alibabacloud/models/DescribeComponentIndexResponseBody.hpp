// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTINDEXRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTINDEXRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeComponentIndexResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentIndexResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentIndexResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeComponentIndexResponseBody() = default ;
    DescribeComponentIndexResponseBody(const DescribeComponentIndexResponseBody &) = default ;
    DescribeComponentIndexResponseBody(DescribeComponentIndexResponseBody &&) = default ;
    DescribeComponentIndexResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentIndexResponseBody() = default ;
    DescribeComponentIndexResponseBody& operator=(const DescribeComponentIndexResponseBody &) = default ;
    DescribeComponentIndexResponseBody& operator=(DescribeComponentIndexResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_ANY_TO_JSON(_meta, meta_);
        DARABONBA_PTR_TO_JSON(template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_ANY_FROM_JSON(_meta, meta_);
        DARABONBA_PTR_FROM_JSON(template, template_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
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
        inline         const Darabonba::Json & getAliases() const { DARABONBA_GET(aliases_) };
        Darabonba::Json & getAliases() { DARABONBA_GET(aliases_) };
        inline Template& setAliases(const Darabonba::Json & aliases) { DARABONBA_SET_VALUE(aliases_, aliases) };
        inline Template& setAliases(Darabonba::Json && aliases) { DARABONBA_SET_RVALUE(aliases_, aliases) };


        // mappings Field Functions 
        bool hasMappings() const { return this->mappings_ != nullptr;};
        void deleteMappings() { this->mappings_ = nullptr;};
        inline         const Darabonba::Json & getMappings() const { DARABONBA_GET(mappings_) };
        Darabonba::Json & getMappings() { DARABONBA_GET(mappings_) };
        inline Template& setMappings(const Darabonba::Json & mappings) { DARABONBA_SET_VALUE(mappings_, mappings) };
        inline Template& setMappings(Darabonba::Json && mappings) { DARABONBA_SET_RVALUE(mappings_, mappings) };


        // settings Field Functions 
        bool hasSettings() const { return this->settings_ != nullptr;};
        void deleteSettings() { this->settings_ = nullptr;};
        inline         const Darabonba::Json & getSettings() const { DARABONBA_GET(settings_) };
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
      inline       const Darabonba::Json & getMeta() const { DARABONBA_GET(meta_) };
      Darabonba::Json & getMeta() { DARABONBA_GET(meta_) };
      inline Result& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
      inline Result& setMeta(Darabonba::Json && meta) { DARABONBA_SET_RVALUE(meta_, meta) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline const Result::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, Result::Template) };
      inline Result::Template getTemplate() { DARABONBA_PTR_GET(template_, Result::Template) };
      inline Result& setTemplate(const Result::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
      inline Result& setTemplate(Result::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    protected:
      Darabonba::Json meta_ {};
      shared_ptr<Result::Template> template_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComponentIndexResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeComponentIndexResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeComponentIndexResponseBody::Result) };
    inline DescribeComponentIndexResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeComponentIndexResponseBody::Result) };
    inline DescribeComponentIndexResponseBody& setResult(const DescribeComponentIndexResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeComponentIndexResponseBody& setResult(DescribeComponentIndexResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeComponentIndexResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
