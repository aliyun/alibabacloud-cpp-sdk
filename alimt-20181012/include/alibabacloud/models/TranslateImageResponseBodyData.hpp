// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSLATEIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TRANSLATEIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class TranslateImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslateImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FinalImageUrl, finalImageUrl_);
      DARABONBA_PTR_TO_JSON(InPaintingUrl, inPaintingUrl_);
      DARABONBA_PTR_TO_JSON(TemplateJson, templateJson_);
    };
    friend void from_json(const Darabonba::Json& j, TranslateImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FinalImageUrl, finalImageUrl_);
      DARABONBA_PTR_FROM_JSON(InPaintingUrl, inPaintingUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateJson, templateJson_);
    };
    TranslateImageResponseBodyData() = default ;
    TranslateImageResponseBodyData(const TranslateImageResponseBodyData &) = default ;
    TranslateImageResponseBodyData(TranslateImageResponseBodyData &&) = default ;
    TranslateImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslateImageResponseBodyData() = default ;
    TranslateImageResponseBodyData& operator=(const TranslateImageResponseBodyData &) = default ;
    TranslateImageResponseBodyData& operator=(TranslateImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finalImageUrl_ == nullptr
        && return this->inPaintingUrl_ == nullptr && return this->templateJson_ == nullptr; };
    // finalImageUrl Field Functions 
    bool hasFinalImageUrl() const { return this->finalImageUrl_ != nullptr;};
    void deleteFinalImageUrl() { this->finalImageUrl_ = nullptr;};
    inline string finalImageUrl() const { DARABONBA_PTR_GET_DEFAULT(finalImageUrl_, "") };
    inline TranslateImageResponseBodyData& setFinalImageUrl(string finalImageUrl) { DARABONBA_PTR_SET_VALUE(finalImageUrl_, finalImageUrl) };


    // inPaintingUrl Field Functions 
    bool hasInPaintingUrl() const { return this->inPaintingUrl_ != nullptr;};
    void deleteInPaintingUrl() { this->inPaintingUrl_ = nullptr;};
    inline string inPaintingUrl() const { DARABONBA_PTR_GET_DEFAULT(inPaintingUrl_, "") };
    inline TranslateImageResponseBodyData& setInPaintingUrl(string inPaintingUrl) { DARABONBA_PTR_SET_VALUE(inPaintingUrl_, inPaintingUrl) };


    // templateJson Field Functions 
    bool hasTemplateJson() const { return this->templateJson_ != nullptr;};
    void deleteTemplateJson() { this->templateJson_ = nullptr;};
    inline string templateJson() const { DARABONBA_PTR_GET_DEFAULT(templateJson_, "") };
    inline TranslateImageResponseBodyData& setTemplateJson(string templateJson) { DARABONBA_PTR_SET_VALUE(templateJson_, templateJson) };


  protected:
    std::shared_ptr<string> finalImageUrl_ = nullptr;
    std::shared_ptr<string> inPaintingUrl_ = nullptr;
    std::shared_ptr<string> templateJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
