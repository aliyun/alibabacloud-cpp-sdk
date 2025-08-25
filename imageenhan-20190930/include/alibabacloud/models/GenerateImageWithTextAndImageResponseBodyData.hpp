// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGEWITHTEXTANDIMAGERESPONSEBODYDATA_HPP_
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
  class GenerateImageWithTextAndImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageWithTextAndImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageWithTextAndImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
    };
    GenerateImageWithTextAndImageResponseBodyData() = default ;
    GenerateImageWithTextAndImageResponseBodyData(const GenerateImageWithTextAndImageResponseBodyData &) = default ;
    GenerateImageWithTextAndImageResponseBodyData(GenerateImageWithTextAndImageResponseBodyData &&) = default ;
    GenerateImageWithTextAndImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageWithTextAndImageResponseBodyData() = default ;
    GenerateImageWithTextAndImageResponseBodyData& operator=(const GenerateImageWithTextAndImageResponseBodyData &) = default ;
    GenerateImageWithTextAndImageResponseBodyData& operator=(GenerateImageWithTextAndImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageUrls_ != nullptr; };
    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline GenerateImageWithTextAndImageResponseBodyData& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline GenerateImageWithTextAndImageResponseBodyData& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


  protected:
    std::shared_ptr<vector<string>> imageUrls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
