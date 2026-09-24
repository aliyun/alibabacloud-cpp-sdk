// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALREPHOTOGRAPHYDETECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERALREPHOTOGRAPHYDETECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class GeneralRephotographyDetectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralRephotographyDetectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralRephotographyDetectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
    };
    GeneralRephotographyDetectionRequest() = default ;
    GeneralRephotographyDetectionRequest(const GeneralRephotographyDetectionRequest &) = default ;
    GeneralRephotographyDetectionRequest(GeneralRephotographyDetectionRequest &&) = default ;
    GeneralRephotographyDetectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralRephotographyDetectionRequest() = default ;
    GeneralRephotographyDetectionRequest& operator=(const GeneralRephotographyDetectionRequest &) = default ;
    GeneralRephotographyDetectionRequest& operator=(GeneralRephotographyDetectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline GeneralRephotographyDetectionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


  protected:
    // The HTTPS URL of the original image to recognize. The URL must be accessible and must not contain whitespace or URL-embedded usernames or passwords.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
