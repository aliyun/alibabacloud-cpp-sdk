// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ILLUSTRATION_HPP_
#define ALIBABACLOUD_MODELS_ILLUSTRATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Illustration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Illustration& obj) { 
      DARABONBA_PTR_TO_JSON(ImageIndex, imageIndex_);
      DARABONBA_PTR_TO_JSON(ImagePath, imagePath_);
      DARABONBA_PTR_TO_JSON(NormalizedBox, normalizedBox_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Illustration& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageIndex, imageIndex_);
      DARABONBA_PTR_FROM_JSON(ImagePath, imagePath_);
      DARABONBA_PTR_FROM_JSON(NormalizedBox, normalizedBox_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    Illustration() = default ;
    Illustration(const Illustration &) = default ;
    Illustration(Illustration &&) = default ;
    Illustration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Illustration() = default ;
    Illustration& operator=(const Illustration &) = default ;
    Illustration& operator=(Illustration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageIndex_ == nullptr
        && this->imagePath_ == nullptr && this->normalizedBox_ == nullptr && this->pageNumber_ == nullptr && this->text_ == nullptr && this->type_ == nullptr; };
    // imageIndex Field Functions 
    bool hasImageIndex() const { return this->imageIndex_ != nullptr;};
    void deleteImageIndex() { this->imageIndex_ = nullptr;};
    inline int32_t getImageIndex() const { DARABONBA_PTR_GET_DEFAULT(imageIndex_, 0) };
    inline Illustration& setImageIndex(int32_t imageIndex) { DARABONBA_PTR_SET_VALUE(imageIndex_, imageIndex) };


    // imagePath Field Functions 
    bool hasImagePath() const { return this->imagePath_ != nullptr;};
    void deleteImagePath() { this->imagePath_ = nullptr;};
    inline string getImagePath() const { DARABONBA_PTR_GET_DEFAULT(imagePath_, "") };
    inline Illustration& setImagePath(string imagePath) { DARABONBA_PTR_SET_VALUE(imagePath_, imagePath) };


    // normalizedBox Field Functions 
    bool hasNormalizedBox() const { return this->normalizedBox_ != nullptr;};
    void deleteNormalizedBox() { this->normalizedBox_ = nullptr;};
    inline const vector<float> & getNormalizedBox() const { DARABONBA_PTR_GET_CONST(normalizedBox_, vector<float>) };
    inline vector<float> getNormalizedBox() { DARABONBA_PTR_GET(normalizedBox_, vector<float>) };
    inline Illustration& setNormalizedBox(const vector<float> & normalizedBox) { DARABONBA_PTR_SET_VALUE(normalizedBox_, normalizedBox) };
    inline Illustration& setNormalizedBox(vector<float> && normalizedBox) { DARABONBA_PTR_SET_RVALUE(normalizedBox_, normalizedBox) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline Illustration& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline Illustration& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Illustration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The zero-based image index in a file that contains multiple images, such as a multi-page TIFF file.
    shared_ptr<int32_t> imageIndex_ {};
    // The path to the image file containing the illustration.
    shared_ptr<string> imagePath_ {};
    // An array of four floating-point numbers that defines the normalized box for the illustration in [x_min, y_min, x_max, y_max] format. The coordinates are normalized to a range of [0, 1] relative to the page dimensions.
    shared_ptr<vector<float>> normalizedBox_ {};
    // The one-based page number where the illustration is located.
    shared_ptr<int32_t> pageNumber_ {};
    // The text associated with the illustration.
    shared_ptr<string> text_ {};
    // The type of the illustration, such as `figure` or `chart`.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
