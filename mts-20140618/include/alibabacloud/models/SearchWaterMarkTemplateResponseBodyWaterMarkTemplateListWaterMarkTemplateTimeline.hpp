// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATELISTWATERMARKTEMPLATETIMELINE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATELISTWATERMARKTEMPLATETIMELINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline() = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline &) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline &&) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline() = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline& operator=(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline &) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline& operator=(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->start_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The horizontal offset of the watermark relative to the output video image. Default value: **0**. The default value indicates no offset.
    // 
    // The value can be an integer or a decimal.
    // 
    // *   **Integer**: the vertical offset. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the horizontal offset to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<string> duration_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
