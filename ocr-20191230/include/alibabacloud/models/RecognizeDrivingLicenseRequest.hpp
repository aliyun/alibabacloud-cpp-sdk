// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEDRIVINGLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeDrivingLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeDrivingLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Side, side_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeDrivingLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Side, side_);
    };
    RecognizeDrivingLicenseRequest() = default ;
    RecognizeDrivingLicenseRequest(const RecognizeDrivingLicenseRequest &) = default ;
    RecognizeDrivingLicenseRequest(RecognizeDrivingLicenseRequest &&) = default ;
    RecognizeDrivingLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeDrivingLicenseRequest() = default ;
    RecognizeDrivingLicenseRequest& operator=(const RecognizeDrivingLicenseRequest &) = default ;
    RecognizeDrivingLicenseRequest& operator=(RecognizeDrivingLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->side_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline RecognizeDrivingLicenseRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // side Field Functions 
    bool hasSide() const { return this->side_ != nullptr;};
    void deleteSide() { this->side_ = nullptr;};
    inline string side() const { DARABONBA_PTR_GET_DEFAULT(side_, "") };
    inline RecognizeDrivingLicenseRequest& setSide(string side) { DARABONBA_PTR_SET_VALUE(side_, side) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> side_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
