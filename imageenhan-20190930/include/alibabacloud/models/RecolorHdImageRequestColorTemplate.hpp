// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORHDIMAGEREQUESTCOLORTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_RECOLORHDIMAGEREQUESTCOLORTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorHDImageRequestColorTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorHDImageRequestColorTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Color, color_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorHDImageRequestColorTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Color, color_);
    };
    RecolorHDImageRequestColorTemplate() = default ;
    RecolorHDImageRequestColorTemplate(const RecolorHDImageRequestColorTemplate &) = default ;
    RecolorHDImageRequestColorTemplate(RecolorHDImageRequestColorTemplate &&) = default ;
    RecolorHDImageRequestColorTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorHDImageRequestColorTemplate() = default ;
    RecolorHDImageRequestColorTemplate& operator=(const RecolorHDImageRequestColorTemplate &) = default ;
    RecolorHDImageRequestColorTemplate& operator=(RecolorHDImageRequestColorTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->color_ == nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline RecolorHDImageRequestColorTemplate& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
