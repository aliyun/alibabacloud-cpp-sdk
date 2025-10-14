// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERREQUESTOPTIONAPPPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERREQUESTOPTIONAPPPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddFolderRequestOptionAppProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderRequestOptionAppProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderRequestOptionAppProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    AddFolderRequestOptionAppProperties() = default ;
    AddFolderRequestOptionAppProperties(const AddFolderRequestOptionAppProperties &) = default ;
    AddFolderRequestOptionAppProperties(AddFolderRequestOptionAppProperties &&) = default ;
    AddFolderRequestOptionAppProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderRequestOptionAppProperties() = default ;
    AddFolderRequestOptionAppProperties& operator=(const AddFolderRequestOptionAppProperties &) = default ;
    AddFolderRequestOptionAppProperties& operator=(AddFolderRequestOptionAppProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr && return this->visibility_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddFolderRequestOptionAppProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddFolderRequestOptionAppProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string visibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline AddFolderRequestOptionAppProperties& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> visibility_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
