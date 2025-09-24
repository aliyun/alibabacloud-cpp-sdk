// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESQUOTASSPECS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESQUOTASSPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesResponseBodyResourcesQuotasSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyResourcesQuotasSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyResourcesQuotasSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListResourcesResponseBodyResourcesQuotasSpecs() = default ;
    ListResourcesResponseBodyResourcesQuotasSpecs(const ListResourcesResponseBodyResourcesQuotasSpecs &) = default ;
    ListResourcesResponseBodyResourcesQuotasSpecs(ListResourcesResponseBodyResourcesQuotasSpecs &&) = default ;
    ListResourcesResponseBodyResourcesQuotasSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyResourcesQuotasSpecs() = default ;
    ListResourcesResponseBodyResourcesQuotasSpecs& operator=(const ListResourcesResponseBodyResourcesQuotasSpecs &) = default ;
    ListResourcesResponseBodyResourcesQuotasSpecs& operator=(ListResourcesResponseBodyResourcesQuotasSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListResourcesResponseBodyResourcesQuotasSpecs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListResourcesResponseBodyResourcesQuotasSpecs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The specification name.
    std::shared_ptr<string> name_ = nullptr;
    // The specification description.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
