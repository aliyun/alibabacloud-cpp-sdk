// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTCELEBRITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTCELEBRITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class DetectCelebrityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectCelebrityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, DetectCelebrityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    DetectCelebrityRequest() = default ;
    DetectCelebrityRequest(const DetectCelebrityRequest &) = default ;
    DetectCelebrityRequest(DetectCelebrityRequest &&) = default ;
    DetectCelebrityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectCelebrityRequest() = default ;
    DetectCelebrityRequest& operator=(const DetectCelebrityRequest &) = default ;
    DetectCelebrityRequest& operator=(DetectCelebrityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline DetectCelebrityRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
