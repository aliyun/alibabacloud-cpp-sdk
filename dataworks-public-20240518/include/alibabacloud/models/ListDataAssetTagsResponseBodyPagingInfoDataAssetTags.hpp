// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAASSETTAGSRESPONSEBODYPAGINGINFODATAASSETTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAASSETTAGSRESPONSEBODYPAGINGINFODATAASSETTAGS_HPP_
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
  class ListDataAssetTagsResponseBodyPagingInfoDataAssetTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Managers, managers_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Managers, managers_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListDataAssetTagsResponseBodyPagingInfoDataAssetTags() = default ;
    ListDataAssetTagsResponseBodyPagingInfoDataAssetTags(const ListDataAssetTagsResponseBodyPagingInfoDataAssetTags &) = default ;
    ListDataAssetTagsResponseBodyPagingInfoDataAssetTags(ListDataAssetTagsResponseBodyPagingInfoDataAssetTags &&) = default ;
    ListDataAssetTagsResponseBodyPagingInfoDataAssetTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataAssetTagsResponseBodyPagingInfoDataAssetTags() = default ;
    ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& operator=(const ListDataAssetTagsResponseBodyPagingInfoDataAssetTags &) = default ;
    ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& operator=(ListDataAssetTagsResponseBodyPagingInfoDataAssetTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->key_ == nullptr && return this->managers_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->valueType_ == nullptr && return this->values_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // managers Field Functions 
    bool hasManagers() const { return this->managers_ != nullptr;};
    void deleteManagers() { this->managers_ = nullptr;};
    inline const vector<string> & managers() const { DARABONBA_PTR_GET_CONST(managers_, vector<string>) };
    inline vector<string> managers() { DARABONBA_PTR_GET(managers_, vector<string>) };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setManagers(const vector<string> & managers) { DARABONBA_PTR_SET_VALUE(managers_, managers) };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setManagers(vector<string> && managers) { DARABONBA_PTR_SET_RVALUE(managers_, managers) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline ListDataAssetTagsResponseBodyPagingInfoDataAssetTags& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The type of the tag.
    // 
    // Valid values:
    // 
    // *   Normal
    // *   System
    std::shared_ptr<string> category_ = nullptr;
    // The time when the tag was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator of the tag.
    std::shared_ptr<string> createUser_ = nullptr;
    // The description of the tag.
    std::shared_ptr<string> description_ = nullptr;
    // The tag key.
    std::shared_ptr<string> key_ = nullptr;
    // The tag administrators.
    std::shared_ptr<vector<string>> managers_ = nullptr;
    // The time when the tag was last modified.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The user who last modified the tag.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The type of the tag value.
    std::shared_ptr<string> valueType_ = nullptr;
    // The tag values.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
