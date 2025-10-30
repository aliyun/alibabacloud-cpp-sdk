// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODYBASELINEITEMSDEPENDSON_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODYBASELINEITEMSDEPENDSON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn() = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn(const ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn &) = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn(ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn &&) = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn() = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& operator=(const ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn &) = default ;
    ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& operator=(ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->type_ == nullptr && return this->version_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListAccountFactoryBaselineItemsResponseBodyBaselineItemsDependsOn& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the baseline item.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the baseline item.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the baseline item.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
