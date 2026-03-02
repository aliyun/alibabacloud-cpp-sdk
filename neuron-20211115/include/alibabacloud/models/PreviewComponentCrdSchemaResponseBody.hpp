// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWCOMPONENTCRDSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWCOMPONENTCRDSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PreviewComponentCrdSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewComponentCrdSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewComponentCrdSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    PreviewComponentCrdSchemaResponseBody() = default ;
    PreviewComponentCrdSchemaResponseBody(const PreviewComponentCrdSchemaResponseBody &) = default ;
    PreviewComponentCrdSchemaResponseBody(PreviewComponentCrdSchemaResponseBody &&) = default ;
    PreviewComponentCrdSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewComponentCrdSchemaResponseBody() = default ;
    PreviewComponentCrdSchemaResponseBody& operator=(const PreviewComponentCrdSchemaResponseBody &) = default ;
    PreviewComponentCrdSchemaResponseBody& operator=(PreviewComponentCrdSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->schema_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreviewComponentCrdSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline PreviewComponentCrdSchemaResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
