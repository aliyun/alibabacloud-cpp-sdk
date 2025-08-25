// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORHDIMAGEADVANCEREQUESTCOLORTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_RECOLORHDIMAGEADVANCEREQUESTCOLORTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorHDImageAdvanceRequestColorTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorHDImageAdvanceRequestColorTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Color, color_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorHDImageAdvanceRequestColorTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Color, color_);
    };
    RecolorHDImageAdvanceRequestColorTemplate() = default ;
    RecolorHDImageAdvanceRequestColorTemplate(const RecolorHDImageAdvanceRequestColorTemplate &) = default ;
    RecolorHDImageAdvanceRequestColorTemplate(RecolorHDImageAdvanceRequestColorTemplate &&) = default ;
    RecolorHDImageAdvanceRequestColorTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorHDImageAdvanceRequestColorTemplate() = default ;
    RecolorHDImageAdvanceRequestColorTemplate& operator=(const RecolorHDImageAdvanceRequestColorTemplate &) = default ;
    RecolorHDImageAdvanceRequestColorTemplate& operator=(RecolorHDImageAdvanceRequestColorTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->color_ != nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline RecolorHDImageAdvanceRequestColorTemplate& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
