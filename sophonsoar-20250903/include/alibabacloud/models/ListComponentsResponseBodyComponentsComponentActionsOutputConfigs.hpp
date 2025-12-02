// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTACTIONSOUTPUTCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTACTIONSOUTPUTCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentsResponseBodyComponentsComponentActionsOutputConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponentsComponentActionsOutputConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponentsComponentActionsOutputConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
    };
    ListComponentsResponseBodyComponentsComponentActionsOutputConfigs() = default ;
    ListComponentsResponseBodyComponentsComponentActionsOutputConfigs(const ListComponentsResponseBodyComponentsComponentActionsOutputConfigs &) = default ;
    ListComponentsResponseBodyComponentsComponentActionsOutputConfigs(ListComponentsResponseBodyComponentsComponentActionsOutputConfigs &&) = default ;
    ListComponentsResponseBodyComponentsComponentActionsOutputConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponentsComponentActionsOutputConfigs() = default ;
    ListComponentsResponseBodyComponentsComponentActionsOutputConfigs& operator=(const ListComponentsResponseBodyComponentsComponentActionsOutputConfigs &) = default ;
    ListComponentsResponseBodyComponentsComponentActionsOutputConfigs& operator=(ListComponentsResponseBodyComponentsComponentActionsOutputConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldType_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsOutputConfigs& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsOutputConfigs& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


  protected:
    // Field name.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field type, with the following values:
    // 
    // - **String**: String.
    // - **Long**: Long integer.
    // - **Integer**: Integer.
    // - **Double**: Double.
    // - **Boolean**: Boolean.
    // - **Complex**: Key-value pair.
    std::shared_ptr<string> fieldType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
