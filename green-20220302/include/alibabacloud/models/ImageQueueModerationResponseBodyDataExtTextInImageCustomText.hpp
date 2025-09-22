// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGECUSTOMTEXT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTTEXTINIMAGECUSTOMTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtTextInImageCustomText : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtTextInImageCustomText& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
      DARABONBA_PTR_TO_JSON(LibName, libName_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtTextInImageCustomText& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
      DARABONBA_PTR_FROM_JSON(LibName, libName_);
    };
    ImageQueueModerationResponseBodyDataExtTextInImageCustomText() = default ;
    ImageQueueModerationResponseBodyDataExtTextInImageCustomText(const ImageQueueModerationResponseBodyDataExtTextInImageCustomText &) = default ;
    ImageQueueModerationResponseBodyDataExtTextInImageCustomText(ImageQueueModerationResponseBodyDataExtTextInImageCustomText &&) = default ;
    ImageQueueModerationResponseBodyDataExtTextInImageCustomText(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtTextInImageCustomText() = default ;
    ImageQueueModerationResponseBodyDataExtTextInImageCustomText& operator=(const ImageQueueModerationResponseBodyDataExtTextInImageCustomText &) = default ;
    ImageQueueModerationResponseBodyDataExtTextInImageCustomText& operator=(ImageQueueModerationResponseBodyDataExtTextInImageCustomText &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyWords_ != nullptr
        && this->libId_ != nullptr && this->libName_ != nullptr; };
    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline string keyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
    inline ImageQueueModerationResponseBodyDataExtTextInImageCustomText& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline ImageQueueModerationResponseBodyDataExtTextInImageCustomText& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


    // libName Field Functions 
    bool hasLibName() const { return this->libName_ != nullptr;};
    void deleteLibName() { this->libName_ = nullptr;};
    inline string libName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
    inline ImageQueueModerationResponseBodyDataExtTextInImageCustomText& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


  protected:
    std::shared_ptr<string> keyWords_ = nullptr;
    std::shared_ptr<string> libId_ = nullptr;
    std::shared_ptr<string> libName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
