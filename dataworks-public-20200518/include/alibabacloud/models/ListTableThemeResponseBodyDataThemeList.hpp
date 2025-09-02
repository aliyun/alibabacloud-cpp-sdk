// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLETHEMERESPONSEBODYDATATHEMELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLETHEMERESPONSEBODYDATATHEMELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTableThemeResponseBodyDataThemeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableThemeResponseBodyDataThemeList& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableThemeResponseBodyDataThemeList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
    };
    ListTableThemeResponseBodyDataThemeList() = default ;
    ListTableThemeResponseBodyDataThemeList(const ListTableThemeResponseBodyDataThemeList &) = default ;
    ListTableThemeResponseBodyDataThemeList(ListTableThemeResponseBodyDataThemeList &&) = default ;
    ListTableThemeResponseBodyDataThemeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableThemeResponseBodyDataThemeList() = default ;
    ListTableThemeResponseBodyDataThemeList& operator=(const ListTableThemeResponseBodyDataThemeList &) = default ;
    ListTableThemeResponseBodyDataThemeList& operator=(ListTableThemeResponseBodyDataThemeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeStamp_ != nullptr
        && this->creator_ != nullptr && this->level_ != nullptr && this->name_ != nullptr && this->parentId_ != nullptr && this->projectId_ != nullptr
        && this->themeId_ != nullptr; };
    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline ListTableThemeResponseBodyDataThemeList& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListTableThemeResponseBodyDataThemeList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline ListTableThemeResponseBodyDataThemeList& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTableThemeResponseBodyDataThemeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline ListTableThemeResponseBodyDataThemeList& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListTableThemeResponseBodyDataThemeList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline int64_t themeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
    inline ListTableThemeResponseBodyDataThemeList& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


  protected:
    // The time when the table level was created.
    std::shared_ptr<int64_t> createTimeStamp_ = nullptr;
    // The creator of the table level.
    std::shared_ptr<string> creator_ = nullptr;
    // The level of the table folder. Valid values: 1 and 2. The value 1 indicates the first level. The value 2 indicates the second level.
    std::shared_ptr<int32_t> level_ = nullptr;
    // The name of the table level.
    std::shared_ptr<string> name_ = nullptr;
    // The ancestor node ID.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The table theme ID.
    std::shared_ptr<int64_t> themeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
