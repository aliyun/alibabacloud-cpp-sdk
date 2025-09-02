// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODYENTITY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLETHEMELEVELRESPONSEBODYENTITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMetaTableThemeLevelResponseBodyEntityLevel.hpp>
#include <alibabacloud/models/GetMetaTableThemeLevelResponseBodyEntityTheme.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableThemeLevelResponseBodyEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableThemeLevelResponseBodyEntity& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Theme, theme_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableThemeLevelResponseBodyEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Theme, theme_);
    };
    GetMetaTableThemeLevelResponseBodyEntity() = default ;
    GetMetaTableThemeLevelResponseBodyEntity(const GetMetaTableThemeLevelResponseBodyEntity &) = default ;
    GetMetaTableThemeLevelResponseBodyEntity(GetMetaTableThemeLevelResponseBodyEntity &&) = default ;
    GetMetaTableThemeLevelResponseBodyEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableThemeLevelResponseBodyEntity() = default ;
    GetMetaTableThemeLevelResponseBodyEntity& operator=(const GetMetaTableThemeLevelResponseBodyEntity &) = default ;
    GetMetaTableThemeLevelResponseBodyEntity& operator=(GetMetaTableThemeLevelResponseBodyEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->level_ != nullptr
        && this->theme_ != nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline const vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel> & level() const { DARABONBA_PTR_GET_CONST(level_, vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel>) };
    inline vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel> level() { DARABONBA_PTR_GET(level_, vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel>) };
    inline GetMetaTableThemeLevelResponseBodyEntity& setLevel(const vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel> & level) { DARABONBA_PTR_SET_VALUE(level_, level) };
    inline GetMetaTableThemeLevelResponseBodyEntity& setLevel(vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel> && level) { DARABONBA_PTR_SET_RVALUE(level_, level) };


    // theme Field Functions 
    bool hasTheme() const { return this->theme_ != nullptr;};
    void deleteTheme() { this->theme_ = nullptr;};
    inline const vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme> & theme() const { DARABONBA_PTR_GET_CONST(theme_, vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme>) };
    inline vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme> theme() { DARABONBA_PTR_GET(theme_, vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme>) };
    inline GetMetaTableThemeLevelResponseBodyEntity& setTheme(const vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme> & theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };
    inline GetMetaTableThemeLevelResponseBodyEntity& setTheme(vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme> && theme) { DARABONBA_PTR_SET_RVALUE(theme_, theme) };


  protected:
    // The information about the levels of the metatable.
    std::shared_ptr<vector<Models::GetMetaTableThemeLevelResponseBodyEntityLevel>> level_ = nullptr;
    // The information about the themes of the metatable.
    std::shared_ptr<vector<Models::GetMetaTableThemeLevelResponseBodyEntityTheme>> theme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
