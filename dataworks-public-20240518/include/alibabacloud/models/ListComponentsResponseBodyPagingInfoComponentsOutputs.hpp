// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListComponentsResponseBodyPagingInfoComponentsOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyPagingInfoComponentsOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyPagingInfoComponentsOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListComponentsResponseBodyPagingInfoComponentsOutputs() = default ;
    ListComponentsResponseBodyPagingInfoComponentsOutputs(const ListComponentsResponseBodyPagingInfoComponentsOutputs &) = default ;
    ListComponentsResponseBodyPagingInfoComponentsOutputs(ListComponentsResponseBodyPagingInfoComponentsOutputs &&) = default ;
    ListComponentsResponseBodyPagingInfoComponentsOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyPagingInfoComponentsOutputs() = default ;
    ListComponentsResponseBodyPagingInfoComponentsOutputs& operator=(const ListComponentsResponseBodyPagingInfoComponentsOutputs &) = default ;
    ListComponentsResponseBodyPagingInfoComponentsOutputs& operator=(ListComponentsResponseBodyPagingInfoComponentsOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsOutputs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsOutputs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsOutputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsOutputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The default value.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // The parameter description.
    std::shared_ptr<string> description_ = nullptr;
    // The parameter name.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
