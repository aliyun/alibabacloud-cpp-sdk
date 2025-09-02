// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODYENTITYLEVEL_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODYENTITYLEVEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableThemeLevelResponseBodyEntityLevel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableThemeLevelResponseBodyEntityLevel& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LevelId, levelId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableThemeLevelResponseBodyEntityLevel& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetMetaTableThemeLevelResponseBodyEntityLevel() = default ;
    GetMetaTableThemeLevelResponseBodyEntityLevel(const GetMetaTableThemeLevelResponseBodyEntityLevel &) = default ;
    GetMetaTableThemeLevelResponseBodyEntityLevel(GetMetaTableThemeLevelResponseBodyEntityLevel &&) = default ;
    GetMetaTableThemeLevelResponseBodyEntityLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableThemeLevelResponseBodyEntityLevel() = default ;
    GetMetaTableThemeLevelResponseBodyEntityLevel& operator=(const GetMetaTableThemeLevelResponseBodyEntityLevel &) = default ;
    GetMetaTableThemeLevelResponseBodyEntityLevel& operator=(GetMetaTableThemeLevelResponseBodyEntityLevel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->levelId_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMetaTableThemeLevelResponseBodyEntityLevel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // levelId Field Functions 
    bool hasLevelId() const { return this->levelId_ != nullptr;};
    void deleteLevelId() { this->levelId_ = nullptr;};
    inline int64_t levelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
    inline GetMetaTableThemeLevelResponseBodyEntityLevel& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMetaTableThemeLevelResponseBodyEntityLevel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetMetaTableThemeLevelResponseBodyEntityLevel& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the level.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the level.
    std::shared_ptr<int64_t> levelId_ = nullptr;
    // The name of the level.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the level. Valid values:
    // 
    // *   1: indicates the logical level.
    // *   2: indicates the physical level.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
