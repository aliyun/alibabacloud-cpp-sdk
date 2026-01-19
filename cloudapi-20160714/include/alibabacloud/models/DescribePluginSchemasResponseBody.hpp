// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSCHEMASRESPONSEBODY_HPP_
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
  class DescribePluginSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PluginSchemas, pluginSchemas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PluginSchemas, pluginSchemas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePluginSchemasResponseBody() = default ;
    DescribePluginSchemasResponseBody(const DescribePluginSchemasResponseBody &) = default ;
    DescribePluginSchemasResponseBody(DescribePluginSchemasResponseBody &&) = default ;
    DescribePluginSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSchemasResponseBody() = default ;
    DescribePluginSchemasResponseBody& operator=(const DescribePluginSchemasResponseBody &) = default ;
    DescribePluginSchemasResponseBody& operator=(DescribePluginSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PluginSchemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PluginSchemas& obj) { 
        DARABONBA_PTR_TO_JSON(PluginSchema, pluginSchema_);
      };
      friend void from_json(const Darabonba::Json& j, PluginSchemas& obj) { 
        DARABONBA_PTR_FROM_JSON(PluginSchema, pluginSchema_);
      };
      PluginSchemas() = default ;
      PluginSchemas(const PluginSchemas &) = default ;
      PluginSchemas(PluginSchemas &&) = default ;
      PluginSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PluginSchemas() = default ;
      PluginSchemas& operator=(const PluginSchemas &) = default ;
      PluginSchemas& operator=(PluginSchemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PluginSchema : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PluginSchema& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SupportClassic, supportClassic_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, PluginSchema& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SupportClassic, supportClassic_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        PluginSchema() = default ;
        PluginSchema(const PluginSchema &) = default ;
        PluginSchema(PluginSchema &&) = default ;
        PluginSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PluginSchema() = default ;
        PluginSchema& operator=(const PluginSchema &) = default ;
        PluginSchema& operator=(PluginSchema &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->documentId_ == nullptr && this->name_ == nullptr && this->supportClassic_ == nullptr && this->title_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PluginSchema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // documentId Field Functions 
        bool hasDocumentId() const { return this->documentId_ != nullptr;};
        void deleteDocumentId() { this->documentId_ = nullptr;};
        inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
        inline PluginSchema& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PluginSchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // supportClassic Field Functions 
        bool hasSupportClassic() const { return this->supportClassic_ != nullptr;};
        void deleteSupportClassic() { this->supportClassic_ = nullptr;};
        inline bool getSupportClassic() const { DARABONBA_PTR_GET_DEFAULT(supportClassic_, false) };
        inline PluginSchema& setSupportClassic(bool supportClassic) { DARABONBA_PTR_SET_VALUE(supportClassic_, supportClassic) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline PluginSchema& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> documentId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> supportClassic_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->pluginSchema_ == nullptr; };
      // pluginSchema Field Functions 
      bool hasPluginSchema() const { return this->pluginSchema_ != nullptr;};
      void deletePluginSchema() { this->pluginSchema_ = nullptr;};
      inline const vector<PluginSchemas::PluginSchema> & getPluginSchema() const { DARABONBA_PTR_GET_CONST(pluginSchema_, vector<PluginSchemas::PluginSchema>) };
      inline vector<PluginSchemas::PluginSchema> getPluginSchema() { DARABONBA_PTR_GET(pluginSchema_, vector<PluginSchemas::PluginSchema>) };
      inline PluginSchemas& setPluginSchema(const vector<PluginSchemas::PluginSchema> & pluginSchema) { DARABONBA_PTR_SET_VALUE(pluginSchema_, pluginSchema) };
      inline PluginSchemas& setPluginSchema(vector<PluginSchemas::PluginSchema> && pluginSchema) { DARABONBA_PTR_SET_RVALUE(pluginSchema_, pluginSchema) };


    protected:
      shared_ptr<vector<PluginSchemas::PluginSchema>> pluginSchema_ {};
    };

    virtual bool empty() const override { return this->pluginSchemas_ == nullptr
        && this->requestId_ == nullptr; };
    // pluginSchemas Field Functions 
    bool hasPluginSchemas() const { return this->pluginSchemas_ != nullptr;};
    void deletePluginSchemas() { this->pluginSchemas_ = nullptr;};
    inline const DescribePluginSchemasResponseBody::PluginSchemas & getPluginSchemas() const { DARABONBA_PTR_GET_CONST(pluginSchemas_, DescribePluginSchemasResponseBody::PluginSchemas) };
    inline DescribePluginSchemasResponseBody::PluginSchemas getPluginSchemas() { DARABONBA_PTR_GET(pluginSchemas_, DescribePluginSchemasResponseBody::PluginSchemas) };
    inline DescribePluginSchemasResponseBody& setPluginSchemas(const DescribePluginSchemasResponseBody::PluginSchemas & pluginSchemas) { DARABONBA_PTR_SET_VALUE(pluginSchemas_, pluginSchemas) };
    inline DescribePluginSchemasResponseBody& setPluginSchemas(DescribePluginSchemasResponseBody::PluginSchemas && pluginSchemas) { DARABONBA_PTR_SET_RVALUE(pluginSchemas_, pluginSchemas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribePluginSchemasResponseBody::PluginSchemas> pluginSchemas_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
