// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetImageTranslateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Orc, orc_);
      DARABONBA_PTR_TO_JSON(PictureEditor, pictureEditor_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Orc, orc_);
      DARABONBA_PTR_FROM_JSON(PictureEditor, pictureEditor_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetImageTranslateResponseBodyData() = default ;
    GetImageTranslateResponseBodyData(const GetImageTranslateResponseBodyData &) = default ;
    GetImageTranslateResponseBodyData(GetImageTranslateResponseBodyData &&) = default ;
    GetImageTranslateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateResponseBodyData() = default ;
    GetImageTranslateResponseBodyData& operator=(const GetImageTranslateResponseBodyData &) = default ;
    GetImageTranslateResponseBodyData& operator=(GetImageTranslateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orc_ == nullptr
        && return this->pictureEditor_ == nullptr && return this->url_ == nullptr; };
    // orc Field Functions 
    bool hasOrc() const { return this->orc_ != nullptr;};
    void deleteOrc() { this->orc_ = nullptr;};
    inline string orc() const { DARABONBA_PTR_GET_DEFAULT(orc_, "") };
    inline GetImageTranslateResponseBodyData& setOrc(string orc) { DARABONBA_PTR_SET_VALUE(orc_, orc) };


    // pictureEditor Field Functions 
    bool hasPictureEditor() const { return this->pictureEditor_ != nullptr;};
    void deletePictureEditor() { this->pictureEditor_ = nullptr;};
    inline string pictureEditor() const { DARABONBA_PTR_GET_DEFAULT(pictureEditor_, "") };
    inline GetImageTranslateResponseBodyData& setPictureEditor(string pictureEditor) { DARABONBA_PTR_SET_VALUE(pictureEditor_, pictureEditor) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetImageTranslateResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> orc_ = nullptr;
    std::shared_ptr<string> pictureEditor_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
