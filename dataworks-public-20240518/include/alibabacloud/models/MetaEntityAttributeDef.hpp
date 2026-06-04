// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METAENTITYATTRIBUTEDEF_HPP_
#define ALIBABACLOUD_MODELS_METAENTITYATTRIBUTEDEF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class MetaEntityAttributeDef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaEntityAttributeDef& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IsOptional, isOptional_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MetaEntityAttributeDef& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IsOptional, isOptional_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MetaEntityAttributeDef() = default ;
    MetaEntityAttributeDef(const MetaEntityAttributeDef &) = default ;
    MetaEntityAttributeDef(MetaEntityAttributeDef &&) = default ;
    MetaEntityAttributeDef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaEntityAttributeDef() = default ;
    MetaEntityAttributeDef& operator=(const MetaEntityAttributeDef &) = default ;
    MetaEntityAttributeDef& operator=(MetaEntityAttributeDef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedValues_ == nullptr
        && this->description_ == nullptr && this->displayEnabled_ == nullptr && this->displayName_ == nullptr && this->isOptional_ == nullptr && this->name_ == nullptr
        && this->searchFilterEnabled_ == nullptr && this->type_ == nullptr; };
    // allowedValues Field Functions 
    bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
    void deleteAllowedValues() { this->allowedValues_ = nullptr;};
    inline const vector<string> & getAllowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
    inline vector<string> getAllowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
    inline MetaEntityAttributeDef& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
    inline MetaEntityAttributeDef& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MetaEntityAttributeDef& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayEnabled Field Functions 
    bool hasDisplayEnabled() const { return this->displayEnabled_ != nullptr;};
    void deleteDisplayEnabled() { this->displayEnabled_ = nullptr;};
    inline bool getDisplayEnabled() const { DARABONBA_PTR_GET_DEFAULT(displayEnabled_, false) };
    inline MetaEntityAttributeDef& setDisplayEnabled(bool displayEnabled) { DARABONBA_PTR_SET_VALUE(displayEnabled_, displayEnabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline MetaEntityAttributeDef& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isOptional Field Functions 
    bool hasIsOptional() const { return this->isOptional_ != nullptr;};
    void deleteIsOptional() { this->isOptional_ = nullptr;};
    inline bool getIsOptional() const { DARABONBA_PTR_GET_DEFAULT(isOptional_, false) };
    inline MetaEntityAttributeDef& setIsOptional(bool isOptional) { DARABONBA_PTR_SET_VALUE(isOptional_, isOptional) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetaEntityAttributeDef& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // searchFilterEnabled Field Functions 
    bool hasSearchFilterEnabled() const { return this->searchFilterEnabled_ != nullptr;};
    void deleteSearchFilterEnabled() { this->searchFilterEnabled_ = nullptr;};
    inline bool getSearchFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchFilterEnabled_, false) };
    inline MetaEntityAttributeDef& setSearchFilterEnabled(bool searchFilterEnabled) { DARABONBA_PTR_SET_VALUE(searchFilterEnabled_, searchFilterEnabled) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MetaEntityAttributeDef& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<string>> allowedValues_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> displayEnabled_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<bool> isOptional_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> searchFilterEnabled_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
