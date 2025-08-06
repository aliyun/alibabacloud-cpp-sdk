// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKSCONSOLERESPONSEBODYWATERMARKINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKSCONSOLERESPONSEBODYWATERMARKINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWatermarksConsoleResponseBodyWatermarkInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarksConsoleResponseBodyWatermarkInfos& obj) { 
      DARABONBA_PTR_TO_JSON(WatermarkInfo, watermarkInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarksConsoleResponseBodyWatermarkInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(WatermarkInfo, watermarkInfo_);
    };
    GetWatermarksConsoleResponseBodyWatermarkInfos() = default ;
    GetWatermarksConsoleResponseBodyWatermarkInfos(const GetWatermarksConsoleResponseBodyWatermarkInfos &) = default ;
    GetWatermarksConsoleResponseBodyWatermarkInfos(GetWatermarksConsoleResponseBodyWatermarkInfos &&) = default ;
    GetWatermarksConsoleResponseBodyWatermarkInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarksConsoleResponseBodyWatermarkInfos() = default ;
    GetWatermarksConsoleResponseBodyWatermarkInfos& operator=(const GetWatermarksConsoleResponseBodyWatermarkInfos &) = default ;
    GetWatermarksConsoleResponseBodyWatermarkInfos& operator=(GetWatermarksConsoleResponseBodyWatermarkInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->watermarkInfo_ != nullptr; };
    // watermarkInfo Field Functions 
    bool hasWatermarkInfo() const { return this->watermarkInfo_ != nullptr;};
    void deleteWatermarkInfo() { this->watermarkInfo_ = nullptr;};
    inline const vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo> & watermarkInfo() const { DARABONBA_PTR_GET_CONST(watermarkInfo_, vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo>) };
    inline vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo> watermarkInfo() { DARABONBA_PTR_GET(watermarkInfo_, vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo>) };
    inline GetWatermarksConsoleResponseBodyWatermarkInfos& setWatermarkInfo(const vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo> & watermarkInfo) { DARABONBA_PTR_SET_VALUE(watermarkInfo_, watermarkInfo) };
    inline GetWatermarksConsoleResponseBodyWatermarkInfos& setWatermarkInfo(vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo> && watermarkInfo) { DARABONBA_PTR_SET_RVALUE(watermarkInfo_, watermarkInfo) };


  protected:
    std::shared_ptr<vector<Models::GetWatermarksConsoleResponseBodyWatermarkInfosWatermarkInfo>> watermarkInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
