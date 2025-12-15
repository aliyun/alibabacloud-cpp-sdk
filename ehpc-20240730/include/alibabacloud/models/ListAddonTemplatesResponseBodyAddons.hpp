// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADDONTEMPLATESRESPONSEBODYADDONS_HPP_
#define ALIBABACLOUD_MODELS_LISTADDONTEMPLATESRESPONSEBODYADDONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListAddonTemplatesResponseBodyAddons : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAddonTemplatesResponseBodyAddons& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAddonTemplatesResponseBodyAddons& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAddonTemplatesResponseBodyAddons() = default ;
    ListAddonTemplatesResponseBodyAddons(const ListAddonTemplatesResponseBodyAddons &) = default ;
    ListAddonTemplatesResponseBodyAddons(ListAddonTemplatesResponseBodyAddons &&) = default ;
    ListAddonTemplatesResponseBodyAddons(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAddonTemplatesResponseBodyAddons() = default ;
    ListAddonTemplatesResponseBodyAddons& operator=(const ListAddonTemplatesResponseBodyAddons &) = default ;
    ListAddonTemplatesResponseBodyAddons& operator=(ListAddonTemplatesResponseBodyAddons &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->label_ == nullptr && return this->name_ == nullptr && return this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAddonTemplatesResponseBodyAddons& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListAddonTemplatesResponseBodyAddons& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAddonTemplatesResponseBodyAddons& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAddonTemplatesResponseBodyAddons& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The addon description.
    std::shared_ptr<string> description_ = nullptr;
    // The addon label
    std::shared_ptr<string> label_ = nullptr;
    // The addon name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The addon version.
    // 
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
