// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVERLICENSEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDriverLicenseAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDriverLicenseAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(Side, side_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDriverLicenseAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(Side, side_);
    };
    RecognizeDriverLicenseAdvanceRequest() = default ;
    RecognizeDriverLicenseAdvanceRequest(const RecognizeDriverLicenseAdvanceRequest &) = default ;
    RecognizeDriverLicenseAdvanceRequest(RecognizeDriverLicenseAdvanceRequest &&) = default ;
    RecognizeDriverLicenseAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDriverLicenseAdvanceRequest() = default ;
    RecognizeDriverLicenseAdvanceRequest& operator=(const RecognizeDriverLicenseAdvanceRequest &) = default ;
    RecognizeDriverLicenseAdvanceRequest& operator=(RecognizeDriverLicenseAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->side_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline RecognizeDriverLicenseAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // side Field Functions 
    bool hasSide() const { return this->side_ != nullptr;};
    void deleteSide() { this->side_ = nullptr;};
    inline string side() const { DARABONBA_PTR_GET_DEFAULT(side_, "") };
    inline RecognizeDriverLicenseAdvanceRequest& setSide(string side) { DARABONBA_PTR_SET_VALUE(side_, side) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<string> side_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
