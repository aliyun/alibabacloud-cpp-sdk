// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORIMAGEADVANCEREQUESTCOLORTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_RECOLORIMAGEADVANCEREQUESTCOLORTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorImageAdvanceRequestColorTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorImageAdvanceRequestColorTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Color, color_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorImageAdvanceRequestColorTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Color, color_);
    };
    RecolorImageAdvanceRequestColorTemplate() = default ;
    RecolorImageAdvanceRequestColorTemplate(const RecolorImageAdvanceRequestColorTemplate &) = default ;
    RecolorImageAdvanceRequestColorTemplate(RecolorImageAdvanceRequestColorTemplate &&) = default ;
    RecolorImageAdvanceRequestColorTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorImageAdvanceRequestColorTemplate() = default ;
    RecolorImageAdvanceRequestColorTemplate& operator=(const RecolorImageAdvanceRequestColorTemplate &) = default ;
    RecolorImageAdvanceRequestColorTemplate& operator=(RecolorImageAdvanceRequestColorTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->color_ != nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline RecolorImageAdvanceRequestColorTemplate& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


  protected:
    std::shared_ptr<string> color_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
