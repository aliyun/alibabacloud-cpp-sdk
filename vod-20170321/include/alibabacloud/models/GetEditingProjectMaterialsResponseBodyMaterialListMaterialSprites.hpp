// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLISTMATERIALSPRITES_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLISTMATERIALSPRITES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites& obj) { 
      DARABONBA_PTR_TO_JSON(Sprite, sprite_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites& obj) { 
      DARABONBA_PTR_FROM_JSON(Sprite, sprite_);
    };
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites(const GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites(GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites &&) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites& operator=(const GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites& operator=(GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sprite_ != nullptr; };
    // sprite Field Functions 
    bool hasSprite() const { return this->sprite_ != nullptr;};
    void deleteSprite() { this->sprite_ = nullptr;};
    inline const vector<string> & sprite() const { DARABONBA_PTR_GET_CONST(sprite_, vector<string>) };
    inline vector<string> sprite() { DARABONBA_PTR_GET(sprite_, vector<string>) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites& setSprite(const vector<string> & sprite) { DARABONBA_PTR_SET_VALUE(sprite_, sprite) };
    inline GetEditingProjectMaterialsResponseBodyMaterialListMaterialSprites& setSprite(vector<string> && sprite) { DARABONBA_PTR_SET_RVALUE(sprite_, sprite) };


  protected:
    std::shared_ptr<vector<string>> sprite_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
