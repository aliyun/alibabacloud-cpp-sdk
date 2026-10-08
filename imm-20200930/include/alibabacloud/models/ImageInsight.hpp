// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEINSIGHT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEINSIGHT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/MultilingualContentEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ImageInsight : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageInsight& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MultilingualContent, multilingualContent_);
    };
    friend void from_json(const Darabonba::Json& j, ImageInsight& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MultilingualContent, multilingualContent_);
    };
    ImageInsight() = default ;
    ImageInsight(const ImageInsight &) = default ;
    ImageInsight(ImageInsight &&) = default ;
    ImageInsight(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageInsight() = default ;
    ImageInsight& operator=(const ImageInsight &) = default ;
    ImageInsight& operator=(ImageInsight &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr
        && this->description_ == nullptr && this->multilingualContent_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline ImageInsight& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ImageInsight& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // multilingualContent Field Functions 
    bool hasMultilingualContent() const { return this->multilingualContent_ != nullptr;};
    void deleteMultilingualContent() { this->multilingualContent_ = nullptr;};
    inline const map<string, MultilingualContentEntry> & getMultilingualContent() const { DARABONBA_PTR_GET_CONST(multilingualContent_, map<string, MultilingualContentEntry>) };
    inline map<string, MultilingualContentEntry> getMultilingualContent() { DARABONBA_PTR_GET(multilingualContent_, map<string, MultilingualContentEntry>) };
    inline ImageInsight& setMultilingualContent(const map<string, MultilingualContentEntry> & multilingualContent) { DARABONBA_PTR_SET_VALUE(multilingualContent_, multilingualContent) };
    inline ImageInsight& setMultilingualContent(map<string, MultilingualContentEntry> && multilingualContent) { DARABONBA_PTR_SET_RVALUE(multilingualContent_, multilingualContent) };


  protected:
    shared_ptr<string> caption_ {};
    shared_ptr<string> description_ {};
    // The multilingual image content.
    shared_ptr<map<string, MultilingualContentEntry>> multilingualContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
