// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEREQUESTTHEMES_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEREQUESTTHEMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableRequestThemes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableRequestThemes& obj) { 
      DARABONBA_PTR_TO_JSON(ThemeId, themeId_);
      DARABONBA_PTR_TO_JSON(ThemeLevel, themeLevel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableRequestThemes& obj) { 
      DARABONBA_PTR_FROM_JSON(ThemeId, themeId_);
      DARABONBA_PTR_FROM_JSON(ThemeLevel, themeLevel_);
    };
    UpdateTableRequestThemes() = default ;
    UpdateTableRequestThemes(const UpdateTableRequestThemes &) = default ;
    UpdateTableRequestThemes(UpdateTableRequestThemes &&) = default ;
    UpdateTableRequestThemes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableRequestThemes() = default ;
    UpdateTableRequestThemes& operator=(const UpdateTableRequestThemes &) = default ;
    UpdateTableRequestThemes& operator=(UpdateTableRequestThemes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->themeId_ != nullptr
        && this->themeLevel_ != nullptr; };
    // themeId Field Functions 
    bool hasThemeId() const { return this->themeId_ != nullptr;};
    void deleteThemeId() { this->themeId_ = nullptr;};
    inline int64_t themeId() const { DARABONBA_PTR_GET_DEFAULT(themeId_, 0L) };
    inline UpdateTableRequestThemes& setThemeId(int64_t themeId) { DARABONBA_PTR_SET_VALUE(themeId_, themeId) };


    // themeLevel Field Functions 
    bool hasThemeLevel() const { return this->themeLevel_ != nullptr;};
    void deleteThemeLevel() { this->themeLevel_ = nullptr;};
    inline int32_t themeLevel() const { DARABONBA_PTR_GET_DEFAULT(themeLevel_, 0) };
    inline UpdateTableRequestThemes& setThemeLevel(int32_t themeLevel) { DARABONBA_PTR_SET_VALUE(themeLevel_, themeLevel) };


  protected:
    // The ID of the associated topic.
    std::shared_ptr<int64_t> themeId_ = nullptr;
    // The level that corresponds to the topic ID.
    std::shared_ptr<int32_t> themeLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
