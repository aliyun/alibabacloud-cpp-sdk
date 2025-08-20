// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTCLOTHRESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTCLOTHRESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentClothResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentClothResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(ClassUrl, classUrl_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentClothResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassUrl, classUrl_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    SegmentClothResponseBodyDataElements() = default ;
    SegmentClothResponseBodyDataElements(const SegmentClothResponseBodyDataElements &) = default ;
    SegmentClothResponseBodyDataElements(SegmentClothResponseBodyDataElements &&) = default ;
    SegmentClothResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentClothResponseBodyDataElements() = default ;
    SegmentClothResponseBodyDataElements& operator=(const SegmentClothResponseBodyDataElements &) = default ;
    SegmentClothResponseBodyDataElements& operator=(SegmentClothResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classUrl_ != nullptr
        && this->imageURL_ != nullptr; };
    // classUrl Field Functions 
    bool hasClassUrl() const { return this->classUrl_ != nullptr;};
    void deleteClassUrl() { this->classUrl_ = nullptr;};
    inline const map<string, string> & classUrl() const { DARABONBA_PTR_GET_CONST(classUrl_, map<string, string>) };
    inline map<string, string> classUrl() { DARABONBA_PTR_GET(classUrl_, map<string, string>) };
    inline SegmentClothResponseBodyDataElements& setClassUrl(const map<string, string> & classUrl) { DARABONBA_PTR_SET_VALUE(classUrl_, classUrl) };
    inline SegmentClothResponseBodyDataElements& setClassUrl(map<string, string> && classUrl) { DARABONBA_PTR_SET_RVALUE(classUrl_, classUrl) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline SegmentClothResponseBodyDataElements& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<map<string, string>> classUrl_ = nullptr;
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
