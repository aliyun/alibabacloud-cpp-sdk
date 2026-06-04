// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMATTRIBUTE_HPP_
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
  class CustomAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(ValueEnums, valueEnums_);
    };
    friend void from_json(const Darabonba::Json& j, CustomAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisplayEnabled, displayEnabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EntityTypes, entityTypes_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(SearchFilterEnabled, searchFilterEnabled_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(ValueEnums, valueEnums_);
    };
    CustomAttribute() = default ;
    CustomAttribute(const CustomAttribute &) = default ;
    CustomAttribute(CustomAttribute &&) = default ;
    CustomAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomAttribute() = default ;
    CustomAttribute& operator=(const CustomAttribute &) = default ;
    CustomAttribute& operator=(CustomAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->displayEnabled_ == nullptr && this->displayName_ == nullptr && this->entityTypes_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->searchFilterEnabled_ == nullptr && this->type_ == nullptr && this->valueEnums_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CustomAttribute& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CustomAttribute& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // displayEnabled Field Functions 
    bool hasDisplayEnabled() const { return this->displayEnabled_ != nullptr;};
    void deleteDisplayEnabled() { this->displayEnabled_ = nullptr;};
    inline bool getDisplayEnabled() const { DARABONBA_PTR_GET_DEFAULT(displayEnabled_, false) };
    inline CustomAttribute& setDisplayEnabled(bool displayEnabled) { DARABONBA_PTR_SET_VALUE(displayEnabled_, displayEnabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CustomAttribute& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // entityTypes Field Functions 
    bool hasEntityTypes() const { return this->entityTypes_ != nullptr;};
    void deleteEntityTypes() { this->entityTypes_ = nullptr;};
    inline const vector<string> & getEntityTypes() const { DARABONBA_PTR_GET_CONST(entityTypes_, vector<string>) };
    inline vector<string> getEntityTypes() { DARABONBA_PTR_GET(entityTypes_, vector<string>) };
    inline CustomAttribute& setEntityTypes(const vector<string> & entityTypes) { DARABONBA_PTR_SET_VALUE(entityTypes_, entityTypes) };
    inline CustomAttribute& setEntityTypes(vector<string> && entityTypes) { DARABONBA_PTR_SET_RVALUE(entityTypes_, entityTypes) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CustomAttribute& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline CustomAttribute& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // searchFilterEnabled Field Functions 
    bool hasSearchFilterEnabled() const { return this->searchFilterEnabled_ != nullptr;};
    void deleteSearchFilterEnabled() { this->searchFilterEnabled_ = nullptr;};
    inline bool getSearchFilterEnabled() const { DARABONBA_PTR_GET_DEFAULT(searchFilterEnabled_, false) };
    inline CustomAttribute& setSearchFilterEnabled(bool searchFilterEnabled) { DARABONBA_PTR_SET_VALUE(searchFilterEnabled_, searchFilterEnabled) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CustomAttribute& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // valueEnums Field Functions 
    bool hasValueEnums() const { return this->valueEnums_ != nullptr;};
    void deleteValueEnums() { this->valueEnums_ = nullptr;};
    inline const vector<string> & getValueEnums() const { DARABONBA_PTR_GET_CONST(valueEnums_, vector<string>) };
    inline vector<string> getValueEnums() { DARABONBA_PTR_GET(valueEnums_, vector<string>) };
    inline CustomAttribute& setValueEnums(const vector<string> & valueEnums) { DARABONBA_PTR_SET_VALUE(valueEnums_, valueEnums) };
    inline CustomAttribute& setValueEnums(vector<string> && valueEnums) { DARABONBA_PTR_SET_RVALUE(valueEnums_, valueEnums) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<bool> displayEnabled_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<vector<string>> entityTypes_ {};
    shared_ptr<string> id_ {};
    shared_ptr<int64_t> modifyTime_ {};
    shared_ptr<bool> searchFilterEnabled_ {};
    shared_ptr<string> type_ {};
    shared_ptr<vector<string>> valueEnums_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
