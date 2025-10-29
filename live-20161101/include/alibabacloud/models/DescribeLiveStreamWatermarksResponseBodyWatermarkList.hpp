// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODYWATERMARKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODYWATERMARKLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamWatermarksResponseBodyWatermarkList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarksResponseBodyWatermarkList& obj) { 
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarksResponseBodyWatermarkList& obj) { 
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    DescribeLiveStreamWatermarksResponseBodyWatermarkList() = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkList(const DescribeLiveStreamWatermarksResponseBodyWatermarkList &) = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkList(DescribeLiveStreamWatermarksResponseBodyWatermarkList &&) = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarksResponseBodyWatermarkList() = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkList& operator=(const DescribeLiveStreamWatermarksResponseBodyWatermarkList &) = default ;
    DescribeLiveStreamWatermarksResponseBodyWatermarkList& operator=(DescribeLiveStreamWatermarksResponseBodyWatermarkList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->watermark_ == nullptr; };
    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark> & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark>) };
    inline vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark> watermark() { DARABONBA_PTR_GET(watermark_, vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark>) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkList& setWatermark(const vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark> & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkList& setWatermark(vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark> && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamWatermarksResponseBodyWatermarkListWatermark>> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
