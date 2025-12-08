// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEIMAGECOLORADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEIMAGECOLORADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class EnhanceImageColorAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhanceImageColorAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
    };
    friend void from_json(const Darabonba::Json& j, EnhanceImageColorAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
    };
    EnhanceImageColorAdvanceRequest() = default ;
    EnhanceImageColorAdvanceRequest(const EnhanceImageColorAdvanceRequest &) = default ;
    EnhanceImageColorAdvanceRequest(EnhanceImageColorAdvanceRequest &&) = default ;
    EnhanceImageColorAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhanceImageColorAdvanceRequest() = default ;
    EnhanceImageColorAdvanceRequest& operator=(const EnhanceImageColorAdvanceRequest &) = default ;
    EnhanceImageColorAdvanceRequest& operator=(EnhanceImageColorAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->mode_ == nullptr && return this->outputFormat_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline EnhanceImageColorAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline EnhanceImageColorAdvanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline EnhanceImageColorAdvanceRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
