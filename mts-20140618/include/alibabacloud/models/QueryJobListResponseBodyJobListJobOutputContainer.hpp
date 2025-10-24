// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTCONTAINER_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTCONTAINER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputContainer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputContainer& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputContainer& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
    };
    QueryJobListResponseBodyJobListJobOutputContainer() = default ;
    QueryJobListResponseBodyJobListJobOutputContainer(const QueryJobListResponseBodyJobListJobOutputContainer &) = default ;
    QueryJobListResponseBodyJobListJobOutputContainer(QueryJobListResponseBodyJobListJobOutputContainer &&) = default ;
    QueryJobListResponseBodyJobListJobOutputContainer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputContainer() = default ;
    QueryJobListResponseBodyJobListJobOutputContainer& operator=(const QueryJobListResponseBodyJobListJobOutputContainer &) = default ;
    QueryJobListResponseBodyJobListJobOutputContainer& operator=(QueryJobListResponseBodyJobListJobOutputContainer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline QueryJobListResponseBodyJobListJobOutputContainer& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


  protected:
    // The container format.
    // 
    // *   Default value: mp4.
    // *   Video formats include FLV, MP4, HLS (M3U8 + TS), and MPEG-DASH (MPD + fMP4).
    // *   Audio formats include MP3, MP4, Ogg, FLAC, and M4A.
    // *   Image formats include GIF and WebP. If the container format is GIF, the video codec must be GIF.
    // *   If the container format is WebP, the video codec must be WebP.
    // *   If the container format is FLV, the video codec cannot be H.265.
    std::shared_ptr<string> format_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
