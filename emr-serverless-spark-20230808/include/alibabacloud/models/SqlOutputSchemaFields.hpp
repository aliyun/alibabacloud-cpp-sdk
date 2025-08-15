// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLOUTPUTSCHEMAFIELDS_HPP_
#define ALIBABACLOUD_MODELS_SQLOUTPUTSCHEMAFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class SqlOutputSchemaFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlOutputSchemaFields& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nullable, nullable_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SqlOutputSchemaFields& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    SqlOutputSchemaFields() = default ;
    SqlOutputSchemaFields(const SqlOutputSchemaFields &) = default ;
    SqlOutputSchemaFields(SqlOutputSchemaFields &&) = default ;
    SqlOutputSchemaFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlOutputSchemaFields() = default ;
    SqlOutputSchemaFields& operator=(const SqlOutputSchemaFields &) = default ;
    SqlOutputSchemaFields& operator=(SqlOutputSchemaFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->nullable_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SqlOutputSchemaFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline SqlOutputSchemaFields& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SqlOutputSchemaFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
