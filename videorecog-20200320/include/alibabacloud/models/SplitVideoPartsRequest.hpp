// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITVIDEOPARTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SPLITVIDEOPARTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class SplitVideoPartsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitVideoPartsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_TO_JSON(MinTime, minTime_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SplitVideoPartsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_FROM_JSON(MinTime, minTime_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    SplitVideoPartsRequest() = default ;
    SplitVideoPartsRequest(const SplitVideoPartsRequest &) = default ;
    SplitVideoPartsRequest(SplitVideoPartsRequest &&) = default ;
    SplitVideoPartsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitVideoPartsRequest() = default ;
    SplitVideoPartsRequest& operator=(const SplitVideoPartsRequest &) = default ;
    SplitVideoPartsRequest& operator=(SplitVideoPartsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxTime_ != nullptr
        && this->minTime_ != nullptr && this->template_ != nullptr && this->videoUrl_ != nullptr; };
    // maxTime Field Functions 
    bool hasMaxTime() const { return this->maxTime_ != nullptr;};
    void deleteMaxTime() { this->maxTime_ = nullptr;};
    inline int32_t maxTime() const { DARABONBA_PTR_GET_DEFAULT(maxTime_, 0) };
    inline SplitVideoPartsRequest& setMaxTime(int32_t maxTime) { DARABONBA_PTR_SET_VALUE(maxTime_, maxTime) };


    // minTime Field Functions 
    bool hasMinTime() const { return this->minTime_ != nullptr;};
    void deleteMinTime() { this->minTime_ = nullptr;};
    inline int32_t minTime() const { DARABONBA_PTR_GET_DEFAULT(minTime_, 0) };
    inline SplitVideoPartsRequest& setMinTime(int32_t minTime) { DARABONBA_PTR_SET_VALUE(minTime_, minTime) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline SplitVideoPartsRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SplitVideoPartsRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<int32_t> maxTime_ = nullptr;
    std::shared_ptr<int32_t> minTime_ = nullptr;
    std::shared_ptr<string> template_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
