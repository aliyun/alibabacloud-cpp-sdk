// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKSCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKSCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWatermarksConsoleResponseBodyWatermarkInfos.hpp>
#include <alibabacloud/models/GetWatermarksConsoleResponseBodyWatermarks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWatermarksConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarksConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WatermarkInfos, watermarkInfos_);
      DARABONBA_PTR_TO_JSON(Watermarks, watermarks_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarksConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfos, watermarkInfos_);
      DARABONBA_PTR_FROM_JSON(Watermarks, watermarks_);
    };
    GetWatermarksConsoleResponseBody() = default ;
    GetWatermarksConsoleResponseBody(const GetWatermarksConsoleResponseBody &) = default ;
    GetWatermarksConsoleResponseBody(GetWatermarksConsoleResponseBody &&) = default ;
    GetWatermarksConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarksConsoleResponseBody() = default ;
    GetWatermarksConsoleResponseBody& operator=(const GetWatermarksConsoleResponseBody &) = default ;
    GetWatermarksConsoleResponseBody& operator=(GetWatermarksConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->watermarkInfos_ != nullptr && this->watermarks_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWatermarksConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermarkInfos Field Functions 
    bool hasWatermarkInfos() const { return this->watermarkInfos_ != nullptr;};
    void deleteWatermarkInfos() { this->watermarkInfos_ = nullptr;};
    inline const GetWatermarksConsoleResponseBodyWatermarkInfos & watermarkInfos() const { DARABONBA_PTR_GET_CONST(watermarkInfos_, GetWatermarksConsoleResponseBodyWatermarkInfos) };
    inline GetWatermarksConsoleResponseBodyWatermarkInfos watermarkInfos() { DARABONBA_PTR_GET(watermarkInfos_, GetWatermarksConsoleResponseBodyWatermarkInfos) };
    inline GetWatermarksConsoleResponseBody& setWatermarkInfos(const GetWatermarksConsoleResponseBodyWatermarkInfos & watermarkInfos) { DARABONBA_PTR_SET_VALUE(watermarkInfos_, watermarkInfos) };
    inline GetWatermarksConsoleResponseBody& setWatermarkInfos(GetWatermarksConsoleResponseBodyWatermarkInfos && watermarkInfos) { DARABONBA_PTR_SET_RVALUE(watermarkInfos_, watermarkInfos) };


    // watermarks Field Functions 
    bool hasWatermarks() const { return this->watermarks_ != nullptr;};
    void deleteWatermarks() { this->watermarks_ = nullptr;};
    inline const GetWatermarksConsoleResponseBodyWatermarks & watermarks() const { DARABONBA_PTR_GET_CONST(watermarks_, GetWatermarksConsoleResponseBodyWatermarks) };
    inline GetWatermarksConsoleResponseBodyWatermarks watermarks() { DARABONBA_PTR_GET(watermarks_, GetWatermarksConsoleResponseBodyWatermarks) };
    inline GetWatermarksConsoleResponseBody& setWatermarks(const GetWatermarksConsoleResponseBodyWatermarks & watermarks) { DARABONBA_PTR_SET_VALUE(watermarks_, watermarks) };
    inline GetWatermarksConsoleResponseBody& setWatermarks(GetWatermarksConsoleResponseBodyWatermarks && watermarks) { DARABONBA_PTR_SET_RVALUE(watermarks_, watermarks) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetWatermarksConsoleResponseBodyWatermarkInfos> watermarkInfos_ = nullptr;
    std::shared_ptr<GetWatermarksConsoleResponseBodyWatermarks> watermarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
