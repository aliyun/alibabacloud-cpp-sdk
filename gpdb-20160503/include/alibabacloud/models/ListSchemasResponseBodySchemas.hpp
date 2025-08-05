// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMASRESPONSEBODYSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMASRESPONSEBODYSCHEMAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSchemasResponseBodySchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemasResponseBodySchemas& obj) { 
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemasResponseBodySchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
    };
    ListSchemasResponseBodySchemas() = default ;
    ListSchemasResponseBodySchemas(const ListSchemasResponseBodySchemas &) = default ;
    ListSchemasResponseBodySchemas(ListSchemasResponseBodySchemas &&) = default ;
    ListSchemasResponseBodySchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemasResponseBodySchemas() = default ;
    ListSchemasResponseBodySchemas& operator=(const ListSchemasResponseBodySchemas &) = default ;
    ListSchemasResponseBodySchemas& operator=(ListSchemasResponseBodySchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schemas_ != nullptr; };
    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<string> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<string>) };
    inline vector<string> schemas() { DARABONBA_PTR_GET(schemas_, vector<string>) };
    inline ListSchemasResponseBodySchemas& setSchemas(const vector<string> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline ListSchemasResponseBodySchemas& setSchemas(vector<string> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


  protected:
    std::shared_ptr<vector<string>> schemas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
