// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEIMAGEFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MERGEIMAGEFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class MergeImageFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeImageFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, MergeImageFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    MergeImageFaceResponseBodyData() = default ;
    MergeImageFaceResponseBodyData(const MergeImageFaceResponseBodyData &) = default ;
    MergeImageFaceResponseBodyData(MergeImageFaceResponseBodyData &&) = default ;
    MergeImageFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeImageFaceResponseBodyData() = default ;
    MergeImageFaceResponseBodyData& operator=(const MergeImageFaceResponseBodyData &) = default ;
    MergeImageFaceResponseBodyData& operator=(MergeImageFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline MergeImageFaceResponseBodyData& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
