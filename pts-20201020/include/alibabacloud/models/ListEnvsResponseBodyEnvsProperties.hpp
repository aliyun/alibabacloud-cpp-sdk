// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSRESPONSEBODYENVSPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSRESPONSEBODYENVSPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListEnvsResponseBodyEnvsProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvsResponseBodyEnvsProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvsResponseBodyEnvsProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListEnvsResponseBodyEnvsProperties() = default ;
    ListEnvsResponseBodyEnvsProperties(const ListEnvsResponseBodyEnvsProperties &) = default ;
    ListEnvsResponseBodyEnvsProperties(ListEnvsResponseBodyEnvsProperties &&) = default ;
    ListEnvsResponseBodyEnvsProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvsResponseBodyEnvsProperties() = default ;
    ListEnvsResponseBodyEnvsProperties& operator=(const ListEnvsResponseBodyEnvsProperties &) = default ;
    ListEnvsResponseBodyEnvsProperties& operator=(ListEnvsResponseBodyEnvsProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnvsResponseBodyEnvsProperties& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvsResponseBodyEnvsProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListEnvsResponseBodyEnvsProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The description of the attribute.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the attribute.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the attribute.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
