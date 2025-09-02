// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODYENTITYTHEME_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODYENTITYTHEME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableThemeLevelResponseBodyEntityTheme : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableThemeLevelResponseBodyEntityTheme& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableThemeLevelResponseBodyEntityTheme& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
    };
    GetMetaTableThemeLevelResponseBodyEntityTheme() = default ;
    GetMetaTableThemeLevelResponseBodyEntityTheme(const GetMetaTableThemeLevelResponseBodyEntityTheme &) = default ;
    GetMetaTableThemeLevelResponseBodyEntityTheme(GetMetaTableThemeLevelResponseBodyEntityTheme &&) = default ;
    GetMetaTableThemeLevelResponseBodyEntityTheme(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableThemeLevelResponseBodyEntityTheme() = default ;
    GetMetaTableThemeLevelResponseBodyEntityTheme& operator=(const GetMetaTableThemeLevelResponseBodyEntityTheme &) = default ;
    GetMetaTableThemeLevelResponseBodyEntityTheme& operator=(GetMetaTableThemeLevelResponseBodyEntityTheme &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->name_ != nullptr && this->parentId_ != nullptr && this->themeId_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline GetMetaTableThemeLevelResponseBodyEntityTheme& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMetaTableThemeLevelResponseBodyEntityTheme& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline GetMetaTableThemeLevelResponseBodyEntityTheme& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline int64_t themeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
    inline GetMetaTableThemeLevelResponseBodyEntityTheme& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


  protected:
    // The level of the theme. Valid values:
    // 
    // *   1
    // *   2
    std::shared_ptr<int32_t> level_ = nullptr;
    // The name of the theme.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the parent theme.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The ID of the theme.
    std::shared_ptr<int64_t> themeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
