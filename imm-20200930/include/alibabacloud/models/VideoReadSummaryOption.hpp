// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOREADSUMMARYOPTION_HPP_
#define ALIBABACLOUD_MODELS_VIDEOREADSUMMARYOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoReadSummaryOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoReadSummaryOption& obj) { 
      DARABONBA_PTR_TO_JSON(Summarize, summarize_);
    };
    friend void from_json(const Darabonba::Json& j, VideoReadSummaryOption& obj) { 
      DARABONBA_PTR_FROM_JSON(Summarize, summarize_);
    };
    VideoReadSummaryOption() = default ;
    VideoReadSummaryOption(const VideoReadSummaryOption &) = default ;
    VideoReadSummaryOption(VideoReadSummaryOption &&) = default ;
    VideoReadSummaryOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoReadSummaryOption() = default ;
    VideoReadSummaryOption& operator=(const VideoReadSummaryOption &) = default ;
    VideoReadSummaryOption& operator=(VideoReadSummaryOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summarize_ == nullptr; };
    // summarize Field Functions 
    bool hasSummarize() const { return this->summarize_ != nullptr;};
    void deleteSummarize() { this->summarize_ = nullptr;};
    inline bool getSummarize() const { DARABONBA_PTR_GET_DEFAULT(summarize_, false) };
    inline VideoReadSummaryOption& setSummarize(bool summarize) { DARABONBA_PTR_SET_VALUE(summarize_, summarize) };


  protected:
    shared_ptr<bool> summarize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
