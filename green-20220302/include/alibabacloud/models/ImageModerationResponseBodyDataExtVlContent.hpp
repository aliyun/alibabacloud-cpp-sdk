// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTVLCONTENT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTVLCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtVlContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtVlContent& obj) { 
      DARABONBA_PTR_TO_JSON(OutputText, outputText_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtVlContent& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputText, outputText_);
    };
    ImageModerationResponseBodyDataExtVlContent() = default ;
    ImageModerationResponseBodyDataExtVlContent(const ImageModerationResponseBodyDataExtVlContent &) = default ;
    ImageModerationResponseBodyDataExtVlContent(ImageModerationResponseBodyDataExtVlContent &&) = default ;
    ImageModerationResponseBodyDataExtVlContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtVlContent() = default ;
    ImageModerationResponseBodyDataExtVlContent& operator=(const ImageModerationResponseBodyDataExtVlContent &) = default ;
    ImageModerationResponseBodyDataExtVlContent& operator=(ImageModerationResponseBodyDataExtVlContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputText_ != nullptr; };
    // outputText Field Functions 
    bool hasOutputText() const { return this->outputText_ != nullptr;};
    void deleteOutputText() { this->outputText_ = nullptr;};
    inline string outputText() const { DARABONBA_PTR_GET_DEFAULT(outputText_, "") };
    inline ImageModerationResponseBodyDataExtVlContent& setOutputText(string outputText) { DARABONBA_PTR_SET_VALUE(outputText_, outputText) };


  protected:
    // the vl output content
    std::shared_ptr<string> outputText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
