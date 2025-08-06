// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKSCONSOLERESPONSEBODYWATERMARKS_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKSCONSOLERESPONSEBODYWATERMARKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWatermarksConsoleResponseBodyWatermarksWatermark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWatermarksConsoleResponseBodyWatermarks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarksConsoleResponseBodyWatermarks& obj) { 
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarksConsoleResponseBodyWatermarks& obj) { 
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    GetWatermarksConsoleResponseBodyWatermarks() = default ;
    GetWatermarksConsoleResponseBodyWatermarks(const GetWatermarksConsoleResponseBodyWatermarks &) = default ;
    GetWatermarksConsoleResponseBodyWatermarks(GetWatermarksConsoleResponseBodyWatermarks &&) = default ;
    GetWatermarksConsoleResponseBodyWatermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarksConsoleResponseBodyWatermarks() = default ;
    GetWatermarksConsoleResponseBodyWatermarks& operator=(const GetWatermarksConsoleResponseBodyWatermarks &) = default ;
    GetWatermarksConsoleResponseBodyWatermarks& operator=(GetWatermarksConsoleResponseBodyWatermarks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->watermark_ != nullptr; };
    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark> & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark>) };
    inline vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark> watermark() { DARABONBA_PTR_GET(watermark_, vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark>) };
    inline GetWatermarksConsoleResponseBodyWatermarks& setWatermark(const vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark> & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline GetWatermarksConsoleResponseBodyWatermarks& setWatermark(vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark> && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    std::shared_ptr<vector<Models::GetWatermarksConsoleResponseBodyWatermarksWatermark>> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
