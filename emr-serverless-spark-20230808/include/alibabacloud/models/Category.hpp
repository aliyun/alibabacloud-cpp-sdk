// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORY_HPP_
#define ALIBABACLOUD_MODELS_CATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class Category : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Category& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentBizId, parentBizId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Category& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(gmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentBizId, parentBizId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Category() = default ;
    Category(const Category &) = default ;
    Category(Category &&) = default ;
    Category(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Category() = default ;
    Category& operator=(const Category &) = default ;
    Category& operator=(Category &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->creator_ != nullptr && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr && this->modifier_ != nullptr && this->name_ != nullptr
        && this->parentBizId_ != nullptr && this->type_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline Category& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline Category& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline Category& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline Category& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline int64_t modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, 0L) };
    inline Category& setModifier(int64_t modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Category& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentBizId Field Functions 
    bool hasParentBizId() const { return this->parentBizId_ != nullptr;};
    void deleteParentBizId() { this->parentBizId_ = nullptr;};
    inline string parentBizId() const { DARABONBA_PTR_GET_DEFAULT(parentBizId_, "") };
    inline Category& setParentBizId(string parentBizId) { DARABONBA_PTR_SET_VALUE(parentBizId_, parentBizId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Category& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> creator_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> modifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
