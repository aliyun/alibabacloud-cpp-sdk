// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTVLCONTENT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTVLCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtVlContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtVlContent& obj) { 
      DARABONBA_PTR_TO_JSON(OutputText, outputText_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtVlContent& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputText, outputText_);
    };
    ImageQueueModerationResponseBodyDataExtVlContent() = default ;
    ImageQueueModerationResponseBodyDataExtVlContent(const ImageQueueModerationResponseBodyDataExtVlContent &) = default ;
    ImageQueueModerationResponseBodyDataExtVlContent(ImageQueueModerationResponseBodyDataExtVlContent &&) = default ;
    ImageQueueModerationResponseBodyDataExtVlContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtVlContent() = default ;
    ImageQueueModerationResponseBodyDataExtVlContent& operator=(const ImageQueueModerationResponseBodyDataExtVlContent &) = default ;
    ImageQueueModerationResponseBodyDataExtVlContent& operator=(ImageQueueModerationResponseBodyDataExtVlContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputText_ != nullptr; };
    // outputText Field Functions 
    bool hasOutputText() const { return this->outputText_ != nullptr;};
    void deleteOutputText() { this->outputText_ = nullptr;};
    inline string outputText() const { DARABONBA_PTR_GET_DEFAULT(outputText_, "") };
    inline ImageQueueModerationResponseBodyDataExtVlContent& setOutputText(string outputText) { DARABONBA_PTR_SET_VALUE(outputText_, outputText) };


  protected:
    std::shared_ptr<string> outputText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
