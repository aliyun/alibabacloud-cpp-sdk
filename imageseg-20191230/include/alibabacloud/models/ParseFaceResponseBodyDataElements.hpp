// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEFACERESPONSEBODYDATAELEMENTS_HPP_
#define ALIBABACLOUD_MODELS_PARSEFACERESPONSEBODYDATAELEMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class ParseFaceResponseBodyDataElements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ParseFaceResponseBodyDataElements& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ParseFaceResponseBodyDataElements() = default ;
    ParseFaceResponseBodyDataElements(const ParseFaceResponseBodyDataElements &) = default ;
    ParseFaceResponseBodyDataElements(ParseFaceResponseBodyDataElements &&) = default ;
    ParseFaceResponseBodyDataElements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseFaceResponseBodyDataElements() = default ;
    ParseFaceResponseBodyDataElements& operator=(const ParseFaceResponseBodyDataElements &) = default ;
    ParseFaceResponseBodyDataElements& operator=(ParseFaceResponseBodyDataElements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->name_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ParseFaceResponseBodyDataElements& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ParseFaceResponseBodyDataElements& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
