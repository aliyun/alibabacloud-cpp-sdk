// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEIMAGECOLORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEIMAGECOLORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class EnhanceImageColorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhanceImageColorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
    };
    friend void from_json(const Darabonba::Json& j, EnhanceImageColorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
    };
    EnhanceImageColorRequest() = default ;
    EnhanceImageColorRequest(const EnhanceImageColorRequest &) = default ;
    EnhanceImageColorRequest(EnhanceImageColorRequest &&) = default ;
    EnhanceImageColorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhanceImageColorRequest() = default ;
    EnhanceImageColorRequest& operator=(const EnhanceImageColorRequest &) = default ;
    EnhanceImageColorRequest& operator=(EnhanceImageColorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageURL_ != nullptr
        && this->mode_ != nullptr && this->outputFormat_ != nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline EnhanceImageColorRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline EnhanceImageColorRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline EnhanceImageColorRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outputFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
