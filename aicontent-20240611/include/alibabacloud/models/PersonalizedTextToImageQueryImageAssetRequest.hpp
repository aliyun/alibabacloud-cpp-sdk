// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTEXTTOIMAGEQUERYIMAGEASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTEXTTOIMAGEQUERYIMAGEASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class PersonalizedTextToImageQueryImageAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PersonalizedTextToImageQueryImageAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(encodeFormat, encodeFormat_);
      DARABONBA_PTR_TO_JSON(imageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, PersonalizedTextToImageQueryImageAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(encodeFormat, encodeFormat_);
      DARABONBA_PTR_FROM_JSON(imageId, imageId_);
    };
    PersonalizedTextToImageQueryImageAssetRequest() = default ;
    PersonalizedTextToImageQueryImageAssetRequest(const PersonalizedTextToImageQueryImageAssetRequest &) = default ;
    PersonalizedTextToImageQueryImageAssetRequest(PersonalizedTextToImageQueryImageAssetRequest &&) = default ;
    PersonalizedTextToImageQueryImageAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PersonalizedTextToImageQueryImageAssetRequest() = default ;
    PersonalizedTextToImageQueryImageAssetRequest& operator=(const PersonalizedTextToImageQueryImageAssetRequest &) = default ;
    PersonalizedTextToImageQueryImageAssetRequest& operator=(PersonalizedTextToImageQueryImageAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encodeFormat_ == nullptr
        && this->imageId_ == nullptr; };
    // encodeFormat Field Functions 
    bool hasEncodeFormat() const { return this->encodeFormat_ != nullptr;};
    void deleteEncodeFormat() { this->encodeFormat_ = nullptr;};
    inline string getEncodeFormat() const { DARABONBA_PTR_GET_DEFAULT(encodeFormat_, "") };
    inline PersonalizedTextToImageQueryImageAssetRequest& setEncodeFormat(string encodeFormat) { DARABONBA_PTR_SET_VALUE(encodeFormat_, encodeFormat) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline PersonalizedTextToImageQueryImageAssetRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    shared_ptr<string> encodeFormat_ {};
    // This parameter is required.
    shared_ptr<string> imageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
