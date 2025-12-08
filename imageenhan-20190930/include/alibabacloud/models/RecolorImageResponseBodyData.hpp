// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOLORIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOLORIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class RecolorImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecolorImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageList, imageList_);
    };
    friend void from_json(const Darabonba::Json& j, RecolorImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
    };
    RecolorImageResponseBodyData() = default ;
    RecolorImageResponseBodyData(const RecolorImageResponseBodyData &) = default ;
    RecolorImageResponseBodyData(RecolorImageResponseBodyData &&) = default ;
    RecolorImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecolorImageResponseBodyData() = default ;
    RecolorImageResponseBodyData& operator=(const RecolorImageResponseBodyData &) = default ;
    RecolorImageResponseBodyData& operator=(RecolorImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageList_ == nullptr; };
    // imageList Field Functions 
    bool hasImageList() const { return this->imageList_ != nullptr;};
    void deleteImageList() { this->imageList_ = nullptr;};
    inline const vector<string> & imageList() const { DARABONBA_PTR_GET_CONST(imageList_, vector<string>) };
    inline vector<string> imageList() { DARABONBA_PTR_GET(imageList_, vector<string>) };
    inline RecolorImageResponseBodyData& setImageList(const vector<string> & imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };
    inline RecolorImageResponseBodyData& setImageList(vector<string> && imageList) { DARABONBA_PTR_SET_RVALUE(imageList_, imageList) };


  protected:
    // 1
    std::shared_ptr<vector<string>> imageList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
