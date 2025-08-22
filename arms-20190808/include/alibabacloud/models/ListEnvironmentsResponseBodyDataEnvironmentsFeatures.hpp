// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODYDATAENVIRONMENTSFEATURES_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTSRESPONSEBODYDATAENVIRONMENTSFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentsResponseBodyDataEnvironmentsFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentsResponseBodyDataEnvironmentsFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentsResponseBodyDataEnvironmentsFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListEnvironmentsResponseBodyDataEnvironmentsFeatures() = default ;
    ListEnvironmentsResponseBodyDataEnvironmentsFeatures(const ListEnvironmentsResponseBodyDataEnvironmentsFeatures &) = default ;
    ListEnvironmentsResponseBodyDataEnvironmentsFeatures(ListEnvironmentsResponseBodyDataEnvironmentsFeatures &&) = default ;
    ListEnvironmentsResponseBodyDataEnvironmentsFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentsResponseBodyDataEnvironmentsFeatures() = default ;
    ListEnvironmentsResponseBodyDataEnvironmentsFeatures& operator=(const ListEnvironmentsResponseBodyDataEnvironmentsFeatures &) = default ;
    ListEnvironmentsResponseBodyDataEnvironmentsFeatures& operator=(ListEnvironmentsResponseBodyDataEnvironmentsFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->description_ != nullptr && this->icon_ != nullptr && this->name_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironmentsFeatures& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironmentsFeatures& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironmentsFeatures& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentsResponseBodyDataEnvironmentsFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The alias of the feature.
    std::shared_ptr<string> alias_ = nullptr;
    // The description of the feature.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The name of the feature.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
