// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESOURCESCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListInstanceResourceSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResourceSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResourceSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
    };
    ListInstanceResourceSchemasRequest() = default ;
    ListInstanceResourceSchemasRequest(const ListInstanceResourceSchemasRequest &) = default ;
    ListInstanceResourceSchemasRequest(ListInstanceResourceSchemasRequest &&) = default ;
    ListInstanceResourceSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResourceSchemasRequest() = default ;
    ListInstanceResourceSchemasRequest& operator=(const ListInstanceResourceSchemasRequest &) = default ;
    ListInstanceResourceSchemasRequest& operator=(ListInstanceResourceSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schemaName_ == nullptr; };
    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListInstanceResourceSchemasRequest& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


  protected:
    shared_ptr<string> schemaName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
