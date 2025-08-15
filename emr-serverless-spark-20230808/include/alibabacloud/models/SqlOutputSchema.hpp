// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLOUTPUTSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_SQLOUTPUTSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SqlOutputSchemaFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class SqlOutputSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlOutputSchema& obj) { 
      DARABONBA_PTR_TO_JSON(fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, SqlOutputSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(fields, fields_);
    };
    SqlOutputSchema() = default ;
    SqlOutputSchema(const SqlOutputSchema &) = default ;
    SqlOutputSchema(SqlOutputSchema &&) = default ;
    SqlOutputSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlOutputSchema() = default ;
    SqlOutputSchema& operator=(const SqlOutputSchema &) = default ;
    SqlOutputSchema& operator=(SqlOutputSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<Models::SqlOutputSchemaFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Models::SqlOutputSchemaFields>) };
    inline vector<Models::SqlOutputSchemaFields> fields() { DARABONBA_PTR_GET(fields_, vector<Models::SqlOutputSchemaFields>) };
    inline SqlOutputSchema& setFields(const vector<Models::SqlOutputSchemaFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline SqlOutputSchema& setFields(vector<Models::SqlOutputSchemaFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    std::shared_ptr<vector<Models::SqlOutputSchemaFields>> fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
