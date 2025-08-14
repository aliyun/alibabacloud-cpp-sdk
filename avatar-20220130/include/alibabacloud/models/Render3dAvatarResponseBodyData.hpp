// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENDER3DAVATARRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RENDER3DAVATARRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class Render3dAvatarResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Render3dAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RenderData, renderData_);
    };
    friend void from_json(const Darabonba::Json& j, Render3dAvatarResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderData, renderData_);
    };
    Render3dAvatarResponseBodyData() = default ;
    Render3dAvatarResponseBodyData(const Render3dAvatarResponseBodyData &) = default ;
    Render3dAvatarResponseBodyData(Render3dAvatarResponseBodyData &&) = default ;
    Render3dAvatarResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Render3dAvatarResponseBodyData() = default ;
    Render3dAvatarResponseBodyData& operator=(const Render3dAvatarResponseBodyData &) = default ;
    Render3dAvatarResponseBodyData& operator=(Render3dAvatarResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->renderData_ != nullptr; };
    // renderData Field Functions 
    bool hasRenderData() const { return this->renderData_ != nullptr;};
    void deleteRenderData() { this->renderData_ = nullptr;};
    inline string renderData() const { DARABONBA_PTR_GET_DEFAULT(renderData_, "") };
    inline Render3dAvatarResponseBodyData& setRenderData(string renderData) { DARABONBA_PTR_SET_VALUE(renderData_, renderData) };


  protected:
    std::shared_ptr<string> renderData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
