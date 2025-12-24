// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFINEMASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFINEMASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class RefineMaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefineMaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(MaskImageURL, maskImageURL_);
    };
    friend void from_json(const Darabonba::Json& j, RefineMaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(MaskImageURL, maskImageURL_);
    };
    RefineMaskRequest() = default ;
    RefineMaskRequest(const RefineMaskRequest &) = default ;
    RefineMaskRequest(RefineMaskRequest &&) = default ;
    RefineMaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefineMaskRequest() = default ;
    RefineMaskRequest& operator=(const RefineMaskRequest &) = default ;
    RefineMaskRequest& operator=(RefineMaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->maskImageURL_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline RefineMaskRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // maskImageURL Field Functions 
    bool hasMaskImageURL() const { return this->maskImageURL_ != nullptr;};
    void deleteMaskImageURL() { this->maskImageURL_ = nullptr;};
    inline string maskImageURL() const { DARABONBA_PTR_GET_DEFAULT(maskImageURL_, "") };
    inline RefineMaskRequest& setMaskImageURL(string maskImageURL) { DARABONBA_PTR_SET_VALUE(maskImageURL_, maskImageURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> maskImageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
