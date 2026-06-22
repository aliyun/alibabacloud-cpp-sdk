// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOREADKEYWORDOPTION_HPP_
#define ALIBABACLOUD_MODELS_VIDEOREADKEYWORDOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoReadKeywordOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoReadKeywordOption& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Extract, extract_);
    };
    friend void from_json(const Darabonba::Json& j, VideoReadKeywordOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Extract, extract_);
    };
    VideoReadKeywordOption() = default ;
    VideoReadKeywordOption(const VideoReadKeywordOption &) = default ;
    VideoReadKeywordOption(VideoReadKeywordOption &&) = default ;
    VideoReadKeywordOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoReadKeywordOption() = default ;
    VideoReadKeywordOption& operator=(const VideoReadKeywordOption &) = default ;
    VideoReadKeywordOption& operator=(VideoReadKeywordOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->extract_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline VideoReadKeywordOption& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // extract Field Functions 
    bool hasExtract() const { return this->extract_ != nullptr;};
    void deleteExtract() { this->extract_ = nullptr;};
    inline bool getExtract() const { DARABONBA_PTR_GET_DEFAULT(extract_, false) };
    inline VideoReadKeywordOption& setExtract(bool extract) { DARABONBA_PTR_SET_VALUE(extract_, extract) };


  protected:
    // Specifies the maximum number of keywords to return. The service may return fewer keywords than this limit. If omitted, the service returns all extracted keywords.
    shared_ptr<int32_t> count_ {};
    // Specifies whether to extract keywords from the video. Set to `true` to enable keyword extraction. The default is `false`.
    shared_ptr<bool> extract_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
