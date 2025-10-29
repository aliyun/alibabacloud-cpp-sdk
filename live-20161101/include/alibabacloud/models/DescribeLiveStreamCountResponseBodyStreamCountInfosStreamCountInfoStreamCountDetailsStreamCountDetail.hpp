// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOSSTREAMCOUNTINFOSTREAMCOUNTDETAILSSTREAMCOUNTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMCOUNTRESPONSEBODYSTREAMCOUNTINFOSSTREAMCOUNTINFOSTREAMCOUNTDETAILSSTREAMCOUNTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(VideoDataRate, videoDataRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(VideoDataRate, videoDataRate_);
    };
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail(const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail(DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail &&) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail() = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& operator=(const DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail &) = default ;
    DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& operator=(DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->format_ == nullptr && return this->videoDataRate_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // videoDataRate Field Functions 
    bool hasVideoDataRate() const { return this->videoDataRate_ != nullptr;};
    void deleteVideoDataRate() { this->videoDataRate_ = nullptr;};
    inline int64_t videoDataRate() const { DARABONBA_PTR_GET_DEFAULT(videoDataRate_, 0L) };
    inline DescribeLiveStreamCountResponseBodyStreamCountInfosStreamCountInfoStreamCountDetailsStreamCountDetail& setVideoDataRate(int64_t videoDataRate) { DARABONBA_PTR_SET_VALUE(videoDataRate_, videoDataRate) };


  protected:
    // The number of online streams.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The video codec. Valid values:
    // 
    // *   **h264**
    // *   **h265**
    std::shared_ptr<string> format_ = nullptr;
    // The video bitrate. This parameter is returned only for transcoded streams.
    std::shared_ptr<int64_t> videoDataRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
