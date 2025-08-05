// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESTABLELIFECYCLE_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESTABLELIFECYCLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesTableLifecycle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesTableLifecycle& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesTableLifecycle& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetProjectResponseBodyDataPropertiesTableLifecycle() = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycle(const GetProjectResponseBodyDataPropertiesTableLifecycle &) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycle(GetProjectResponseBodyDataPropertiesTableLifecycle &&) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesTableLifecycle() = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycle& operator=(const GetProjectResponseBodyDataPropertiesTableLifecycle &) = default ;
    GetProjectResponseBodyDataPropertiesTableLifecycle& operator=(GetProjectResponseBodyDataPropertiesTableLifecycle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->value_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetProjectResponseBodyDataPropertiesTableLifecycle& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetProjectResponseBodyDataPropertiesTableLifecycle& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The lifecycle type. Valid values:
    // 
    // *   **mandatory**: The lifecycle clause is required in a table creation statement.
    // *   **optional**: The lifecycle clause is optional in a table creation statement. If you do not configure a lifecycle for a table, the table does not expire.
    // *   **inherit**: If you do not configure a lifecycle for a table when you create the table, the value of the odps.table.lifecycle.value parameter is used as the table lifecycle by default.
    std::shared_ptr<string> type_ = nullptr;
    // The table lifecycle. Unit: days. Valid values: 1 to 37231. Default value: 37231.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
