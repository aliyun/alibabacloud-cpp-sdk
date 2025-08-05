// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDATASOURCESRESPONSEBODYDATAOBJECTLISTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDATASOURCESRESPONSEBODYDATAOBJECTLISTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDataSourcesResponseBodyDataObjectListConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDataSourcesResponseBodyDataObjectListConfig& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(enums, enums_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(placeHolder, placeHolder_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(subType, subType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_ANY_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDataSourcesResponseBodyDataObjectListConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(enums, enums_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(placeHolder, placeHolder_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(subType, subType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_ANY_FROM_JSON(value, value_);
    };
    ListMmsDataSourcesResponseBodyDataObjectListConfig() = default ;
    ListMmsDataSourcesResponseBodyDataObjectListConfig(const ListMmsDataSourcesResponseBodyDataObjectListConfig &) = default ;
    ListMmsDataSourcesResponseBodyDataObjectListConfig(ListMmsDataSourcesResponseBodyDataObjectListConfig &&) = default ;
    ListMmsDataSourcesResponseBodyDataObjectListConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDataSourcesResponseBodyDataObjectListConfig() = default ;
    ListMmsDataSourcesResponseBodyDataObjectListConfig& operator=(const ListMmsDataSourcesResponseBodyDataObjectListConfig &) = default ;
    ListMmsDataSourcesResponseBodyDataObjectListConfig& operator=(ListMmsDataSourcesResponseBodyDataObjectListConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->enums_ != nullptr && this->group_ != nullptr && this->key_ != nullptr && this->name_ != nullptr && this->placeHolder_ != nullptr
        && this->required_ != nullptr && this->subType_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enums Field Functions 
    bool hasEnums() const { return this->enums_ != nullptr;};
    void deleteEnums() { this->enums_ = nullptr;};
    inline const vector<string> & enums() const { DARABONBA_PTR_GET_CONST(enums_, vector<string>) };
    inline vector<string> enums() { DARABONBA_PTR_GET(enums_, vector<string>) };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setEnums(const vector<string> & enums) { DARABONBA_PTR_SET_VALUE(enums_, enums) };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setEnums(vector<string> && enums) { DARABONBA_PTR_SET_RVALUE(enums_, enums) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // placeHolder Field Functions 
    bool hasPlaceHolder() const { return this->placeHolder_ != nullptr;};
    void deletePlaceHolder() { this->placeHolder_ = nullptr;};
    inline string placeHolder() const { DARABONBA_PTR_GET_DEFAULT(placeHolder_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setPlaceHolder(string placeHolder) { DARABONBA_PTR_SET_VALUE(placeHolder_, placeHolder) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline ListMmsDataSourcesResponseBodyDataObjectListConfig& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<vector<string>> enums_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> placeHolder_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<string> subType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
