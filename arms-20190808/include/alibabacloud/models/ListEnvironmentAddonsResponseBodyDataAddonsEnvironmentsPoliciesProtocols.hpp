// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTSPOLICIESPROTOCOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTADDONSRESPONSEBODYDATAADDONSENVIRONMENTSPOLICIESPROTOCOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols(ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols &&) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols() = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& operator=(const ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols &) = default ;
    ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& operator=(ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->icon_ != nullptr && this->label_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnvironmentAddonsResponseBodyDataAddonsEnvironmentsPoliciesProtocols& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The description of the protocol.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the protocol icon.
    std::shared_ptr<string> icon_ = nullptr;
    // The tag of the protocol.
    std::shared_ptr<string> label_ = nullptr;
    // The name of the protocol.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
