// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class CreateTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    CreateTableRequest() = default ;
    CreateTableRequest(const CreateTableRequest &) = default ;
    CreateTableRequest(CreateTableRequest &&) = default ;
    CreateTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableRequest() = default ;
    CreateTableRequest& operator=(const CreateTableRequest &) = default ;
    CreateTableRequest& operator=(CreateTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->identifier_ != nullptr
        && this->schema_ != nullptr; };
    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline const Identifier & identifier() const { DARABONBA_PTR_GET_CONST(identifier_, Identifier) };
    inline Identifier identifier() { DARABONBA_PTR_GET(identifier_, Identifier) };
    inline CreateTableRequest& setIdentifier(const Identifier & identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };
    inline CreateTableRequest& setIdentifier(Identifier && identifier) { DARABONBA_PTR_SET_RVALUE(identifier_, identifier) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const Schema & schema() const { DARABONBA_PTR_GET_CONST(schema_, Schema) };
    inline Schema schema() { DARABONBA_PTR_GET(schema_, Schema) };
    inline CreateTableRequest& setSchema(const Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline CreateTableRequest& setSchema(Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    std::shared_ptr<Identifier> identifier_ = nullptr;
    std::shared_ptr<Schema> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
